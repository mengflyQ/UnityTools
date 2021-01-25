﻿/*------------------------------------------------------------------------------
|
| COPYRIGHT (C) 2018 - 2026 All Right Reserved
|
| FILE NAME  : \Assets\CLineActionEditor\ActionEngine\Interface\ILogMgr.cs
| AUTHOR     : CLine
| PURPOSE    : 
|
| SPEC       : 
|
| MODIFICATION HISTORY
| 
| Ver	   Date			   By			   Details
| -----    -----------    -------------   ----------------------
| 1.0	   2018-9-22      CLine           Created
|
+-----------------------------------------------------------------------------*/

namespace CAE.Core
{
    public enum ELogType
    {
        ELT_NONE = 0,
        ELT_DEBUG,
        ELT_WARNING,
        ELT_ERROR,
    }

    public interface ILogMgr
    {
        void Log(ELogType type, string tag, string log);
        void Logf(ELogType type, string tag, string format, params object[] objs);
    }
}
