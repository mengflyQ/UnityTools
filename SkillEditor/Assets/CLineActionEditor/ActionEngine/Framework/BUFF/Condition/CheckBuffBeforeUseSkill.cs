﻿/*------------------------------------------------------------------------------
|
| COPYRIGHT (C) 2018 - 2026 All Right Reserved
|
| FILE NAME  : \Assets\CLineActionEditor\ActionEngine\Framework\BUFF\Condition\CheckBuffBeforeUseSkill.cs
| AUTHOR     : CLine
| PURPOSE    :
|
| SPEC       :
|
| MODIFICATION HISTORY
|
| Ver      Date            By              Details
| -----    -----------    -------------   ----------------------
| 1.0      2020-1-11      CLine           Created
|
+-----------------------------------------------------------------------------*/

namespace CAE.Core
{
    using LitJson;

    public sealed class CheckBuffBeforeUseSkill : BuffCondition
    {
        private CBuff mOwner = null;
        private string mSkill = string.Empty;

        public EBuffConditionType BuffCondType
        {
            get { return EBuffConditionType.ECT_CheckBuffBeforeUseSkill; }
        }

        public void Init(CBuff owner)
        {
            mOwner = owner;

            MessageMgr.Instance.Register("EVT_USESKILL_BEFORE", OnEvent);
        }

        public void Destroy()
        {
            MessageMgr.Instance.Unregister("EVT_USESKILL_BEFORE", OnEvent);

            mOwner = null;
        }

        public bool CheckBuff(Unit unit)
        {
            return !string.IsNullOrEmpty(mSkill);
        }

        public void Reset()
        {
            mSkill = string.Empty;
        }

        private void OnEvent(Message msg)
        {
            Unit obj = (Unit)msg.GetArg("Unit");
            if (obj == mOwner.Mgr.Owner)
            {
                mSkill = (string)msg.GetArg("Skill");

                mOwner.OnEvent();
            }
        }

        public void Deserialize(JsonData jd)
        {

        }

        public JsonWriter Serialize(JsonWriter writer)
        {
            return writer;
        }

        public BuffCondition Clone()
        {
            CheckBuffBeforeUseSkill cb = new CheckBuffBeforeUseSkill();
            return cb;
        }
    }
}