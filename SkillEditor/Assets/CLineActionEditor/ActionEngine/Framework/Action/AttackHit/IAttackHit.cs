﻿/*------------------------------------------------------------------------------
|
| COPYRIGHT (C) 2018 - 2026 All Right Reserved
|
| FILE NAME  : \Assets\CLineActionEditor\ActionEngine\Framework\Action\AttackHit\IAttackHit.cs
| AUTHOR     : CLine
| PURPOSE    : 
|
| SPEC       : 
|
| MODIFICATION HISTORY
| 
| Ver	   Date			   By			   Details
| -----    -----------    -------------   ----------------------
| 1.0	   2019-4-12      CLine           Created
|
+-----------------------------------------------------------------------------*/

namespace CAE.Core
{
    public enum EAttackHitType
    {
        EAHT_None,
        EAHT_Normal,
    }

    public abstract class IAttackHit : XObject
    {
        public bool IsDead { get; set; }
        public abstract void Update(float fTick);
        public abstract void FixedUpdate(float fTick);
    }
}
