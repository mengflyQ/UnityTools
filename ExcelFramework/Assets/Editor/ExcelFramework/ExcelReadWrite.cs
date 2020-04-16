using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using UnityEngine;
using ExcelDataReader;
using UnityEditor;


namespace ExcelFramework
{
    public static class ExcelReadWrite
    {
        
        public static DataSet ReadXlsx(string filePath)
        {
            FileStream       stream = File.Open(filePath, FileMode.Open, FileAccess.Read);
            IExcelDataReader reader = ExcelReaderFactory.CreateReader(stream);
            DataSet result = reader.AsDataSet();
            
            // foreach (DataTable sheet in result.Tables)
            // {
            //     Debug.Log(sheet.TableName);
            //     foreach (DataRow row in sheet.Rows)
            //     {
            //         foreach (DataColumn column in sheet.Columns) 
            //         {
            //             if (row.IsNull(column))
            //             {
            //                 Debug.Log("null");
            //             }
            //             else
            //             {
            //                 Debug.Log(row[column]);
            //             }
            //         }
            //     }
            // }
            reader.Dispose();
            reader.Close();
            stream.Dispose();
            stream.Close();
            return result; 
        }
    }
}


