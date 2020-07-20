using System;
using UnityEngine;

namespace NDS
{
    [Serializable]
    public class NodeLinkData
    {
        public string BaseNodeGuid;
        public string PortName;
        public string TargetNodeGuid;
    }
}