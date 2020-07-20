using System.Collections.Generic;
using System.Linq;
using NDS;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.UIElements;

namespace NDSEditor
{
    public class GraphSaveUtillity
    {
        private DialogueContainer _loadDialogueContainer;
        
        
        private DialogueGraphView _targetGraphView;
        private List<Edge>         _edges => _targetGraphView.edges.ToList();
        private List<DialogueNode> _nodes => _targetGraphView.nodes.ToList().Cast<DialogueNode>().ToList();
        
        public static GraphSaveUtillity GetInstance(DialogueGraphView targetGraphView)
        {
            return new GraphSaveUtillity()
                   {
                       _targetGraphView = targetGraphView
                   };
        }
        
        public void SaveGraph(string fileName)
        {
            //如果不存在edge 则不可以创建实例
            if (!_edges.Any()) return;
            var dialogueContainer = ScriptableObject.CreateInstance<DialogueContainer>();
            var connectedPorts = _edges.Where(x => x.input.node != null).ToArray();
            foreach (var item in connectedPorts)
            {
                var outputNode = (item.output.node as DialogueNode);
                var inputNode  = (item.input.node as DialogueNode);
                dialogueContainer.NodeLinks.Add(new NodeLinkData
                                                {
                                                    BaseNodeGuid   = outputNode.GUID,
                                                    PortName       = item.output.portName,
                                                    TargetNodeGuid = inputNode.GUID
                                                });
            }

            var temp_nodes = _nodes.Where(n => n.EntryPoint).ToList();
            foreach (var item in temp_nodes)
            {
                dialogueContainer.DialogueNodeDatas.Add(new DialogueNodeData()
                                                {
                                                    title = item.title,
                                                    GUID   = item.GUID,
                                                    DialugeText       = item.DialogueText,
                                                    Position = item.GetPosition().position
                                                });
            }
            
            
            
            string path = $"Assets/Resources/{fileName}.asset";
            if (!AssetDatabase.IsValidFolder("Assets/Resources"))
            {
                AssetDatabase.CreateFolder("Assets", "Resources");
            }
            AssetDatabase.CreateAsset(dialogueContainer, path);
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }
        
        public void LoadGraph(string fileName)
        {
            _loadDialogueContainer = Resources.Load<DialogueContainer>(fileName);
            if (_loadDialogueContainer==null)
            {
                EditorUtility.DisplayDialog("File Not Found", "Target dialogue graph file does not exists!", "OK");
                return;
            }

            ClearGraph();
            CreateNodes();
            ConnectNodes();
        }

        private void ClearGraph()
        {
            //第一个 Node
            _nodes.Find(x => x.EntryPoint).GUID = _loadDialogueContainer.NodeLinks[0].BaseNodeGuid;

            foreach (var item in _nodes)
            {
                if (item.EntryPoint) continue;
                _edges.Where(x=>x.input.node==item).ToList().ForEach(e=>_targetGraphView.RemoveElement(e));
                _targetGraphView.RemoveElement(item);
            }
        }
        
        private void CreateNodes()
        {
            foreach (var item in _loadDialogueContainer.DialogueNodeDatas)
            {
                var temp_Node = _targetGraphView.CreateAndAdd(item.title);
                temp_Node.GUID = item.GUID;
                temp_Node.DialogueText = item.DialugeText;
                temp_Node.EntryPoint = true;

                var nodePorts = _loadDialogueContainer.NodeLinks.Where(x => x.BaseNodeGuid == item.GUID).ToList();
                nodePorts.ForEach(x=>_targetGraphView.AddChoicePort(temp_Node,x.PortName));
            }
        }
        
        private void ConnectNodes()
        {
            foreach (var item in _nodes)
            {
                var connections = _loadDialogueContainer.NodeLinks.Where(x => x.BaseNodeGuid == item.GUID).ToList();
                for (int i = 0; i < connections.Count; i++)
                {
                    var targetNode = _nodes.First(x => x.GUID == connections[i].TargetNodeGuid);
                    LinkNodes(item.outputContainer[i].Q<Port>(), (Port) targetNode.inputContainer[0]);
                    targetNode.SetPosition(new
                                               Rect(_loadDialogueContainer.DialogueNodeDatas.First(x => x.GUID == connections[i].TargetNodeGuid).Position,
                                                    _targetGraphView.DefaultNodeSize));
                }
            }
        }

        private void LinkNodes(Port outputPort, Port inputPort)
        {
            var tempEdge = new Edge(){output = outputPort,input = inputPort};
            tempEdge.input.Connect(tempEdge);
            tempEdge.output.Connect(tempEdge);
            _targetGraphView.Add(tempEdge);
        }
    }
}