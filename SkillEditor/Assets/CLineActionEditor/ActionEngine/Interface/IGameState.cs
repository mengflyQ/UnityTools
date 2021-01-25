﻿/*------------------------------------------------------------------------------
|
| COPYRIGHT (C) 2018 - 2026 All Right Reserved
|
| FILE NAME  : \Assets\CLineActionEditor\ActionEngine\Interface\IGameState.cs
| AUTHOR     : CLine
| PURPOSE    : 
|
| SPEC       : 
|
| MODIFICATION HISTORY
| 
| Ver	   Date			   By			   Details
| -----    -----------    -------------   ----------------------
| 1.0	   2018-9-11        CLine           Created
|
+-----------------------------------------------------------------------------*/


namespace CAE.Core
{
    using System.Collections.Generic;

    public interface IGameState
    {
        EGameStateType StateType { get; }
        void Init();
        void Destroy();
        void Enter(List<object> context);
        void Exit();
        void Update(float fTick);
        void FixedUpdate(float fTick);
        void LateUpdate(float fTick);
        void OnMessage(Message msg);
    }
}


