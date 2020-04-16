using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Threading;
using Sirenix.OdinInspector;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;


namespace ExcelFramework
{
    public static class ExcelFiles
    {
        public static string ExcelPath = "/BuildDataConfig/DataConfig/";
        
        //上架的 5 个地区
        private static string China = "China";
        private static string Common = "Common";
        private static string Korea = "Korea";
        private static string TaiWan = "TaiWan";
        private static string Thailand = "Thailand";
        private static string Vietnam = "Vietnam";
        
        public static Dictionary<string, Dictionary<string, XlsxData>> GetAllExcelFileTree()
        {
            Dictionary<string, Dictionary<string, XlsxData> > efTree = new Dictionary<string, Dictionary<string, XlsxData>>();
            efTree[China] = new Dictionary<string, XlsxData>();
            efTree[Common] = new Dictionary<string, XlsxData>();
            efTree[Korea] = new Dictionary<string, XlsxData>();
            efTree[TaiWan] = new Dictionary<string, XlsxData>();
            efTree[Thailand] = new Dictionary<string, XlsxData>();
            efTree[Vietnam] = new Dictionary<string, XlsxData>();
            
            string excelPath = Environment.CurrentDirectory + ExcelPath;
            
            foreach (var key in efTree.Keys)
            {
                Dictionary<string, XlsxData> a = efTree[key];
                GetAllFiles(excelPath + "/" + key +"/",ref a);
            }
            return efTree;
        }

        //获得指定路径下所有子目录名
        public static void GetAllFiles(string path, ref Dictionary<string, XlsxData> dict)
        {
            DirectoryInfo root = new DirectoryInfo(path);
            foreach(DirectoryInfo d in root.GetDirectories())
            {
                foreach(FileInfo f in d.GetFiles())
                {
                    if (f.Name.Contains(".xlsx"))
                    {
                        dict[f.Name] = new XlsxData() {name = f.Name, path = f.FullName};
                    }
                }
                GetAllFiles(d.FullName + "/", ref dict);
            }
        }
        
        
        
        
        
    }
}