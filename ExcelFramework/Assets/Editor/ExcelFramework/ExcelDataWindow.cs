using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Runtime.InteropServices.WindowsRuntime;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using Sirenix.Utilities;
using Sirenix.Utilities.Editor;
using UnityEditor;
using UnityEngine;
using Sirenix.OdinInspector.Demos.RPGEditor;

namespace ExcelFramework
{
    public class ExcelDataWindow : OdinEditorWindow
    {
        [HideInInspector]
        public string excelName;
        [HideInInspector]
        public string excelPath;
        
        [Serializable]
        public class ExcelData
        {
            [ShowInInspector, DoNotDrawAsReference]
            [TableMatrix(RowHeight         = 80, 
                         SquareCells       = false,
                         ResizableColumns  = false,
                         HideColumnIndices = false,
                         HideRowIndices    = false
                        )]
            public string[,] data;
        
            // [ShowInInspector]
            // [DictionaryDrawerSettings(KeyLabel = "竖着看",ValueLabel = "横着看")]
            // public Dictionary<string,Dictionary<string,string>> data = new Dictionary<string,Dictionary<string,string>>();
            private static string DrawColoredEnumElement(Rect rect, string value)
            {
                // Debug.Log(value);
                // UnityEditor.EditorGUI.DrawRect(rect.Padding(1), value ? new Color(0.1f, 0.8f, 0.2f) : new Color(0, 0, 0, 0.5f));
                return value;
            }
        }
        [HideLabel]
        [ShowInInspector]
        public ExcelData excelData;
        
        public static void ShowExcelDataWindow(string name,string path)
        {
            ExcelDataWindow window = GetWindow<ExcelDataWindow>();
            window.titleContent = new GUIContent(name);
            window.position     = GUIHelper.GetEditorWindowRect().AlignCenter(1600, 800);
            window.excelName = name;
            window.excelPath = path;
            window.BuildExcelData();
        }
        
        
        
        private void BuildExcelData()
        {
            DataSet dataSet =  ExcelReadWrite.ReadXlsx(this.excelPath);
            // Dictionary<string , ExcelData> dataTable = new Dictionary<string, ExcelData>();
            foreach (DataTable sheet in dataSet.Tables)
            {
                if (sheet.Columns.Count <=0 || sheet.Rows.Count <=0)
                {
                    continue;
                }
                this.excelData = new ExcelData();
                // dataTable[sheet.TableName] = ec;
                this.excelData.data = new string[sheet.Columns.Count,sheet.Rows.Count];
                foreach (DataRow row in sheet.Rows)
                {
                    int rowIndex = sheet.Rows.IndexOf(row);
                    foreach (DataColumn column in sheet.Columns)
                    {
                        int columnIndex = sheet.Columns.IndexOf(column);
                        this.excelData.data[columnIndex,rowIndex] = row[column].ToString();
                    }
                }
                
                // foreach (DataRow row in sheet.Rows)
                // {
                //     string rowIndex = sheet.Rows.IndexOf(row).ToString();
                //     ed.data.Add(rowIndex, new Dictionary<string,string>());
                //     foreach (DataColumn column in sheet.Columns)
                //     {
                //         string columnIndex = sheet.Columns.IndexOf(column).ToString();
                //         ed.data[rowIndex].Add(columnIndex,row[column].ToString());
                //     }
                // }
            }
            // tree.Add("保存", typeof(ButtonStyle), EditorIcons.Money);

        }
        
        
        
    }
}