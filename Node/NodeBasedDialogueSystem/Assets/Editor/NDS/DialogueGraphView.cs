using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEditor.Experimental.GraphView;
using UnityEngine.UIElements;

namespace NDSEditor
{
    public class DialogueGraphView : GraphView
    {
        public readonly Vector2 DefaultNodeSize = new Vector2(200, 200);

        public NodeSearchWindow NodeSearchWindow;
        
        public DialogueGraphView()
        {
            //设置样式
            styleSheets.Add(EditorGUIUtility.Load("NDS/DialogueGraph.uss") as StyleSheet);
            //可缩放
            SetupZoom(ContentZoomer.DefaultMinScale,ContentZoomer.DefaultMaxScale);
            //添加一个与可视化元素相关联的操作器。与机械手相关的视觉元素
            this.AddManipulator(new ContentDragger());
            this.AddManipulator(new SelectionDragger());
            this.AddManipulator(new RectangleSelector());
            
            var grid = new GridBackground();
            Insert(0,grid);
            grid.StretchToParentSize();
            
            //生成一个 Node 节点
            DialogueNode dn = GenerateEntryPointNode();
            AddElement(dn);
            
            //添加搜索窗口
            AddSearchWindow();
        }

        private void AddSearchWindow()
        {
            NodeSearchWindow = ScriptableObject.CreateInstance<NodeSearchWindow>();
            nodeCreationRequest =
                context => SearchWindow.Open(new SearchWindowContext(context.screenMousePosition), NodeSearchWindow);
        }

        public override List<Port> GetCompatiblePorts(Port startPort, NodeAdapter nodeAdapter)
        {
            var compatiblePorts = new List<Port>();
            ports.ForEach((port) =>
                          {
                              if (startPort == port || startPort.node == port.node) return;
                              compatiblePorts.Add(port);
                                  
                              
                          });
            
            return compatiblePorts;
        }


        /// <summary>
        /// 给一个 Node 添加节点
        /// </summary>
        /// <param name="node"></param>
        /// <param name="portDirection"></param>
        /// <param name="capacity"></param>
        /// <returns></returns>
        private Port GenerateEntryPointPort(DialogueNode node,Direction portDirection,Port.Capacity capacity = Port.Capacity.Single)
        {
            Port port = node.InstantiatePort(Orientation.Horizontal, portDirection, capacity, typeof(float));
            return port;
        }
        
        private DialogueNode GenerateEntryPointNode()
        {
            var node = new DialogueNode()
                       {
                           title = "Start",
                           GUID = GUID.Generate().ToString(),
                           DialogueText = "--[[请输入对话内容]]--",
                           EntryPoint = true
                       };
            
            Port port = GenerateEntryPointPort(node, Direction.Output);
            port.portName = "Output";
            node.outputContainer.Add(port);

            node.capabilities &= ~Capabilities.Movable;
            node.capabilities &= ~Capabilities.Deletable;
            
            node.RefreshExpandedState();
            node.RefreshPorts();
            
            node.SetPosition(new Rect(new Vector2(200,50), DefaultNodeSize));
            return node;
        }

        public DialogueNode CreateAndAdd(string nodeName)
        {
            //生成一个 Node 节点
            DialogueNode dn = CreateDialogueNode(nodeName);
            AddElement(dn);
            return dn;
        }
        
        private DialogueNode CreateDialogueNode(string nodeName)
        {
            var node = new DialogueNode()
                       {
                           title        = nodeName,
                           GUID         = GUID.Generate().ToString(),
                           DialogueText = "--[[请输入对话内容]]--",
                           EntryPoint   = true
                       };
            node.styleSheets.Add(EditorGUIUtility.Load("NDS/Node.uss") as StyleSheet);

            Port inputPort = GenerateEntryPointPort(node, Direction.Input,Port.Capacity.Multi);
            inputPort.portName = "Input";
            node.inputContainer.Add(inputPort);
            
            var button = new Button(()=> { AddChoicePort(node); });
            button.text = "新建输出接口";
            node.titleButtonContainer.Add(button);
            
            var textField = new TextField(){value = node.DialogueText};
            textField.maxLength = 300;
            textField.RegisterValueChangedCallback(e => { node.DialogueText = e.newValue; });
            textField.SetValueWithoutNotify(node.DialogueText);
            node.contentContainer.Add(textField);
            
            node.RefreshExpandedState();
            node.RefreshPorts();
            
            node.SetPosition(new Rect(Vector2.one * 50, DefaultNodeSize));
            return node;
        }

        public void AddChoicePort(DialogueNode node,string portName = "")
        {
            Port outputPort = GenerateEntryPointPort(node, Direction.Output, Port.Capacity.Single);

            // var oldLabel = outputPort.contentContainer.Q<Label>("type");
            // outputPort.contentContainer.Remove(oldLabel);
            
            var outputPortCount = node.outputContainer.childCount;
            outputPort.portName = string.IsNullOrEmpty(portName)? "Output_" + outputPortCount : portName;
            
            
            var  textField = new TextField(){name = outputPortCount.ToString(),value = outputPort.portName};
            textField.RegisterValueChangedCallback(e => outputPort.portName = e.newValue);
            // outputPort.contentContainer.Add(new Label("    "));
            outputPort.contentContainer.Add(textField);
            
            var deleteButton = new Button(()=>RemovePort(node,outputPort)){text = "X"};
            outputPort.contentContainer.Add(deleteButton);

            node.outputContainer.Add(outputPort);
            
            node.RefreshExpandedState();
            node.RefreshPorts();
        }

        private void RemovePort(DialogueNode node, Port outputPort)
        {
            var targetEdge = edges
                            .ToList().Where(x => x.output.portName == outputPort.portName &&
                                                 x.output.node     == outputPort.node);
            if (targetEdge.Any())
            {
                var edge = targetEdge.First();
                edge.input.Disconnect(edge);
                RemoveElement(targetEdge.First());
            }

            node.outputContainer.Remove(outputPort);
            node.RefreshPorts();
            node.RefreshExpandedState();
        }
    }
}