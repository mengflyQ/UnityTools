using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor.Experimental.GraphView;

namespace NDSEditor
{

    public class DialogueNode : Node
    {
        /// <summary>
        /// 唯一标示符
        /// </summary>
        public string GUID = "";
        
        /// <summary>
        /// 对话框文本
        /// </summary>
        public string DialogueText = "";

        /// <summary>
        /// 入口点
        /// </summary>
        public bool EntryPoint = false;
    }
}