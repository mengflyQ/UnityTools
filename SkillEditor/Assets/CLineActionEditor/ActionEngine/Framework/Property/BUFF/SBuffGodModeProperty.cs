﻿/*------------------------------------------------------------------------------
|
| COPYRIGHT (C) 2018 - 2026 All Right Reserved
|
| FILE NAME  : \Assets\CLineActionEditor\ActionEngine\Framework\Property\BUFF\SBuffGodModeProperty.cs
| AUTHOR     : CLine
| PURPOSE    :
|
| SPEC       :
|
| MODIFICATION HISTORY
|
| Ver      Date            By              Details
| -----    -----------    -------------   ----------------------
| 1.0      2020-1-14      CLine           Created
|
+-----------------------------------------------------------------------------*/

namespace CAE.Core
{
    using LitJson;

    public sealed class SBuffGodModeProperty : BuffProperty
    {
        private int mGodTime = 1000;
        
        #region property
        [EditorProperty("无敌时间(精度ms)", EditorPropertyType.EEPT_Int)]
        public int GodTime
        {
            get { return mGodTime; }
            set { mGodTime = value; }
        }
        #endregion property

        public override void Deserialize(JsonData jd)
        {
            base.Deserialize(jd);

            mGodTime = JsonHelper.ReadInt(jd["GodTime"]);
        }

        public override JsonWriter Serialize(JsonWriter writer)
        {
            base.Serialize(writer);

            JsonHelper.WriteProperty(ref writer, "GodTime", mGodTime);

            return writer;
        }
    }
}