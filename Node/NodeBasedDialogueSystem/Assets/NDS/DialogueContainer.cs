using System;
using System.Collections.Generic;
using UnityEngine;

namespace NDS
{
    [Serializable]
    public class DialogueContainer : ScriptableObject
    {
        public List<DialogueNodeData> DialogueNodeDatas = new List<DialogueNodeData>();
        public List<NodeLinkData> NodeLinks = new List<NodeLinkData>();
    }
}