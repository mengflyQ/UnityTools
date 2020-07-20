using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEditor.Experimental.GraphView;
using UnityEditor.UIElements;
using UnityEngine.UI;
using UnityEngine.UIElements;
using Button = UnityEngine.UIElements.Button;


namespace NDSEditor
{
    public class DialogueGraph : EditorWindow
    {
        private DialogueGraphView _graphView;
        private string _fileName = "DialogueGraph";
        

        [MenuItem("Node/剧情故事系统")]
        public static void OpenDialogueWindow()
        {
            var window = GetWindowWithRect<DialogueGraph>(new Rect(400, 400, 1000, 600));
            window.titleContent = new GUIContent("剧情故事系统");
        }

        private void OnEnable()
        {
            _graphView = ConstructGraphView();
            
            //需要在最后面画出来,这样 Node 不会遮挡
            GenerateToolbar();
            var minimap = new MiniMap();
            minimap.SetPosition(new Rect(0,20,200,200));
            _graphView.Add(minimap);
            _graphView.NodeSearchWindow.Configure(this,_graphView);
            
            var bb = new Blackboard(_graphView);
            bb.Add(new BlackboardSection(){title = "公共属性"});
            bb.addItemRequested = _bb => { };
            bb.SetPosition(new Rect( 0,300,200,200));
            _graphView.Add(bb);
        }

        private void OnDisable()
        {
            rootVisualElement.Remove(_graphView);
        }

        
        /// <summary>
        /// 生成工具栏
        /// </summary>
        private void GenerateToolbar()
        {
            var toolbar = new Toolbar();

            var fileNameTextField = new TextField("文件名字:");
            fileNameTextField.SetValueWithoutNotify(_fileName);
            fileNameTextField.MarkDirtyRepaint();
            fileNameTextField.RegisterValueChangedCallback(c_event=>_fileName = c_event.newValue);
            toolbar.Add(fileNameTextField);

            var nodeCreateButton = new Button(() => { _graphView.CreateAndAdd("Say"); });
            nodeCreateButton.text = "新建对话";
            toolbar.Add(nodeCreateButton);
            
            toolbar.Add(new Button(()=>SaveData()){text = "Save Data"});
            toolbar.Add(new Button(()=>LoadData()){text = "Load Data"});
            
            rootVisualElement.Add(toolbar);
        }

        private void LoadData()
        {
            if (string.IsNullOrEmpty(_fileName))
            {
                EditorUtility.DisplayDialog("名字不合法!", "请输入名字", "好的,下次一定");
                return;
            }
            GraphSaveUtillity gsu = GraphSaveUtillity.GetInstance(_graphView);
            gsu.LoadGraph(_fileName);
        }

        private void SaveData()
        {
            if (string.IsNullOrEmpty(_fileName))
            {
                EditorUtility.DisplayDialog("名字不合法!", "请输入名字", "好的,下次一定");
                return;
            }
            GraphSaveUtillity gsu = GraphSaveUtillity.GetInstance(_graphView);
            gsu.SaveGraph(_fileName);
        }

        /// <summary>
        /// 自动生成一个剧情对象系统的视图
        /// </summary>
        /// <returns></returns>
        private DialogueGraphView ConstructGraphView()
        {
            DialogueGraphView _dgView = new DialogueGraphView()
                                       {
                                           name = "Dialogue Graph View"
                                       };
            _dgView.StretchToParentSize();
            rootVisualElement.Add(_dgView);
            return _dgView;
        }
        
        
    }
}


