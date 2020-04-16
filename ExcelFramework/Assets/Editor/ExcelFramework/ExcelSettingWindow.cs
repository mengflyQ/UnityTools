using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Threading;
using UnityEngine;
using ExcelDataReader;
using UnityEditor;
using Sirenix.OdinInspector.Editor;
using Sirenix.OdinInspector;
using Sirenix.Utilities.Editor;
using Sirenix.Utilities;

namespace ExcelFramework
{
    [HideLabel]
    [Serializable]
    public class XlsxData
    {
        [ReadOnly]
        [MultiLineProperty(3), ShowInInspector,LabelText("名字:"),LabelWidth(100)]
        public string name;
        [ReadOnly]
        [MultiLineProperty(3), ShowInInspector,LabelText("路径:"),LabelWidth(100)]
        public string path;
        
        
        [Button(ButtonSizes.Large),LabelText("打开并编辑 Excel"),LabelWidth(100)]
        private void OpenExcelEditor()
        {
            ExcelDataWindow.ShowExcelDataWindow(this.name,this.path);
        }
        
        [Button(ButtonSizes.Large),LabelText("打表"),LabelWidth(100)]
        private void BuildExcel()
        {
            // 这里不开线程的话，就会阻塞住unity的主线程，当然如果你需要阻塞的效果的话可以不开
            Thread newThread = new Thread(new ThreadStart(RunShellThreadStart));
            newThread.Start();
        }
        private void RunShellThreadStart()
        {
#if UNITY_STANDALONE_OSX
            string shellPath = this.path.Replace("xlsx", "sh");
            System.Diagnostics.Process.Start("/System/Applications/Utilities/Terminal.app", shellPath);
#elif UNITY_STANDALONE_WIN
            string batPath = this.path.Replace("xlsx", "bat");
            System.Diagnostics.Process.Start("c://cmd.exe", batPath);
#endif
        }
        
        [Button(ButtonSizes.Large),LabelText("Play"),LabelWidth(100)]
        private void BuildShell()
        {
            EditorApplication.isPlaying = !EditorApplication.isPlaying;
        }
        
    }
    
    public class ExcelSettingWindow : OdinMenuEditorWindow
    {
        [MenuItem("Tools/ExcelSetting")]
        public static void OpenWindow()
        {
            ExcelSettingWindow window = GetWindow<ExcelSettingWindow>();
            window.titleContent = new GUIContent("ExcelSetting");
            window.position = GUIHelper.GetEditorWindowRect().AlignCenter(1000, 800);
            window.DrawMenuSearchBar = true;
            window.MenuWidth = 240;
        }

        protected override OdinMenuTree BuildMenuTree()
        {
            Dictionary<string, Dictionary<string, XlsxData>> efTree = ExcelFiles.GetAllExcelFileTree();

            OdinMenuTree tree = new OdinMenuTree(supportsMultiSelect: true);
            // {"Excel",  null, EditorIcons.SettingsCog}  
            foreach (var area in efTree)
            {
                foreach (var excelFile in area.Value)
                {
                    tree.Add(area.Key + "/" + excelFile.Key, excelFile.Value, ExcelTexture.Icon);
                }
            }

            tree.SortMenuItemsByName();
            return tree;
        }
    }
}
