/********************************************************************
 Date: 2020-08-05
 Name: MD5Util
 author:  zhuzizheng
*********************************************************************/

using System;
using System.Diagnostics;
using System.IO;
using System.Text;
using UnityEditor;
using Debug = UnityEngine.Debug;

namespace GameBasicsLibrary
{
    using System.Security.Cryptography;

    public class MD5Util
    {
        private static StringBuilder m_sBuilder = new StringBuilder();
        private static MD5CryptoServiceProvider m_md5 = new MD5CryptoServiceProvider();

        public static byte[] MD5FromBytes(byte[] data)
        {
            return m_md5.ComputeHash(data);
        }
        
        public static byte[] MD5FromStream(Stream input)
        {
            return m_md5.ComputeHash(input);
        }

        /// <summary>
        /// 32位 MD5
        /// 必须是 UTF8 字符串
        /// </summary>
        /// <param name="input"></param>
        /// <returns></returns>
        static string Md5FromString(string input)
        {
            byte[] data = MD5FromBytes(Encoding.UTF8.GetBytes(input));
            m_sBuilder.Clear();
            for (int i = 0; i < data.Length; i++)
            {
                m_sBuilder.Append(data[i].ToString("x2"));
            }
            return m_sBuilder.ToString();
            // return System.BitConverter.ToString(data).Replace("-", "").ToLower();//这种方式也一样
        }
        
        /// <summary>
        /// 传入一个路径,给这个文件输出唯一的MD5码,主要为了作用于AssetBundle
        /// </summary>
        /// <param name="fliePath"></param>
        /// <returns></returns>
        public static string Md5FromFilePath(string fliePath)
        {
            string filemd5 = null;
            try
            {
                using (var fileStream = File.OpenRead(fliePath))
                {
                    var md5 = MD5.Create();
                    var fileMD5Bytes = md5.ComputeHash(fileStream);//计算指定Stream 对象的哈希值                                     
                    filemd5 = System.BitConverter.ToString(fileMD5Bytes).Replace("-", "").ToLower(); 
                }
            }
            catch (System.Exception ex)
            {
                Debug.LogError(ex);
            }
            return filemd5;
        }

        /// <summary>
        /// 快速比较 MD5 是否正确
        /// </summary>
        /// <param name="input">原始字符串,会生成 hash 值</param>
        /// <param name="hash">对比的 hash 值</param>
        /// <returns></returns>
        public static bool VerifyMd5Hash(string input, string hash)
        {
            string         hashOfInput = Md5FromString(input);
            StringComparer comparer    = StringComparer.OrdinalIgnoreCase;
            if (0 == comparer.Compare(hashOfInput, hash))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}