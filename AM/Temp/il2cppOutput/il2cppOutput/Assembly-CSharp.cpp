#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AM.AssetsManager
struct AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC;
// CHttp
struct CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02;
// CHttpDown
struct CHttpDown_tBD7472F916B0E853A09D07B96FB080E052D2A794;
// CHttpDown/LPOnReceiveDownFile
struct LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008;
// CHttpDownMng
struct CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768;
// CHttpDownMng/MemBlock
struct MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4;
// CTargetPlat
struct CTargetPlat_t8222494C92001E006674994E802967577430801B;
// CTcp
struct CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C;
// CTcp/GetHostAddressInterface
struct GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5;
// CTcp/IPAddrTest
struct IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6;
// CTcp/push_debug_info_backback
struct push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3;
// CTcpAsync
struct CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891;
// CTcpAsync/GetHostAddressInterface
struct GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B;
// CTcpThread
struct CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02;
// CTcpThread/GetHostAddressInterface
struct GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF;
// ConfigManager
struct ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803;
// DownResFile
struct DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81;
// DownResInfo
struct DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9;
// DownResInfo[]
struct DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393;
// GameBasicsLibrary.MonoSingleton`1<GameManager>
struct MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672;
// GameBasicsLibrary.MonoSingleton`1<System.Object>
struct MonoSingleton_1_t54F0311A8B2040F81EB784FAA74F589D11F3EB14;
// GameBasicsLibrary.Singleton`1<GameSceneManager>
struct Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322;
// GameBasicsLibrary.Singleton`1<LuaManager>
struct Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA;
// GameBasicsLibrary.Singleton`1<System.Object>
struct Singleton_1_tB315B2B629DB289C49FDDF56744F60DA477FAF0F;
// GameBasicsLibrary.Singleton`1<UIManager>
struct Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// GameSceneManager
struct GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638;
// LuaManager
struct LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<DownResInfo>
struct List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4;
// System.ComponentModel.ISite
struct ISite_t6804B48BC23ABB5F4141903F878589BCEF6097A2;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t7A89CE9A5D792F694D7A5C33B2716937C39E783A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485;
// System.Diagnostics.Process
struct Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.IO.StreamWriter
struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.IPHostEntry
struct IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Threading.Thread[]
struct ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866;
// System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TestDown
struct TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A;
// TestPath
struct TestPath_t0230E19A69B6D0B74679D1AF05F6A5703C910F0E;
// UIManager
struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral014F674C1D8C8B0D915C0D5545C4B0CF6C73CD60;
IL2CPP_EXTERN_C String_t* _stringLiteral01940AC4E5F1835C40CD2E4DBD7DA4EE82F3B2B9;
IL2CPP_EXTERN_C String_t* _stringLiteral02B576865FEEC6CEA52D30AAB58E274832ACE3E5;
IL2CPP_EXTERN_C String_t* _stringLiteral042CB04D8F222417D9CCD891875BAE8F89BCCF02;
IL2CPP_EXTERN_C String_t* _stringLiteral0522D7BBB014F89C8168745BCD09001E692EDA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral191A0BDD699B2095A7DB8AE105468DF5C3D2E829;
IL2CPP_EXTERN_C String_t* _stringLiteral1928F95C598B9E69462FCB512625CF8E28923044;
IL2CPP_EXTERN_C String_t* _stringLiteral1BF3994417BEF0651ABB2F6484952B55978E96CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1D02F44EC9C13591AB27C01EE25CFD3D1FE7A127;
IL2CPP_EXTERN_C String_t* _stringLiteral20EF8B28E8A7BF1AF0315CB8F0BA2D7322F6BC83;
IL2CPP_EXTERN_C String_t* _stringLiteral26D9C28D789C254F71EA99A3463B99A7CCC2F4FA;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40;
IL2CPP_EXTERN_C String_t* _stringLiteral2B04D92B5349EF5AA92615F16DB05EF0C7D03AAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2E85FC411158C621357566F9C25E786CC9D074DE;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A;
IL2CPP_EXTERN_C String_t* _stringLiteral449E62C9E9DD54FE856E9DCAEA49F57DFF74A2BB;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9E993A0D9A0518E2C981F46FF2341E8A36E47A;
IL2CPP_EXTERN_C String_t* _stringLiteral515E2696A195B8EDED68A60E99C26BBC4EF7E499;
IL2CPP_EXTERN_C String_t* _stringLiteral5648D0BE0FFAC82BAB380D3F381AFCBC84A272DB;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3F3CE6F53D578A40B88B1F1957F50A46D6BBF6;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA83D8699910039B5B5F1D3BD60B1F43B1C39FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0FD90576E08807BDE2CC57BCF9854BBCE05FE3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4247743E3918643103E4ECE8D2C86E6F88DCE1;
IL2CPP_EXTERN_C String_t* _stringLiteral7DC83CCF7162CA21061D7A4BE00CA9BC283B149F;
IL2CPP_EXTERN_C String_t* _stringLiteral7E6CB04F4729F4637F1A1C305ED4412AC8903F11;
IL2CPP_EXTERN_C String_t* _stringLiteral803448E42358F33FDD458287C30CAB00C19FBCCC;
IL2CPP_EXTERN_C String_t* _stringLiteral825C10DB1EAA8BC5ED0D68692D8DD1E935D727A1;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD7E6814FF3632D80DAD50856561E9FB454EAFA;
IL2CPP_EXTERN_C String_t* _stringLiteral8F159345B771A5B71C63927BE00AFF20E4E9603C;
IL2CPP_EXTERN_C String_t* _stringLiteral9365479110C2FB628B5C707224FA869BB787ED0B;
IL2CPP_EXTERN_C String_t* _stringLiteral93B8386B6926411CEBF5B3056078FA271D542DD2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2F7C1F9FA7831AC464817640A992E28BA4671C;
IL2CPP_EXTERN_C String_t* _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E9B1A44C169F6E419B331E4F299098BE5230D5;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27;
IL2CPP_EXTERN_C String_t* _stringLiteralBC4E6ACDB62CE7BB7D434B7A9B3A573819DF4480;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D729290E6C3F534D2DC768CA3FB4A8EFF4903D;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1DBEBAE8E3EB72DE6261AB9A6DA9066B83A9E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD445348C615FEA40D992FFA08CEE8A4EC8373A97;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A137C21303D5CDFAF674A6D77269E2B8A33D34;
IL2CPP_EXTERN_C String_t* _stringLiteralDE879E4A8F1BA0130203327D5A85BB2021805FF2;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF5E0465A303EE6DA35A8F712D61A65161D54AE;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralE711A675F769F292FCCA1DECE1BF67B8E9C12C7B;
IL2CPP_EXTERN_C String_t* _stringLiteralEAEF99A09E561A86004BAEB87A80BB4CFCE8CE67;
IL2CPP_EXTERN_C String_t* _stringLiteralEF24BC4EF7B637D6A5FC07E570AA5ED4A171C373;
IL2CPP_EXTERN_C String_t* _stringLiteralEF9279917D1D5AC4F4813B5BEC728DF52B5D0A9A;
IL2CPP_EXTERN_C String_t* _stringLiteralF0F5194370A76D2649E2C3AEA31566259F0E30DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A05CE08819EACE8AF77AF2778863E6D4C9CA2C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7BDCD20702F616A717CE911D2E3F4C8EECA5C36;
IL2CPP_EXTERN_C const RuntimeMethod* CHttpDownMng_ThreadFunc_mA42DD2F654BA9B97A53F0BF5A22DDAB2C261201D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CHttpDownMng_WriteThreadFunc_mECD2375C0183BBB82F441593FADE42E2CE481FC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CTcpAsync_ReceiveCallback_m3899DAB2116B0A493DC52C03C5ED6A884D5DA6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CTcpAsync_SendCallback_m0285BC59B887D8F0B2C056838E60D3FEE0617AC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CTcpThread_ThreadRun_m0210AD52DC93F4D6E24F842D48C37AABB7504C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddrTest_Connect_m3590ED8ABBEE0FE2A997D8E82AE2C79EA9104FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m88EE0AC33B5581B91A7B0D555427FB7550FB99BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m65462203CA5B4F63C0A93D808049779348361641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDB7F9F0CE606F26C0B4CF5D048495684EBF12BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1__ctor_m562FB57BD234C278B1E64690093D2E2ECB8C672D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_1_get_Instance_mD8EFFB301FFEA4783518E5CFF7B9F9936F4926B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m12B1DBD51FCB3C6BDF50B06ADAE78094E4D6CA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m8219C96D3634C3B19C28A2BD22B966CEC0E08180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mB3D8900B7C5C65BD4E08969088F91AA58AC31513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_AllockBlock_m5A18607348AA9996832413CA9AB964C8C7E06225_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_DownFile_mCDB238F99C1C5941468CF9A5C765E070A62B2EED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_DownPart_mA329C5BDA075CAA3C1AA59CE5371A333EEC4FFDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_DownThread_m531390A9BE58810C08201C02C5F0181187C6D70D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_GetLocalPathNameByUrl_m1FC707EF0F52923001BB57374346C11684EA80AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_IsNeedLimitDown_mB9B544589DB9AA867353A5D13B46A1E094D8C8B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_OnReceive_m8FCF9268E4CB50D65E742EABA8E382ECF58E2623_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_PopDownFileInfo_m4919F072E4AEBED97F5478838DB2DDB5A1CAFBA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_SafeWriteBlock_mC54D619B0D15984DE19458D8B0DFF73781A1090F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_StartDown_mC179EDC64F87CD4DF35C97D6B39E22D23FAB1EC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_ThreadFunc_mA42DD2F654BA9B97A53F0BF5A22DDAB2C261201D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_WriteBlock_m5281CAE20A5586442F9135CEB8445A47D2D40A9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDownMng_WriteThreadFunc_mECD2375C0183BBB82F441593FADE42E2CE481FC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDown_DownFile_m514BBF45D1217B3B595284691EA30AE8F78EC81B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDown_DownFile_mD14928C8A2264FDFA83F54009C6800B30F027F5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttpDown_GetDownFileSize_m4D459E98F92099A3E1B12A6E19CCCF92EF47AF36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_AnlseURL_m3F419BF54450A6895A243B3A8231DB09C1159FB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_AnlseURL_m93F35B9EFA1E607E2FD72C2E3749FB33CAB255A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_AnlseURL_m95F663AE12E23D3BC664CD4CE220E78A621142CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_DelOut_m4357B6AF34F7570E72B2E10B307314481C302773_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_FormatRequestHeader_m1063710C354835F8402EDEBCF71C4FDD4018BA18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_GetInetURL_m348F0E98FC3A6D456D073F9990A95FF7A0D418E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_PrepareDown_m143A6A5898054EB9C1A0CB458F384B86C8E0EF81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_QueryURL_mCC01B45C53A24D75398D1C143388FDCA684AF28D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_ReContentServer302Error_mCF0441691DE2A5508C19B4C538D7A17A792B1D2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp_ReceiveAnswer_m888327B893D3FB6E5D7DC656ACB73959D59F964D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp__ctor_m7D53495A703BA79107A0AEB83F7ABD296D755855_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTargetPlat_GetAssetPathName_m7A1A9B96CB343829B9A435CE20DAF965A9B99373_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTargetPlat_GetStreamAssetsURL_m60231F5FE5FDB811402B1B1382E11DB76C878A5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTargetPlat_GetTargetPlatName_mF2A99D5F49F8C59FF68E69011C630970A274B0E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTargetPlat__cctor_m54214394B713A1446A741B1D7D1ABD8573BB03B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTargetPlat_get_PersistentRootPath_mCF196B9247DAB25518AC46BE2F6DD761EFED9B72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_ConnectToServer_mEFE81F81A1355313D3FF42D5BC0CEB7D1260FF5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_ReceiveCallback_m3899DAB2116B0A493DC52C03C5ED6A884D5DA6B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_SendCallback_m0285BC59B887D8F0B2C056838E60D3FEE0617AC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_SendToServer_m903CF24A48B5AE51CCE6540967153EBC775D7A90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpAsync__ctor_m82346A47B5FBAC4C01561B194D7C57F4E33CA0C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpThread_ConnectToServer_mE8BB3884B6AB344FBCA66F4EDC5D61193C92C31D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpThread_ThreadRun_m0210AD52DC93F4D6E24F842D48C37AABB7504C15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcpThread__ctor_mDEA294AEBB5A544CDC50C793E4C2B1B263371DD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_ConnectToServer_m771317E2D6D1BFC1413953165E736F173A708A5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_ConnectToServer_m98D8FA6C5195FB11383DAA788B1DCC88294B13A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_Connect_m7264180B876C324DCCAE279BDD9F355CA97C5580_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_Connect_mA860AE58E4DD6A21FF6F77E151ED4493A0F27857_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_Connect_mCB4207DAA3A5E32848A24C990EC8F88FD27FC71C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_GetServerIP_mFF7F1D97C77981E606BA05AC45A76EB509992EC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_IsIPV6Net_m553ED9D1A093C3705DC97C6639BFEA6E38DBE0C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_Send_mA6B9FCC2474392E86AB9E7756537641FD04F25BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_StartTestIPV6_m773306E40645875CA878DA09F797A25A45ACB855_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_TestIPV6Logic_mDD00C03E7D09ABB7C14B3BFA97CF9F567F1EF0A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_TryConnect_mA07E60194BFC8D47784A34AE38509E2DEA67ED20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConfigManager__ctor_m4F795BE56AA20590844CC2C3BC472338385DBB4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_mE60F41F3186E80B2BAB293918745366D18508C0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_GameManagerAfterSceneLoad_m5C90A650AD13D440B0B7A154B8402BC31EF3E96A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_GameManagerBeforeSceneLoad_m9B0F60EBEEFE083EE136F035860B63ED124DBC7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_LateUpdate_m2958922DCD36152ACA1F9FAD812C3B25A057600B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_OnDestroy_m3B6C1D5E9829DB64D361B95465B6829D8767AEEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameSceneManager__ctor_m8CE547319047D6610543B8037C2A3F1D27C2D46A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IPAddrTest_Connect_m3590ED8ABBEE0FE2A997D8E82AE2C79EA9104FEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IPAddrTest_TestConnect_m9A161CE299D4D63A15AB86900787BE22E4BDA326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LPOnReceiveDownFile_BeginInvoke_m5DF9CA0DADAA0126F4AFF566A5C9A8AA0D68A8E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LuaManager__ctor_m8B6AC61509FF173DCA93EC222A8A7A880CF64E3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestDown_OnGUI_m0B703072B0602701643E8EEC70AB01DDE443A6E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestDown_StartDown_m26D1C297BE412F552C5374290D0A0344ACEBB68A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestDown_Start_m2BB18EBD5CC08DF5765B65D0D838EEAC79E47544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TestPath_Start_m28A5FE8E65915831D4124A05F49E68184DAE2A3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager__ctor_m40CA6521CEDDF979D58B6050A6D294A32A1CEA69_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// CHttp
struct  CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02  : public RuntimeObject
{
public:
	// System.String CHttp::m_szServerAddr
	String_t* ___m_szServerAddr_1;
	// System.Int32 CHttp::m_nServerPort
	int32_t ___m_nServerPort_2;
	// CTcp CHttp::m_tcp
	CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * ___m_tcp_3;
	// System.Byte[] CHttp::m_PrepareReadBuf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_PrepareReadBuf_4;
	// System.Int32 CHttp::m_nPrepareReadSize
	int32_t ___m_nPrepareReadSize_5;
	// System.Int32 CHttp::m_nReadPos
	int32_t ___m_nReadPos_6;
	// System.Int32 CHttp::m_nLastErrorCode
	int32_t ___m_nLastErrorCode_7;

public:
	inline static int32_t get_offset_of_m_szServerAddr_1() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_szServerAddr_1)); }
	inline String_t* get_m_szServerAddr_1() const { return ___m_szServerAddr_1; }
	inline String_t** get_address_of_m_szServerAddr_1() { return &___m_szServerAddr_1; }
	inline void set_m_szServerAddr_1(String_t* value)
	{
		___m_szServerAddr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_szServerAddr_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_nServerPort_2() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_nServerPort_2)); }
	inline int32_t get_m_nServerPort_2() const { return ___m_nServerPort_2; }
	inline int32_t* get_address_of_m_nServerPort_2() { return &___m_nServerPort_2; }
	inline void set_m_nServerPort_2(int32_t value)
	{
		___m_nServerPort_2 = value;
	}

	inline static int32_t get_offset_of_m_tcp_3() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_tcp_3)); }
	inline CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * get_m_tcp_3() const { return ___m_tcp_3; }
	inline CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C ** get_address_of_m_tcp_3() { return &___m_tcp_3; }
	inline void set_m_tcp_3(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * value)
	{
		___m_tcp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_tcp_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrepareReadBuf_4() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_PrepareReadBuf_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_PrepareReadBuf_4() const { return ___m_PrepareReadBuf_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_PrepareReadBuf_4() { return &___m_PrepareReadBuf_4; }
	inline void set_m_PrepareReadBuf_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_PrepareReadBuf_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrepareReadBuf_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_nPrepareReadSize_5() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_nPrepareReadSize_5)); }
	inline int32_t get_m_nPrepareReadSize_5() const { return ___m_nPrepareReadSize_5; }
	inline int32_t* get_address_of_m_nPrepareReadSize_5() { return &___m_nPrepareReadSize_5; }
	inline void set_m_nPrepareReadSize_5(int32_t value)
	{
		___m_nPrepareReadSize_5 = value;
	}

	inline static int32_t get_offset_of_m_nReadPos_6() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_nReadPos_6)); }
	inline int32_t get_m_nReadPos_6() const { return ___m_nReadPos_6; }
	inline int32_t* get_address_of_m_nReadPos_6() { return &___m_nReadPos_6; }
	inline void set_m_nReadPos_6(int32_t value)
	{
		___m_nReadPos_6 = value;
	}

	inline static int32_t get_offset_of_m_nLastErrorCode_7() { return static_cast<int32_t>(offsetof(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02, ___m_nLastErrorCode_7)); }
	inline int32_t get_m_nLastErrorCode_7() const { return ___m_nLastErrorCode_7; }
	inline int32_t* get_address_of_m_nLastErrorCode_7() { return &___m_nLastErrorCode_7; }
	inline void set_m_nLastErrorCode_7(int32_t value)
	{
		___m_nLastErrorCode_7 = value;
	}
};


// CHttpDown
struct  CHttpDown_tBD7472F916B0E853A09D07B96FB080E052D2A794  : public RuntimeObject
{
public:

public:
};


// CHttpDownMng
struct  CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<DownResInfo> CHttpDownMng::m_DownList
	List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * ___m_DownList_0;
	// System.Int32 CHttpDownMng::m_nNextDownIndex
	int32_t ___m_nNextDownIndex_1;
	// System.Int32 CHttpDownMng::m_nDownCount
	int32_t ___m_nDownCount_2;
	// System.Int32 CHttpDownMng::m_nDownThreadNumb
	int32_t ___m_nDownThreadNumb_3;
	// System.Int32 CHttpDownMng::m_nWriteThreadNumb
	int32_t ___m_nWriteThreadNumb_4;
	// System.Boolean CHttpDownMng::m_bNeedStop
	bool ___m_bNeedStop_5;
	// System.Threading.Thread[] CHttpDownMng::m_runThreads
	ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866* ___m_runThreads_6;
	// System.Threading.Thread CHttpDownMng::m_runWriteThread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___m_runWriteThread_7;
	// System.Int64 CHttpDownMng::m_nDownSize
	int64_t ___m_nDownSize_8;
	// System.Int64 CHttpDownMng::m_nTotalDownSize
	int64_t ___m_nTotalDownSize_9;
	// System.Int64 CHttpDownMng::m_nTotalNeedDownSize
	int64_t ___m_nTotalNeedDownSize_10;
	// System.Int64 CHttpDownMng::m_nLimitDownSize
	int64_t ___m_nLimitDownSize_11;
	// System.Int64 CHttpDownMng::m_nLastTime
	int64_t ___m_nLastTime_12;
	// System.String CHttpDownMng::m_szLocalSavePath
	String_t* ___m_szLocalSavePath_13;
	// CHttpDownMng_MemBlock CHttpDownMng::m_InvalidBlock
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___m_InvalidBlock_14;
	// System.Int32 CHttpDownMng::m_nCurBlockMemSize
	int32_t ___m_nCurBlockMemSize_15;
	// System.Int32 CHttpDownMng::m_nUseBlockMemSize
	int32_t ___m_nUseBlockMemSize_16;
	// CHttpDownMng_MemBlock CHttpDownMng::m_WriteList
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___m_WriteList_17;

public:
	inline static int32_t get_offset_of_m_DownList_0() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_DownList_0)); }
	inline List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * get_m_DownList_0() const { return ___m_DownList_0; }
	inline List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 ** get_address_of_m_DownList_0() { return &___m_DownList_0; }
	inline void set_m_DownList_0(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * value)
	{
		___m_DownList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownList_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_nNextDownIndex_1() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nNextDownIndex_1)); }
	inline int32_t get_m_nNextDownIndex_1() const { return ___m_nNextDownIndex_1; }
	inline int32_t* get_address_of_m_nNextDownIndex_1() { return &___m_nNextDownIndex_1; }
	inline void set_m_nNextDownIndex_1(int32_t value)
	{
		___m_nNextDownIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_nDownCount_2() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nDownCount_2)); }
	inline int32_t get_m_nDownCount_2() const { return ___m_nDownCount_2; }
	inline int32_t* get_address_of_m_nDownCount_2() { return &___m_nDownCount_2; }
	inline void set_m_nDownCount_2(int32_t value)
	{
		___m_nDownCount_2 = value;
	}

	inline static int32_t get_offset_of_m_nDownThreadNumb_3() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nDownThreadNumb_3)); }
	inline int32_t get_m_nDownThreadNumb_3() const { return ___m_nDownThreadNumb_3; }
	inline int32_t* get_address_of_m_nDownThreadNumb_3() { return &___m_nDownThreadNumb_3; }
	inline void set_m_nDownThreadNumb_3(int32_t value)
	{
		___m_nDownThreadNumb_3 = value;
	}

	inline static int32_t get_offset_of_m_nWriteThreadNumb_4() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nWriteThreadNumb_4)); }
	inline int32_t get_m_nWriteThreadNumb_4() const { return ___m_nWriteThreadNumb_4; }
	inline int32_t* get_address_of_m_nWriteThreadNumb_4() { return &___m_nWriteThreadNumb_4; }
	inline void set_m_nWriteThreadNumb_4(int32_t value)
	{
		___m_nWriteThreadNumb_4 = value;
	}

	inline static int32_t get_offset_of_m_bNeedStop_5() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_bNeedStop_5)); }
	inline bool get_m_bNeedStop_5() const { return ___m_bNeedStop_5; }
	inline bool* get_address_of_m_bNeedStop_5() { return &___m_bNeedStop_5; }
	inline void set_m_bNeedStop_5(bool value)
	{
		___m_bNeedStop_5 = value;
	}

	inline static int32_t get_offset_of_m_runThreads_6() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_runThreads_6)); }
	inline ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866* get_m_runThreads_6() const { return ___m_runThreads_6; }
	inline ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866** get_address_of_m_runThreads_6() { return &___m_runThreads_6; }
	inline void set_m_runThreads_6(ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866* value)
	{
		___m_runThreads_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_runThreads_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_runWriteThread_7() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_runWriteThread_7)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_m_runWriteThread_7() const { return ___m_runWriteThread_7; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_m_runWriteThread_7() { return &___m_runWriteThread_7; }
	inline void set_m_runWriteThread_7(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___m_runWriteThread_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_runWriteThread_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_nDownSize_8() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nDownSize_8)); }
	inline int64_t get_m_nDownSize_8() const { return ___m_nDownSize_8; }
	inline int64_t* get_address_of_m_nDownSize_8() { return &___m_nDownSize_8; }
	inline void set_m_nDownSize_8(int64_t value)
	{
		___m_nDownSize_8 = value;
	}

	inline static int32_t get_offset_of_m_nTotalDownSize_9() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nTotalDownSize_9)); }
	inline int64_t get_m_nTotalDownSize_9() const { return ___m_nTotalDownSize_9; }
	inline int64_t* get_address_of_m_nTotalDownSize_9() { return &___m_nTotalDownSize_9; }
	inline void set_m_nTotalDownSize_9(int64_t value)
	{
		___m_nTotalDownSize_9 = value;
	}

	inline static int32_t get_offset_of_m_nTotalNeedDownSize_10() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nTotalNeedDownSize_10)); }
	inline int64_t get_m_nTotalNeedDownSize_10() const { return ___m_nTotalNeedDownSize_10; }
	inline int64_t* get_address_of_m_nTotalNeedDownSize_10() { return &___m_nTotalNeedDownSize_10; }
	inline void set_m_nTotalNeedDownSize_10(int64_t value)
	{
		___m_nTotalNeedDownSize_10 = value;
	}

	inline static int32_t get_offset_of_m_nLimitDownSize_11() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nLimitDownSize_11)); }
	inline int64_t get_m_nLimitDownSize_11() const { return ___m_nLimitDownSize_11; }
	inline int64_t* get_address_of_m_nLimitDownSize_11() { return &___m_nLimitDownSize_11; }
	inline void set_m_nLimitDownSize_11(int64_t value)
	{
		___m_nLimitDownSize_11 = value;
	}

	inline static int32_t get_offset_of_m_nLastTime_12() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nLastTime_12)); }
	inline int64_t get_m_nLastTime_12() const { return ___m_nLastTime_12; }
	inline int64_t* get_address_of_m_nLastTime_12() { return &___m_nLastTime_12; }
	inline void set_m_nLastTime_12(int64_t value)
	{
		___m_nLastTime_12 = value;
	}

	inline static int32_t get_offset_of_m_szLocalSavePath_13() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_szLocalSavePath_13)); }
	inline String_t* get_m_szLocalSavePath_13() const { return ___m_szLocalSavePath_13; }
	inline String_t** get_address_of_m_szLocalSavePath_13() { return &___m_szLocalSavePath_13; }
	inline void set_m_szLocalSavePath_13(String_t* value)
	{
		___m_szLocalSavePath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_szLocalSavePath_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_InvalidBlock_14() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_InvalidBlock_14)); }
	inline MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * get_m_InvalidBlock_14() const { return ___m_InvalidBlock_14; }
	inline MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 ** get_address_of_m_InvalidBlock_14() { return &___m_InvalidBlock_14; }
	inline void set_m_InvalidBlock_14(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * value)
	{
		___m_InvalidBlock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvalidBlock_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_nCurBlockMemSize_15() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nCurBlockMemSize_15)); }
	inline int32_t get_m_nCurBlockMemSize_15() const { return ___m_nCurBlockMemSize_15; }
	inline int32_t* get_address_of_m_nCurBlockMemSize_15() { return &___m_nCurBlockMemSize_15; }
	inline void set_m_nCurBlockMemSize_15(int32_t value)
	{
		___m_nCurBlockMemSize_15 = value;
	}

	inline static int32_t get_offset_of_m_nUseBlockMemSize_16() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_nUseBlockMemSize_16)); }
	inline int32_t get_m_nUseBlockMemSize_16() const { return ___m_nUseBlockMemSize_16; }
	inline int32_t* get_address_of_m_nUseBlockMemSize_16() { return &___m_nUseBlockMemSize_16; }
	inline void set_m_nUseBlockMemSize_16(int32_t value)
	{
		___m_nUseBlockMemSize_16 = value;
	}

	inline static int32_t get_offset_of_m_WriteList_17() { return static_cast<int32_t>(offsetof(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768, ___m_WriteList_17)); }
	inline MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * get_m_WriteList_17() const { return ___m_WriteList_17; }
	inline MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 ** get_address_of_m_WriteList_17() { return &___m_WriteList_17; }
	inline void set_m_WriteList_17(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * value)
	{
		___m_WriteList_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WriteList_17), (void*)value);
	}
};


// CHttpDownMng_MemBlock
struct  MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4  : public RuntimeObject
{
public:
	// CHttpDownMng_MemBlock CHttpDownMng_MemBlock::m_pNext
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___m_pNext_0;
	// System.String CHttpDownMng_MemBlock::url
	String_t* ___url_1;
	// System.Byte[] CHttpDownMng_MemBlock::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_2;
	// System.Int32 CHttpDownMng_MemBlock::nFileOfset
	int32_t ___nFileOfset_3;
	// System.Int32 CHttpDownMng_MemBlock::nDownSize
	int32_t ___nDownSize_4;
	// System.Int32 CHttpDownMng_MemBlock::nFileSize
	int32_t ___nFileSize_5;
	// DownResFile CHttpDownMng_MemBlock::resFile
	DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * ___resFile_6;

public:
	inline static int32_t get_offset_of_m_pNext_0() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___m_pNext_0)); }
	inline MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * get_m_pNext_0() const { return ___m_pNext_0; }
	inline MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 ** get_address_of_m_pNext_0() { return &___m_pNext_0; }
	inline void set_m_pNext_0(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * value)
	{
		___m_pNext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pNext_0), (void*)value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___data_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_nFileOfset_3() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___nFileOfset_3)); }
	inline int32_t get_nFileOfset_3() const { return ___nFileOfset_3; }
	inline int32_t* get_address_of_nFileOfset_3() { return &___nFileOfset_3; }
	inline void set_nFileOfset_3(int32_t value)
	{
		___nFileOfset_3 = value;
	}

	inline static int32_t get_offset_of_nDownSize_4() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___nDownSize_4)); }
	inline int32_t get_nDownSize_4() const { return ___nDownSize_4; }
	inline int32_t* get_address_of_nDownSize_4() { return &___nDownSize_4; }
	inline void set_nDownSize_4(int32_t value)
	{
		___nDownSize_4 = value;
	}

	inline static int32_t get_offset_of_nFileSize_5() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___nFileSize_5)); }
	inline int32_t get_nFileSize_5() const { return ___nFileSize_5; }
	inline int32_t* get_address_of_nFileSize_5() { return &___nFileSize_5; }
	inline void set_nFileSize_5(int32_t value)
	{
		___nFileSize_5 = value;
	}

	inline static int32_t get_offset_of_resFile_6() { return static_cast<int32_t>(offsetof(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4, ___resFile_6)); }
	inline DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * get_resFile_6() const { return ___resFile_6; }
	inline DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 ** get_address_of_resFile_6() { return &___resFile_6; }
	inline void set_resFile_6(DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * value)
	{
		___resFile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resFile_6), (void*)value);
	}
};


// CTargetPlat
struct  CTargetPlat_t8222494C92001E006674994E802967577430801B  : public RuntimeObject
{
public:

public:
};

struct CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields
{
public:
	// System.String CTargetPlat::m_persistent_root_path
	String_t* ___m_persistent_root_path_0;

public:
	inline static int32_t get_offset_of_m_persistent_root_path_0() { return static_cast<int32_t>(offsetof(CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields, ___m_persistent_root_path_0)); }
	inline String_t* get_m_persistent_root_path_0() const { return ___m_persistent_root_path_0; }
	inline String_t** get_address_of_m_persistent_root_path_0() { return &___m_persistent_root_path_0; }
	inline void set_m_persistent_root_path_0(String_t* value)
	{
		___m_persistent_root_path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_persistent_root_path_0), (void*)value);
	}
};


// CTcp
struct  CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket CTcp::m_hSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_hSocket_0;
	// System.Int64 CTcp::m_nRandSeed
	int64_t ___m_nRandSeed_1;

public:
	inline static int32_t get_offset_of_m_hSocket_0() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C, ___m_hSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_hSocket_0() const { return ___m_hSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_hSocket_0() { return &___m_hSocket_0; }
	inline void set_m_hSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_hSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_nRandSeed_1() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C, ___m_nRandSeed_1)); }
	inline int64_t get_m_nRandSeed_1() const { return ___m_nRandSeed_1; }
	inline int64_t* get_address_of_m_nRandSeed_1() { return &___m_nRandSeed_1; }
	inline void set_m_nRandSeed_1(int64_t value)
	{
		___m_nRandSeed_1 = value;
	}
};

struct CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields
{
public:
	// System.Int32 CTcp::s_nIPV6State
	int32_t ___s_nIPV6State_2;
	// System.Boolean CTcp::s_bStartTest
	bool ___s_bStartTest_3;
	// System.Int32 CTcp::s_ExcNum
	int32_t ___s_ExcNum_4;
	// CTcp_GetHostAddressInterface CTcp::s_pGetHostAddressInterface
	GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * ___s_pGetHostAddressInterface_5;
	// System.Int32 CTcp::s_DnsExceptionCount
	int32_t ___s_DnsExceptionCount_6;
	// CTcp_push_debug_info_backback CTcp::s_push_debug_info
	push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * ___s_push_debug_info_7;

public:
	inline static int32_t get_offset_of_s_nIPV6State_2() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields, ___s_nIPV6State_2)); }
	inline int32_t get_s_nIPV6State_2() const { return ___s_nIPV6State_2; }
	inline int32_t* get_address_of_s_nIPV6State_2() { return &___s_nIPV6State_2; }
	inline void set_s_nIPV6State_2(int32_t value)
	{
		___s_nIPV6State_2 = value;
	}

	inline static int32_t get_offset_of_s_bStartTest_3() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields, ___s_bStartTest_3)); }
	inline bool get_s_bStartTest_3() const { return ___s_bStartTest_3; }
	inline bool* get_address_of_s_bStartTest_3() { return &___s_bStartTest_3; }
	inline void set_s_bStartTest_3(bool value)
	{
		___s_bStartTest_3 = value;
	}

	inline static int32_t get_offset_of_s_ExcNum_4() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields, ___s_ExcNum_4)); }
	inline int32_t get_s_ExcNum_4() const { return ___s_ExcNum_4; }
	inline int32_t* get_address_of_s_ExcNum_4() { return &___s_ExcNum_4; }
	inline void set_s_ExcNum_4(int32_t value)
	{
		___s_ExcNum_4 = value;
	}

	inline static int32_t get_offset_of_s_pGetHostAddressInterface_5() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields, ___s_pGetHostAddressInterface_5)); }
	inline GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * get_s_pGetHostAddressInterface_5() const { return ___s_pGetHostAddressInterface_5; }
	inline GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 ** get_address_of_s_pGetHostAddressInterface_5() { return &___s_pGetHostAddressInterface_5; }
	inline void set_s_pGetHostAddressInterface_5(GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * value)
	{
		___s_pGetHostAddressInterface_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_pGetHostAddressInterface_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_DnsExceptionCount_6() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields, ___s_DnsExceptionCount_6)); }
	inline int32_t get_s_DnsExceptionCount_6() const { return ___s_DnsExceptionCount_6; }
	inline int32_t* get_address_of_s_DnsExceptionCount_6() { return &___s_DnsExceptionCount_6; }
	inline void set_s_DnsExceptionCount_6(int32_t value)
	{
		___s_DnsExceptionCount_6 = value;
	}

	inline static int32_t get_offset_of_s_push_debug_info_7() { return static_cast<int32_t>(offsetof(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields, ___s_push_debug_info_7)); }
	inline push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * get_s_push_debug_info_7() const { return ___s_push_debug_info_7; }
	inline push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 ** get_address_of_s_push_debug_info_7() { return &___s_push_debug_info_7; }
	inline void set_s_push_debug_info_7(push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * value)
	{
		___s_push_debug_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_push_debug_info_7), (void*)value);
	}
};


// CTcp_IPAddrTest
struct  IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6  : public RuntimeObject
{
public:
	// System.Net.IPAddress CTcp_IPAddrTest::m_pIPAddr
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_pIPAddr_0;
	// System.Int32 CTcp_IPAddrTest::m_nPort
	int32_t ___m_nPort_1;
	// System.Boolean CTcp_IPAddrTest::m_bIsIPV6
	bool ___m_bIsIPV6_2;

public:
	inline static int32_t get_offset_of_m_pIPAddr_0() { return static_cast<int32_t>(offsetof(IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6, ___m_pIPAddr_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_pIPAddr_0() const { return ___m_pIPAddr_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_pIPAddr_0() { return &___m_pIPAddr_0; }
	inline void set_m_pIPAddr_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_pIPAddr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pIPAddr_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_nPort_1() { return static_cast<int32_t>(offsetof(IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6, ___m_nPort_1)); }
	inline int32_t get_m_nPort_1() const { return ___m_nPort_1; }
	inline int32_t* get_address_of_m_nPort_1() { return &___m_nPort_1; }
	inline void set_m_nPort_1(int32_t value)
	{
		___m_nPort_1 = value;
	}

	inline static int32_t get_offset_of_m_bIsIPV6_2() { return static_cast<int32_t>(offsetof(IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6, ___m_bIsIPV6_2)); }
	inline bool get_m_bIsIPV6_2() const { return ___m_bIsIPV6_2; }
	inline bool* get_address_of_m_bIsIPV6_2() { return &___m_bIsIPV6_2; }
	inline void set_m_bIsIPV6_2(bool value)
	{
		___m_bIsIPV6_2 = value;
	}
};


// CTcpAsync
struct  CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket CTcpAsync::m_hSocket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___m_hSocket_0;
	// System.Int64 CTcpAsync::m_nRandSeed
	int64_t ___m_nRandSeed_1;
	// CTcpAsync_GetHostAddressInterface CTcpAsync::m_pGetHostAddressInterface
	GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * ___m_pGetHostAddressInterface_2;
	// System.Int32 CTcpAsync::m_DnsExceptionCount
	int32_t ___m_DnsExceptionCount_3;
	// System.Boolean CTcpAsync::m_bIsIPV6
	bool ___m_bIsIPV6_4;
	// System.Boolean CTcpAsync::m_bInitIPV6
	bool ___m_bInitIPV6_5;
	// System.String CTcpAsync::m_szConnectAddr
	String_t* ___m_szConnectAddr_6;
	// System.Byte[] CTcpAsync::m_RecvBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_RecvBuffer_7;

public:
	inline static int32_t get_offset_of_m_hSocket_0() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_hSocket_0)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_m_hSocket_0() const { return ___m_hSocket_0; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_m_hSocket_0() { return &___m_hSocket_0; }
	inline void set_m_hSocket_0(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___m_hSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_hSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_nRandSeed_1() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_nRandSeed_1)); }
	inline int64_t get_m_nRandSeed_1() const { return ___m_nRandSeed_1; }
	inline int64_t* get_address_of_m_nRandSeed_1() { return &___m_nRandSeed_1; }
	inline void set_m_nRandSeed_1(int64_t value)
	{
		___m_nRandSeed_1 = value;
	}

	inline static int32_t get_offset_of_m_pGetHostAddressInterface_2() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_pGetHostAddressInterface_2)); }
	inline GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * get_m_pGetHostAddressInterface_2() const { return ___m_pGetHostAddressInterface_2; }
	inline GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B ** get_address_of_m_pGetHostAddressInterface_2() { return &___m_pGetHostAddressInterface_2; }
	inline void set_m_pGetHostAddressInterface_2(GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * value)
	{
		___m_pGetHostAddressInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pGetHostAddressInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsExceptionCount_3() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_DnsExceptionCount_3)); }
	inline int32_t get_m_DnsExceptionCount_3() const { return ___m_DnsExceptionCount_3; }
	inline int32_t* get_address_of_m_DnsExceptionCount_3() { return &___m_DnsExceptionCount_3; }
	inline void set_m_DnsExceptionCount_3(int32_t value)
	{
		___m_DnsExceptionCount_3 = value;
	}

	inline static int32_t get_offset_of_m_bIsIPV6_4() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_bIsIPV6_4)); }
	inline bool get_m_bIsIPV6_4() const { return ___m_bIsIPV6_4; }
	inline bool* get_address_of_m_bIsIPV6_4() { return &___m_bIsIPV6_4; }
	inline void set_m_bIsIPV6_4(bool value)
	{
		___m_bIsIPV6_4 = value;
	}

	inline static int32_t get_offset_of_m_bInitIPV6_5() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_bInitIPV6_5)); }
	inline bool get_m_bInitIPV6_5() const { return ___m_bInitIPV6_5; }
	inline bool* get_address_of_m_bInitIPV6_5() { return &___m_bInitIPV6_5; }
	inline void set_m_bInitIPV6_5(bool value)
	{
		___m_bInitIPV6_5 = value;
	}

	inline static int32_t get_offset_of_m_szConnectAddr_6() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_szConnectAddr_6)); }
	inline String_t* get_m_szConnectAddr_6() const { return ___m_szConnectAddr_6; }
	inline String_t** get_address_of_m_szConnectAddr_6() { return &___m_szConnectAddr_6; }
	inline void set_m_szConnectAddr_6(String_t* value)
	{
		___m_szConnectAddr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_szConnectAddr_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_RecvBuffer_7() { return static_cast<int32_t>(offsetof(CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891, ___m_RecvBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_RecvBuffer_7() const { return ___m_RecvBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_RecvBuffer_7() { return &___m_RecvBuffer_7; }
	inline void set_m_RecvBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_RecvBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RecvBuffer_7), (void*)value);
	}
};


// CTcpThread
struct  CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02  : public RuntimeObject
{
public:
	// CTcp CTcpThread::m_tcp
	CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * ___m_tcp_0;
	// System.Int64 CTcpThread::m_nRandSeed
	int64_t ___m_nRandSeed_1;
	// CTcpThread_GetHostAddressInterface CTcpThread::m_pGetHostAddressInterface
	GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * ___m_pGetHostAddressInterface_2;
	// System.Int32 CTcpThread::m_DnsExceptionCount
	int32_t ___m_DnsExceptionCount_3;
	// System.Boolean CTcpThread::m_bIsIPV6
	bool ___m_bIsIPV6_4;
	// System.Boolean CTcpThread::m_bInitIPV6
	bool ___m_bInitIPV6_5;
	// System.String CTcpThread::m_szConnectAddr
	String_t* ___m_szConnectAddr_6;
	// System.Int32 CTcpThread::m_nConnectPort
	int32_t ___m_nConnectPort_7;
	// System.Byte[] CTcpThread::m_RecvBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_RecvBuffer_8;

public:
	inline static int32_t get_offset_of_m_tcp_0() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_tcp_0)); }
	inline CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * get_m_tcp_0() const { return ___m_tcp_0; }
	inline CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C ** get_address_of_m_tcp_0() { return &___m_tcp_0; }
	inline void set_m_tcp_0(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * value)
	{
		___m_tcp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_tcp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_nRandSeed_1() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_nRandSeed_1)); }
	inline int64_t get_m_nRandSeed_1() const { return ___m_nRandSeed_1; }
	inline int64_t* get_address_of_m_nRandSeed_1() { return &___m_nRandSeed_1; }
	inline void set_m_nRandSeed_1(int64_t value)
	{
		___m_nRandSeed_1 = value;
	}

	inline static int32_t get_offset_of_m_pGetHostAddressInterface_2() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_pGetHostAddressInterface_2)); }
	inline GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * get_m_pGetHostAddressInterface_2() const { return ___m_pGetHostAddressInterface_2; }
	inline GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF ** get_address_of_m_pGetHostAddressInterface_2() { return &___m_pGetHostAddressInterface_2; }
	inline void set_m_pGetHostAddressInterface_2(GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * value)
	{
		___m_pGetHostAddressInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pGetHostAddressInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsExceptionCount_3() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_DnsExceptionCount_3)); }
	inline int32_t get_m_DnsExceptionCount_3() const { return ___m_DnsExceptionCount_3; }
	inline int32_t* get_address_of_m_DnsExceptionCount_3() { return &___m_DnsExceptionCount_3; }
	inline void set_m_DnsExceptionCount_3(int32_t value)
	{
		___m_DnsExceptionCount_3 = value;
	}

	inline static int32_t get_offset_of_m_bIsIPV6_4() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_bIsIPV6_4)); }
	inline bool get_m_bIsIPV6_4() const { return ___m_bIsIPV6_4; }
	inline bool* get_address_of_m_bIsIPV6_4() { return &___m_bIsIPV6_4; }
	inline void set_m_bIsIPV6_4(bool value)
	{
		___m_bIsIPV6_4 = value;
	}

	inline static int32_t get_offset_of_m_bInitIPV6_5() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_bInitIPV6_5)); }
	inline bool get_m_bInitIPV6_5() const { return ___m_bInitIPV6_5; }
	inline bool* get_address_of_m_bInitIPV6_5() { return &___m_bInitIPV6_5; }
	inline void set_m_bInitIPV6_5(bool value)
	{
		___m_bInitIPV6_5 = value;
	}

	inline static int32_t get_offset_of_m_szConnectAddr_6() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_szConnectAddr_6)); }
	inline String_t* get_m_szConnectAddr_6() const { return ___m_szConnectAddr_6; }
	inline String_t** get_address_of_m_szConnectAddr_6() { return &___m_szConnectAddr_6; }
	inline void set_m_szConnectAddr_6(String_t* value)
	{
		___m_szConnectAddr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_szConnectAddr_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_nConnectPort_7() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_nConnectPort_7)); }
	inline int32_t get_m_nConnectPort_7() const { return ___m_nConnectPort_7; }
	inline int32_t* get_address_of_m_nConnectPort_7() { return &___m_nConnectPort_7; }
	inline void set_m_nConnectPort_7(int32_t value)
	{
		___m_nConnectPort_7 = value;
	}

	inline static int32_t get_offset_of_m_RecvBuffer_8() { return static_cast<int32_t>(offsetof(CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02, ___m_RecvBuffer_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_RecvBuffer_8() const { return ___m_RecvBuffer_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_RecvBuffer_8() { return &___m_RecvBuffer_8; }
	inline void set_m_RecvBuffer_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_RecvBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RecvBuffer_8), (void*)value);
	}
};


// DownResFile
struct  DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81  : public RuntimeObject
{
public:
	// System.String DownResFile::url
	String_t* ___url_0;
	// System.Int32 DownResFile::nFileSize
	int32_t ___nFileSize_1;
	// System.IO.FileStream DownResFile::file
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * ___file_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_nFileSize_1() { return static_cast<int32_t>(offsetof(DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81, ___nFileSize_1)); }
	inline int32_t get_nFileSize_1() const { return ___nFileSize_1; }
	inline int32_t* get_address_of_nFileSize_1() { return &___nFileSize_1; }
	inline void set_nFileSize_1(int32_t value)
	{
		___nFileSize_1 = value;
	}

	inline static int32_t get_offset_of_file_2() { return static_cast<int32_t>(offsetof(DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81, ___file_2)); }
	inline FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * get_file_2() const { return ___file_2; }
	inline FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 ** get_address_of_file_2() { return &___file_2; }
	inline void set_file_2(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * value)
	{
		___file_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___file_2), (void*)value);
	}
};


// DownResInfo
struct  DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9  : public RuntimeObject
{
public:
	// System.String DownResInfo::url
	String_t* ___url_0;
	// System.Int32 DownResInfo::nDownSize
	int32_t ___nDownSize_1;
	// System.Int32 DownResInfo::nFileSize
	int32_t ___nFileSize_2;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_nDownSize_1() { return static_cast<int32_t>(offsetof(DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9, ___nDownSize_1)); }
	inline int32_t get_nDownSize_1() const { return ___nDownSize_1; }
	inline int32_t* get_address_of_nDownSize_1() { return &___nDownSize_1; }
	inline void set_nDownSize_1(int32_t value)
	{
		___nDownSize_1 = value;
	}

	inline static int32_t get_offset_of_nFileSize_2() { return static_cast<int32_t>(offsetof(DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9, ___nFileSize_2)); }
	inline int32_t get_nFileSize_2() const { return ___nFileSize_2; }
	inline int32_t* get_address_of_nFileSize_2() { return &___nFileSize_2; }
	inline void set_nFileSize_2(int32_t value)
	{
		___nFileSize_2 = value;
	}
};


// GameBasicsLibrary.Singleton`1<AM.AssetsManager>
struct  Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69  : public RuntimeObject
{
public:

public:
};

struct Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69_StaticFields
{
public:
	// T GameBasicsLibrary.Singleton`1::_instance
	AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69_StaticFields, ____instance_0)); }
	inline AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * get__instance_0() const { return ____instance_0; }
	inline AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// GameBasicsLibrary.Singleton`1<GameSceneManager>
struct  Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322  : public RuntimeObject
{
public:

public:
};

struct Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_StaticFields
{
public:
	// T GameBasicsLibrary.Singleton`1::_instance
	GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_StaticFields, ____instance_0)); }
	inline GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * get__instance_0() const { return ____instance_0; }
	inline GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// GameBasicsLibrary.Singleton`1<LuaManager>
struct  Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA  : public RuntimeObject
{
public:

public:
};

struct Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_StaticFields
{
public:
	// T GameBasicsLibrary.Singleton`1::_instance
	LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_StaticFields, ____instance_0)); }
	inline LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * get__instance_0() const { return ____instance_0; }
	inline LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// GameBasicsLibrary.Singleton`1<UIManager>
struct  Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5  : public RuntimeObject
{
public:

public:
};

struct Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_StaticFields
{
public:
	// T GameBasicsLibrary.Singleton`1::_instance
	UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_StaticFields, ____instance_0)); }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * get__instance_0() const { return ____instance_0; }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<DownResInfo>
struct  List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377, ____items_1)); }
	inline DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393* get__items_1() const { return ____items_1; }
	inline DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377_StaticFields, ____emptyArray_5)); }
	inline DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DownResInfoU5BU5D_tAB0949A103979C380C339A4195AC7C3961F8C393* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.Net.IPHostEntry
struct  IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D  : public RuntimeObject
{
public:
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;

public:
	inline static int32_t get_offset_of_hostName_0() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___hostName_0)); }
	inline String_t* get_hostName_0() const { return ___hostName_0; }
	inline String_t** get_address_of_hostName_0() { return &___hostName_0; }
	inline void set_hostName_0(String_t* value)
	{
		___hostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___aliases_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aliases_1), (void*)value);
	}

	inline static int32_t get_offset_of_addressList_2() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___addressList_2)); }
	inline IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* get_addressList_2() const { return ___addressList_2; }
	inline IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3** get_address_of_addressList_2() { return &___addressList_2; }
	inline void set_addressList_2(IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* value)
	{
		___addressList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressList_2), (void*)value);
	}

	inline static int32_t get_offset_of_isTrustedHost_3() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___isTrustedHost_3)); }
	inline bool get_isTrustedHost_3() const { return ___isTrustedHost_3; }
	inline bool* get_address_of_isTrustedHost_3() { return &___isTrustedHost_3; }
	inline void set_isTrustedHost_3(bool value)
	{
		___isTrustedHost_3 = value;
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// AM.AssetsManager
struct  AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC  : public Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69
{
public:

public:
};


// ConfigManager
struct  ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803  : public Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5
{
public:

public:
};


// GameSceneManager
struct  GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638  : public Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322
{
public:

public:
};


// LuaManager
struct  LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609  : public Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.ComponentModel.Component
struct  Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___events_3)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_2)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UIManager
struct  UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C  : public Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5
{
public:

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// HttpErrorCode
struct  HttpErrorCode_t402020D4900C06E9EA43D90A310F282B240C0190 
{
public:
	// System.Int32 HttpErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpErrorCode_t402020D4900C06E9EA43D90A310F282B240C0190, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PALT_TYPE
struct  PALT_TYPE_tB660113ECBBCD93B2F533557F58448DBBEA0F420 
{
public:
	// System.Int32 PALT_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PALT_TYPE_tB660113ECBBCD93B2F533557F58448DBBEA0F420, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Diagnostics.Process_StreamReadMode
struct  StreamReadMode_t36A3F7301F96A513D4D1C0BFC8A814952F52C3CA 
{
public:
	// System.Int32 System.Diagnostics.Process_StreamReadMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadMode_t36A3F7301F96A513D4D1C0BFC8A814952F52C3CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct  SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct  SocketFlags_t77581B58FF9A1A1D3E3270EDE83E4CAD3947F809 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t77581B58FF9A1A1D3E3270EDE83E4CAD3947F809, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketShutdown
struct  SocketShutdown_tC1C26BD51DCA13F2A5314DAA97701EF9B230D957 
{
public:
	// System.Int32 System.Net.Sockets.SocketShutdown::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketShutdown_tC1C26BD51DCA13F2A5314DAA97701EF9B230D957, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Diagnostics.Process
struct  Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 * ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 * ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F * ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_14;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 * ___startInfo_15;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_16;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_17;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___onExited_18;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_19;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_20;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_21;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_22;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_23;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 * ___registeredWaitHandle_24;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * ___waitHandle_25;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_26;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___standardOutput_27;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * ___standardInput_28;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___standardError_29;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_30;
	// System.Diagnostics.Process_StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_31;
	// System.Diagnostics.Process_StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_32;
	// System.Diagnostics.Process_StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_33;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * ___output_34;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * ___error_35;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_36;

public:
	inline static int32_t get_offset_of_haveProcessId_4() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveProcessId_4)); }
	inline bool get_haveProcessId_4() const { return ___haveProcessId_4; }
	inline bool* get_address_of_haveProcessId_4() { return &___haveProcessId_4; }
	inline void set_haveProcessId_4(bool value)
	{
		___haveProcessId_4 = value;
	}

	inline static int32_t get_offset_of_processId_5() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___processId_5)); }
	inline int32_t get_processId_5() const { return ___processId_5; }
	inline int32_t* get_address_of_processId_5() { return &___processId_5; }
	inline void set_processId_5(int32_t value)
	{
		___processId_5 = value;
	}

	inline static int32_t get_offset_of_haveProcessHandle_6() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveProcessHandle_6)); }
	inline bool get_haveProcessHandle_6() const { return ___haveProcessHandle_6; }
	inline bool* get_address_of_haveProcessHandle_6() { return &___haveProcessHandle_6; }
	inline void set_haveProcessHandle_6(bool value)
	{
		___haveProcessHandle_6 = value;
	}

	inline static int32_t get_offset_of_m_processHandle_7() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___m_processHandle_7)); }
	inline SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 * get_m_processHandle_7() const { return ___m_processHandle_7; }
	inline SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 ** get_address_of_m_processHandle_7() { return &___m_processHandle_7; }
	inline void set_m_processHandle_7(SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 * value)
	{
		___m_processHandle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_processHandle_7), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteMachine_8() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___isRemoteMachine_8)); }
	inline bool get_isRemoteMachine_8() const { return ___isRemoteMachine_8; }
	inline bool* get_address_of_isRemoteMachine_8() { return &___isRemoteMachine_8; }
	inline void set_isRemoteMachine_8(bool value)
	{
		___isRemoteMachine_8 = value;
	}

	inline static int32_t get_offset_of_machineName_9() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___machineName_9)); }
	inline String_t* get_machineName_9() const { return ___machineName_9; }
	inline String_t** get_address_of_machineName_9() { return &___machineName_9; }
	inline void set_machineName_9(String_t* value)
	{
		___machineName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___machineName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_processAccess_10() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___m_processAccess_10)); }
	inline int32_t get_m_processAccess_10() const { return ___m_processAccess_10; }
	inline int32_t* get_address_of_m_processAccess_10() { return &___m_processAccess_10; }
	inline void set_m_processAccess_10(int32_t value)
	{
		___m_processAccess_10 = value;
	}

	inline static int32_t get_offset_of_threads_11() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___threads_11)); }
	inline ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 * get_threads_11() const { return ___threads_11; }
	inline ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 ** get_address_of_threads_11() { return &___threads_11; }
	inline void set_threads_11(ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 * value)
	{
		___threads_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_11), (void*)value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___modules_12)); }
	inline ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F * get_modules_12() const { return ___modules_12; }
	inline ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F ** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F * value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modules_12), (void*)value);
	}

	inline static int32_t get_offset_of_haveWorkingSetLimits_13() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveWorkingSetLimits_13)); }
	inline bool get_haveWorkingSetLimits_13() const { return ___haveWorkingSetLimits_13; }
	inline bool* get_address_of_haveWorkingSetLimits_13() { return &___haveWorkingSetLimits_13; }
	inline void set_haveWorkingSetLimits_13(bool value)
	{
		___haveWorkingSetLimits_13 = value;
	}

	inline static int32_t get_offset_of_havePriorityClass_14() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___havePriorityClass_14)); }
	inline bool get_havePriorityClass_14() const { return ___havePriorityClass_14; }
	inline bool* get_address_of_havePriorityClass_14() { return &___havePriorityClass_14; }
	inline void set_havePriorityClass_14(bool value)
	{
		___havePriorityClass_14 = value;
	}

	inline static int32_t get_offset_of_startInfo_15() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___startInfo_15)); }
	inline ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 * get_startInfo_15() const { return ___startInfo_15; }
	inline ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 ** get_address_of_startInfo_15() { return &___startInfo_15; }
	inline void set_startInfo_15(ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 * value)
	{
		___startInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_watchForExit_16() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___watchForExit_16)); }
	inline bool get_watchForExit_16() const { return ___watchForExit_16; }
	inline bool* get_address_of_watchForExit_16() { return &___watchForExit_16; }
	inline void set_watchForExit_16(bool value)
	{
		___watchForExit_16 = value;
	}

	inline static int32_t get_offset_of_watchingForExit_17() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___watchingForExit_17)); }
	inline bool get_watchingForExit_17() const { return ___watchingForExit_17; }
	inline bool* get_address_of_watchingForExit_17() { return &___watchingForExit_17; }
	inline void set_watchingForExit_17(bool value)
	{
		___watchingForExit_17 = value;
	}

	inline static int32_t get_offset_of_onExited_18() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___onExited_18)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_onExited_18() const { return ___onExited_18; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_onExited_18() { return &___onExited_18; }
	inline void set_onExited_18(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___onExited_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_18), (void*)value);
	}

	inline static int32_t get_offset_of_exited_19() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___exited_19)); }
	inline bool get_exited_19() const { return ___exited_19; }
	inline bool* get_address_of_exited_19() { return &___exited_19; }
	inline void set_exited_19(bool value)
	{
		___exited_19 = value;
	}

	inline static int32_t get_offset_of_exitCode_20() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___exitCode_20)); }
	inline int32_t get_exitCode_20() const { return ___exitCode_20; }
	inline int32_t* get_address_of_exitCode_20() { return &___exitCode_20; }
	inline void set_exitCode_20(int32_t value)
	{
		___exitCode_20 = value;
	}

	inline static int32_t get_offset_of_signaled_21() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___signaled_21)); }
	inline bool get_signaled_21() const { return ___signaled_21; }
	inline bool* get_address_of_signaled_21() { return &___signaled_21; }
	inline void set_signaled_21(bool value)
	{
		___signaled_21 = value;
	}

	inline static int32_t get_offset_of_haveExitTime_22() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveExitTime_22)); }
	inline bool get_haveExitTime_22() const { return ___haveExitTime_22; }
	inline bool* get_address_of_haveExitTime_22() { return &___haveExitTime_22; }
	inline void set_haveExitTime_22(bool value)
	{
		___haveExitTime_22 = value;
	}

	inline static int32_t get_offset_of_raisedOnExited_23() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___raisedOnExited_23)); }
	inline bool get_raisedOnExited_23() const { return ___raisedOnExited_23; }
	inline bool* get_address_of_raisedOnExited_23() { return &___raisedOnExited_23; }
	inline void set_raisedOnExited_23(bool value)
	{
		___raisedOnExited_23 = value;
	}

	inline static int32_t get_offset_of_registeredWaitHandle_24() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___registeredWaitHandle_24)); }
	inline RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 * get_registeredWaitHandle_24() const { return ___registeredWaitHandle_24; }
	inline RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 ** get_address_of_registeredWaitHandle_24() { return &___registeredWaitHandle_24; }
	inline void set_registeredWaitHandle_24(RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 * value)
	{
		___registeredWaitHandle_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredWaitHandle_24), (void*)value);
	}

	inline static int32_t get_offset_of_waitHandle_25() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___waitHandle_25)); }
	inline WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * get_waitHandle_25() const { return ___waitHandle_25; }
	inline WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 ** get_address_of_waitHandle_25() { return &___waitHandle_25; }
	inline void set_waitHandle_25(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * value)
	{
		___waitHandle_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitHandle_25), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizingObject_26() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___synchronizingObject_26)); }
	inline RuntimeObject* get_synchronizingObject_26() const { return ___synchronizingObject_26; }
	inline RuntimeObject** get_address_of_synchronizingObject_26() { return &___synchronizingObject_26; }
	inline void set_synchronizingObject_26(RuntimeObject* value)
	{
		___synchronizingObject_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_26), (void*)value);
	}

	inline static int32_t get_offset_of_standardOutput_27() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___standardOutput_27)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_standardOutput_27() const { return ___standardOutput_27; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_standardOutput_27() { return &___standardOutput_27; }
	inline void set_standardOutput_27(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___standardOutput_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutput_27), (void*)value);
	}

	inline static int32_t get_offset_of_standardInput_28() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___standardInput_28)); }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * get_standardInput_28() const { return ___standardInput_28; }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E ** get_address_of_standardInput_28() { return &___standardInput_28; }
	inline void set_standardInput_28(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * value)
	{
		___standardInput_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardInput_28), (void*)value);
	}

	inline static int32_t get_offset_of_standardError_29() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___standardError_29)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_standardError_29() const { return ___standardError_29; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_standardError_29() { return &___standardError_29; }
	inline void set_standardError_29(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___standardError_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardError_29), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_30() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___disposed_30)); }
	inline bool get_disposed_30() const { return ___disposed_30; }
	inline bool* get_address_of_disposed_30() { return &___disposed_30; }
	inline void set_disposed_30(bool value)
	{
		___disposed_30 = value;
	}

	inline static int32_t get_offset_of_outputStreamReadMode_31() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___outputStreamReadMode_31)); }
	inline int32_t get_outputStreamReadMode_31() const { return ___outputStreamReadMode_31; }
	inline int32_t* get_address_of_outputStreamReadMode_31() { return &___outputStreamReadMode_31; }
	inline void set_outputStreamReadMode_31(int32_t value)
	{
		___outputStreamReadMode_31 = value;
	}

	inline static int32_t get_offset_of_errorStreamReadMode_32() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___errorStreamReadMode_32)); }
	inline int32_t get_errorStreamReadMode_32() const { return ___errorStreamReadMode_32; }
	inline int32_t* get_address_of_errorStreamReadMode_32() { return &___errorStreamReadMode_32; }
	inline void set_errorStreamReadMode_32(int32_t value)
	{
		___errorStreamReadMode_32 = value;
	}

	inline static int32_t get_offset_of_inputStreamReadMode_33() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___inputStreamReadMode_33)); }
	inline int32_t get_inputStreamReadMode_33() const { return ___inputStreamReadMode_33; }
	inline int32_t* get_address_of_inputStreamReadMode_33() { return &___inputStreamReadMode_33; }
	inline void set_inputStreamReadMode_33(int32_t value)
	{
		___inputStreamReadMode_33 = value;
	}

	inline static int32_t get_offset_of_output_34() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___output_34)); }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * get_output_34() const { return ___output_34; }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 ** get_address_of_output_34() { return &___output_34; }
	inline void set_output_34(AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * value)
	{
		___output_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_34), (void*)value);
	}

	inline static int32_t get_offset_of_error_35() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___error_35)); }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * get_error_35() const { return ___error_35; }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 ** get_address_of_error_35() { return &___error_35; }
	inline void set_error_35(AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * value)
	{
		___error_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_35), (void*)value);
	}

	inline static int32_t get_offset_of_process_name_36() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___process_name_36)); }
	inline String_t* get_process_name_36() const { return ___process_name_36; }
	inline String_t** get_address_of_process_name_36() { return &___process_name_36; }
	inline void set_process_name_36(String_t* value)
	{
		___process_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_name_36), (void*)value);
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;

public:
	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_10)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_10() const { return ___safeHandle_10; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_10() { return &___safeHandle_10; }
	inline void set_safeHandle_10(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_10), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_11)); }
	inline bool get_isExposed_11() const { return ___isExposed_11; }
	inline bool* get_address_of_isExposed_11() { return &___isExposed_11; }
	inline void set_isExposed_11(bool value)
	{
		___isExposed_11 = value;
	}

	inline static int32_t get_offset_of_append_startpos_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_12)); }
	inline int64_t get_append_startpos_12() const { return ___append_startpos_12; }
	inline int64_t* get_address_of_append_startpos_12() { return &___append_startpos_12; }
	inline void set_append_startpos_12(int64_t value)
	{
		___append_startpos_12 = value;
	}

	inline static int32_t get_offset_of_access_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_13)); }
	inline int32_t get_access_13() const { return ___access_13; }
	inline int32_t* get_address_of_access_13() { return &___access_13; }
	inline void set_access_13(int32_t value)
	{
		___access_13 = value;
	}

	inline static int32_t get_offset_of_owner_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_14)); }
	inline bool get_owner_14() const { return ___owner_14; }
	inline bool* get_address_of_owner_14() { return &___owner_14; }
	inline void set_owner_14(bool value)
	{
		___owner_14 = value;
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_15)); }
	inline bool get_async_15() const { return ___async_15; }
	inline bool* get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(bool value)
	{
		___async_15 = value;
	}

	inline static int32_t get_offset_of_canseek_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_16)); }
	inline bool get_canseek_16() const { return ___canseek_16; }
	inline bool* get_address_of_canseek_16() { return &___canseek_16; }
	inline void set_canseek_16(bool value)
	{
		___canseek_16 = value;
	}

	inline static int32_t get_offset_of_anonymous_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_17)); }
	inline bool get_anonymous_17() const { return ___anonymous_17; }
	inline bool* get_address_of_anonymous_17() { return &___anonymous_17; }
	inline void set_anonymous_17(bool value)
	{
		___anonymous_17 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_18)); }
	inline bool get_buf_dirty_18() const { return ___buf_dirty_18; }
	inline bool* get_address_of_buf_dirty_18() { return &___buf_dirty_18; }
	inline void set_buf_dirty_18(bool value)
	{
		___buf_dirty_18 = value;
	}

	inline static int32_t get_offset_of_buf_size_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_19)); }
	inline int32_t get_buf_size_19() const { return ___buf_size_19; }
	inline int32_t* get_address_of_buf_size_19() { return &___buf_size_19; }
	inline void set_buf_size_19(int32_t value)
	{
		___buf_size_19 = value;
	}

	inline static int32_t get_offset_of_buf_length_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_20)); }
	inline int32_t get_buf_length_20() const { return ___buf_length_20; }
	inline int32_t* get_address_of_buf_length_20() { return &___buf_length_20; }
	inline void set_buf_length_20(int32_t value)
	{
		___buf_length_20 = value;
	}

	inline static int32_t get_offset_of_buf_offset_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_21)); }
	inline int32_t get_buf_offset_21() const { return ___buf_offset_21; }
	inline int32_t* get_address_of_buf_offset_21() { return &___buf_offset_21; }
	inline void set_buf_offset_21(int32_t value)
	{
		___buf_offset_21 = value;
	}

	inline static int32_t get_offset_of_buf_start_22() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_22)); }
	inline int64_t get_buf_start_22() const { return ___buf_start_22; }
	inline int64_t* get_address_of_buf_start_22() { return &___buf_start_22; }
	inline void set_buf_start_22(int64_t value)
	{
		___buf_start_22 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_7;

public:
	inline static int32_t get_offset_of_buf_recycle_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_6() const { return ___buf_recycle_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_6() { return &___buf_recycle_6; }
	inline void set_buf_recycle_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_6), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_7)); }
	inline RuntimeObject * get_buf_recycle_lock_7() const { return ___buf_recycle_lock_7; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_7() { return &___buf_recycle_lock_7; }
	inline void set_buf_recycle_lock_7(RuntimeObject * value)
	{
		___buf_recycle_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_7), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_13)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_14)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_15)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_16)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_36), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// CHttpDown_LPOnReceiveDownFile
struct  LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008  : public MulticastDelegate_t
{
public:

public:
};


// CTcp_GetHostAddressInterface
struct  GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5  : public MulticastDelegate_t
{
public:

public:
};


// CTcp_push_debug_info_backback
struct  push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3  : public MulticastDelegate_t
{
public:

public:
};


// CTcpAsync_GetHostAddressInterface
struct  GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B  : public MulticastDelegate_t
{
public:

public:
};


// CTcpThread_GetHostAddressInterface
struct  GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// GameBasicsLibrary.MonoSingleton`1<GameManager>
struct  MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672_StaticFields
{
public:
	// System.String GameBasicsLibrary.MonoSingleton`1::_GameManager
	String_t* ____GameManager_4;
	// T GameBasicsLibrary.MonoSingleton`1::_instance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ____instance_5;

public:
	inline static int32_t get_offset_of__GameManager_4() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672_StaticFields, ____GameManager_4)); }
	inline String_t* get__GameManager_4() const { return ____GameManager_4; }
	inline String_t** get_address_of__GameManager_4() { return &____GameManager_4; }
	inline void set__GameManager_4(String_t* value)
	{
		____GameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672_StaticFields, ____instance_5)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get__instance_5() const { return ____instance_5; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_5), (void*)value);
	}
};


// TestDown
struct  TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// CHttpDownMng TestDown::m_downMng
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * ___m_downMng_4;

public:
	inline static int32_t get_offset_of_m_downMng_4() { return static_cast<int32_t>(offsetof(TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A, ___m_downMng_4)); }
	inline CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * get_m_downMng_4() const { return ___m_downMng_4; }
	inline CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 ** get_address_of_m_downMng_4() { return &___m_downMng_4; }
	inline void set_m_downMng_4(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * value)
	{
		___m_downMng_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_downMng_4), (void*)value);
	}
};


// TestPath
struct  TestPath_t0230E19A69B6D0B74679D1AF05F6A5703C910F0E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text TestPath::ShowPath
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___ShowPath_4;

public:
	inline static int32_t get_offset_of_ShowPath_4() { return static_cast<int32_t>(offsetof(TestPath_t0230E19A69B6D0B74679D1AF05F6A5703C910F0E, ___ShowPath_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_ShowPath_4() const { return ___ShowPath_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_ShowPath_4() { return &___ShowPath_4; }
	inline void set_ShowPath_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___ShowPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShowPath_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.Thread[]
struct ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * m_Items[1];

public:
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * m_Items[1];

public:
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void GameBasicsLibrary.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m13869FEC308C421A8BC566EB527C07A0BF73DEFD_gshared (Singleton_1_tB315B2B629DB289C49FDDF56744F60DA477FAF0F * __this, const RuntimeMethod* method);
// !0 GameBasicsLibrary.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_m9F85D52EA0B6E07F47EB98BA3328B2013BEC5D02_gshared (const RuntimeMethod* method);
// !0 GameBasicsLibrary.MonoSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MonoSingleton_1_get_Instance_m02F4EA245B6BD1D51DB4ABE239C817E5010F55CD_gshared (const RuntimeMethod* method);
// System.Void GameBasicsLibrary.MonoSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSingleton_1__ctor_m0B7868E62DA79A61697871CA0C7107FDCF1DAEDE_gshared (MonoSingleton_1_t54F0311A8B2040F81EB784FAA74F589D11F3EB14 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void CTcp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp__ctor_mAB2F4D53543F40F4D7E790F75DEE059A6AA9DD92 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void CTcp::SetRandSeed(System.Int64)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CTcp_SetRandSeed_m478CBB645B464F72473EC700DCCEF7C2F01F6E74_inline (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, int64_t ___nRandSeed0, const RuntimeMethod* method);
// System.Void CTcp::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean CTcp::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method);
// System.Int32 CTcp::SendToServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_SendToServer_m2E4561DFD915AF01CDB0735D2234B4B124A42DC1 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szMsg0, const RuntimeMethod* method);
// System.Int32 CTcp::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___size1, int32_t ___flags2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void CTcp::ConnectToServer(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_ConnectToServer_m98D8FA6C5195FB11383DAA788B1DCC88294B13A0 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szServerAddr0, int32_t ___nPort1, int64_t ___nRandSeed2, const RuntimeMethod* method);
// System.Boolean CHttp::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_IsConnect_m969D1B8ECB6684D22D8DDAFFC8D0CC5485EA3874 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method);
// System.Void CHttp::ParseURL(System.String,System.String&,System.String&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szServerURL0, String_t** ___szServerIP1, String_t** ___szObj2, int32_t* ___nPort3, const RuntimeMethod* method);
// System.Boolean CHttp::QueryFile(System.String&,System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t** ___szAnswer0, String_t* ___szServerAddr1, int32_t ___nServerPort2, String_t* ___szSubPathName3, int32_t ___nFileOffset4, int32_t ___nDownSize5, bool ___bDownAll6, const RuntimeMethod* method);
// System.Void CHttp::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method);
// System.Boolean CHttp::AnlyseFileLengthFromAnswer(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szAnswer0, int32_t* ___nDownSize1, int32_t* ___nFileSize2, const RuntimeMethod* method);
// System.Boolean CHttp::ClientOpen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_ClientOpen_m522EB9083EAAD328AFFE1F81336477167487FF91 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___pcsServerIP0, int32_t ___nServerPort1, const RuntimeMethod* method);
// System.String CHttp::FormatRequestHeader(System.String,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttp_FormatRequestHeader_m1063710C354835F8402EDEBCF71C4FDD4018BA18 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szPathFileURL0, String_t* ___szServerIP1, int32_t ___nFileOffset2, int32_t ___nDownSize3, bool ___bDownAll4, bool ___bKeekAlive5, const RuntimeMethod* method);
// System.Int32 CHttp::SendToServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_SendToServer_mA7346BBBA4219846A328A878B6808C10333D55F9 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szMsg0, const RuntimeMethod* method);
// System.Boolean CHttp::ReceiveAnswer(System.String&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_ReceiveAnswer_m888327B893D3FB6E5D7DC656ACB73959D59F964D (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t** ___szAnswer0, int32_t* ___dwErro1, const RuntimeMethod* method);
// System.Int32 CHttp::GetErroIDFormAnswerMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetErroIDFormAnswerMsg_mF3E346A71EC4713988A1C0E0F9FEF4CB76D6FC06 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szAnswer0, const RuntimeMethod* method);
// System.Boolean CHttp::ReContentServer302Error(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_ReContentServer302Error_mCF0441691DE2A5508C19B4C538D7A17A792B1D2A (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szAnswer0, String_t** ___szOutServerIP1, String_t** ___szOutObjURL2, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String CHttp::GetMiddle(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267 (String_t* ___szText0, String_t* ___szLeft1, String_t* ___szRight2, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 CHttp::GetNumb(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetNumb_m6CEA3818AFF151F403A15989098DC00153B1FDB2 (String_t* ___szText0, int32_t ___nStart1, int32_t ___nEnd2, const RuntimeMethod* method);
// System.Int32 CHttp::GetNumb(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetNumb_m90AA85D5F2E54C48262C2F320CF30683C67037FB (String_t* ___szText0, String_t* ___szLeft1, String_t* ___szRight2, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 CHttp::ReceiveChar(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_ReceiveChar_mF3514823E51C2D97C8E0167B84310FDDF5928843 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chBuf0, int32_t ___nPrepareSize1, const RuntimeMethod* method);
// System.Int32 CHttp::DistillNumb(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_DistillNumb_m6AAB0F23BF0D718A01FF364CE2D0BB872C821D1A (String_t* ___szText0, int32_t ___nStart1, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.Boolean CHttp::AnlseURL(System.String&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlseURL_m95F663AE12E23D3BC664CD4CE220E78A621142CF (String_t** ___szRealURL0, String_t* ___szOldURL1, const RuntimeMethod* method);
// System.Void CHttp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp__ctor_m7D53495A703BA79107A0AEB83F7ABD296D755855 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method);
// System.Boolean CHttp::FindHttpMsgEndFlags(System.Char[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_FindHttpMsgEndFlags_m0E20476D53EEF6906A1CD0D644773DB3B1C05051 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___szMsg0, int32_t ___nLen1, int32_t* ___nStart2, const RuntimeMethod* method);
// System.Boolean CHttp::IsRefURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_IsRefURL_mFF6E556438931C096EA845FC4652E24AC3545189 (String_t* ___szURL0, const RuntimeMethod* method);
// System.Boolean CHttp::GetInetURL(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_GetInetURL_m348F0E98FC3A6D456D073F9990A95FF7A0D418E3 (String_t* ___pcsURL0, String_t** ___szOutURL1, const RuntimeMethod* method);
// System.Boolean CHttp::AnlseURL(System.String&,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlseURL_m3F419BF54450A6895A243B3A8231DB09C1159FB4 (String_t** ___szURL0, String_t** ___szPath1, String_t** ___szFileName2, String_t** ___szExt3, const RuntimeMethod* method);
// System.Void CHttp::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, int64_t ___nRandSeed0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m49CE3FAF4AEF5EE690E5E53A95749F3C4414C47B (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method);
// System.Int32 CHttp::FastReceiveMax(System.Byte[]&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_FastReceiveMax_m4E85F64AAAF47F8905D2959F277E17D072EFFCA7 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___buffer0, int32_t* ___nOffset1, int32_t ___nMaxRecvSize2, const RuntimeMethod* method);
// System.Void CHttpDown/LPOnReceiveDownFile::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LPOnReceiveDownFile_Invoke_m07B1D97BEC175737EFF101CB2701A7D05F18412B (LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * __this, int32_t ___nRecvSize0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<DownResInfo>::get_Count()
inline int32_t List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_inline (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<DownResInfo>::get_Item(System.Int32)
inline DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * List_1_get_Item_mDB7F9F0CE606F26C0B4CF5D048495684EBF12BEE_inline (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * (*) (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m236F11FFFC55CB6AC611B16302E2F5F58C60346B (ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m10768310462BE1A521AB4BB70F483741C993ADFD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m3D27E6E9735ED3B6BF2CD332B8D90E7E8CE21933 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, RuntimeObject * ___parameter0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mFF7FBB8E9DAF2ABC8DD85C48F6BDB91502B7DA44 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void CHttpDownMng::DownThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_DownThread_m531390A9BE58810C08201C02C5F0181187C6D70D (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method);
// System.Void CHttpDownMng::WriteThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WriteThread_m951401BF8F48FE21F8A8D3FE49879BA6C24210EA (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean CHttpDownMng::PopDownFileInfo(DownResInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDownMng_PopDownFileInfo_m4919F072E4AEBED97F5478838DB2DDB5A1CAFBA1 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 ** ___resInfo0, const RuntimeMethod* method);
// System.Void CHttpDownMng::DownFile(CHttp,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_DownFile_mCDB238F99C1C5941468CF9A5C765E070A62B2EED (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * ___http0, String_t* ___url1, int32_t ___nFileSize2, int32_t ___nLastDownSize3, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE (int32_t* ___location0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.Boolean CHttpDownMng::IsNeedLimitDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDownMng_IsNeedLimitDown_mB9B544589DB9AA867353A5D13B46A1E094D8C8B7 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method);
// System.Boolean CHttpDown::GetDownFileSize(System.String,System.Int32&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDown_GetDownFileSize_m4D459E98F92099A3E1B12A6E19CCCF92EF47AF36 (String_t* ___url0, int32_t* ___nOutFileSize1, int64_t ___nRandSeed2, const RuntimeMethod* method);
// System.Void DownResFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownResFile__ctor_m14BA3B2A53FE1C1E64EBEB2B2E48AA1ACBAABFD5 (DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * __this, const RuntimeMethod* method);
// System.Boolean CHttpDownMng::DownPart(CHttp,System.String,System.Int32,System.Int32,System.Int32,DownResFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDownMng_DownPart_mA329C5BDA075CAA3C1AA59CE5371A333EEC4FFDD (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * ___http0, String_t* ___url1, int32_t ___nFileOffset2, int32_t ___nDownSize3, int32_t ___nFileSize4, DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * ___resFile5, const RuntimeMethod* method);
// System.Void CHttpDownMng::NotifyDownEvent(System.String,System.Boolean,DownResFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, String_t* ___url0, bool ___bSuc1, DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * ___resInfo2, const RuntimeMethod* method);
// System.Void CHttpDownMng::LimitSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_LimitSpeed_m52A4A43C598BB2A4AA7D7426C3ABB37309ABB5B3 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method);
// System.Void CHttpDownMng/MemBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemBlock__ctor_m37126B8FF0AD8A9B7BFB3914109D4BF97BCD5952 (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * __this, const RuntimeMethod* method);
// System.Void CHttpDownMng::PushWrite(CHttpDownMng/MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_PushWrite_m3BBEB71B171B388FA70F882F76705DF08DA2819E (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 CHttp::PrepareDown(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_PrepareDown_m143A6A5898054EB9C1A0CB458F384B86C8E0EF81 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___url0, int32_t ___nFileOffset1, int32_t ___nDownSize2, bool ___bDownAll3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// CHttpDownMng/MemBlock CHttpDownMng::AllockBlock(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * CHttpDownMng_AllockBlock_m5A18607348AA9996832413CA9AB964C8C7E06225 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, String_t* ___url0, int32_t ___nFileOffset1, int32_t ___nDownSize2, int32_t ___nFileSize3, const RuntimeMethod* method);
// System.Void CHttpDownMng::OnReceive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_OnReceive_m8FCF9268E4CB50D65E742EABA8E382ECF58E2623 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, int32_t ___nDownSize0, const RuntimeMethod* method);
// System.Void CHttpDownMng::WaitBlock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WaitBlock_m531A584A51EA0DD2DCA14EFC7A26AF5D02C99251 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, int32_t ___nMaxSize0, const RuntimeMethod* method);
// CHttpDownMng/MemBlock CHttpDownMng::Reverse(CHttpDownMng/MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * CHttpDownMng_Reverse_m306AF2DCED74D4B665A0A998CB7B19DFCF617B8A (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method);
// System.Void CHttpDownMng::SafeWriteBlock(CHttpDownMng/MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_SafeWriteBlock_mC54D619B0D15984DE19458D8B0DFF73781A1090F (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method);
// System.Void CHttpDownMng::FreeBlock(CHttpDownMng/MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_FreeBlock_m172A561DCFAA1B8721C97FBD68B82C03771EC7B0 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method);
// System.Void CHttpDownMng::WriteBlock(CHttpDownMng/MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WriteBlock_m5281CAE20A5586442F9135CEB8445A47D2D40A9A (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.String CHttpDownMng::GetLocalPathNameByUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttpDownMng_GetLocalPathNameByUrl_m1FC707EF0F52923001BB57374346C11684EA80AE (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// PALT_TYPE CTargetPlat::GetPlatType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTargetPlat_GetPlatType_m6F5B26603263960D3A89EB0D2B75E1915BCCAA5A (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F (const RuntimeMethod* method);
// System.String CTargetPlat::GetTargetPlatName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CTargetPlat_GetTargetPlatName_mF2A99D5F49F8C59FF68E69011C630970A274B0E2 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84 (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* ___path0, const RuntimeMethod* method);
// System.Void CTcp::TestIPV6Logic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_TestIPV6Logic_mDD00C03E7D09ABB7C14B3BFA97CF9F567F1EF0A1 (String_t* ___szCDNUrl0, const RuntimeMethod* method);
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA (String_t* ___ipString0, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** ___address1, const RuntimeMethod* method);
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline (IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method);
// System.Void CTcp/IPAddrTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddrTest__ctor_m028DB5F18863004C01AF69238822ED3E3733FC87 (IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * __this, const RuntimeMethod* method);
// System.Void CTcp/IPAddrTest::TestConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddrTest_TestConnect_m9A161CE299D4D63A15AB86900787BE22E4BDA326 (IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void CTcp::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Connect_mCB4207DAA3A5E32848A24C990EC8F88FD27FC71C (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szIP0, int32_t ___nPort1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void CTcp::push_debug_info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szError0, const RuntimeMethod* method);
// System.Void CTcp/push_debug_info_backback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void push_debug_info_backback_Invoke_m0950123B1E74B2568918439459A19C5E4F33F390 (push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * __this, String_t* ___szInfo0, const RuntimeMethod* method);
// System.Int64 System.Net.IPAddress::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IPAddress_get_Address_m8B052E70BBFB8DC8034EB8D75EA9BB948859D31B (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method);
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD0AF2F6A282D1158DF3C34EF2E63B73814E7748 (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, int64_t ___newAddress0, const RuntimeMethod* method);
// System.Void CTcp::Connect(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Connect_m7264180B876C324DCCAE279BDD9F355CA97C5580 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___ipa0, int32_t ___nPort1, const RuntimeMethod* method);
// System.Net.IPAddress[] CTcp/GetHostAddressInterface::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_Invoke_mF4A531A9CF4418934005B0274E9BF0514E6EDCB3 (GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * __this, String_t* ___szIP0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* Dns_GetHostAddresses_mBB73A3CFACAF787C2DDB8EF473E87D31940A379D (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Boolean CTcp::IsIPV6Net()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcp_IsIPV6Net_m553ED9D1A093C3705DC97C6639BFEA6E38DBE0C1 (const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_mE3F6A0F6D9A997E44F4F6EA04E7C3EFDAE35EE0A (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m3D3BE0D486BFCB947CAF7C7D83ABD4153040FF00 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, String_t* ___host0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.Void CTcp::TryConnect(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_TryConnect_mA07E60194BFC8D47784A34AE38509E2DEA67ED20 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szIP0, int32_t ___nPort1, bool ___bDns2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m06F14E236617A4BA22146BEC4334E24ED39D8536 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEP0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Shutdown_m196EA3E73DC67F9E14D6A129945D862131D6AABB (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___how0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_m2D677AF5939F622C20316216B4E4E232B07AF931 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___size1, int32_t ___socketFlags2, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_m2FF02253EFA5AC56C2684594FF0DA4E9392FE4B5 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___size1, int32_t ___socketFlags2, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Int32 CTcp::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_Send_mA6B9FCC2474392E86AB9E7756537641FD04F25BC (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf0, int32_t ___size1, int32_t ___flags2, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Net.IPAddress[] CTcpAsync/GetHostAddressInterface::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_Invoke_m40A9266E0BF5EFB40AE8BBD3F3F44E91C7CE9677 (GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * __this, String_t* ___szIP0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginConnect_m7A303BAA762EDA38A30E37F536A31EC2F18D2495 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEP0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___state2, const RuntimeMethod* method);
// System.Int32 CTcp::RandInt(System.Int64&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_RandInt_mC0693F0E4441124DD80A3B6E15CE892A98D94950 (int64_t* ___nRandSeed0, int32_t ___nMin1, int32_t ___nMax2, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginConnect_m040F02102860B693B6A585A43D0E5E1F4E6ADC93 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* ___addresses0, int32_t ___port1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___requestCallback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Void CTcpAsync::TryConnect(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, String_t* ___szIP0, int32_t ___nPort1, bool ___bDns2, const RuntimeMethod* method);
// System.Boolean CTcpAsync::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcpAsync_IsConnect_mA07A76DA3F17AA208AF7624EEDD9539D662A1391 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method);
// System.Void CTcpAsync::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method);
// System.Void CTcpAsync::TrySafeConnect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_TrySafeConnect_m2BA9E1B4F9096D938195A173969BA9DBF2702B5B (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, String_t* ___szIP0, int32_t ___nPort1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_EndConnect_m0CFDCA9629EAF8E764A7EB9D61C9DDA83988209F (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___state5, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndReceive_mF4C73ED2C78731706B7891AB94B7D4EF084476F0 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginSend_m05E491600486AAC8EFAF5F4EB0C24B13210D640E (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___state5, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndSend_m58F48E67A449034B31B52F7EF2F46856FBCE0310 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, RuntimeObject* ___asyncResult0, int32_t* ___errorCode1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void CTcpThread::BeginRecive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_BeginRecive_m0C17A84D49F6FC8A7C3E86AB5BE93F27B170D8EE (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method);
// System.Void CTcpThread::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_Quit_m5E8D8A2D824ED563FD754208E1332DCEAC279840 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method);
// System.Void GameBasicsLibrary.Singleton`1<UIManager>::.ctor()
inline void Singleton_1__ctor_m12B1DBD51FCB3C6BDF50B06ADAE78094E4D6CA5B (Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5 *, const RuntimeMethod*))Singleton_1__ctor_m13869FEC308C421A8BC566EB527C07A0BF73DEFD_gshared)(__this, method);
}
// !0 GameBasicsLibrary.Singleton`1<UIManager>::get_Instance()
inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07 (const RuntimeMethod* method)
{
	return ((  UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m9F85D52EA0B6E07F47EB98BA3328B2013BEC5D02_gshared)(method);
}
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mA946658D43E2FC2C3479BB9322CED4FF4C5D2EA0 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// !0 GameBasicsLibrary.Singleton`1<AM.AssetsManager>::get_Instance()
inline AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364 (const RuntimeMethod* method)
{
	return ((  AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m9F85D52EA0B6E07F47EB98BA3328B2013BEC5D02_gshared)(method);
}
// System.Void AM.AssetsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetsManager_Awake_m0DCBE4C6E82884A8C7020D1E1DBC29F9507CB6C2 (AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * __this, const RuntimeMethod* method);
// !0 GameBasicsLibrary.Singleton`1<LuaManager>::get_Instance()
inline LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99 (const RuntimeMethod* method)
{
	return ((  LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m9F85D52EA0B6E07F47EB98BA3328B2013BEC5D02_gshared)(method);
}
// System.Void LuaManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_Awake_m992F6C2129CB8016DD72259C8E943E963125CEEC (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method);
// !0 GameBasicsLibrary.Singleton`1<GameSceneManager>::get_Instance()
inline GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470 (const RuntimeMethod* method)
{
	return ((  GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m9F85D52EA0B6E07F47EB98BA3328B2013BEC5D02_gshared)(method);
}
// System.Void GameSceneManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_Awake_m02225F99DFD7BFA6B7D9440F5A077EF8590284CC (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method);
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mE176851C74E87A3EBAF5D28B5BFC4D8426D91397 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// System.Void AM.AssetsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetsManager_Start_mD50A1B79952342995642CE5728F55FEBE66DB9CC (AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * __this, const RuntimeMethod* method);
// System.Void LuaManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_Start_mEAD1EB37A79BB563769697C4C39FC35FA1DC4240 (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method);
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_mEA6AD9AEDC70385E271BEDCF20C0F4CBD5AC9E7C (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// System.Void LuaManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_LateUpdate_mE6B13C7AF06DA8ECE09ABBC468B9CD908BE18CB1 (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method);
// System.Void UIManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnDestroy_m843179C95D552A353DE59EB48F621588E7E1D47D (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// System.Void AM.AssetsManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetsManager_OnDestroy_mD5C9385F8C5FC46C4301677BCAAB387DFA3CC0A4 (AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * __this, const RuntimeMethod* method);
// System.Void LuaManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_OnDestroy_mEC5A3D523F2655333F52C713BEBC232DD1D0275F (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method);
// System.Void GameSceneManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_OnDestroy_m88C9E74DDEC1DEF3D5175DCBB7E48CDA3A4CA4C3 (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method);
// System.Void GameManager::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Quit_m3A9859CCBC780AF1B91779615BC1C83106B23390 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// !0 GameBasicsLibrary.MonoSingleton`1<GameManager>::get_Instance()
inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * MonoSingleton_1_get_Instance_mD8EFFB301FFEA4783518E5CFF7B9F9936F4926B6 (const RuntimeMethod* method)
{
	return ((  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * (*) (const RuntimeMethod*))MonoSingleton_1_get_Instance_m02F4EA245B6BD1D51DB4ABE239C817E5010F55CD_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void GameBasicsLibrary.MonoSingleton`1<GameManager>::.ctor()
inline void MonoSingleton_1__ctor_m562FB57BD234C278B1E64690093D2E2ECB8C672D (MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672 * __this, const RuntimeMethod* method)
{
	((  void (*) (MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672 *, const RuntimeMethod*))MonoSingleton_1__ctor_m0B7868E62DA79A61697871CA0C7107FDCF1DAEDE_gshared)(__this, method);
}
// System.Void GameBasicsLibrary.Singleton`1<GameSceneManager>::.ctor()
inline void Singleton_1__ctor_m8219C96D3634C3B19C28A2BD22B966CEC0E08180 (Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322 *, const RuntimeMethod*))Singleton_1__ctor_m13869FEC308C421A8BC566EB527C07A0BF73DEFD_gshared)(__this, method);
}
// System.Void GameBasicsLibrary.Singleton`1<LuaManager>::.ctor()
inline void Singleton_1__ctor_mB3D8900B7C5C65BD4E08969088F91AA58AC31513 (Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA *, const RuntimeMethod*))Singleton_1__ctor_m13869FEC308C421A8BC566EB527C07A0BF73DEFD_gshared)(__this, method);
}
// System.Void CTcp::StartTestIPV6(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_StartTestIPV6_m773306E40645875CA878DA09F797A25A45ACB855 (String_t* ___szCDNUrl0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DownResInfo>::.ctor()
inline void List_1__ctor_m65462203CA5B4F63C0A93D808049779348361641 (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void TestDown::PushDownFile(System.Collections.Generic.List`1<DownResInfo>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00 (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * ___downList0, String_t* ___url1, const RuntimeMethod* method);
// System.Void CHttpDownMng::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng__ctor_m16D4041628ECC49DD1804B5FE50BA09FFD88E677 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method);
// System.String CTargetPlat::get_PersistentRootPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CTargetPlat_get_PersistentRootPath_mCF196B9247DAB25518AC46BE2F6DD761EFED9B72 (const RuntimeMethod* method);
// System.Void CHttpDownMng::StartDown(System.Collections.Generic.List`1<DownResInfo>,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_StartDown_mC179EDC64F87CD4DF35C97D6B39E22D23FAB1EC5 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * ___downList0, int32_t ___nDownThreadNumb1, int32_t ___nLimitDownSize2, String_t* ___szLocalSavePath3, const RuntimeMethod* method);
// System.Void DownResInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownResInfo__ctor_mFF473532285A11F7988FFCCE7DC566AC74BB9974 (DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DownResInfo>::Add(!0)
inline void List_1_Add_m88EE0AC33B5581B91A7B0D555427FB7550FB99BC (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * __this, DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 *, DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m0F0D437C533454A4BF0096E0DC55EEB66366E08D (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void TestDown::StartDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown_StartDown_m26D1C297BE412F552C5374290D0A0344ACEBB68A (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1 * Process_Start_m8D896E2780025C6DDB4CDB22C0A29E9A813D4781 (String_t* ___fileName0, String_t* ___arguments1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m33D721D71C0687F0013C8953FDB0807B7B3F2A01 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C (const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CHttp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp__ctor_m7D53495A703BA79107A0AEB83F7ABD296D755855 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp__ctor_m7D53495A703BA79107A0AEB83F7ABD296D755855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CTcp m_tcp = new CTcp();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C *)il2cpp_codegen_object_new(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		CTcp__ctor_mAB2F4D53543F40F4D7E790F75DEE059A6AA9DD92(L_0, /*hidden argument*/NULL);
		__this->set_m_tcp_3(L_0);
		// byte[] m_PrepareReadBuf = new byte[HTTP_CACHE_SIZE];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)204800));
		__this->set_m_PrepareReadBuf_4(L_1);
		// public CHttp()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_szServerAddr = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_szServerAddr_1(L_2);
		// m_nServerPort = 80;
		__this->set_m_nServerPort_2(((int32_t)80));
		// }
		return;
	}
}
// System.Void CHttp::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, int64_t ___nRandSeed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CTcp m_tcp = new CTcp();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C *)il2cpp_codegen_object_new(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		CTcp__ctor_mAB2F4D53543F40F4D7E790F75DEE059A6AA9DD92(L_0, /*hidden argument*/NULL);
		__this->set_m_tcp_3(L_0);
		// byte[] m_PrepareReadBuf = new byte[HTTP_CACHE_SIZE];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)204800));
		__this->set_m_PrepareReadBuf_4(L_1);
		// public CHttp(long nRandSeed)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_tcp.SetRandSeed(nRandSeed);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_2 = __this->get_m_tcp_3();
		int64_t L_3 = ___nRandSeed0;
		NullCheck(L_2);
		CTcp_SetRandSeed_m478CBB645B464F72473EC700DCCEF7C2F01F6E74_inline(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CHttp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp_Finalize_mB482107C447A18D59AFD6B562927E13BC0D08163 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// m_tcp.Close();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_3();
		NullCheck(L_0);
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(L_0, /*hidden argument*/NULL);
		// m_tcp = null;
		__this->set_m_tcp_3((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C *)NULL);
		// m_PrepareReadBuf = null;
		__this->set_m_PrepareReadBuf_4((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CHttp::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method)
{
	{
		// m_tcp.Close();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_3();
		NullCheck(L_0);
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(L_0, /*hidden argument*/NULL);
		// m_nPrepareReadSize = 0;
		__this->set_m_nPrepareReadSize_5(0);
		// m_nReadPos = 0;
		__this->set_m_nReadPos_6(0);
		// }
		return;
	}
}
// System.Boolean CHttp::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_IsConnect_m969D1B8ECB6684D22D8DDAFFC8D0CC5485EA3874 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method)
{
	{
		// return m_tcp.IsConnect();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_3();
		NullCheck(L_0);
		bool L_1 = CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CHttp::IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_IsOpen_m287C52282036CC21438F302F0E17B6BCB32F4F3B (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method)
{
	{
		// return m_tcp.IsConnect();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_3();
		NullCheck(L_0);
		bool L_1 = CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 CHttp::GetLastHttpErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetLastHttpErrorCode_m94BC5CF287A8948A5205F05999D59EECCDE74C16 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, const RuntimeMethod* method)
{
	{
		// return m_nLastErrorCode;
		int32_t L_0 = __this->get_m_nLastErrorCode_7();
		return L_0;
	}
}
// System.Int32 CHttp::SendToServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_SendToServer_mA7346BBBA4219846A328A878B6808C10333D55F9 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szMsg0, const RuntimeMethod* method)
{
	{
		// return m_tcp.SendToServer(szMsg);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_3();
		String_t* L_1 = ___szMsg0;
		NullCheck(L_0);
		int32_t L_2 = CTcp_SendToServer_m2E4561DFD915AF01CDB0735D2234B4B124A42DC1(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 CHttp::ReceiveChar(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_ReceiveChar_mF3514823E51C2D97C8E0167B84310FDDF5928843 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___chBuf0, int32_t ___nPrepareSize1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (m_nReadPos < m_nPrepareReadSize )
		int32_t L_0 = __this->get_m_nReadPos_6();
		int32_t L_1 = __this->get_m_nPrepareReadSize_5();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		// chBuf[0] = m_PrepareReadBuf[m_nReadPos];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___chBuf0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_m_PrepareReadBuf_4();
		int32_t L_4 = __this->get_m_nReadPos_6();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_6);
		// ++m_nReadPos;
		int32_t L_7 = __this->get_m_nReadPos_6();
		__this->set_m_nReadPos_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// return 1;
		return 1;
	}

IL_002e:
	{
		// if (nPrepareSize <= 0)
		int32_t L_8 = ___nPrepareSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// nPrepareSize = HTTP_CACHE_SIZE;
		___nPrepareSize1 = ((int32_t)204800);
		goto IL_004a;
	}

IL_003b:
	{
		// else if (nPrepareSize > HTTP_CACHE_SIZE)
		int32_t L_9 = ___nPrepareSize1;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)204800))))
		{
			goto IL_004a;
		}
	}
	{
		// nPrepareSize = HTTP_CACHE_SIZE;
		___nPrepareSize1 = ((int32_t)204800);
	}

IL_004a:
	{
		// int nRecLen = m_tcp.Receive(m_PrepareReadBuf, nPrepareSize);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_10 = __this->get_m_tcp_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = __this->get_m_PrepareReadBuf_4();
		int32_t L_12 = ___nPrepareSize1;
		NullCheck(L_10);
		int32_t L_13 = CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E(L_10, L_11, L_12, 0, /*hidden argument*/NULL);
		V_0 = L_13;
		// if (nRecLen <= 0)
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		// return nRecLen;
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0064:
	{
		// m_nPrepareReadSize = nRecLen;
		int32_t L_16 = V_0;
		__this->set_m_nPrepareReadSize_5(L_16);
		// m_nReadPos = 1;
		__this->set_m_nReadPos_6(1);
		// chBuf[0] = m_PrepareReadBuf[0];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___chBuf0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = __this->get_m_PrepareReadBuf_4();
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_20);
		// return 1;
		return 1;
	}
}
// System.Int32 CHttp::FastReceiveMax(System.Byte[]&,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_FastReceiveMax_m4E85F64AAAF47F8905D2959F277E17D072EFFCA7 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___buffer0, int32_t* ___nOffset1, int32_t ___nMaxRecvSize2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B7_0 = NULL;
	CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * G_B7_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B6_0 = NULL;
	CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * G_B6_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B8_0 = NULL;
	CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * G_B8_1 = NULL;
	int32_t G_B9_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B9_1 = NULL;
	CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * G_B9_2 = NULL;
	{
		// if (m_nReadPos < m_nPrepareReadSize)
		int32_t L_0 = __this->get_m_nReadPos_6();
		int32_t L_1 = __this->get_m_nPrepareReadSize_5();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0046;
		}
	}
	{
		// buffer  = m_PrepareReadBuf;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_2 = ___buffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_m_PrepareReadBuf_4();
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		// nOffset = m_nReadPos;
		int32_t* L_4 = ___nOffset1;
		int32_t L_5 = __this->get_m_nReadPos_6();
		*((int32_t*)L_4) = (int32_t)L_5;
		// int nReadSize = m_nPrepareReadSize - m_nReadPos;
		int32_t L_6 = __this->get_m_nPrepareReadSize_5();
		int32_t L_7 = __this->get_m_nReadPos_6();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		// if (nMaxRecvSize > 0 && nReadSize > nMaxRecvSize)
		int32_t L_8 = ___nMaxRecvSize2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___nMaxRecvSize2;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0036;
		}
	}
	{
		// nReadSize = nMaxRecvSize;
		int32_t L_11 = ___nMaxRecvSize2;
		V_1 = L_11;
	}

IL_0036:
	{
		// m_nReadPos += nReadSize;
		int32_t L_12 = __this->get_m_nReadPos_6();
		int32_t L_13 = V_1;
		__this->set_m_nReadPos_6(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)));
		// return nReadSize;
		int32_t L_14 = V_1;
		return L_14;
	}

IL_0046:
	{
		// int nRecLen = m_tcp.Receive(m_PrepareReadBuf, nMaxRecvSize > 0 && nMaxRecvSize < HTTP_CACHE_SIZE ? nMaxRecvSize : HTTP_CACHE_SIZE);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_15 = __this->get_m_tcp_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = __this->get_m_PrepareReadBuf_4();
		int32_t L_17 = ___nMaxRecvSize2;
		G_B6_0 = L_16;
		G_B6_1 = L_15;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			G_B7_0 = L_16;
			G_B7_1 = L_15;
			goto IL_005e;
		}
	}
	{
		int32_t L_18 = ___nMaxRecvSize2;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)204800))))
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_0065;
		}
	}

IL_005e:
	{
		G_B9_0 = ((int32_t)204800);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0066;
	}

IL_0065:
	{
		int32_t L_19 = ___nMaxRecvSize2;
		G_B9_0 = L_19;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0066:
	{
		NullCheck(G_B9_2);
		int32_t L_20 = CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E(G_B9_2, G_B9_1, G_B9_0, 0, /*hidden argument*/NULL);
		V_0 = L_20;
		// if (nRecLen <= 0)
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0073:
	{
		// buffer  = m_PrepareReadBuf;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_22 = ___buffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = __this->get_m_PrepareReadBuf_4();
		*((RuntimeObject **)L_22) = (RuntimeObject *)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_22, (void*)(RuntimeObject *)L_23);
		// nOffset = 0;
		int32_t* L_24 = ___nOffset1;
		*((int32_t*)L_24) = (int32_t)0;
		// return nRecLen;
		int32_t L_25 = V_0;
		return L_25;
	}
}
// System.Int32 CHttp::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_Receive_mCC5457E4DB1A64DCD08C58AE4BBF9E929E2D5C89 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___nSize1, int32_t ___flags2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_nReadPos + nSize <= m_nPrepareReadSize)
		int32_t L_0 = __this->get_m_nReadPos_6();
		int32_t L_1 = ___nSize1;
		int32_t L_2 = __this->get_m_nPrepareReadSize_5();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) > ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		// Array.Copy(m_PrepareReadBuf, m_nReadPos, buffer, 0, nSize);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_m_PrepareReadBuf_4();
		int32_t L_4 = __this->get_m_nReadPos_6();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___buffer0;
		int32_t L_6 = ___nSize1;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_3, L_4, (RuntimeArray *)(RuntimeArray *)L_5, 0, L_6, /*hidden argument*/NULL);
		// m_nReadPos += nSize;
		int32_t L_7 = __this->get_m_nReadPos_6();
		int32_t L_8 = ___nSize1;
		__this->set_m_nReadPos_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		// return nSize;
		int32_t L_9 = ___nSize1;
		return L_9;
	}

IL_0034:
	{
		// int nReadSize = 0;
		V_0 = 0;
		// int nCurSize = 0;
		V_1 = 0;
		goto IL_00cd;
	}

IL_003d:
	{
		// if (m_nReadPos >= m_nPrepareReadSize)
		int32_t L_10 = __this->get_m_nReadPos_6();
		int32_t L_11 = __this->get_m_nPrepareReadSize_5();
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0081;
		}
	}
	{
		// m_nReadPos = 0;
		__this->set_m_nReadPos_6(0);
		// m_nPrepareReadSize = m_tcp.Receive(m_PrepareReadBuf, HTTP_CACHE_SIZE);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_12 = __this->get_m_tcp_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get_m_PrepareReadBuf_4();
		NullCheck(L_12);
		int32_t L_14 = CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E(L_12, L_13, ((int32_t)204800), 0, /*hidden argument*/NULL);
		__this->set_m_nPrepareReadSize_5(L_14);
		// if (m_nPrepareReadSize <= 0)
		int32_t L_15 = __this->get_m_nPrepareReadSize_5();
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// m_nPrepareReadSize = 0;
		__this->set_m_nPrepareReadSize_5(0);
		// break;
		goto IL_00d4;
	}

IL_0081:
	{
		// nCurSize = nSize - nReadSize;
		int32_t L_16 = ___nSize1;
		int32_t L_17 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17));
		// if (nCurSize > m_nPrepareReadSize - m_nReadPos)
		int32_t L_18 = V_1;
		int32_t L_19 = __this->get_m_nPrepareReadSize_5();
		int32_t L_20 = __this->get_m_nReadPos_6();
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)))))
		{
			goto IL_00a3;
		}
	}
	{
		// nCurSize = m_nPrepareReadSize - m_nReadPos;
		int32_t L_21 = __this->get_m_nPrepareReadSize_5();
		int32_t L_22 = __this->get_m_nReadPos_6();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
	}

IL_00a3:
	{
		// if( nCurSize > 0 )
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		// Array.Copy(m_PrepareReadBuf, m_nReadPos, buffer, nReadSize, nCurSize);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = __this->get_m_PrepareReadBuf_4();
		int32_t L_25 = __this->get_m_nReadPos_6();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = ___buffer0;
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_24, L_25, (RuntimeArray *)(RuntimeArray *)L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// m_nReadPos += nCurSize;
		int32_t L_29 = __this->get_m_nReadPos_6();
		int32_t L_30 = V_1;
		__this->set_m_nReadPos_6(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
		// nReadSize += nCurSize;
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
	}

IL_00cd:
	{
		// while (nReadSize < nSize)
		int32_t L_33 = V_0;
		int32_t L_34 = ___nSize1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_003d;
		}
	}

IL_00d4:
	{
		// return nReadSize;
		int32_t L_35 = V_0;
		return L_35;
	}
}
// System.Boolean CHttp::ClientOpen(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_ClientOpen_m522EB9083EAAD328AFFE1F81336477167487FF91 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___pcsServerIP0, int32_t ___nServerPort1, const RuntimeMethod* method)
{
	{
		// m_szServerAddr = pcsServerIP;
		String_t* L_0 = ___pcsServerIP0;
		__this->set_m_szServerAddr_1(L_0);
		// m_nServerPort = nServerPort;
		int32_t L_1 = ___nServerPort1;
		__this->set_m_nServerPort_2(L_1);
		// m_nPrepareReadSize = 0;
		__this->set_m_nPrepareReadSize_5(0);
		// m_nReadPos = 0;
		__this->set_m_nReadPos_6(0);
		// m_tcp.ConnectToServer(m_szServerAddr, m_nServerPort);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_2 = __this->get_m_tcp_3();
		String_t* L_3 = __this->get_m_szServerAddr_1();
		int32_t L_4 = __this->get_m_nServerPort_2();
		NullCheck(L_2);
		CTcp_ConnectToServer_m98D8FA6C5195FB11383DAA788B1DCC88294B13A0(L_2, L_3, L_4, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		// return IsConnect();
		bool L_5 = CHttp_IsConnect_m969D1B8ECB6684D22D8DDAFFC8D0CC5485EA3874(__this, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean CHttp::QueryURL(System.String&,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_QueryURL_mCC01B45C53A24D75398D1C143388FDCA684AF28D (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t** ___szAnswer0, String_t* ___url1, int32_t ___nFileOffset2, int32_t ___nDownSize3, bool ___bDownAll4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_QueryURL_mCC01B45C53A24D75398D1C143388FDCA684AF28D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_1;
		// int nPort = 80;
		V_2 = ((int32_t)80);
		// ParseURL(url, ref szServerIP, ref szObj, ref nPort);
		String_t* L_2 = ___url1;
		CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF(__this, L_2, (String_t**)(&V_0), (String_t**)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		// if (!QueryFile(ref szAnswer, szServerIP, nPort, szObj, nFileOffset, nDownSize, bDownAll))
		String_t** L_3 = ___szAnswer0;
		String_t* L_4 = V_0;
		int32_t L_5 = V_2;
		String_t* L_6 = V_1;
		int32_t L_7 = ___nFileOffset2;
		int32_t L_8 = ___nDownSize3;
		bool L_9 = ___bDownAll4;
		bool L_10 = CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2(__this, (String_t**)L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0035:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 CHttp::PrepareDown(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_PrepareDown_m143A6A5898054EB9C1A0CB458F384B86C8E0EF81 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___url0, int32_t ___nFileOffset1, int32_t ___nDownSize2, bool ___bDownAll3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_PrepareDown_m143A6A5898054EB9C1A0CB458F384B86C8E0EF81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// string szAnswer = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_1;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_2;
		// int nPort = 80;
		V_3 = ((int32_t)80);
		// ParseURL(url, ref szServerIP, ref szObj, ref nPort);
		String_t* L_3 = ___url0;
		CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF(__this, L_3, (String_t**)(&V_1), (String_t**)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// if (!QueryFile(ref szAnswer, szServerIP, nPort, szObj, nFileOffset, nDownSize, bDownAll))
		String_t* L_4 = V_1;
		int32_t L_5 = V_3;
		String_t* L_6 = V_2;
		int32_t L_7 = ___nFileOffset1;
		int32_t L_8 = ___nDownSize2;
		bool L_9 = ___bDownAll3;
		bool L_10 = CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2(__this, (String_t**)(&V_0), L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_003b;
		}
	}
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return -1;
		return (-1);
	}

IL_003b:
	{
		// int nCurDownSize = 0, nCurFileSize = 0;
		V_4 = 0;
		// int nCurDownSize = 0, nCurFileSize = 0;
		V_5 = 0;
		// if (!AnlyseFileLengthFromAnswer(szAnswer, ref nCurDownSize, ref nCurFileSize))
		String_t* L_11 = V_0;
		bool L_12 = CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8(__this, L_11, (int32_t*)(&V_4), (int32_t*)(&V_5), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return -1;
		return (-1);
	}

IL_0056:
	{
		// if (nDownSize <= 0)
		int32_t L_13 = ___nDownSize2;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		// nDownSize = nCurDownSize;
		int32_t L_14 = V_4;
		___nDownSize2 = L_14;
		goto IL_0069;
	}

IL_0060:
	{
		// else if (nDownSize > nCurDownSize)
		int32_t L_15 = ___nDownSize2;
		int32_t L_16 = V_4;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0069;
		}
	}
	{
		// nDownSize = nCurDownSize;
		int32_t L_17 = V_4;
		___nDownSize2 = L_17;
	}

IL_0069:
	{
		// return nDownSize;
		int32_t L_18 = ___nDownSize2;
		return L_18;
	}
}
// System.Boolean CHttp::QueryFile(System.String&,System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t** ___szAnswer0, String_t* ___szServerAddr1, int32_t ___nServerPort2, String_t* ___szSubPathName3, int32_t ___nFileOffset4, int32_t ___nDownSize5, bool ___bDownAll6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// if (!ClientOpen(szServerAddr, nServerPort))
		String_t* L_0 = ___szServerAddr1;
		int32_t L_1 = ___nServerPort2;
		bool L_2 = CHttp_ClientOpen_m522EB9083EAAD328AFFE1F81336477167487FF91(__this, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_nLastErrorCode = (int)HttpErrorCode.HttpError_ConnectFailed;
		__this->set_m_nLastErrorCode_7(((int32_t)-200));
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// string szMsg = FormatRequestHeader(szSubPathName, szServerAddr, nFileOffset, nDownSize, bDownAll, true);
		String_t* L_3 = ___szSubPathName3;
		String_t* L_4 = ___szServerAddr1;
		int32_t L_5 = ___nFileOffset4;
		int32_t L_6 = ___nDownSize5;
		bool L_7 = ___bDownAll6;
		String_t* L_8 = CHttp_FormatRequestHeader_m1063710C354835F8402EDEBCF71C4FDD4018BA18(__this, L_3, L_4, L_5, L_6, L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		// int nSendSize = SendToServer(szMsg);
		String_t* L_9 = V_0;
		CHttp_SendToServer_mA7346BBBA4219846A328A878B6808C10333D55F9(__this, L_9, /*hidden argument*/NULL);
		// int dwError = 0;
		V_1 = 0;
		// if (!ReceiveAnswer(ref szAnswer, ref dwError))
		String_t** L_10 = ___szAnswer0;
		bool L_11 = CHttp_ReceiveAnswer_m888327B893D3FB6E5D7DC656ACB73959D59F964D(__this, (String_t**)L_10, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		// m_nLastErrorCode = (int)HttpErrorCode.HttpError_no_answer_http;
		__this->set_m_nLastErrorCode_7(((int32_t)-300));
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// int nCode = GetErroIDFormAnswerMsg(szAnswer);
		String_t** L_12 = ___szAnswer0;
		String_t* L_13 = *((String_t**)L_12);
		int32_t L_14 = CHttp_GetErroIDFormAnswerMsg_mF3E346A71EC4713988A1C0E0F9FEF4CB76D6FC06(__this, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// m_nLastErrorCode = nCode;
		int32_t L_15 = V_2;
		__this->set_m_nLastErrorCode_7(L_15);
		// if (nCode >= 400 && nCode < 500)
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)400))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)500))))
		{
			goto IL_007e;
		}
	}
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_007e:
	{
		// if (nCode >= 500 && nCode < 600)
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)500))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)600))))
		{
			goto IL_0096;
		}
	}
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0096:
	{
		// if (nCode == 302)
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)302)))))
		{
			goto IL_00e5;
		}
	}
	{
		// string szNewServerAddr = string.Empty, szNewURL = string.Empty;
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_3 = L_21;
		// string szNewServerAddr = string.Empty, szNewURL = string.Empty;
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_4 = L_22;
		// if (ReContentServer302Error(szAnswer, ref szNewServerAddr, ref szNewURL))
		String_t** L_23 = ___szAnswer0;
		String_t* L_24 = *((String_t**)L_23);
		bool L_25 = CHttp_ReContentServer302Error_mCF0441691DE2A5508C19B4C538D7A17A792B1D2A(__this, L_24, (String_t**)(&V_3), (String_t**)(&V_4), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e5;
		}
	}
	{
		// szMsg = FormatRequestHeader(szNewURL, szNewServerAddr, nFileOffset, nDownSize, bDownAll, true);
		String_t* L_26 = V_4;
		String_t* L_27 = V_3;
		int32_t L_28 = ___nFileOffset4;
		int32_t L_29 = ___nDownSize5;
		bool L_30 = ___bDownAll6;
		String_t* L_31 = CHttp_FormatRequestHeader_m1063710C354835F8402EDEBCF71C4FDD4018BA18(__this, L_26, L_27, L_28, L_29, L_30, (bool)1, /*hidden argument*/NULL);
		V_0 = L_31;
		// SendToServer(szMsg);
		String_t* L_32 = V_0;
		CHttp_SendToServer_mA7346BBBA4219846A328A878B6808C10333D55F9(__this, L_32, /*hidden argument*/NULL);
		// if (!ReceiveAnswer(ref szAnswer, ref dwError))
		String_t** L_33 = ___szAnswer0;
		bool L_34 = CHttp_ReceiveAnswer_m888327B893D3FB6E5D7DC656ACB73959D59F964D(__this, (String_t**)L_33, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00e5;
		}
	}
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_00e5:
	{
		// if (!(nCode == 200 || nCode == 206))
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)200))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_36 = V_2;
	}

IL_00f5:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void CHttp::ParseURL(System.String,System.String&,System.String&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szServerURL0, String_t** ___szServerIP1, String_t** ___szObj2, int32_t* ___nPort3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string  szURL = szServerURL;
		String_t* L_0 = ___szServerURL0;
		V_0 = L_0;
		// if( szURL.IndexOf("http://", 0) == -1 )
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_1, _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		// szURL = "http://" + szURL;
		String_t* L_3 = V_0;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001d:
	{
		// szServerIP = GetMiddle(szURL, "http://", "/");
		String_t** L_5 = ___szServerIP1;
		String_t* L_6 = V_0;
		String_t* L_7 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_6, _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_7);
		// if (string.IsNullOrEmpty(szServerIP))
		String_t** L_8 = ___szServerIP1;
		String_t* L_9 = *((String_t**)L_8);
		bool L_10 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// szServerIP = szURL.Substring(7);
		String_t** L_11 = ___szServerIP1;
		String_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_12, 7, /*hidden argument*/NULL);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_13);
	}

IL_0041:
	{
		// int  nIndex  = szURL.IndexOf( '/', 6 + szServerIP.Length );
		String_t* L_14 = V_0;
		String_t** L_15 = ___szServerIP1;
		String_t* L_16 = *((String_t**)L_15);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_18 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_14, ((int32_t)47), ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_17)), /*hidden argument*/NULL);
		V_1 = L_18;
		// if( nIndex > 7 )
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)7)))
		{
			goto IL_0062;
		}
	}
	{
		// szObj = szURL.Substring(nIndex);  // ???'/'
		String_t** L_20 = ___szObj2;
		String_t* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		String_t* L_23 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_21, L_22, /*hidden argument*/NULL);
		*((RuntimeObject **)L_20) = (RuntimeObject *)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_20, (void*)(RuntimeObject *)L_23);
		goto IL_0069;
	}

IL_0062:
	{
		// szObj = "/index.htm";  // ??
		String_t** L_24 = ___szObj2;
		*((RuntimeObject **)L_24) = (RuntimeObject *)_stringLiteral014F674C1D8C8B0D915C0D5545C4B0CF6C73CD60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_24, (void*)(RuntimeObject *)_stringLiteral014F674C1D8C8B0D915C0D5545C4B0CF6C73CD60);
	}

IL_0069:
	{
		// nIndex = szServerIP.IndexOf( ':', 0 );
		String_t** L_25 = ___szServerIP1;
		String_t* L_26 = *((String_t**)L_25);
		NullCheck(L_26);
		int32_t L_27 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_26, ((int32_t)58), 0, /*hidden argument*/NULL);
		V_1 = L_27;
		// if( nIndex != -1 )
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)(-1))))
		{
			goto IL_009b;
		}
	}
	{
		// nPort = 80;
		int32_t* L_29 = ___nPort3;
		*((int32_t*)L_29) = (int32_t)((int32_t)80);
		// int.TryParse(szServerIP.Substring(nIndex + 1), out nPort);
		String_t** L_30 = ___szServerIP1;
		String_t* L_31 = *((String_t**)L_30);
		int32_t L_32 = V_1;
		NullCheck(L_31);
		String_t* L_33 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_31, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), /*hidden argument*/NULL);
		int32_t* L_34 = ___nPort3;
		Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_33, (int32_t*)L_34, /*hidden argument*/NULL);
		// szServerIP = szServerIP.Substring(0, nIndex);
		String_t** L_35 = ___szServerIP1;
		String_t** L_36 = ___szServerIP1;
		String_t* L_37 = *((String_t**)L_36);
		int32_t L_38 = V_1;
		NullCheck(L_37);
		String_t* L_39 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_37, 0, L_38, /*hidden argument*/NULL);
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_39;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_39);
		// }
		return;
	}

IL_009b:
	{
		// nPort = 80;
		int32_t* L_40 = ___nPort3;
		*((int32_t*)L_40) = (int32_t)((int32_t)80);
		// }
		return;
	}
}
// System.String CHttp::FormatRequestHeader(System.String,System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttp_FormatRequestHeader_m1063710C354835F8402EDEBCF71C4FDD4018BA18 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szPathFileURL0, String_t* ___szServerIP1, int32_t ___nFileOffset2, int32_t ___nDownSize3, bool ___bDownAll4, bool ___bKeekAlive5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_FormatRequestHeader_m1063710C354835F8402EDEBCF71C4FDD4018BA18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder szBuilder = new StringBuilder(1024);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_0, ((int32_t)1024), /*hidden argument*/NULL);
		V_0 = L_0;
		// szBuilder.AppendFormat( "GET {0} HTTP/1.1\r\n", szPathFileURL);
		StringBuilder_t * L_1 = V_0;
		String_t* L_2 = ___szPathFileURL0;
		NullCheck(L_1);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_1, _stringLiteral8DD7E6814FF3632D80DAD50856561E9FB454EAFA, L_2, /*hidden argument*/NULL);
		// szBuilder.AppendFormat("Host:{0}\r\n", szServerIP);
		StringBuilder_t * L_3 = V_0;
		String_t* L_4 = ___szServerIP1;
		NullCheck(L_3);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_3, _stringLiteral7C4247743E3918643103E4ECE8D2C86E6F88DCE1, L_4, /*hidden argument*/NULL);
		// szBuilder.Append("Accept:*/*\r\n");
		StringBuilder_t * L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_5, _stringLiteralF7BDCD20702F616A717CE911D2E3F4C8EECA5C36, /*hidden argument*/NULL);
		// szBuilder.Append("User-Agent:Mozilla/4.0 (compatible; MSIE 6.00; Android)\r\n");
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_6, _stringLiteralA9E9B1A44C169F6E419B331E4F299098BE5230D5, /*hidden argument*/NULL);
		// if (bKeekAlive)
		bool L_7 = ___bKeekAlive5;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// szBuilder.Append("Connection:Keep-Alive\r\n");
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, _stringLiteral1D02F44EC9C13591AB27C01EE25CFD3D1FE7A127, /*hidden argument*/NULL);
		goto IL_005b;
	}

IL_004f:
	{
		// szBuilder.Append("Connection:close\r\n"); // close ?????
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_9, _stringLiteralE711A675F769F292FCCA1DECE1BF67B8E9C12C7B, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// if (!bDownAll)
		bool L_10 = ___bDownAll4;
		if (L_10)
		{
			goto IL_007c;
		}
	}
	{
		// szBuilder.AppendFormat("Range: bytes={0}-{1}\r\n", nFileOffset, nFileOffset + nDownSize - 1);
		StringBuilder_t * L_11 = V_0;
		int32_t L_12 = ___nFileOffset2;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		int32_t L_15 = ___nFileOffset2;
		int32_t L_16 = ___nDownSize3;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), (int32_t)1));
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_11);
		StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_11, _stringLiteral803448E42358F33FDD458287C30CAB00C19FBCCC, L_14, L_18, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// szBuilder.Append("\r\n");
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_19, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		// return szBuilder.ToString();
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.String CHttp::GetMiddle(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267 (String_t* ___szText0, String_t* ___szLeft1, String_t* ___szRight2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int nLeft = szText.IndexOf(szLeft, 0);
		String_t* L_0 = ___szText0;
		String_t* L_1 = ___szLeft1;
		NullCheck(L_0);
		int32_t L_2 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (nLeft == -1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		// return string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_4;
	}

IL_0013:
	{
		// nLeft += szLeft.Length;
		int32_t L_5 = V_0;
		String_t* L_6 = ___szLeft1;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
		// int nRight = szText.IndexOf(szRight, nLeft);
		String_t* L_8 = ___szText0;
		String_t* L_9 = ___szRight2;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// return szText.Substring(nLeft, nRight - nLeft);
		String_t* L_12 = ___szText0;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		NullCheck(L_12);
		String_t* L_16 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_12, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.String CHttp::DelOut(System.String,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttp_DelOut_m4357B6AF34F7570E72B2E10B307314481C302773 (String_t* ___szText0, Il2CppChar ___chLow1, Il2CppChar ___chHig2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_DelOut_m4357B6AF34F7570E72B2E10B307314481C302773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		// char[] chBuf = new char[szText.Length + 1];
		String_t* L_0 = ___szText0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		V_0 = L_2;
		// int nLen = szText.Length;
		String_t* L_3 = ___szText0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int nCount = 0;
		V_2 = 0;
		// for (int i = 0; i < nLen; ++i)
		V_3 = 0;
		goto IL_003b;
	}

IL_001b:
	{
		// char ch = szText[i];
		String_t* L_5 = ___szText0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// if (ch >= chLow && ch <= chHig)
		Il2CppChar L_8 = V_4;
		Il2CppChar L_9 = ___chLow1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		Il2CppChar L_10 = V_4;
		Il2CppChar L_11 = ___chHig2;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0037;
		}
	}
	{
		// chBuf[nCount++] = ch;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		Il2CppChar L_15 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)L_15);
	}

IL_0037:
	{
		// for (int i = 0; i < nLen; ++i)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < nLen; ++i)
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001b;
		}
	}
	{
		// chBuf[nCount] = '\0';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = V_0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Il2CppChar)0);
		// return new string(chBuf, 0, nCount);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_21 = V_0;
		int32_t L_22 = V_2;
		String_t* L_23 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_21, 0, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Int32 CHttp::GetNumb(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetNumb_m90AA85D5F2E54C48262C2F320CF30683C67037FB (String_t* ___szText0, String_t* ___szLeft1, String_t* ___szRight2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int nLeft = szText.IndexOf(szLeft, 0);
		String_t* L_0 = ___szText0;
		String_t* L_1 = ___szLeft1;
		NullCheck(L_0);
		int32_t L_2 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_0, L_1, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (nLeft == -1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000f:
	{
		// nLeft += szLeft.Length;
		int32_t L_4 = V_0;
		String_t* L_5 = ___szLeft1;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
		// int nRight = szText.IndexOf(szRight, nLeft);
		String_t* L_7 = ___szText0;
		String_t* L_8 = ___szRight2;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		int32_t L_10 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (nRight == -1)
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_002c;
		}
	}
	{
		// nRight = szText.Length;
		String_t* L_12 = ___szText0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_002c:
	{
		// return GetNumb(szText, nLeft, nRight);
		String_t* L_14 = ___szText0;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = CHttp_GetNumb_m6CEA3818AFF151F403A15989098DC00153B1FDB2(L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Int32 CHttp::GetNumb(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetNumb_m6CEA3818AFF151F403A15989098DC00153B1FDB2 (String_t* ___szText0, int32_t ___nStart1, int32_t ___nEnd2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// int nNumb = 0;
		V_0 = 0;
		// bool bFind = false;
		V_1 = (bool)0;
		// for (int i = nStart; i < nEnd; ++i)
		int32_t L_0 = ___nStart1;
		V_2 = L_0;
		goto IL_0031;
	}

IL_0008:
	{
		// char ch = szText[i];
		String_t* L_1 = ___szText0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		// if (ch >= '0' && ch <= '9')
		Il2CppChar L_4 = V_3;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_002a;
		}
	}
	{
		// bFind = true;
		V_1 = (bool)1;
		// nNumb *= 10;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)10)));
		// nNumb += ch - '0';
		int32_t L_7 = V_0;
		Il2CppChar L_8 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)))));
		// }
		goto IL_002d;
	}

IL_002a:
	{
		// else if (bFind)
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0035;
		}
	}

IL_002d:
	{
		// for (int i = nStart; i < nEnd; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = nStart; i < nEnd; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = ___nEnd2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0008;
		}
	}

IL_0035:
	{
		// return nNumb;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Boolean CHttp::AnlyseFileLengthFromAnswer(System.String,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szAnswer0, int32_t* ___nDownSize1, int32_t* ___nFileSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// nDownSize = GetNumb(szAnswer, "Content-Length", "\r\n");
		int32_t* L_0 = ___nDownSize1;
		String_t* L_1 = ___szAnswer0;
		int32_t L_2 = CHttp_GetNumb_m90AA85D5F2E54C48262C2F320CF30683C67037FB(L_1, _stringLiteral6BA83D8699910039B5B5F1D3BD60B1F43B1C39FA, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_2;
		// string szRange = GetMiddle(szAnswer, "Content-Range", "\r\n");
		String_t* L_3 = ___szAnswer0;
		String_t* L_4 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_3, _stringLiteralD8A137C21303D5CDFAF674A6D77269E2B8A33D34, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_0 = L_4;
		// if(string.IsNullOrEmpty(szRange))
		String_t* L_5 = V_0;
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// nFileSize = nDownSize;
		int32_t* L_7 = ___nFileSize2;
		int32_t* L_8 = ___nDownSize1;
		int32_t L_9 = *((int32_t*)L_8);
		*((int32_t*)L_7) = (int32_t)L_9;
		// }
		goto IL_005d;
	}

IL_0031:
	{
		// int nIndex = szRange.LastIndexOf('/');
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_10, ((int32_t)47), /*hidden argument*/NULL);
		V_1 = L_11;
		// if(nIndex != -1)
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0059;
		}
	}
	{
		// szRange = szRange.Substring(nIndex + 1);
		String_t* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_15;
		// nFileSize = GetNumb(szRange, 0, szRange.Length);
		int32_t* L_16 = ___nFileSize2;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_18, /*hidden argument*/NULL);
		int32_t L_20 = CHttp_GetNumb_m6CEA3818AFF151F403A15989098DC00153B1FDB2(L_17, 0, L_19, /*hidden argument*/NULL);
		*((int32_t*)L_16) = (int32_t)L_20;
		// }
		goto IL_005d;
	}

IL_0059:
	{
		// nFileSize = nDownSize;
		int32_t* L_21 = ___nFileSize2;
		int32_t* L_22 = ___nDownSize1;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_21) = (int32_t)L_23;
	}

IL_005d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean CHttp::ReceiveAnswer(System.String&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_ReceiveAnswer_m888327B893D3FB6E5D7DC656ACB73959D59F964D (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t** ___szAnswer0, int32_t* ___dwErro1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_ReceiveAnswer_m888327B893D3FB6E5D7DC656ACB73959D59F964D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// bool bRet = false;
		V_0 = (bool)0;
		// byte []chBuf = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_1 = L_0;
		// char[] szTempReceive = new char[1025];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1025));
		V_2 = L_1;
		// int nTotalRecLen = 0;
		V_3 = 0;
		// int nRecLen = 0, nIndex = 0;
		V_4 = 0;
		// int nRecLen = 0, nIndex = 0;
		V_5 = 0;
		goto IL_007a;
	}

IL_001e:
	{
		// nRecLen = ReceiveChar(chBuf);//Receive(chBuf, 1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		int32_t L_3 = CHttp_ReceiveChar_mF3514823E51C2D97C8E0167B84310FDDF5928843(__this, L_2, (-1), /*hidden argument*/NULL);
		V_4 = L_3;
		// if (nRecLen == -1)
		int32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}
	{
		// dwErro = -5; // WSAGetLastError();
		int32_t* L_5 = ___dwErro1;
		*((int32_t*)L_5) = (int32_t)((int32_t)-5);
		// break;
		goto IL_0082;
	}

IL_0033:
	{
		// if (nRecLen == 0) // ????
		int32_t L_6 = V_4;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		// dwErro = -4;// WSAGetLastError();
		int32_t* L_7 = ___dwErro1;
		*((int32_t*)L_7) = (int32_t)((int32_t)-4);
		// break;
		goto IL_0082;
	}

IL_003d:
	{
		// szTempReceive[nTotalRecLen++] = (char)chBuf[0];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = V_2;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppChar)L_13);
		// if (nTotalRecLen >= 4)
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		// nIndex = nTotalRecLen - 4;
		int32_t L_15 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)4));
		// if (szTempReceive[nIndex] == '\r' && szTempReceive[nIndex + 1] == '\n'
		//     && szTempReceive[nIndex + 2] == '\r' && szTempReceive[nIndex + 3] == '\n')
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = V_2;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_007a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = V_2;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_007a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = V_2;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)2));
		uint16_t L_27 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_007a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = V_2;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)3));
		uint16_t L_31 = (uint16_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_007a;
		}
	}
	{
		// bRet = true;
		V_0 = (bool)1;
		// break;
		goto IL_0082;
	}

IL_007a:
	{
		// while (nTotalRecLen < 1024)
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)1024))))
		{
			goto IL_001e;
		}
	}

IL_0082:
	{
		// szTempReceive[nTotalRecLen] = '\0';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)0);
		// szAnswer = new string(szTempReceive, 0, nTotalRecLen);
		String_t** L_35 = ___szAnswer0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_36 = V_2;
		int32_t L_37 = V_3;
		String_t* L_38 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_36, 0, L_37, /*hidden argument*/NULL);
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_38;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_38);
		// return bRet;
		bool L_39 = V_0;
		return L_39;
	}
}
// System.Int32 CHttp::DistillNumb(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_DistillNumb_m6AAB0F23BF0D718A01FF364CE2D0BB872C821D1A (String_t* ___szText0, int32_t ___nStart1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		// int nNumb = 0;
		V_0 = 0;
		// int nLen = szText.Length;
		String_t* L_0 = ___szText0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// bool bFind = false;
		V_2 = (bool)0;
		// for (int i = nStart; i < nLen; ++i)
		int32_t L_2 = ___nStart1;
		V_3 = L_2;
		goto IL_003c;
	}

IL_000f:
	{
		// char ch = szText[i];
		String_t* L_3 = ___szText0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_3, L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		// if (ch >= '0' && ch <= '9')
		Il2CppChar L_6 = V_4;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar L_7 = V_4;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}
	{
		// bFind = true;
		V_2 = (bool)1;
		// nNumb *= 10;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)10)));
		// nNumb += ch - '0';
		int32_t L_9 = V_0;
		Il2CppChar L_10 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)))));
		// }
		goto IL_0038;
	}

IL_0035:
	{
		// else if (bFind)
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0040;
		}
	}

IL_0038:
	{
		// for (int i = nStart; i < nLen; ++i)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		// for (int i = nStart; i < nLen; ++i)
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000f;
		}
	}

IL_0040:
	{
		// return nNumb;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 CHttp::GetErroIDFormAnswerMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CHttp_GetErroIDFormAnswerMsg_mF3E346A71EC4713988A1C0E0F9FEF4CB76D6FC06 (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szAnswer0, const RuntimeMethod* method)
{
	{
		// int nErroID = DistillNumb(szAnswer, 8);
		String_t* L_0 = ___szAnswer0;
		int32_t L_1 = CHttp_DistillNumb_m6AAB0F23BF0D718A01FF364CE2D0BB872C821D1A(L_0, 8, /*hidden argument*/NULL);
		// return nErroID;
		return L_1;
	}
}
// System.Boolean CHttp::ReContentServer302Error(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_ReContentServer302Error_mCF0441691DE2A5508C19B4C538D7A17A792B1D2A (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * __this, String_t* ___szAnswer0, String_t** ___szOutServerIP1, String_t** ___szOutObjURL2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_ReContentServer302Error_mCF0441691DE2A5508C19B4C538D7A17A792B1D2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// string  szHttp      = GetMiddle(szAnswer,"Location:", "\r\n" );
		String_t* L_0 = ___szAnswer0;
		String_t* L_1 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_0, _stringLiteral1BF3994417BEF0651ABB2F6484952B55978E96CA, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		// string  szServerIP  = GetMiddle(szHttp, "http://", "/" );
		String_t* L_2 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_1, _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		V_0 = L_2;
		// int  nNewServerPort = 80;
		V_1 = ((int32_t)80);
		// int  nIndex = szServerIP.IndexOf( ':', 0 );
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_3, ((int32_t)58), 0, /*hidden argument*/NULL);
		V_2 = L_4;
		// if( nIndex != -1 )
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		// nNewServerPort = DistillNumb(szServerIP, nIndex + 1);
		String_t* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = CHttp_DistillNumb_m6AAB0F23BF0D718A01FF364CE2D0BB872C821D1A(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_8;
		// szServerIP = szServerIP.Substring(0, nIndex);
		String_t* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_9, 0, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0044:
	{
		// Close();
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(__this, /*hidden argument*/NULL);
		// if( !ClientOpen( szServerIP, nNewServerPort ) )
		String_t* L_12 = V_0;
		int32_t L_13 = V_1;
		bool L_14 = CHttp_ClientOpen_m522EB9083EAAD328AFFE1F81336477167487FF91(__this, L_12, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0056;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// szOutServerIP = szServerIP;
		String_t** L_15 = ___szOutServerIP1;
		String_t* L_16 = V_0;
		*((RuntimeObject **)L_15) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)L_16);
		// string  szRefURL = GetMiddle(szAnswer,"Location:", "\r\n" );
		String_t* L_17 = ___szAnswer0;
		String_t* L_18 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_17, _stringLiteral1BF3994417BEF0651ABB2F6484952B55978E96CA, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		V_3 = L_18;
		// szRefURL = szRefURL.Trim();
		String_t* L_19 = V_3;
		NullCheck(L_19);
		String_t* L_20 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		// AnlseURL( ref szOutObjURL, szRefURL );
		String_t** L_21 = ___szOutObjURL2;
		String_t* L_22 = V_3;
		CHttp_AnlseURL_m95F663AE12E23D3BC664CD4CE220E78A621142CF((String_t**)L_21, L_22, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean CHttp::FindHttpMsgEndFlags(System.Char[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_FindHttpMsgEndFlags_m0E20476D53EEF6906A1CD0D644773DB3B1C05051 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___szMsg0, int32_t ___nLen1, int32_t* ___nStart2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = nStart; i < nLen; ++i)
		int32_t* L_0 = ___nStart2;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		goto IL_0036;
	}

IL_0005:
	{
		// if (szMsg[i] == '\r' && szMsg[i + 1] == '\n')
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = ___szMsg0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (uint16_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0032;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = ___szMsg0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0032;
		}
	}
	{
		// nStart = i;
		int32_t* L_10 = ___nStart2;
		int32_t L_11 = V_0;
		*((int32_t*)L_10) = (int32_t)L_11;
		// if ( i + 3 < nLen && szMsg[i + 2] == '\r' && szMsg[i + 3] == '\n')
		int32_t L_12 = V_0;
		int32_t L_13 = ___nLen1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3))) >= ((int32_t)L_13)))
		{
			goto IL_0032;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = ___szMsg0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2));
		uint16_t L_17 = (uint16_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0032;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_18 = ___szMsg0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)3));
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0032;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0032:
	{
		// for (int i = nStart; i < nLen; ++i)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = nStart; i < nLen; ++i)
		int32_t L_23 = V_0;
		int32_t L_24 = ___nLen1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean CHttp::GetInetURL(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_GetInetURL_m348F0E98FC3A6D456D073F9990A95FF7A0D418E3 (String_t* ___pcsURL0, String_t** ___szOutURL1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_GetInetURL_m348F0E98FC3A6D456D073F9990A95FF7A0D418E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * V_5 = NULL;
	String_t* V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_13 = NULL;
	{
		// string   szURL = pcsURL;
		String_t* L_0 = ___pcsURL0;
		V_0 = L_0;
		// if(szURL.IndexOf("http://", 0) != 0 )
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_1, _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// szURL = "http://" + szURL;
		String_t* L_3 = V_0;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001c:
	{
		// string szSerIP = GetMiddle(szURL, "http://", "/" );
		String_t* L_5 = V_0;
		String_t* L_6 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_5, _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, /*hidden argument*/NULL);
		V_1 = L_6;
		// string  szObj = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_7;
		// int  nIndex = szURL.IndexOf( '/', 6 + szSerIP.Length );
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_11 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_8, ((int32_t)47), ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_10)), /*hidden argument*/NULL);
		V_3 = L_11;
		// if( nIndex != -1 )
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0052;
		}
	}
	{
		// szObj = szURL.Substring(nIndex); // ???'/'
		String_t* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0054;
	}

IL_0052:
	{
		// return  false;
		return (bool)0;
	}

IL_0054:
	{
		// int  nServerPort = 80;
		V_4 = ((int32_t)80);
		// nIndex = szSerIP.IndexOf( ':', 0 );
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = String_IndexOf_m66F6178DB4B2F61F4FAFD8B75787D0AB142ADD7D(L_16, ((int32_t)58), 0, /*hidden argument*/NULL);
		V_3 = L_17;
		// if( nIndex != -1 )
		int32_t L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_007a;
		}
	}
	{
		// nServerPort = DistillNumb(szSerIP, nIndex + 1);
		String_t* L_19 = V_1;
		int32_t L_20 = V_3;
		int32_t L_21 = CHttp_DistillNumb_m6AAB0F23BF0D718A01FF364CE2D0BB872C821D1A(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_21;
		// szSerIP = szSerIP.Substring(0, nIndex);
		String_t* L_22 = V_1;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		String_t* L_24 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_22, 0, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
	}

IL_007a:
	{
		// CHttp   tcpURL = new CHttp();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_25 = (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 *)il2cpp_codegen_object_new(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02_il2cpp_TypeInfo_var);
		CHttp__ctor_m7D53495A703BA79107A0AEB83F7ABD296D755855(L_25, /*hidden argument*/NULL);
		V_5 = L_25;
		// if( !tcpURL.ClientOpen(szSerIP, nServerPort) )
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_26 = V_5;
		String_t* L_27 = V_1;
		int32_t L_28 = V_4;
		NullCheck(L_26);
		bool L_29 = CHttp_ClientOpen_m522EB9083EAAD328AFFE1F81336477167487FF91(L_26, L_27, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_008f;
		}
	}
	{
		// return  false;  // ???????
		return (bool)0;
	}

IL_008f:
	{
		// StringBuilder szBuilder = new StringBuilder(512);
		StringBuilder_t * L_30 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_30, ((int32_t)512), /*hidden argument*/NULL);
		// szBuilder.AppendFormat( "GET {0} HTTP/1.1\r\n", szObj );
		StringBuilder_t * L_31 = L_30;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_31, _stringLiteral8DD7E6814FF3632D80DAD50856561E9FB454EAFA, L_32, /*hidden argument*/NULL);
		// szBuilder.AppendFormat( "Host:{0}\r\n", szSerIP );
		StringBuilder_t * L_33 = L_31;
		String_t* L_34 = V_1;
		NullCheck(L_33);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_33, _stringLiteral7C4247743E3918643103E4ECE8D2C86E6F88DCE1, L_34, /*hidden argument*/NULL);
		// szBuilder.Append( "Accept:*/*\r\n" );
		StringBuilder_t * L_35 = L_33;
		NullCheck(L_35);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_35, _stringLiteralF7BDCD20702F616A717CE911D2E3F4C8EECA5C36, /*hidden argument*/NULL);
		// szBuilder.Append( "User-Agent:Mozilla/6.0 (compatible; MSIE 6.00; Android)\r\n" );
		StringBuilder_t * L_36 = L_35;
		NullCheck(L_36);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_36, _stringLiteral0522D7BBB014F89C8168745BCD09001E692EDA9C, /*hidden argument*/NULL);
		// szBuilder.Append( "Connection:close\r\n" );
		StringBuilder_t * L_37 = L_36;
		NullCheck(L_37);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_37, _stringLiteralE711A675F769F292FCCA1DECE1BF67B8E9C12C7B, /*hidden argument*/NULL);
		// szBuilder.Append( "Range: bytes=0-0\r\n");
		StringBuilder_t * L_38 = L_37;
		NullCheck(L_38);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_38, _stringLiteral825C10DB1EAA8BC5ED0D68692D8DD1E935D727A1, /*hidden argument*/NULL);
		// szBuilder.Append( "\r\n" );
		StringBuilder_t * L_39 = L_38;
		NullCheck(L_39);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_39, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		// string  szMsg = szBuilder.ToString();
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		V_6 = L_40;
		// tcpURL.SendToServer(szMsg);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_41 = V_5;
		String_t* L_42 = V_6;
		NullCheck(L_41);
		CHttp_SendToServer_mA7346BBBA4219846A328A878B6808C10333D55F9(L_41, L_42, /*hidden argument*/NULL);
		// byte   []chBuf = new byte[1];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		V_7 = L_43;
		// char   []szTotalRecBuf = new char[1024]; // ????????
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_44 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_8 = L_44;
		// int    nTotalRecLen = 0;
		V_9 = 0;
		// int  nStart = 0;
		V_10 = 0;
	}

IL_011a:
	{
		// int nRecLen = tcpURL.ReceiveChar(chBuf, 1024);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_45 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = CHttp_ReceiveChar_mF3514823E51C2D97C8E0167B84310FDDF5928843(L_45, L_46, ((int32_t)1024), /*hidden argument*/NULL);
		V_12 = L_47;
		// if( nRecLen <= 0 )
		int32_t L_48 = V_12;
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_0177;
		}
	}
	{
		// if( nTotalRecLen + nRecLen > szTotalRecBuf.Length )
		int32_t L_49 = V_9;
		int32_t L_50 = V_12;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_51 = V_8;
		NullCheck(L_51);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50))) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))))
		{
			goto IL_0156;
		}
	}
	{
		// char  []szNewBuf = new char[nTotalRecLen*2];
		int32_t L_52 = V_9;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_53 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_52, (int32_t)2)));
		V_13 = L_53;
		// Array.Copy(szTotalRecBuf, 0, szNewBuf, 0, nTotalRecLen);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_54 = V_8;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_55 = V_13;
		int32_t L_56 = V_9;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_54, 0, (RuntimeArray *)(RuntimeArray *)L_55, 0, L_56, /*hidden argument*/NULL);
		// szTotalRecBuf = szNewBuf;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_57 = V_13;
		V_8 = L_57;
	}

IL_0156:
	{
		// szTotalRecBuf[nTotalRecLen++] = (char)chBuf[0];
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_58 = V_8;
		int32_t L_59 = V_9;
		int32_t L_60 = L_59;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_61 = V_7;
		NullCheck(L_61);
		int32_t L_62 = 0;
		uint8_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Il2CppChar)L_63);
		// nTotalRecLen += 1;
		int32_t L_64 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		// if( FindHttpMsgEndFlags(szTotalRecBuf, nTotalRecLen, ref nStart) )
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_65 = V_8;
		int32_t L_66 = V_9;
		bool L_67 = CHttp_FindHttpMsgEndFlags_m0E20476D53EEF6906A1CD0D644773DB3B1C05051(L_65, L_66, (int32_t*)(&V_10), /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_011a;
		}
	}

IL_0177:
	{
		// tcpURL.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_68 = V_5;
		NullCheck(L_68);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_68, /*hidden argument*/NULL);
		// szTotalRecBuf[nTotalRecLen] = '\0';
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (Il2CppChar)0);
		// string  szAnswer = new string(szTotalRecBuf, 0, nTotalRecLen);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_71 = V_8;
		int32_t L_72 = V_9;
		String_t* L_73 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_71, 0, L_72, /*hidden argument*/NULL);
		V_11 = L_73;
		// szOutURL = GetMiddle(szAnswer, "Location:", "\r\n");
		String_t** L_74 = ___szOutURL1;
		String_t* L_75 = V_11;
		String_t* L_76 = CHttp_GetMiddle_m20C35B393EEED5F08BF1D504AF3C7794A51EC267(L_75, _stringLiteral1BF3994417BEF0651ABB2F6484952B55978E96CA, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		*((RuntimeObject **)L_74) = (RuntimeObject *)L_76;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_74, (void*)(RuntimeObject *)L_76);
		// szOutURL = szOutURL.Trim();
		String_t** L_77 = ___szOutURL1;
		String_t** L_78 = ___szOutURL1;
		String_t* L_79 = *((String_t**)L_78);
		NullCheck(L_79);
		String_t* L_80 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_79, /*hidden argument*/NULL);
		*((RuntimeObject **)L_77) = (RuntimeObject *)L_80;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_77, (void*)(RuntimeObject *)L_80);
		// tcpURL.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_81 = V_5;
		NullCheck(L_81);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_81, /*hidden argument*/NULL);
		// return szOutURL.Length > 0;
		String_t** L_82 = ___szOutURL1;
		String_t* L_83 = *((String_t**)L_82);
		NullCheck(L_83);
		int32_t L_84 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_83, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_84) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CHttp::IsRefURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_IsRefURL_mFF6E556438931C096EA845FC4652E24AC3545189 (String_t* ___szURL0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bool  bRef = false;
		V_0 = (bool)0;
		// for( int i=0, nLen = szURL.Length; i<nLen; i++ )
		V_1 = 0;
		// for( int i=0, nLen = szURL.Length; i<nLen; i++ )
		String_t* L_0 = ___szURL0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		goto IL_0057;
	}

IL_000d:
	{
		// if( szURL[i] == '%'
		//     || szURL[i] == '@'
		//     || szURL[i] == '*'
		//     || szURL[i] == '='
		//     || szURL[i] == ':'
		//     || szURL[i] == '#' )
		String_t* L_2 = ___szURL0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_2, L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)37))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_5 = ___szURL0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_5, L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)64))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_8 = ___szURL0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_8, L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)42))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_11 = ___szURL0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_11, L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)61))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_14 = ___szURL0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Il2CppChar L_16 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_14, L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)58))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_17 = ___szURL0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Il2CppChar L_19 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_17, L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0053;
		}
	}

IL_004f:
	{
		// bRef = true;
		V_0 = (bool)1;
		// break;
		goto IL_005b;
	}

IL_0053:
	{
		// for( int i=0, nLen = szURL.Length; i<nLen; i++ )
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0057:
	{
		// for( int i=0, nLen = szURL.Length; i<nLen; i++ )
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000d;
		}
	}

IL_005b:
	{
		// return  bRef;
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Boolean CHttp::AnlseURL(System.String,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlseURL_m93F35B9EFA1E607E2FD72C2E3749FB33CAB255A6 (String_t* ___szURL0, String_t** ___szPath1, String_t** ___szFileName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_AnlseURL_m93F35B9EFA1E607E2FD72C2E3749FB33CAB255A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int nIndex = szURL.LastIndexOf('/');
		String_t* L_0 = ___szURL0;
		NullCheck(L_0);
		int32_t L_1 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_0, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_1;
		// if( nIndex != -1 )
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0024;
		}
	}
	{
		// szPath     = szURL.Substring(0, nIndex);
		String_t** L_3 = ___szPath1;
		String_t* L_4 = ___szURL0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_4, 0, L_5, /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_6);
		// szFileName = szURL.Substring(nIndex + 1);
		String_t** L_7 = ___szFileName2;
		String_t* L_8 = ___szURL0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)L_7) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)L_10);
		// }
		goto IL_0032;
	}

IL_0024:
	{
		// szPath = string.Empty;
		String_t** L_11 = ___szPath1;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_12);
		// szFileName = string.Empty;
		String_t** L_13 = ___szFileName2;
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		*((RuntimeObject **)L_13) = (RuntimeObject *)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)(RuntimeObject *)L_14);
	}

IL_0032:
	{
		// return  !string.IsNullOrEmpty(szFileName);
		String_t** L_15 = ___szFileName2;
		String_t* L_16 = *((String_t**)L_15);
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CHttp::AnlseURL(System.String&,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlseURL_m3F419BF54450A6895A243B3A8231DB09C1159FB4 (String_t** ___szURL0, String_t** ___szPath1, String_t** ___szFileName2, String_t** ___szExt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_AnlseURL_m3F419BF54450A6895A243B3A8231DB09C1159FB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// szPath = string.Empty;
		String_t** L_0 = ___szPath1;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		// szFileName = string.Empty;
		String_t** L_2 = ___szFileName2;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		// szExt = "*.*";
		String_t** L_4 = ___szExt3;
		*((RuntimeObject **)L_4) = (RuntimeObject *)_stringLiteral4C9E993A0D9A0518E2C981F46FF2341E8A36E47A;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)_stringLiteral4C9E993A0D9A0518E2C981F46FF2341E8A36E47A);
		// string  szScrPath = szURL;
		String_t** L_5 = ___szURL0;
		String_t* L_6 = *((String_t**)L_5);
		V_0 = L_6;
		// int  nIndex = szURL.IndexOf( "ftp://", 0 );
		String_t** L_7 = ___szURL0;
		String_t* L_8 = *((String_t**)L_7);
		NullCheck(L_8);
		int32_t L_9 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_8, _stringLiteral02B576865FEEC6CEA52D30AAB58E274832ACE3E5, 0, /*hidden argument*/NULL);
		V_1 = L_9;
		// if( nIndex != -1 )
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		// nIndex = szURL.IndexOf( "ftp://", 0 );
		String_t** L_11 = ___szURL0;
		String_t* L_12 = *((String_t**)L_11);
		NullCheck(L_12);
		int32_t L_13 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_12, _stringLiteral02B576865FEEC6CEA52D30AAB58E274832ACE3E5, 0, /*hidden argument*/NULL);
		V_1 = L_13;
		// szScrPath = szURL.Substring( nIndex + 6 );
		String_t** L_14 = ___szURL0;
		String_t* L_15 = *((String_t**)L_14);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)6)), /*hidden argument*/NULL);
		V_0 = L_17;
		// }
		goto IL_0083;
	}

IL_0045:
	{
		// nIndex = szURL.IndexOf( "http://", 0 );
		String_t** L_18 = ___szURL0;
		String_t* L_19 = *((String_t**)L_18);
		NullCheck(L_19);
		int32_t L_20 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_19, _stringLiteral43A9519ED4B5E9C75EB7D683E3D1E09708F9B34A, 0, /*hidden argument*/NULL);
		V_1 = L_20;
		// if( nIndex != -1 )
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		// szScrPath = szURL.Substring( nIndex + 7 );
		String_t** L_22 = ___szURL0;
		String_t* L_23 = *((String_t**)L_22);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_23, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)7)), /*hidden argument*/NULL);
		V_0 = L_25;
		// if( szScrPath.IndexOf( "ftp.", 0 ) == 0 )
		String_t* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = String_IndexOf_m9285F4AFCAD971E6AFB6F0212B415989CB3DACA5(L_26, _stringLiteral2B04D92B5349EF5AA92615F16DB05EF0C7D03AAA, 0, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0075;
		}
	}
	{
		// szFileName = szScrPath;
		String_t** L_28 = ___szFileName2;
		String_t* L_29 = V_0;
		*((RuntimeObject **)L_28) = (RuntimeObject *)L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_28, (void*)(RuntimeObject *)L_29);
		// }
		goto IL_0083;
	}

IL_0075:
	{
		// szFileName = "index.htm";
		String_t** L_30 = ___szFileName2;
		*((RuntimeObject **)L_30) = (RuntimeObject *)_stringLiteral2E85FC411158C621357566F9C25E786CC9D074DE;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_30, (void*)(RuntimeObject *)_stringLiteral2E85FC411158C621357566F9C25E786CC9D074DE);
		// szExt      = "*.htm";
		String_t** L_31 = ___szExt3;
		*((RuntimeObject **)L_31) = (RuntimeObject *)_stringLiteral93B8386B6926411CEBF5B3056078FA271D542DD2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_31, (void*)(RuntimeObject *)_stringLiteral93B8386B6926411CEBF5B3056078FA271D542DD2);
	}

IL_0083:
	{
		// nIndex = szScrPath.LastIndexOf( '/' );
		String_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_32, ((int32_t)47), /*hidden argument*/NULL);
		V_1 = L_33;
		// if( nIndex != -1 )
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00cb;
		}
	}
	{
		// szPath = szScrPath.Substring( 0, nIndex );
		String_t** L_35 = ___szPath1;
		String_t* L_36 = V_0;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		String_t* L_38 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_36, 0, L_37, /*hidden argument*/NULL);
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_38;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_38);
		// szFileName = szScrPath.Substring( nIndex + 1 );
		String_t** L_39 = ___szFileName2;
		String_t* L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		String_t* L_42 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_40, ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)L_39) = (RuntimeObject *)L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_39, (void*)(RuntimeObject *)L_42);
		// int  nX = szScrPath.LastIndexOf( '.' );
		String_t* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_43, ((int32_t)46), /*hidden argument*/NULL);
		V_2 = L_44;
		// if( nX != -1 && nX > nIndex )
		int32_t L_45 = V_2;
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_00cb;
		}
	}
	{
		// szExt = szScrPath.Substring( nX + 1 );
		String_t** L_48 = ___szExt3;
		String_t* L_49 = V_0;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		String_t* L_51 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_49, ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)L_48) = (RuntimeObject *)L_51;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_48, (void*)(RuntimeObject *)L_51);
		// nX = szFileName.LastIndexOf( '.' );
		String_t** L_52 = ___szFileName2;
		String_t* L_53 = *((String_t**)L_52);
		NullCheck(L_53);
		int32_t L_54 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_53, ((int32_t)46), /*hidden argument*/NULL);
		V_2 = L_54;
	}

IL_00cb:
	{
		// if( IsRefURL(szFileName) )
		String_t** L_55 = ___szFileName2;
		String_t* L_56 = *((String_t**)L_55);
		bool L_57 = CHttp_IsRefURL_mFF6E556438931C096EA845FC4652E24AC3545189(L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_00e7;
		}
	}
	{
		// if( GetInetURL(szScrPath, ref szURL) )
		String_t* L_58 = V_0;
		String_t** L_59 = ___szURL0;
		bool L_60 = CHttp_GetInetURL_m348F0E98FC3A6D456D073F9990A95FF7A0D418E3(L_58, (String_t**)L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_00e7;
		}
	}
	{
		// return   AnlseURL(ref szURL, ref szPath, ref szFileName, ref szExt);  // ??????
		String_t** L_61 = ___szURL0;
		String_t** L_62 = ___szPath1;
		String_t** L_63 = ___szFileName2;
		String_t** L_64 = ___szExt3;
		bool L_65 = CHttp_AnlseURL_m3F419BF54450A6895A243B3A8231DB09C1159FB4((String_t**)L_61, (String_t**)L_62, (String_t**)L_63, (String_t**)L_64, /*hidden argument*/NULL);
		return L_65;
	}

IL_00e7:
	{
		// return  !string.IsNullOrEmpty(szFileName);
		String_t** L_66 = ___szFileName2;
		String_t* L_67 = *((String_t**)L_66);
		bool L_68 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_67, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean CHttp::AnlseURL(System.String&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttp_AnlseURL_m95F663AE12E23D3BC664CD4CE220E78A621142CF (String_t** ___szRealURL0, String_t* ___szOldURL1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttp_AnlseURL_m95F663AE12E23D3BC664CD4CE220E78A621142CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// szRealURL = szOldURL;
		String_t** L_0 = ___szRealURL0;
		String_t* L_1 = ___szOldURL1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		// string szPath = string.Empty, szFileName = string.Empty, szExt = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_2;
		// string szPath = string.Empty, szFileName = string.Empty, szExt = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_3;
		// string szPath = string.Empty, szFileName = string.Empty, szExt = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_4;
		// return  AnlseURL( ref szRealURL, ref szPath, ref szFileName, ref szExt );
		String_t** L_5 = ___szRealURL0;
		bool L_6 = CHttp_AnlseURL_m3F419BF54450A6895A243B3A8231DB09C1159FB4((String_t**)L_5, (String_t**)(&V_0), (String_t**)(&V_1), (String_t**)(&V_2), /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CHttpDown::GetDownFileSize(System.String,System.Int32&,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDown_GetDownFileSize_m4D459E98F92099A3E1B12A6E19CCCF92EF47AF36 (String_t* ___url0, int32_t* ___nOutFileSize1, int64_t ___nRandSeed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDown_GetDownFileSize_m4D459E98F92099A3E1B12A6E19CCCF92EF47AF36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// nOutFileSize = 0;
		int32_t* L_0 = ___nOutFileSize1;
		*((int32_t*)L_0) = (int32_t)0;
		// CHttp http = new CHttp(nRandSeed);
		int64_t L_1 = ___nRandSeed2;
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_2 = (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 *)il2cpp_codegen_object_new(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02_il2cpp_TypeInfo_var);
		CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_3;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_4;
		// int nPort = 80;
		V_3 = ((int32_t)80);
		// http.ParseURL(url, ref szServerIP, ref szObj, ref nPort);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_5 = V_0;
		String_t* L_6 = ___url0;
		NullCheck(L_5);
		CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF(L_5, L_6, (String_t**)(&V_1), (String_t**)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// string szAnswer = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_4 = L_7;
		// if (!http.QueryFile(ref szAnswer, szServerIP, nPort, szObj, 0, 1, false))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_8 = V_0;
		String_t* L_9 = V_1;
		int32_t L_10 = V_3;
		String_t* L_11 = V_2;
		NullCheck(L_8);
		bool L_12 = CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2(L_8, (String_t**)(&V_4), L_9, L_10, L_11, 0, 1, (bool)0, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_13 = V_0;
		NullCheck(L_13);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_13, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0045:
	{
		// int nDownSize = 0, nFileSize = 0;
		V_5 = 0;
		// int nDownSize = 0, nFileSize = 0;
		V_6 = 0;
		// if (!http.AnlyseFileLengthFromAnswer(szAnswer, ref nDownSize, ref nFileSize))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_14 = V_0;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8(L_14, L_15, (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_17 = V_0;
		NullCheck(L_17);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_17, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0061:
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_18 = V_0;
		NullCheck(L_18);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_18, /*hidden argument*/NULL);
		// nOutFileSize = nFileSize;
		int32_t* L_19 = ___nOutFileSize1;
		int32_t L_20 = V_6;
		*((int32_t*)L_19) = (int32_t)L_20;
		// return true;
		return (bool)1;
	}
}
// System.Boolean CHttpDown::DownFile(System.String,System.String,System.Int32,System.Int32,System.Int64,CHttpDown_LPOnReceiveDownFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDown_DownFile_m514BBF45D1217B3B595284691EA30AE8F78EC81B (String_t* ___url0, String_t* ___szLocalPathName1, int32_t ___nNeedDownOffset2, int32_t ___nNeedDownSize3, int64_t ___nRandSeed4, LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * ___lpReceiveFunc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDown_DownFile_m514BBF45D1217B3B595284691EA30AE8F78EC81B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_7 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// CHttp http = new CHttp(nRandSeed);
		int64_t L_0 = ___nRandSeed4;
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_1 = (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 *)il2cpp_codegen_object_new(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02_il2cpp_TypeInfo_var);
		CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// string  szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_2;
		// string  szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_3;
		// int   nPort = 80;
		V_3 = ((int32_t)80);
		// http.ParseURL(url, ref szServerIP, ref szObj, ref nPort);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_4 = V_0;
		String_t* L_5 = ___url0;
		NullCheck(L_4);
		CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF(L_4, L_5, (String_t**)(&V_1), (String_t**)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// string  szAnswer = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_4 = L_6;
		// if (!http.QueryFile(ref szAnswer, szServerIP, nPort, szObj, nNeedDownOffset, nNeedDownSize, nNeedDownSize <= 0))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_7 = V_0;
		String_t* L_8 = V_1;
		int32_t L_9 = V_3;
		String_t* L_10 = V_2;
		int32_t L_11 = ___nNeedDownOffset2;
		int32_t L_12 = ___nNeedDownSize3;
		int32_t L_13 = ___nNeedDownSize3;
		NullCheck(L_7);
		bool L_14 = CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2(L_7, (String_t**)(&V_4), L_8, L_9, L_10, L_11, L_12, (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_15 = V_0;
		NullCheck(L_15);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_15, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0049:
	{
		// int nDownSize = 0, nFileSize = 0;
		V_5 = 0;
		// int nDownSize = 0, nFileSize = 0;
		V_6 = 0;
		// if (!http.AnlyseFileLengthFromAnswer(szAnswer, ref nDownSize, ref nFileSize))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_16 = V_0;
		String_t* L_17 = V_4;
		NullCheck(L_16);
		bool L_18 = CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8(L_16, L_17, (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_19 = V_0;
		NullCheck(L_19);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_19, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0065:
	{
		// if( nNeedDownSize <= 0 )
		int32_t L_20 = ___nNeedDownSize3;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// nDownSize = nFileSize;  // ??????
		int32_t L_21 = V_6;
		V_5 = L_21;
	}

IL_006d:
	{
		// if (File.Exists(szLocalPathName))
		String_t* L_22 = ___szLocalPathName1;
		bool L_23 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_007b;
		}
	}
	{
		// File.Delete(szLocalPathName);
		String_t* L_24 = ___szLocalPathName1;
		File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_24, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// FileStream pFile = new FileStream(szLocalPathName, FileMode.CreateNew, FileAccess.Write);
		String_t* L_25 = ___szLocalPathName1;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_26 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m49CE3FAF4AEF5EE690E5E53A95749F3C4414C47B(L_26, L_25, 1, 2, /*hidden argument*/NULL);
		V_7 = L_26;
		// byte[] szTempBuf = null;
		V_8 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		// int    nRecTotal = 0;
		V_9 = 0;
		// int    nRecLen = 0;
		V_10 = 0;
		// int    nOffset = 0;
		V_11 = 0;
		goto IL_00c6;
	}

IL_0093:
	{
		// nRecLen = http.FastReceiveMax(ref szTempBuf, ref nOffset);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = CHttp_FastReceiveMax_m4E85F64AAAF47F8905D2959F277E17D072EFFCA7(L_27, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_8), (int32_t*)(&V_11), 0, /*hidden argument*/NULL);
		V_10 = L_28;
		// if (nRecLen > 0)
		int32_t L_29 = V_10;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		// if (lpReceiveFunc != null)
		LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * L_30 = ___lpReceiveFunc5;
		if (!L_30)
		{
			goto IL_00b2;
		}
	}
	{
		// lpReceiveFunc(nRecLen);
		LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * L_31 = ___lpReceiveFunc5;
		int32_t L_32 = V_10;
		NullCheck(L_31);
		LPOnReceiveDownFile_Invoke_m07B1D97BEC175737EFF101CB2701A7D05F18412B(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		// nRecTotal += nRecLen;
		int32_t L_33 = V_9;
		int32_t L_34 = V_10;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
		// pFile.Write(szTempBuf, nOffset, nRecLen);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_35 = V_7;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = V_8;
		int32_t L_37 = V_11;
		int32_t L_38 = V_10;
		NullCheck(L_35);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_35, L_36, L_37, L_38);
	}

IL_00c6:
	{
		// while (nRecTotal < nDownSize)
		int32_t L_39 = V_9;
		int32_t L_40 = V_5;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0093;
		}
	}

IL_00cc:
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_41 = V_0;
		NullCheck(L_41);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_41, /*hidden argument*/NULL);
		// pFile.Close();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_42 = V_7;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_42);
		// return nRecTotal == nDownSize;
		int32_t L_43 = V_9;
		int32_t L_44 = V_5;
		return (bool)((((int32_t)L_43) == ((int32_t)L_44))? 1 : 0);
	}
}
// System.Boolean CHttpDown::DownFile(System.String,System.Byte[]&,System.Int32,System.Int32,System.Int64,CHttpDown_LPOnReceiveDownFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDown_DownFile_mD14928C8A2264FDFA83F54009C6800B30F027F5C (String_t* ___url0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___szFileData1, int32_t ___nDownOffset2, int32_t ___nNeedDownSize3, int64_t ___nRandSeed4, LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * ___lpReceiveFunc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDown_DownFile_mD14928C8A2264FDFA83F54009C6800B30F027F5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// szFileData = null;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___szFileData1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// CHttp http = new CHttp(nRandSeed);
		int64_t L_1 = ___nRandSeed4;
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_2 = (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 *)il2cpp_codegen_object_new(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02_il2cpp_TypeInfo_var);
		CHttp__ctor_mBED01A93856B8411AD6BF53D31DD056465043FDE(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_3;
		// string szServerIP = string.Empty, szObj = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_4;
		// int nPort = 80;
		V_3 = ((int32_t)80);
		// http.ParseURL(url, ref szServerIP, ref szObj, ref nPort);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_5 = V_0;
		String_t* L_6 = ___url0;
		NullCheck(L_5);
		CHttp_ParseURL_mD30671D6CFF0D46900427A76586E5492B1C150AF(L_5, L_6, (String_t**)(&V_1), (String_t**)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		// string szAnswer = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_4 = L_7;
		// if (!http.QueryFile(ref szAnswer, szServerIP, nPort, szObj, nDownOffset, nNeedDownSize, nNeedDownSize <= 0))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_8 = V_0;
		String_t* L_9 = V_1;
		int32_t L_10 = V_3;
		String_t* L_11 = V_2;
		int32_t L_12 = ___nDownOffset2;
		int32_t L_13 = ___nNeedDownSize3;
		int32_t L_14 = ___nNeedDownSize3;
		NullCheck(L_8);
		bool L_15 = CHttp_QueryFile_mD27E48CDD145B9C716C1559AB5181E03B388F5A2(L_8, (String_t**)(&V_4), L_9, L_10, L_11, L_12, L_13, (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_004c;
		}
	}
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_16 = V_0;
		NullCheck(L_16);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_16, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// int nDownSize = 0, nFileSize = 0;
		V_5 = 0;
		// int nDownSize = 0, nFileSize = 0;
		V_6 = 0;
		// if (!http.AnlyseFileLengthFromAnswer(szAnswer, ref nDownSize, ref nFileSize))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_17 = V_0;
		String_t* L_18 = V_4;
		NullCheck(L_17);
		bool L_19 = CHttp_AnlyseFileLengthFromAnswer_mB6A960149343243509C160129D4B5FE5FF186BA8(L_17, L_18, (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0068;
		}
	}
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_20 = V_0;
		NullCheck(L_20);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_20, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0068:
	{
		// nDownSize = nFileSize;
		int32_t L_21 = V_6;
		V_5 = L_21;
		// byte[] szTempBuf = null;
		V_7 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		// szFileData = new byte[nFileSize];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_22 = ___szFileData1;
		int32_t L_23 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_23);
		*((RuntimeObject **)L_22) = (RuntimeObject *)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_22, (void*)(RuntimeObject *)L_24);
		// int nRecTotal = 0;
		V_8 = 0;
		// int nRecLen = 0;
		V_9 = 0;
		// int nOffset = 0;
		V_10 = 0;
		goto IL_00b8;
	}

IL_0083:
	{
		// nRecLen = http.FastReceiveMax(ref szTempBuf, ref nOffset);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = CHttp_FastReceiveMax_m4E85F64AAAF47F8905D2959F277E17D072EFFCA7(L_25, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_7), (int32_t*)(&V_10), 0, /*hidden argument*/NULL);
		V_9 = L_26;
		// if (nRecLen > 0)
		int32_t L_27 = V_9;
		if ((((int32_t)L_27) <= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		// if( lpReceiveFunc != null )
		LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * L_28 = ___lpReceiveFunc5;
		if (!L_28)
		{
			goto IL_00a2;
		}
	}
	{
		// lpReceiveFunc(nRecLen);
		LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * L_29 = ___lpReceiveFunc5;
		int32_t L_30 = V_9;
		NullCheck(L_29);
		LPOnReceiveDownFile_Invoke_m07B1D97BEC175737EFF101CB2701A7D05F18412B(L_29, L_30, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// Array.Copy(szTempBuf, nOffset, szFileData, nRecTotal, nRecLen);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_7;
		int32_t L_32 = V_10;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_33 = ___szFileData1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = *((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)L_33);
		int32_t L_35 = V_8;
		int32_t L_36 = V_9;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_31, L_32, (RuntimeArray *)(RuntimeArray *)L_34, L_35, L_36, /*hidden argument*/NULL);
		// nRecTotal += nRecLen;
		int32_t L_37 = V_8;
		int32_t L_38 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38));
	}

IL_00b8:
	{
		// while (nRecTotal < nDownSize)
		int32_t L_39 = V_8;
		int32_t L_40 = V_5;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0083;
		}
	}

IL_00be:
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_41 = V_0;
		NullCheck(L_41);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_41, /*hidden argument*/NULL);
		// return nRecTotal == nDownSize;
		int32_t L_42 = V_8;
		int32_t L_43 = V_5;
		return (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
	}
}
// System.Void CHttpDown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDown__ctor_m5A2B53C2D540860AD9F00E44018FD2F7E7E9AAEE (CHttpDown_tBD7472F916B0E853A09D07B96FB080E052D2A794 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 (LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * __this, int32_t ___nRecvSize0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___nRecvSize0);

}
// System.Void CHttpDown_LPOnReceiveDownFile::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LPOnReceiveDownFile__ctor_m5D1AB47F57A69F9DC4D64EDABABB26BDACA86BE6 (LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CHttpDown_LPOnReceiveDownFile::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LPOnReceiveDownFile_Invoke_m07B1D97BEC175737EFF101CB2701A7D05F18412B (LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * __this, int32_t ___nRecvSize0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___nRecvSize0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___nRecvSize0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___nRecvSize0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___nRecvSize0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___nRecvSize0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___nRecvSize0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___nRecvSize0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___nRecvSize0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___nRecvSize0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CHttpDown_LPOnReceiveDownFile::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LPOnReceiveDownFile_BeginInvoke_m5DF9CA0DADAA0126F4AFF566A5C9A8AA0D68A8E2 (LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * __this, int32_t ___nRecvSize0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LPOnReceiveDownFile_BeginInvoke_m5DF9CA0DADAA0126F4AFF566A5C9A8AA0D68A8E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___nRecvSize0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void CHttpDown_LPOnReceiveDownFile::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LPOnReceiveDownFile_EndInvoke_mDBC20D03BC54ABBD0D51D1D8B1F6725F8648D4A6 (LPOnReceiveDownFile_t21505A74DEEE01087F9D3CA3BC399C4EFDF39008 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CHttpDownMng::StartDown(System.Collections.Generic.List`1<DownResInfo>,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_StartDown_mC179EDC64F87CD4DF35C97D6B39E22D23FAB1EC5 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * ___downList0, int32_t ___nDownThreadNumb1, int32_t ___nLimitDownSize2, String_t* ___szLocalSavePath3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_StartDown_mC179EDC64F87CD4DF35C97D6B39E22D23FAB1EC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * V_3 = NULL;
	{
		// m_nDownSize = 0;
		__this->set_m_nDownSize_8((((int64_t)((int64_t)0))));
		// m_nTotalDownSize = 0;
		__this->set_m_nTotalDownSize_9((((int64_t)((int64_t)0))));
		// m_nTotalNeedDownSize = 0;
		__this->set_m_nTotalNeedDownSize_10((((int64_t)((int64_t)0))));
		// m_nLimitDownSize = nLimitDownSize;
		int32_t L_0 = ___nLimitDownSize2;
		__this->set_m_nLimitDownSize_11((((int64_t)((int64_t)L_0))));
		// m_nLastTime = 0;
		__this->set_m_nLastTime_12((((int64_t)((int64_t)0))));
		// m_szLocalSavePath = szLocalSavePath;
		String_t* L_1 = ___szLocalSavePath3;
		__this->set_m_szLocalSavePath_13(L_1);
		// for (int i = downList.Count - 1; i>= 0; --i)
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_2 = ___downList0;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_inline(L_2, /*hidden argument*/List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		goto IL_0059;
	}

IL_003b:
	{
		// m_nTotalNeedDownSize += downList[i].nFileSize;
		int64_t L_4 = __this->get_m_nTotalNeedDownSize_10();
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_5 = ___downList0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_7 = List_1_get_Item_mDB7F9F0CE606F26C0B4CF5D048495684EBF12BEE_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mDB7F9F0CE606F26C0B4CF5D048495684EBF12BEE_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_nFileSize_2();
		__this->set_m_nTotalNeedDownSize_10(((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)(((int64_t)((int64_t)L_8))))));
		// for (int i = downList.Count - 1; i>= 0; --i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = downList.Count - 1; i>= 0; --i)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// if (nDownThreadNumb > downList.Count)
		int32_t L_11 = ___nDownThreadNumb1;
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_12 = ___downList0;
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_inline(L_12, /*hidden argument*/List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_006e;
		}
	}
	{
		// nDownThreadNumb = downList.Count;
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_14 = ___downList0;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_inline(L_14, /*hidden argument*/List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_RuntimeMethod_var);
		___nDownThreadNumb1 = L_15;
	}

IL_006e:
	{
		// m_DownList   = downList;
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_16 = ___downList0;
		__this->set_m_DownList_0(L_16);
		// m_nDownCount = downList.Count;
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_17 = ___downList0;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_inline(L_17, /*hidden argument*/List_1_get_Count_mE9EFEE7C763A02B4BA8724965ED2C7FCF7ADD28B_RuntimeMethod_var);
		__this->set_m_nDownCount_2(L_18);
		// m_nNextDownIndex = 0;
		__this->set_m_nNextDownIndex_1(0);
		// m_nDownThreadNumb = nDownThreadNumb;
		int32_t L_19 = ___nDownThreadNumb1;
		__this->set_m_nDownThreadNumb_3(L_19);
		// m_runThreads = new Thread[nDownThreadNumb];
		int32_t L_20 = ___nDownThreadNumb1;
		ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866* L_21 = (ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866*)(ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866*)SZArrayNew(ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866_il2cpp_TypeInfo_var, (uint32_t)L_20);
		__this->set_m_runThreads_6(L_21);
		// for (int i = 0; i< nDownThreadNumb; ++i)
		V_2 = 0;
		goto IL_00c5;
	}

IL_009f:
	{
		// Thread t = new Thread(ThreadFunc);
		ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F * L_22 = (ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F *)il2cpp_codegen_object_new(ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m236F11FFFC55CB6AC611B16302E2F5F58C60346B(L_22, NULL, (intptr_t)((intptr_t)CHttpDownMng_ThreadFunc_mA42DD2F654BA9B97A53F0BF5A22DDAB2C261201D_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_23 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m10768310462BE1A521AB4BB70F483741C993ADFD(L_23, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		// t.Start(this);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_24 = V_3;
		NullCheck(L_24);
		Thread_Start_m3D27E6E9735ED3B6BF2CD332B8D90E7E8CE21933(L_24, __this, /*hidden argument*/NULL);
		// m_runThreads[i] = t;
		ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866* L_25 = __this->get_m_runThreads_6();
		int32_t L_26 = V_2;
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_27 = V_3;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)L_27);
		// for (int i = 0; i< nDownThreadNumb; ++i)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c5:
	{
		// for (int i = 0; i< nDownThreadNumb; ++i)
		int32_t L_29 = V_2;
		int32_t L_30 = ___nDownThreadNumb1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_009f;
		}
	}
	{
		// m_nWriteThreadNumb = 1;
		__this->set_m_nWriteThreadNumb_4(1);
		// Thread tw = new Thread(WriteThreadFunc);
		ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F * L_31 = (ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F *)il2cpp_codegen_object_new(ParameterizedThreadStart_tB0BBCC1B5B33EBCFE37B9B91840464DBF124218F_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m236F11FFFC55CB6AC611B16302E2F5F58C60346B(L_31, NULL, (intptr_t)((intptr_t)CHttpDownMng_WriteThreadFunc_mECD2375C0183BBB82F441593FADE42E2CE481FC4_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_32 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m10768310462BE1A521AB4BB70F483741C993ADFD(L_32, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		// tw.Start(this);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_33 = V_0;
		NullCheck(L_33);
		Thread_Start_m3D27E6E9735ED3B6BF2CD332B8D90E7E8CE21933(L_33, __this, /*hidden argument*/NULL);
		// m_runWriteThread = tw;
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_34 = V_0;
		__this->set_m_runWriteThread_7(L_34);
		// }
		return;
	}
}
// System.Void CHttpDownMng::StopDown(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_StopDown_mC81BB073F12498D5DC0A125D3D07ED72E2EE5EB2 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, bool ___bAbort0, bool ___bWait1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(m_nDownThreadNumb > 0)
		int32_t L_0 = __this->get_m_nDownThreadNumb_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// m_bNeedStop = true;
		__this->set_m_bNeedStop_5((bool)1);
		// if (bAbort)
		bool L_1 = ___bAbort0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// int nThreadNumb = m_nDownThreadNumb;
		int32_t L_2 = __this->get_m_nDownThreadNumb_3();
		V_0 = L_2;
		// for (int i = 0; i < nThreadNumb; ++i)
		V_1 = 0;
		goto IL_002f;
	}

IL_001e:
	{
		// m_runThreads[i].Abort();
		ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866* L_3 = __this->get_m_runThreads_6();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Thread_Abort_mFF7FBB8E9DAF2ABC8DD85C48F6BDB91502B7DA44(L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < nThreadNumb; ++i)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < nThreadNumb; ++i)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001e;
		}
	}
	{
		// m_nDownThreadNumb = 0;
		__this->set_m_nDownThreadNumb_3(0);
		// if (m_runWriteThread != null)
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_10 = __this->get_m_runWriteThread_7();
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		// m_runWriteThread.Abort();
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_11 = __this->get_m_runWriteThread_7();
		NullCheck(L_11);
		Thread_Abort_mFF7FBB8E9DAF2ABC8DD85C48F6BDB91502B7DA44(L_11, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// m_nWriteThreadNumb = 0;
		__this->set_m_nWriteThreadNumb_4(0);
	}

IL_0054:
	{
		// m_runThreads = null;
		__this->set_m_runThreads_6((ThreadU5BU5D_t300217D81F9B791A2813CC625D384FA082DA4866*)NULL);
	}

IL_005b:
	{
		// if(!bAbort && bWait)
		bool L_12 = ___bAbort0;
		bool L_13 = ___bWait1;
		if (!((int32_t)((int32_t)((((int32_t)L_12) == ((int32_t)0))? 1 : 0)&(int32_t)L_13)))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_006b;
	}

IL_0065:
	{
		// Thread.Sleep(1); // ????????
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(1, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// while (m_nDownThreadNumb > 0 || m_nWriteThreadNumb > 0)
		int32_t L_14 = __this->get_m_nDownThreadNumb_3();
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_15 = __this->get_m_nWriteThreadNumb_4();
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void CHttpDownMng::ThreadFunc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_ThreadFunc_mA42DD2F654BA9B97A53F0BF5A22DDAB2C261201D (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_ThreadFunc_mA42DD2F654BA9B97A53F0BF5A22DDAB2C261201D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CHttpDownMng  pMng = obj as CHttpDownMng;
		RuntimeObject * L_0 = ___obj0;
		// pMng.DownThread();
		NullCheck(((CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 *)IsInstClass((RuntimeObject*)L_0, CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768_il2cpp_TypeInfo_var)));
		CHttpDownMng_DownThread_m531390A9BE58810C08201C02C5F0181187C6D70D(((CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 *)IsInstClass((RuntimeObject*)L_0, CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CHttpDownMng::WriteThreadFunc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WriteThreadFunc_mECD2375C0183BBB82F441593FADE42E2CE481FC4 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_WriteThreadFunc_mECD2375C0183BBB82F441593FADE42E2CE481FC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CHttpDownMng pMng = obj as CHttpDownMng;
		RuntimeObject * L_0 = ___obj0;
		// pMng.WriteThread();
		NullCheck(((CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 *)IsInstClass((RuntimeObject*)L_0, CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768_il2cpp_TypeInfo_var)));
		CHttpDownMng_WriteThread_m951401BF8F48FE21F8A8D3FE49879BA6C24210EA(((CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 *)IsInstClass((RuntimeObject*)L_0, CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CHttpDownMng::PopDownFileInfo(DownResInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDownMng_PopDownFileInfo_m4919F072E4AEBED97F5478838DB2DDB5A1CAFBA1 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 ** ___resInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_PopDownFileInfo_m4919F072E4AEBED97F5478838DB2DDB5A1CAFBA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// resInfo = null;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 ** L_0 = ___resInfo0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (m_bNeedStop)
		bool L_1 = __this->get_m_bNeedStop_5();
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// lock(this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_2 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (m_nNextDownIndex < m_nDownCount)
			int32_t L_3 = __this->get_m_nNextDownIndex_1();
			int32_t L_4 = __this->get_m_nDownCount_2();
			if ((((int32_t)L_3) >= ((int32_t)L_4)))
			{
				goto IL_0045;
			}
		}

IL_0027:
		{
			// resInfo = m_DownList[m_nNextDownIndex++];
			DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 ** L_5 = ___resInfo0;
			List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_6 = __this->get_m_DownList_0();
			int32_t L_7 = __this->get_m_nNextDownIndex_1();
			V_2 = L_7;
			int32_t L_8 = V_2;
			__this->set_m_nNextDownIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
			int32_t L_9 = V_2;
			NullCheck(L_6);
			DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_10 = List_1_get_Item_mDB7F9F0CE606F26C0B4CF5D048495684EBF12BEE_inline(L_6, L_9, /*hidden argument*/List_1_get_Item_mDB7F9F0CE606F26C0B4CF5D048495684EBF12BEE_RuntimeMethod_var);
			*((RuntimeObject **)L_5) = (RuntimeObject *)L_10;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_10);
		}

IL_0045:
		{
			// }
			IL2CPP_LEAVE(0x51, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_12 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_12, /*hidden argument*/NULL);
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(71)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		// return resInfo != null;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 ** L_13 = ___resInfo0;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_14 = *((DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 **)L_13);
		return (bool)((!(((RuntimeObject*)(DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void CHttpDownMng::DownThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_DownThread_m531390A9BE58810C08201C02C5F0181187C6D70D (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_DownThread_m531390A9BE58810C08201C02C5F0181187C6D70D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * V_0 = NULL;
	CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * V_1 = NULL;
	{
		// DownResInfo resInfo = null;
		V_0 = (DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 *)NULL;
		// CHttp http = new CHttp();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_0 = (CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 *)il2cpp_codegen_object_new(CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02_il2cpp_TypeInfo_var);
		CHttp__ctor_m7D53495A703BA79107A0AEB83F7ABD296D755855(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		goto IL_002d;
	}

IL_000a:
	{
		// if (PopDownFileInfo(out resInfo))
		bool L_1 = CHttpDownMng_PopDownFileInfo_m4919F072E4AEBED97F5478838DB2DDB5A1CAFBA1(__this, (DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// DownFile(http, resInfo.url, resInfo.nFileSize, resInfo.nDownSize);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_2 = V_1;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_url_0();
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_nFileSize_2();
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_nDownSize_1();
		CHttpDownMng_DownFile_mCDB238F99C1C5941468CF9A5C765E070A62B2EED(__this, L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// while (!m_bNeedStop)
		bool L_9 = __this->get_m_bNeedStop_5();
		if (!L_9)
		{
			goto IL_000a;
		}
	}

IL_0035:
	{
		// http.Close();
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_10 = V_1;
		NullCheck(L_10);
		CHttp_Close_m863F5088609841D79348BDD49B16EC25C1A95B87(L_10, /*hidden argument*/NULL);
		// System.Threading.Interlocked.Decrement(ref m_nDownThreadNumb);
		int32_t* L_11 = __this->get_address_of_m_nDownThreadNumb_3();
		Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE((int32_t*)L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CHttpDownMng::IsNeedLimitDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDownMng_IsNeedLimitDown_mB9B544589DB9AA867353A5D13B46A1E094D8C8B7 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_IsNeedLimitDown_mB9B544589DB9AA867353A5D13B46A1E094D8C8B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_0 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (m_nDownSize > m_nLimitDownSize)
			int64_t L_1 = __this->get_m_nDownSize_8();
			int64_t L_2 = __this->get_m_nLimitDownSize_11();
			if ((((int64_t)L_1) <= ((int64_t)L_2)))
			{
				goto IL_006b;
			}
		}

IL_001a:
		{
			// long nNow = System.DateTime.Now.Ticks / 10000;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
			DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
			V_4 = L_3;
			int64_t L_4 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_4), /*hidden argument*/NULL);
			V_2 = ((int64_t)((int64_t)L_4/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
			// if (0 == m_nLastTime)
			int64_t L_5 = __this->get_m_nLastTime_12();
			if (L_5)
			{
				goto IL_003f;
			}
		}

IL_0038:
		{
			// m_nLastTime = nNow;
			int64_t L_6 = V_2;
			__this->set_m_nLastTime_12(L_6);
		}

IL_003f:
		{
			// long nPassTime = nNow - m_nLastTime;
			int64_t L_7 = V_2;
			int64_t L_8 = __this->get_m_nLastTime_12();
			V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)L_8));
			// if (nPassTime < 1)
			int64_t L_9 = V_3;
			if ((((int64_t)L_9) >= ((int64_t)(((int64_t)((int64_t)1))))))
			{
				goto IL_0050;
			}
		}

IL_004d:
		{
			// nPassTime = 1;
			V_3 = (((int64_t)((int64_t)1)));
		}

IL_0050:
		{
			// return m_nDownSize * 1000 / nPassTime > m_nLimitDownSize;
			int64_t L_10 = __this->get_m_nDownSize_8();
			int64_t L_11 = V_3;
			int64_t L_12 = __this->get_m_nLimitDownSize_11();
			V_5 = (bool)((((int64_t)((int64_t)((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_10, (int64_t)(((int64_t)((int64_t)((int32_t)1000))))))/(int64_t)L_11))) > ((int64_t)L_12))? 1 : 0);
			IL2CPP_LEAVE(0x79, FINALLY_006d);
		}

IL_006b:
		{
			// }
			IL2CPP_LEAVE(0x77, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_14 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_14, /*hidden argument*/NULL);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(109)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
		// return false;
		return (bool)0;
	}

IL_0079:
	{
		// }
		bool L_15 = V_5;
		return L_15;
	}
}
// System.Void CHttpDownMng::LimitSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_LimitSpeed_m52A4A43C598BB2A4AA7D7426C3ABB37309ABB5B3 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method)
{
	{
		goto IL_0009;
	}

IL_0002:
	{
		// Thread.Sleep(10);
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(((int32_t)10), /*hidden argument*/NULL);
	}

IL_0009:
	{
		// while (IsNeedLimitDown())
		bool L_0 = CHttpDownMng_IsNeedLimitDown_mB9B544589DB9AA867353A5D13B46A1E094D8C8B7(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CHttpDownMng::DownFile(CHttp,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_DownFile_mCDB238F99C1C5941468CF9A5C765E070A62B2EED (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * ___http0, String_t* ___url1, int32_t ___nFileSize2, int32_t ___nLastDownSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_DownFile_mCDB238F99C1C5941468CF9A5C765E070A62B2EED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B8_0 = 0;
	{
		// if (nFileSize == 0)
		int32_t L_0 = ___nFileSize2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// CHttpDown.GetDownFileSize(url, out nFileSize);
		String_t* L_1 = ___url1;
		CHttpDown_GetDownFileSize_m4D459E98F92099A3E1B12A6E19CCCF92EF47AF36(L_1, (int32_t*)(&___nFileSize2), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_000e:
	{
		// DownResFile resInfo = new DownResFile();
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_2 = (DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 *)il2cpp_codegen_object_new(DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81_il2cpp_TypeInfo_var);
		DownResFile__ctor_m14BA3B2A53FE1C1E64EBEB2B2E48AA1ACBAABFD5(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		// resInfo.url = url;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_3 = V_0;
		String_t* L_4 = ___url1;
		NullCheck(L_3);
		L_3->set_url_0(L_4);
		// resInfo.nFileSize = 0;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_nFileSize_1(0);
		// if (0 == nFileSize)
		int32_t L_6 = ___nFileSize2;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		// bool bSuc = DownPart(http, url, 0, 0, nFileSize, resInfo);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_7 = ___http0;
		String_t* L_8 = ___url1;
		int32_t L_9 = ___nFileSize2;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_10 = V_0;
		bool L_11 = CHttpDownMng_DownPart_mA329C5BDA075CAA3C1AA59CE5371A333EEC4FFDD(__this, L_7, L_8, 0, 0, L_9, L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// NotifyDownEvent(url, bSuc, resInfo);
		String_t* L_12 = ___url1;
		bool L_13 = V_4;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_14 = V_0;
		CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// return ;
		return;
	}

IL_003e:
	{
		// int nPageSize = 1024 * 300; // ???????????????????, ??????300K???????????
		V_1 = ((int32_t)307200);
		// int nFileOffset = nLastDownSize;  // ?????????????
		int32_t L_15 = ___nLastDownSize3;
		V_2 = L_15;
		// int nDownSize = 0;
		V_3 = 0;
		goto IL_007a;
	}

IL_004b:
	{
		// LimitSpeed();
		CHttpDownMng_LimitSpeed_m52A4A43C598BB2A4AA7D7426C3ABB37309ABB5B3(__this, /*hidden argument*/NULL);
		// nDownSize = nFileOffset + nPageSize < nFileSize ? nPageSize : (nFileSize - nFileOffset);
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = ___nFileSize2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17))) < ((int32_t)L_18)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_19 = ___nFileSize2;
		int32_t L_20 = V_2;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
		goto IL_005d;
	}

IL_005c:
	{
		int32_t L_21 = V_1;
		G_B8_0 = L_21;
	}

IL_005d:
	{
		V_3 = G_B8_0;
		// if (!DownPart(http, url, nFileOffset, nDownSize, nFileSize, resInfo))
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_22 = ___http0;
		String_t* L_23 = ___url1;
		int32_t L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = ___nFileSize2;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_27 = V_0;
		bool L_28 = CHttpDownMng_DownPart_mA329C5BDA075CAA3C1AA59CE5371A333EEC4FFDD(__this, L_22, L_23, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0076;
		}
	}
	{
		// NotifyDownEvent(url, false, resInfo);
		String_t* L_29 = ___url1;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_30 = V_0;
		CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8(__this, L_29, (bool)0, L_30, /*hidden argument*/NULL);
		// return ;
		return;
	}

IL_0076:
	{
		// for (; nFileOffset < nFileSize; nFileOffset += nPageSize)
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
	}

IL_007a:
	{
		// for (; nFileOffset < nFileSize; nFileOffset += nPageSize)
		int32_t L_33 = V_2;
		int32_t L_34 = ___nFileSize2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004b;
		}
	}
	{
		// NotifyDownEvent(url, true, resInfo);
		String_t* L_35 = ___url1;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_36 = V_0;
		CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8(__this, L_35, (bool)1, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CHttpDownMng::NotifyDownEvent(System.String,System.Boolean,DownResFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, String_t* ___url0, bool ___bSuc1, DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * ___resInfo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_NotifyDownEvent_mD2A363BA78C3D3266C5D7F88BFAF37D5AC4552B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * V_0 = NULL;
	{
		// MemBlock pBlock = new MemBlock();
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_0 = (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)il2cpp_codegen_object_new(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4_il2cpp_TypeInfo_var);
		MemBlock__ctor_m37126B8FF0AD8A9B7BFB3914109D4BF97BCD5952(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// pBlock.resFile = resInfo;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_1 = V_0;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_2 = ___resInfo2;
		NullCheck(L_1);
		L_1->set_resFile_6(L_2);
		// PushWrite(pBlock); // ????????????
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_3 = V_0;
		CHttpDownMng_PushWrite_m3BBEB71B171B388FA70F882F76705DF08DA2819E(__this, L_3, /*hidden argument*/NULL);
		// if (bSuc)
		bool L_4 = ___bSuc1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log("??????,url:" + url);
		String_t* L_5 = ___url0;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralD445348C615FEA40D992FFA08CEE8A4EC8373A97, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
		return;
	}

IL_0028:
	{
		// Debug.LogError("??????,url:" + url);
		String_t* L_7 = ___url0;
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralEF24BC4EF7B637D6A5FC07E570AA5ED4A171C373, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// CHttpDownMng_MemBlock CHttpDownMng::AllockBlock(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * CHttpDownMng_AllockBlock_m5A18607348AA9996832413CA9AB964C8C7E06225 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, String_t* ___url0, int32_t ___nFileOffset1, int32_t ___nDownSize2, int32_t ___nFileSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_AllockBlock_m5A18607348AA9996832413CA9AB964C8C7E06225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * V_0 = NULL;
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// MemBlock pBlock = null;
		V_0 = (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)NULL;
		// lock(this)
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_0 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_2), /*hidden argument*/NULL);
			// pBlock = m_InvalidBlock;
			MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_1 = __this->get_m_InvalidBlock_14();
			V_0 = L_1;
			// if (m_InvalidBlock != null)
			MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_2 = __this->get_m_InvalidBlock_14();
			if (!L_2)
			{
				goto IL_0040;
			}
		}

IL_001d:
		{
			// m_nUseBlockMemSize += 4096;
			int32_t L_3 = __this->get_m_nUseBlockMemSize_16();
			__this->set_m_nUseBlockMemSize_16(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)4096))));
			// m_InvalidBlock = m_InvalidBlock.m_pNext;
			MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_4 = __this->get_m_InvalidBlock_14();
			NullCheck(L_4);
			MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_5 = L_4->get_m_pNext_0();
			__this->set_m_InvalidBlock_14(L_5);
		}

IL_0040:
		{
			// }
			IL2CPP_LEAVE(0x4C, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_7 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		// if (pBlock == null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_8 = V_0;
		if (L_8)
		{
			goto IL_008f;
		}
	}
	{
		// pBlock = new MemBlock();
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_9 = (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)il2cpp_codegen_object_new(MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4_il2cpp_TypeInfo_var);
		MemBlock__ctor_m37126B8FF0AD8A9B7BFB3914109D4BF97BCD5952(L_9, /*hidden argument*/NULL);
		V_0 = L_9;
		// pBlock.data = new byte[4096]; // ??4K
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_10 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		NullCheck(L_10);
		L_10->set_data_2(L_11);
		// lock(this)
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0069:
	try
	{ // begin try (depth: 1)
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_12 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_12, (bool*)(&V_2), /*hidden argument*/NULL);
		// m_nCurBlockMemSize += 4096;
		int32_t L_13 = __this->get_m_nCurBlockMemSize_15();
		__this->set_m_nCurBlockMemSize_15(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)4096))));
		// }
		IL2CPP_LEAVE(0x8F, FINALLY_0085);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_008e;
			}
		}

IL_0088:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_15 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		}

IL_008e:
		{
			IL2CPP_END_FINALLY(133)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008f:
	{
		// pBlock.url = url;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_16 = V_0;
		String_t* L_17 = ___url0;
		NullCheck(L_16);
		L_16->set_url_1(L_17);
		// pBlock.nFileOfset = nFileOffset;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_18 = V_0;
		int32_t L_19 = ___nFileOffset1;
		NullCheck(L_18);
		L_18->set_nFileOfset_3(L_19);
		// pBlock.nDownSize = nDownSize;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_20 = V_0;
		int32_t L_21 = ___nDownSize2;
		NullCheck(L_20);
		L_20->set_nDownSize_4(L_21);
		// pBlock.nFileSize = nFileSize;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_22 = V_0;
		int32_t L_23 = ___nFileSize3;
		NullCheck(L_22);
		L_22->set_nFileSize_5(L_23);
		// pBlock.resFile = null;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_24 = V_0;
		NullCheck(L_24);
		L_24->set_resFile_6((DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 *)NULL);
		// return pBlock;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_25 = V_0;
		return L_25;
	}
}
// System.Void CHttpDownMng::FreeBlock(CHttpDownMng_MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_FreeBlock_m172A561DCFAA1B8721C97FBD68B82C03771EC7B0 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method)
{
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (pBlock.data == null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_0 = ___pBlock0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_data_2();
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// pBlock.resFile = null;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_2 = ___pBlock0;
		NullCheck(L_2);
		L_2->set_resFile_6((DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 *)NULL);
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_3 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
		// m_nUseBlockMemSize -= 4096;
		int32_t L_4 = __this->get_m_nUseBlockMemSize_16();
		__this->set_m_nUseBlockMemSize_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)4096))));
		// pBlock.m_pNext = m_InvalidBlock;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_5 = ___pBlock0;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_6 = __this->get_m_InvalidBlock_14();
		NullCheck(L_5);
		L_5->set_m_pNext_0(L_6);
		// m_InvalidBlock = pBlock;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_7 = ___pBlock0;
		__this->set_m_InvalidBlock_14(L_7);
		// }
		IL2CPP_LEAVE(0x4D, FINALLY_0043);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_9 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void CHttpDownMng::WaitBlock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WaitBlock_m531A584A51EA0DD2DCA14EFC7A26AF5D02C99251 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, int32_t ___nMaxSize0, const RuntimeMethod* method)
{
	{
		goto IL_0009;
	}

IL_0002:
	{
		// Thread.Sleep(10); // ????
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(((int32_t)10), /*hidden argument*/NULL);
	}

IL_0009:
	{
		// while(m_nUseBlockMemSize >= nMaxSize)  // ????????????????????????
		int32_t L_0 = __this->get_m_nUseBlockMemSize_16();
		int32_t L_1 = ___nMaxSize0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean CHttpDownMng::DownPart(CHttp,System.String,System.Int32,System.Int32,System.Int32,DownResFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CHttpDownMng_DownPart_mA329C5BDA075CAA3C1AA59CE5371A333EEC4FFDD (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * ___http0, String_t* ___url1, int32_t ___nFileOffset2, int32_t ___nDownSize3, int32_t ___nFileSize4, DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * ___resFile5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_DownPart_mA329C5BDA075CAA3C1AA59CE5371A333EEC4FFDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * V_5 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// nDownSize = http.PrepareDown(url, nFileOffset, nDownSize, nDownSize == 0);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_0 = ___http0;
		String_t* L_1 = ___url1;
		int32_t L_2 = ___nFileOffset2;
		int32_t L_3 = ___nDownSize3;
		int32_t L_4 = ___nDownSize3;
		NullCheck(L_0);
		int32_t L_5 = CHttp_PrepareDown_m143A6A5898054EB9C1A0CB458F384B86C8E0EF81(L_0, L_1, L_2, L_3, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		___nDownSize3 = L_5;
		// if (nDownSize <= 0)
		int32_t L_6 = ___nDownSize3;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// Debug.LogError("???????url:" + url + "(" + nFileOffset + "-" + nDownSize + ")");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralF0F5194370A76D2649E2C3AEA31566259F0E30DF);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF0F5194370A76D2649E2C3AEA31566259F0E30DF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___url1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral28ED3A797DA3C48C309A4EF792147F3C56CFEC40);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		int32_t L_13 = ___nFileOffset2;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = ___nDownSize3;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_22 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_22, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_005f:
	{
		// byte[] szTempBuf = null;
		V_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		// int nCurDownSize = 0;
		V_1 = 0;
		// int nRecTotal = 0;
		V_2 = 0;
		// int nRecLen = 0;
		V_3 = 0;
		// int nOffset = 0;
		V_4 = 0;
		// nCurDownSize = nDownSize > 4096 ? 4096 : nDownSize;
		int32_t L_23 = ___nDownSize3;
		if ((((int32_t)L_23) > ((int32_t)((int32_t)4096))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_24 = ___nDownSize3;
		G_B5_0 = L_24;
		goto IL_007c;
	}

IL_0077:
	{
		G_B5_0 = ((int32_t)4096);
	}

IL_007c:
	{
		V_1 = G_B5_0;
		// MemBlock pBlock = AllockBlock(url, nFileOffset, nCurDownSize, nFileSize);  // ????????4K????
		String_t* L_25 = ___url1;
		int32_t L_26 = ___nFileOffset2;
		int32_t L_27 = V_1;
		int32_t L_28 = ___nFileSize4;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_29 = CHttpDownMng_AllockBlock_m5A18607348AA9996832413CA9AB964C8C7E06225(__this, L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		goto IL_0116;
	}

IL_008f:
	{
		// nRecLen = http.FastReceiveMax(ref szTempBuf, ref nOffset, 4096 - nRecTotal);
		CHttp_tDAD52E722FE6A8F3B768519AB86469E61B1B4A02 * L_30 = ___http0;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = CHttp_FastReceiveMax_m4E85F64AAAF47F8905D2959F277E17D072EFFCA7(L_30, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821**)(&V_0), (int32_t*)(&V_4), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)4096), (int32_t)L_31)), /*hidden argument*/NULL);
		V_3 = L_32;
		// if(nRecLen > 0)
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0114;
		}
	}
	{
		// OnReceive(nRecLen);  // ???????
		int32_t L_34 = V_3;
		CHttpDownMng_OnReceive_m8FCF9268E4CB50D65E742EABA8E382ECF58E2623(__this, L_34, /*hidden argument*/NULL);
		// Array.Copy(szTempBuf, nOffset, pBlock.data, nRecTotal, nRecLen);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = V_0;
		int32_t L_36 = V_4;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_37 = V_5;
		NullCheck(L_37);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = L_37->get_data_2();
		int32_t L_39 = V_2;
		int32_t L_40 = V_3;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_35, L_36, (RuntimeArray *)(RuntimeArray *)L_38, L_39, L_40, /*hidden argument*/NULL);
		// nRecTotal += nRecLen;
		int32_t L_41 = V_2;
		int32_t L_42 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42));
		// if(nRecTotal >= nCurDownSize)
		int32_t L_43 = V_2;
		int32_t L_44 = V_1;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0116;
		}
	}
	{
		// pBlock.resFile = resFile;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_45 = V_5;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_46 = ___resFile5;
		NullCheck(L_45);
		L_45->set_resFile_6(L_46);
		// PushWrite(pBlock);// ?????
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_47 = V_5;
		CHttpDownMng_PushWrite_m3BBEB71B171B388FA70F882F76705DF08DA2819E(__this, L_47, /*hidden argument*/NULL);
		// nRecTotal = 0;
		V_2 = 0;
		// nDownSize -= nCurDownSize;
		int32_t L_48 = ___nDownSize3;
		int32_t L_49 = V_1;
		___nDownSize3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49));
		// nFileOffset += nCurDownSize;
		int32_t L_50 = ___nFileOffset2;
		int32_t L_51 = V_1;
		___nFileOffset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_51));
		// nCurDownSize = nDownSize > 4096 ? 4096 : nDownSize;
		int32_t L_52 = ___nDownSize3;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)4096))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_53 = ___nDownSize3;
		G_B11_0 = L_53;
		goto IL_00f5;
	}

IL_00f0:
	{
		G_B11_0 = ((int32_t)4096);
	}

IL_00f5:
	{
		V_1 = G_B11_0;
		// if(nCurDownSize > 0)
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_0116;
		}
	}
	{
		// WaitBlock(1024 * 1024); // ??????????????????
		CHttpDownMng_WaitBlock_m531A584A51EA0DD2DCA14EFC7A26AF5D02C99251(__this, ((int32_t)1048576), /*hidden argument*/NULL);
		// pBlock = AllockBlock(url, nFileOffset, nCurDownSize, nFileSize);  // ????????4K????
		String_t* L_55 = ___url1;
		int32_t L_56 = ___nFileOffset2;
		int32_t L_57 = V_1;
		int32_t L_58 = ___nFileSize4;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_59 = CHttpDownMng_AllockBlock_m5A18607348AA9996832413CA9AB964C8C7E06225(__this, L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		V_5 = L_59;
		// }
		goto IL_0116;
	}

IL_0114:
	{
		// return false; // ????????????????
		return (bool)0;
	}

IL_0116:
	{
		// while (nDownSize > 0 && !m_bNeedStop)
		int32_t L_60 = ___nDownSize3;
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		bool L_61 = __this->get_m_bNeedStop_5();
		if (!L_61)
		{
			goto IL_008f;
		}
	}

IL_0126:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void CHttpDownMng::OnReceive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_OnReceive_m8FCF9268E4CB50D65E742EABA8E382ECF58E2623 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, int32_t ___nDownSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_OnReceive_m8FCF9268E4CB50D65E742EABA8E382ECF58E2623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_2 = NULL;
	bool V_3 = false;
	int64_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// long nNow = System.DateTime.Now.Ticks / 10000;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_0;
		int64_t L_1 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)L_1/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
		// lock (this)
		V_2 = __this;
		V_3 = (bool)0;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_2 = V_2;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_2, (bool*)(&V_3), /*hidden argument*/NULL);
			// if (0 == m_nLastTime)
			int64_t L_3 = __this->get_m_nLastTime_12();
			if (L_3)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			// m_nLastTime = nNow;
			int64_t L_4 = V_0;
			__this->set_m_nLastTime_12(L_4);
		}

IL_0030:
		{
			// long nPassTime = nNow - m_nLastTime;
			int64_t L_5 = V_0;
			int64_t L_6 = __this->get_m_nLastTime_12();
			V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_6));
			// if (nPassTime > 1000)
			int64_t L_7 = V_4;
			if ((((int64_t)L_7) <= ((int64_t)(((int64_t)((int64_t)((int32_t)1000)))))))
			{
				goto IL_0073;
			}
		}

IL_0044:
		{
			// m_nLastTime = nNow - nPassTime % 1000;
			int64_t L_8 = V_0;
			int64_t L_9 = V_4;
			__this->set_m_nLastTime_12(((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)((int64_t)((int64_t)L_9%(int64_t)(((int64_t)((int64_t)((int32_t)1000)))))))));
			// m_nDownSize = (m_nDownSize + nDownSize) * (nPassTime % 1000) / nPassTime;
			int64_t L_10 = __this->get_m_nDownSize_8();
			int32_t L_11 = ___nDownSize0;
			int64_t L_12 = V_4;
			int64_t L_13 = V_4;
			__this->set_m_nDownSize_8(((int64_t)((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)(((int64_t)((int64_t)L_11))))), (int64_t)((int64_t)((int64_t)L_12%(int64_t)(((int64_t)((int64_t)((int32_t)1000))))))))/(int64_t)L_13)));
			// }
			goto IL_0082;
		}

IL_0073:
		{
			// m_nDownSize += nDownSize;
			int64_t L_14 = __this->get_m_nDownSize_8();
			int32_t L_15 = ___nDownSize0;
			__this->set_m_nDownSize_8(((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)(((int64_t)((int64_t)L_15))))));
		}

IL_0082:
		{
			// m_nTotalDownSize += nDownSize;
			int64_t L_16 = __this->get_m_nTotalDownSize_9();
			int32_t L_17 = ___nDownSize0;
			__this->set_m_nTotalDownSize_9(((int64_t)il2cpp_codegen_add((int64_t)L_16, (int64_t)(((int64_t)((int64_t)L_17))))));
			// }
			IL2CPP_LEAVE(0x9D, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_18 = V_3;
			if (!L_18)
			{
				goto IL_009c;
			}
		}

IL_0096:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_19 = V_2;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_19, /*hidden argument*/NULL);
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void CHttpDownMng::PushWrite(CHttpDownMng_MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_PushWrite_m3BBEB71B171B388FA70F882F76705DF08DA2819E (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method)
{
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock(this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_0 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
		// pBlock.m_pNext = m_WriteList;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_1 = ___pBlock0;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_2 = __this->get_m_WriteList_17();
		NullCheck(L_1);
		L_1->set_m_pNext_0(L_2);
		// m_WriteList = pBlock;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_3 = ___pBlock0;
		__this->set_m_WriteList_17(L_3);
		// }
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		// }
		return;
	}
}
// CHttpDownMng_MemBlock CHttpDownMng::Reverse(CHttpDownMng_MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * CHttpDownMng_Reverse_m306AF2DCED74D4B665A0A998CB7B19DFCF617B8A (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method)
{
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * V_0 = NULL;
	{
		// MemBlock pList = null;
		V_0 = (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)NULL;
		goto IL_0015;
	}

IL_0004:
	{
		// pNext = pBlock.m_pNext;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_0 = ___pBlock0;
		NullCheck(L_0);
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_1 = L_0->get_m_pNext_0();
		// pBlock.m_pNext = pList;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_2 = ___pBlock0;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_3 = V_0;
		NullCheck(L_2);
		L_2->set_m_pNext_0(L_3);
		// pList = pBlock;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_4 = ___pBlock0;
		V_0 = L_4;
		// pBlock = pNext;
		___pBlock0 = L_1;
	}

IL_0015:
	{
		// while (pBlock != null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_5 = ___pBlock0;
		if (L_5)
		{
			goto IL_0004;
		}
	}
	{
		// return pList;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_6 = V_0;
		return L_6;
	}
}
// System.Void CHttpDownMng::WriteThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WriteThread_m951401BF8F48FE21F8A8D3FE49879BA6C24210EA (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method)
{
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * V_0 = NULL;
	MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * V_1 = NULL;
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		goto IL_0064;
	}

IL_0002:
	{
		// MemBlock pList = null;
		V_0 = (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)NULL;
		// lock (this)
		V_2 = __this;
		V_3 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_0 = V_2;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_3), /*hidden argument*/NULL);
		// pList = m_WriteList;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_1 = __this->get_m_WriteList_17();
		V_0 = L_1;
		// m_WriteList = null;
		__this->set_m_WriteList_17((MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)NULL);
		// }
		IL2CPP_LEAVE(0x2A, FINALLY_0020);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			bool L_2 = V_3;
			if (!L_2)
			{
				goto IL_0029;
			}
		}

IL_0023:
		{
			CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_3 = V_2;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_3, /*hidden argument*/NULL);
		}

IL_0029:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002a:
	{
		// if(pList == null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_4 = V_0;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if (m_nDownThreadNumb <= 0)
		int32_t L_5 = __this->get_m_nDownThreadNumb_3();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// Thread.Sleep(1); // ???????????????CPU???
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(1, /*hidden argument*/NULL);
		// continue;
		goto IL_0064;
	}

IL_003e:
	{
		// pList = Reverse(pList);
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_6 = V_0;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_7 = CHttpDownMng_Reverse_m306AF2DCED74D4B665A0A998CB7B19DFCF617B8A(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// MemBlock pBlock = null;
		V_1 = (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)NULL;
		goto IL_0061;
	}

IL_004a:
	{
		// pBlock = pList;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_8 = V_0;
		V_1 = L_8;
		// pList = pList.m_pNext;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_9 = V_0;
		NullCheck(L_9);
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_10 = L_9->get_m_pNext_0();
		V_0 = L_10;
		// SafeWriteBlock(pBlock);  // ????
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_11 = V_1;
		CHttpDownMng_SafeWriteBlock_mC54D619B0D15984DE19458D8B0DFF73781A1090F(__this, L_11, /*hidden argument*/NULL);
		// FreeBlock(pBlock); // ????
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_12 = V_1;
		CHttpDownMng_FreeBlock_m172A561DCFAA1B8721C97FBD68B82C03771EC7B0(__this, L_12, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// while (pList != null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_13 = V_0;
		if (L_13)
		{
			goto IL_004a;
		}
	}

IL_0064:
	{
		// while(!m_bNeedStop)
		bool L_14 = __this->get_m_bNeedStop_5();
		if (!L_14)
		{
			goto IL_0002;
		}
	}

IL_006c:
	{
		// m_InvalidBlock = null; // ???????
		__this->set_m_InvalidBlock_14((MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 *)NULL);
		// System.Threading.Interlocked.Decrement(ref m_nWriteThreadNumb);
		int32_t* L_15 = __this->get_address_of_m_nWriteThreadNumb_4();
		Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE((int32_t*)L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CHttpDownMng::SafeWriteBlock(CHttpDownMng_MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_SafeWriteBlock_mC54D619B0D15984DE19458D8B0DFF73781A1090F (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_SafeWriteBlock_mC54D619B0D15984DE19458D8B0DFF73781A1090F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// WriteBlock(pBlock);
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_0 = ___pBlock0;
		CHttpDownMng_WriteBlock_m5281CAE20A5586442F9135CEB8445A47D2D40A9A(__this, L_0, /*hidden argument*/NULL);
		// }
		goto IL_0010;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		// Debug.LogException(e);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// }
		goto IL_0010;
	} // end catch (depth: 1)

IL_0010:
	{
		// }
		return;
	}
}
// System.Void CHttpDownMng::WriteBlock(CHttpDownMng_MemBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng_WriteBlock_m5281CAE20A5586442F9135CEB8445A47D2D40A9A (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * ___pBlock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_WriteBlock_m5281CAE20A5586442F9135CEB8445A47D2D40A9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * V_0 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if(pBlock.data == null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_0 = ___pBlock0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_data_2();
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// if(pBlock.resFile != null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_2 = ___pBlock0;
		NullCheck(L_2);
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_3 = L_2->get_resFile_6();
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// if(pBlock.resFile.file != null)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_4 = ___pBlock0;
		NullCheck(L_4);
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_5 = L_4->get_resFile_6();
		NullCheck(L_5);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_6 = L_5->get_file_2();
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// pBlock.resFile.file.Close();
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_7 = ___pBlock0;
		NullCheck(L_7);
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_8 = L_7->get_resFile_6();
		NullCheck(L_8);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_9 = L_8->get_file_2();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_9);
		// pBlock.resFile.file = null;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_10 = ___pBlock0;
		NullCheck(L_10);
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_11 = L_10->get_resFile_6();
		NullCheck(L_11);
		L_11->set_file_2((FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)NULL);
	}

IL_0039:
	{
		// pBlock.resFile = null;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_12 = ___pBlock0;
		NullCheck(L_12);
		L_12->set_resFile_6((DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 *)NULL);
	}

IL_0040:
	{
		// return;
		return;
	}

IL_0041:
	{
		// DownResFile resFile = pBlock.resFile;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_13 = ___pBlock0;
		NullCheck(L_13);
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_14 = L_13->get_resFile_6();
		V_0 = L_14;
		// if(resFile.file == null)
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_15 = V_0;
		NullCheck(L_15);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_16 = L_15->get_file_2();
		if (L_16)
		{
			goto IL_0099;
		}
	}
	{
		// string szLocalPathName = GetLocalPathNameByUrl(pBlock.url);
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_17 = ___pBlock0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_url_1();
		String_t* L_19 = CHttpDownMng_GetLocalPathNameByUrl_m1FC707EF0F52923001BB57374346C11684EA80AE(__this, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// if (pBlock.nFileOfset == 0)
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_20 = ___pBlock0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_nFileOfset_3();
		if (L_21)
		{
			goto IL_0073;
		}
	}
	{
		// if (File.Exists(szLocalPathName))
		String_t* L_22 = V_2;
		bool L_23 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0073;
		}
	}
	{
		// File.Delete(szLocalPathName);
		String_t* L_24 = V_2;
		File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_24, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// resFile.file = new FileStream(szLocalPathName, FileMode.OpenOrCreate, FileAccess.Write);
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_25 = V_0;
		String_t* L_26 = V_2;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_27 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m49CE3FAF4AEF5EE690E5E53A95749F3C4414C47B(L_27, L_26, 4, 2, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_file_2(L_27);
		// if(resFile.file == null)
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_28 = V_0;
		NullCheck(L_28);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_29 = L_28->get_file_2();
		if (L_29)
		{
			goto IL_0099;
		}
	}
	{
		// Debug.LogError(szLocalPathName + "??????!");
		String_t* L_30 = V_2;
		String_t* L_31 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_30, _stringLiteral191A0BDD699B2095A7DB8AE105468DF5C3D2E829, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_31, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// FileStream file = resFile.file;
		DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * L_32 = V_0;
		NullCheck(L_32);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_33 = L_32->get_file_2();
		V_1 = L_33;
		// if(file != null)
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_34 = V_1;
		if (!L_34)
		{
			goto IL_00cb;
		}
	}
	{
		// file.Seek(pBlock.nFileOfset, SeekOrigin.Begin);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_35 = V_1;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_36 = ___pBlock0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_nFileOfset_3();
		NullCheck(L_35);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(20 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_35, (((int64_t)((int64_t)L_37))), 0);
		// file.Write(pBlock.data, 0, pBlock.nDownSize);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_38 = V_1;
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_39 = ___pBlock0;
		NullCheck(L_39);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = L_39->get_data_2();
		MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * L_41 = ___pBlock0;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_nDownSize_4();
		NullCheck(L_38);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_38, L_40, 0, L_42);
		// file.Flush();
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_43 = V_1;
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_43);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.String CHttpDownMng::GetLocalPathNameByUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CHttpDownMng_GetLocalPathNameByUrl_m1FC707EF0F52923001BB57374346C11684EA80AE (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CHttpDownMng_GetLocalPathNameByUrl_m1FC707EF0F52923001BB57374346C11684EA80AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int nIndex = url.LastIndexOf('/');
		String_t* L_0 = ___url0;
		NullCheck(L_0);
		int32_t L_1 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_0, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (nIndex != -1)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		// string szFileName = url.Substring(nIndex + 1);
		String_t* L_3 = ___url0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_5;
		// return string.Format("{0}/{1}", m_szLocalSavePath, szFileName);
		String_t* L_6 = __this->get_m_szLocalSavePath_13();
		String_t* L_7 = V_1;
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralEAEF99A09E561A86004BAEB87A80BB4CFCE8CE67, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		// return string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_9;
	}
}
// System.Void CHttpDownMng::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CHttpDownMng__ctor_m16D4041628ECC49DD1804B5FE50BA09FFD88E677 (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CHttpDownMng_MemBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemBlock__ctor_m37126B8FF0AD8A9B7BFB3914109D4BF97BCD5952 (MemBlock_t9B3AADC19F5990FDFFA19A0D539A722E5490EFA4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// PALT_TYPE CTargetPlat::GetPlatType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTargetPlat_GetPlatType_m6F5B26603263960D3A89EB0D2B75E1915BCCAA5A (const RuntimeMethod* method)
{
	{
		// return PALT_TYPE.PLAT_IPHONE;
		return (int32_t)(3);
	}
}
// System.String CTargetPlat::GetTargetPlatName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CTargetPlat_GetTargetPlatName_mF2A99D5F49F8C59FF68E69011C630970A274B0E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTargetPlat_GetTargetPlatName_mF2A99D5F49F8C59FF68E69011C630970A274B0E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PALT_TYPE ePlatType = GetPlatType();
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		int32_t L_0 = CTargetPlat_GetPlatType_m6F5B26603263960D3A89EB0D2B75E1915BCCAA5A(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (ePlatType)
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0032;
	}

IL_0020:
	{
		// return "Ios";
		return _stringLiteral9D2F7C1F9FA7831AC464817640A992E28BA4671C;
	}

IL_0026:
	{
		// return "Android";
		return _stringLiteral1928F95C598B9E69462FCB512625CF8E28923044;
	}

IL_002c:
	{
		// return "wp8";
		return _stringLiteralDE879E4A8F1BA0130203327D5A85BB2021805FF2;
	}

IL_0032:
	{
		// return "Windows";
		return _stringLiteral26D9C28D789C254F71EA99A3463B99A7CCC2F4FA;
	}
}
// System.String CTargetPlat::GetStreamAssetsURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CTargetPlat_GetStreamAssetsURL_m60231F5FE5FDB811402B1B1382E11DB76C878A5E (String_t* ___szFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTargetPlat_GetStreamAssetsURL_m60231F5FE5FDB811402B1B1382E11DB76C878A5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = "file://" + Application.streamingAssetsPath + "/" + GetTargetPlatName() + '/' + szFileName;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		String_t* L_3 = Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_6 = CTargetPlat_GetTargetPlatName_mF2A99D5F49F8C59FF68E69011C630970A274B0E2(/*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = ___szFileName0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		String_t* L_10 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_8, /*hidden argument*/NULL);
		// return url;
		return L_10;
	}
}
// System.String CTargetPlat::GetAssetPathName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CTargetPlat_GetAssetPathName_m7A1A9B96CB343829B9A435CE20DAF965A9B99373 (String_t* ___szFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTargetPlat_GetAssetPathName_m7A1A9B96CB343829B9A435CE20DAF965A9B99373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string url = Application.streamingAssetsPath + "/" + GetTargetPlatName() + '/' + szFileName;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		String_t* L_2 = Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F(/*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_5 = CTargetPlat_GetTargetPlatName_mF2A99D5F49F8C59FF68E69011C630970A274B0E2(/*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		String_t* L_8 = ___szFileName0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		String_t* L_9 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_7, /*hidden argument*/NULL);
		// return url;
		return L_9;
	}
}
// System.String CTargetPlat::get_PersistentRootPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CTargetPlat_get_PersistentRootPath_mCF196B9247DAB25518AC46BE2F6DD761EFED9B72 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTargetPlat_get_PersistentRootPath_mCF196B9247DAB25518AC46BE2F6DD761EFED9B72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (m_persistent_root_path == String.Empty)
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields*)il2cpp_codegen_static_fields_for(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var))->get_m_persistent_root_path_0();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// string szDataPath = Application.persistentDataPath;
		String_t* L_3 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		V_0 = L_3;
		// m_persistent_root_path = string.Format( "{0}/Ios", szDataPath );
		String_t* L_4 = V_0;
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralDEF5E0465A303EE6DA35A8F712D61A65161D54AE, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		((CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields*)il2cpp_codegen_static_fields_for(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var))->set_m_persistent_root_path_0(L_5);
		// if (!System.IO.Directory.Exists(m_persistent_root_path))
		String_t* L_6 = ((CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields*)il2cpp_codegen_static_fields_for(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var))->get_m_persistent_root_path_0();
		bool L_7 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		// System.IO.Directory.CreateDirectory(m_persistent_root_path);
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_8 = ((CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields*)il2cpp_codegen_static_fields_for(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var))->get_m_persistent_root_path_0();
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_8, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// return m_persistent_root_path;
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_9 = ((CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields*)il2cpp_codegen_static_fields_for(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var))->get_m_persistent_root_path_0();
		return L_9;
	}
}
// System.Void CTargetPlat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTargetPlat__ctor_mCDF7A40DF430C66A46795E4FFB38B03B48EEEEC7 (CTargetPlat_t8222494C92001E006674994E802967577430801B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CTargetPlat::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTargetPlat__cctor_m54214394B713A1446A741B1D7D1ABD8573BB03B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTargetPlat__cctor_m54214394B713A1446A741B1D7D1ABD8573BB03B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string m_persistent_root_path = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((CTargetPlat_t8222494C92001E006674994E802967577430801B_StaticFields*)il2cpp_codegen_static_fields_for(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var))->set_m_persistent_root_path_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp__ctor_mAB2F4D53543F40F4D7E790F75DEE059A6AA9DD92 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method)
{
	{
		// public CTcp()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_nRandSeed = 0;
		__this->set_m_nRandSeed_1((((int64_t)((int64_t)0))));
		// }
		return;
	}
}
// System.Void CTcp::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Finalize_mA77B7D5B1FF5E98F55AD0BF05CBDD5F3B8A1FE84 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Close();
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_JUMP_TBL(0xF, IL_000f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void CTcp::SetRandSeed(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_SetRandSeed_m478CBB645B464F72473EC700DCCEF7C2F01F6E74 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, int64_t ___nRandSeed0, const RuntimeMethod* method)
{
	{
		// m_nRandSeed = nRandSeed;
		int64_t L_0 = ___nRandSeed0;
		__this->set_m_nRandSeed_1(L_0);
		// }
		return;
	}
}
// System.Int32 CTcp::RandInt(System.Int64&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_RandInt_mC0693F0E4441124DD80A3B6E15CE892A98D94950 (int64_t* ___nRandSeed0, int32_t ___nMin1, int32_t ___nMax2, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		// if (nRandSeed == 0 || nMin == nMax)
		int64_t* L_0 = ___nRandSeed0;
		int64_t L_1 = *((int64_t*)L_0);
		if (!L_1)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___nMin1;
		int32_t L_3 = ___nMax2;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		// return nMin;
		int32_t L_4 = ___nMin1;
		return L_4;
	}

IL_000a:
	{
		// nRandSeed = nRandSeed * 214013L + 2531011L;
		int64_t* L_5 = ___nRandSeed0;
		int64_t* L_6 = ___nRandSeed0;
		int64_t L_7 = *((int64_t*)L_6);
		*((int64_t*)L_5) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)(((int64_t)((int64_t)((int32_t)214013)))))), (int64_t)(((int64_t)((int64_t)((int32_t)2531011))))));
		// if (nMin > nMax)
		int32_t L_8 = ___nMin1;
		int32_t L_9 = ___nMax2;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		// int nTemp = nMin; nMin = nMax; nMax = nTemp;
		int32_t L_10 = ___nMin1;
		// int nTemp = nMin; nMin = nMax; nMax = nTemp;
		int32_t L_11 = ___nMax2;
		___nMin1 = L_11;
		// int nTemp = nMin; nMin = nMax; nMax = nTemp;
		___nMax2 = L_10;
	}

IL_0026:
	{
		// long nSize = (nMax - nMin + 1);
		int32_t L_12 = ___nMax2;
		int32_t L_13 = ___nMin1;
		V_0 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), (int32_t)1)))));
		// long nIndex = nRandSeed % nSize + nMin;
		int64_t* L_14 = ___nRandSeed0;
		int64_t L_15 = *((int64_t*)L_14);
		int64_t L_16 = V_0;
		int32_t L_17 = ___nMin1;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_15%(int64_t)L_16)), (int64_t)(((int64_t)((int64_t)L_17)))));
		// if (nIndex < nMin)
		int64_t L_18 = V_1;
		int32_t L_19 = ___nMin1;
		if ((((int64_t)L_18) >= ((int64_t)(((int64_t)((int64_t)L_19))))))
		{
			goto IL_003d;
		}
	}
	{
		// nIndex = nMin;
		int32_t L_20 = ___nMin1;
		V_1 = (((int64_t)((int64_t)L_20)));
	}

IL_003d:
	{
		// if (nIndex > nMax)
		int64_t L_21 = V_1;
		int32_t L_22 = ___nMax2;
		if ((((int64_t)L_21) <= ((int64_t)(((int64_t)((int64_t)L_22))))))
		{
			goto IL_0045;
		}
	}
	{
		// nIndex = nMax;
		int32_t L_23 = ___nMax2;
		V_1 = (((int64_t)((int64_t)L_23)));
	}

IL_0045:
	{
		// return (int)nIndex;
		int64_t L_24 = V_1;
		return (((int32_t)((int32_t)L_24)));
	}
}
// System.Boolean CTcp::IsIPV6Net()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcp_IsIPV6Net_m553ED9D1A093C3705DC97C6639BFEA6E38DBE0C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_IsIPV6Net_m553ED9D1A093C3705DC97C6639BFEA6E38DBE0C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(s_nIPV6State == 1)
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_nIPV6State_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// long nStartTime = System.DateTime.Now.Ticks;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_1;
		int64_t L_2 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_003a;
	}

IL_0018:
	{
		// System.Threading.Thread.Sleep(100);
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(((int32_t)100), /*hidden argument*/NULL);
		// long nWaitTime = (System.DateTime.Now.Ticks - nStartTime) / 10000;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_1 = L_3;
		int64_t L_4 = DateTime_get_Ticks_mBCB529E43D065E498EAF08971D2EB49D5CB59D60((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_1), /*hidden argument*/NULL);
		int64_t L_5 = V_0;
		// if (nWaitTime > 20)
		if ((((int64_t)((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)L_5))/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))))) > ((int64_t)(((int64_t)((int64_t)((int32_t)20)))))))
		{
			goto IL_0042;
		}
	}

IL_003a:
	{
		// while (s_nIPV6State == 1)
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_6 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_nIPV6State_2();
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}

IL_0042:
	{
		// return s_nIPV6State == 2;
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_7 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_nIPV6State_2();
		return (bool)((((int32_t)L_7) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void CTcp::StartTestIPV6(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_StartTestIPV6_m773306E40645875CA878DA09F797A25A45ACB855 (String_t* ___szCDNUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_StartTestIPV6_m773306E40645875CA878DA09F797A25A45ACB855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_nIPV6State != 0)
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_nIPV6State_2();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// s_nIPV6State = 1;
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_nIPV6State_2(1);
		// TestIPV6Logic(szCDNUrl);
		String_t* L_1 = ___szCDNUrl0;
		CTcp_TestIPV6Logic_mDD00C03E7D09ABB7C14B3BFA97CF9F567F1EF0A1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CTcp::TestIPV6Logic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_TestIPV6Logic_mDD00C03E7D09ABB7C14B3BFA97CF9F567F1EF0A1 (String_t* ___szCDNUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_TestIPV6Logic_mDD00C03E7D09ABB7C14B3BFA97CF9F567F1EF0A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_1 = NULL;
	IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * G_B7_0 = NULL;
	IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * G_B6_0 = NULL;
	{
		// int nPort = 80;
		V_0 = ((int32_t)80);
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			// if (IPAddress.TryParse(szCDNUrl, out ipa))
			String_t* L_0 = ___szCDNUrl0;
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
			bool L_1 = IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA(L_0, (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE **)(&V_1), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000d:
		{
			// s_nIPV6State = 3;
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_nIPV6State_2(3);
			// return;
			goto IL_00ab;
		}

IL_0018:
		{
			// s_ExcNum = 0;
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_ExcNum_4(0);
			// IPHostEntry iph = Dns.GetHostEntry(szCDNUrl);
			String_t* L_2 = ___szCDNUrl0;
			IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_3 = Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			// bool bFindIPV6 = false;
			V_3 = (bool)0;
			// for (int i = 0; i < iph.AddressList.Length; ++i)
			V_4 = 0;
			goto IL_007c;
		}

IL_002c:
		{
			// IPAddress pIPAddr = iph.AddressList[i];
			IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_4 = V_2;
			NullCheck(L_4);
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_5 = IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline(L_4, /*hidden argument*/NULL);
			int32_t L_6 = V_4;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_5 = L_8;
			// if (pIPAddr.AddressFamily != AddressFamily.InterNetworkV6)
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_9 = V_5;
			NullCheck(L_9);
			int32_t L_10 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_9, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)23)))))
			{
				goto IL_0076;
			}
		}

IL_0042:
		{
			// IPAddrTest node = new IPAddrTest();
			IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * L_11 = (IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 *)il2cpp_codegen_object_new(IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6_il2cpp_TypeInfo_var);
			IPAddrTest__ctor_m028DB5F18863004C01AF69238822ED3E3733FC87(L_11, /*hidden argument*/NULL);
			// node.m_pIPAddr = pIPAddr;
			IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * L_12 = L_11;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_13 = V_5;
			NullCheck(L_12);
			L_12->set_m_pIPAddr_0(L_13);
			// node.m_nPort = nPort;
			IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * L_14 = L_12;
			int32_t L_15 = V_0;
			NullCheck(L_14);
			L_14->set_m_nPort_1(L_15);
			// node.m_bIsIPV6 = pIPAddr.AddressFamily == AddressFamily.InterNetworkV6;
			IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * L_16 = L_14;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_17 = V_5;
			NullCheck(L_17);
			int32_t L_18 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_17, /*hidden argument*/NULL);
			NullCheck(L_16);
			L_16->set_m_bIsIPV6_2((bool)((((int32_t)L_18) == ((int32_t)((int32_t)23)))? 1 : 0));
			// if(node.m_bIsIPV6)
			IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * L_19 = L_16;
			NullCheck(L_19);
			bool L_20 = L_19->get_m_bIsIPV6_2();
			G_B6_0 = L_19;
			if (!L_20)
			{
				G_B7_0 = L_19;
				goto IL_0071;
			}
		}

IL_006f:
		{
			// bFindIPV6 = true;
			V_3 = (bool)1;
			G_B7_0 = G_B6_0;
		}

IL_0071:
		{
			// node.TestConnect();
			NullCheck(G_B7_0);
			IPAddrTest_TestConnect_m9A161CE299D4D63A15AB86900787BE22E4BDA326(G_B7_0, /*hidden argument*/NULL);
		}

IL_0076:
		{
			// for (int i = 0; i < iph.AddressList.Length; ++i)
			int32_t L_21 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		}

IL_007c:
		{
			// for (int i = 0; i < iph.AddressList.Length; ++i)
			int32_t L_22 = V_4;
			IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_23 = V_2;
			NullCheck(L_23);
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_24 = IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))))
			{
				goto IL_002c;
			}
		}

IL_0088:
		{
			// if(!bFindIPV6)
			bool L_25 = V_3;
			if (L_25)
			{
				goto IL_0091;
			}
		}

IL_008b:
		{
			// s_nIPV6State = 3;
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_nIPV6State_2(3);
		}

IL_0091:
		{
			// }
			goto IL_00ab;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0093;
		throw e;
	}

CATCH_0093:
	{ // begin catch(System.Exception)
		// UnityEngine.Debug.LogError(ex.ToString());
		NullCheck(((Exception_t *)__exception_local));
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t *)__exception_local));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_26, /*hidden argument*/NULL);
		// s_ExcNum++;
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_27 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_ExcNum_4();
		((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_ExcNum_4(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		// }
		goto IL_00ab;
	} // end catch (depth: 1)

IL_00ab:
	{
		// }
		return;
	}
}
// System.Boolean CTcp::IsIPV6Addr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcp_IsIPV6Addr_m099CE9D1E2CFFC71E22294A6204D6AB281115D51 (String_t* ___szAddr0, const RuntimeMethod* method)
{
	{
		// if (string.IsNullOrEmpty(szAddr))
		String_t* L_0 = ___szAddr0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return szAddr.IndexOf(':') != -1;
		String_t* L_2 = ___szAddr0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_2, ((int32_t)58), /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void CTcp::ConnectToServer(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_ConnectToServer_m98D8FA6C5195FB11383DAA788B1DCC88294B13A0 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szServerAddr0, int32_t ___nPort1, int64_t ___nRandSeed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_ConnectToServer_m98D8FA6C5195FB11383DAA788B1DCC88294B13A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (nRandSeed != 0)
			int64_t L_0 = ___nRandSeed2;
			if (!L_0)
			{
				goto IL_000a;
			}
		}

IL_0003:
		{
			// m_nRandSeed = nRandSeed;
			int64_t L_1 = ___nRandSeed2;
			__this->set_m_nRandSeed_1(L_1);
		}

IL_000a:
		{
			// Connect(szServerAddr, nPort);
			String_t* L_2 = ___szServerAddr0;
			int32_t L_3 = ___nPort1;
			CTcp_Connect_mCB4207DAA3A5E32848A24C990EC8F88FD27FC71C(__this, L_2, L_3, /*hidden argument*/NULL);
			// }
			goto IL_0035;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString() + ":" + szServerAddr);
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = ___szServerAddr0;
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_5, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, L_6, /*hidden argument*/NULL);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_7, /*hidden argument*/NULL);
		// m_hSocket = null;
		__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
		// }
		goto IL_0035;
	} // end catch (depth: 1)

IL_0035:
	{
		// }
		return;
	}
}
// System.Void CTcp::push_debug_info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (s_push_debug_info != null)
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * L_0 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_push_debug_info_7();
			if (!L_0)
			{
				goto IL_0012;
			}
		}

IL_0007:
		{
			// s_push_debug_info(szError);
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * L_1 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_push_debug_info_7();
			String_t* L_2 = ___szError0;
			NullCheck(L_1);
			push_debug_info_backback_Invoke_m0950123B1E74B2568918439459A19C5E4F33F390(L_1, L_2, /*hidden argument*/NULL);
		}

IL_0012:
		{
			// }
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.Exception)
		// catch(Exception e)
		// }
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		// }
		return;
	}
}
// System.Int64 CTcp::GetServerIP(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CTcp_GetServerIP_mFF7F1D97C77981E606BA05AC45A76EB509992EC0 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szServerAddr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_GetServerIP_mFF7F1D97C77981E606BA05AC45A76EB509992EC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_0 = NULL;
	int64_t V_1 = 0;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// IPAddress.TryParse(szServerAddr, out ipa);
		String_t* L_0 = ___szServerAddr0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA(L_0, (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE **)(&V_0), /*hidden argument*/NULL);
		// return ipa.Address;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = V_0;
		NullCheck(L_1);
		int64_t L_2 = IPAddress_get_Address_m8B052E70BBFB8DC8034EB8D75EA9BB948859D31B(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0024;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString());
		Exception_t * L_3 = V_2;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_4, /*hidden argument*/NULL);
		// }
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		// return -1;
		return (((int64_t)((int64_t)(-1))));
	}

IL_0024:
	{
		// }
		int64_t L_5 = V_1;
		return L_5;
	}
}
// System.Void CTcp::ConnectToServer(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_ConnectToServer_m771317E2D6D1BFC1413953165E736F173A708A5B (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, int64_t ___nIP0, int32_t ___nPort1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_ConnectToServer_m771317E2D6D1BFC1413953165E736F173A708A5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_0 = NULL;
	{
		// IPAddress ipa = new IPAddress(nIP);
		int64_t L_0 = ___nIP0;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)il2cpp_codegen_object_new(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress__ctor_mFD0AF2F6A282D1158DF3C34EF2E63B73814E7748(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Connect(ipa, nPort);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_2 = V_0;
		int32_t L_3 = ___nPort1;
		CTcp_Connect_m7264180B876C324DCCAE279BDD9F355CA97C5580(__this, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CTcp::TryConnect(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_TryConnect_mA07E60194BFC8D47784A34AE38509E2DEA67ED20 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szIP0, int32_t ___nPort1, bool ___bDns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_TryConnect_mA07E60194BFC8D47784A34AE38509E2DEA67ED20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* V_0 = NULL;
	bool V_1 = false;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* G_B6_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (!bDns && s_pGetHostAddressInterface == null)
			bool L_0 = ___bDns2;
			if (L_0)
			{
				goto IL_000d;
			}
		}

IL_0003:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * L_1 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_pGetHostAddressInterface_5();
			if (L_1)
			{
				goto IL_000d;
			}
		}

IL_000a:
		{
			// bDns = true;
			___bDns2 = (bool)1;
		}

IL_000d:
		{
			// IPAddress[] ipa = bDns ? Dns.GetHostAddresses(szIP) : s_pGetHostAddressInterface(szIP);
			bool L_2 = ___bDns2;
			if (L_2)
			{
				goto IL_001d;
			}
		}

IL_0010:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * L_3 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_pGetHostAddressInterface_5();
			String_t* L_4 = ___szIP0;
			NullCheck(L_3);
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_5 = GetHostAddressInterface_Invoke_mF4A531A9CF4418934005B0274E9BF0514E6EDCB3(L_3, L_4, /*hidden argument*/NULL);
			G_B6_0 = L_5;
			goto IL_0023;
		}

IL_001d:
		{
			String_t* L_6 = ___szIP0;
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_7 = Dns_GetHostAddresses_mBB73A3CFACAF787C2DDB8EF473E87D31940A379D(L_6, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0023:
		{
			V_0 = G_B6_0;
			// if (ipa != null)
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_8 = V_0;
			if (!L_8)
			{
				goto IL_009a;
			}
		}

IL_0027:
		{
			// bool bIsIPV6Net = IsIPV6Net();
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			bool L_9 = CTcp_IsIPV6Net_m553ED9D1A093C3705DC97C6639BFEA6E38DBE0C1(/*hidden argument*/NULL);
			V_1 = L_9;
			// IPAddress pIPAddr = null;
			V_2 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)NULL;
			// for (int i = 0; i<ipa.Length; ++i)
			V_3 = 0;
			goto IL_006f;
		}

IL_0033:
		{
			// pIPAddr = ipa[i];
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_10 = V_0;
			int32_t L_11 = V_3;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_2 = L_13;
			// if(pIPAddr.AddressFamily == AddressFamily.InterNetworkV6)
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_14 = V_2;
			NullCheck(L_14);
			int32_t L_15 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_14, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)23)))))
			{
				goto IL_0046;
			}
		}

IL_0041:
		{
			// if (!bIsIPV6Net)
			bool L_16 = V_1;
			if (L_16)
			{
				goto IL_0049;
			}
		}

IL_0044:
		{
			// continue;
			goto IL_006b;
		}

IL_0046:
		{
			// if (bIsIPV6Net)
			bool L_17 = V_1;
			if (L_17)
			{
				goto IL_006b;
			}
		}

IL_0049:
		{
			// m_hSocket = new Socket(pIPAddr.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_18 = V_2;
			NullCheck(L_18);
			int32_t L_19 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_18, /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_20 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_20, L_19, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_20);
			// m_hSocket.Connect(pIPAddr, nPort);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_21 = __this->get_m_hSocket_0();
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_22 = V_2;
			int32_t L_23 = ___nPort1;
			NullCheck(L_21);
			Socket_Connect_mE3F6A0F6D9A997E44F4F6EA04E7C3EFDAE35EE0A(L_21, L_22, L_23, /*hidden argument*/NULL);
			// break;
			goto IL_0075;
		}

IL_006b:
		{
			// for (int i = 0; i<ipa.Length; ++i)
			int32_t L_24 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_006f:
		{
			// for (int i = 0; i<ipa.Length; ++i)
			int32_t L_25 = V_3;
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_26 = V_0;
			NullCheck(L_26);
			if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
			{
				goto IL_0033;
			}
		}

IL_0075:
		{
			// if (m_hSocket == null)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_27 = __this->get_m_hSocket_0();
			if (L_27)
			{
				goto IL_00b5;
			}
		}

IL_007d:
		{
			// m_hSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_28 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_28, 2, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_28);
			// m_hSocket.Connect(szIP, nPort);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_29 = __this->get_m_hSocket_0();
			String_t* L_30 = ___szIP0;
			int32_t L_31 = ___nPort1;
			NullCheck(L_29);
			Socket_Connect_m3D3BE0D486BFCB947CAF7C7D83ABD4153040FF00(L_29, L_30, L_31, /*hidden argument*/NULL);
			// }
			goto IL_00b5;
		}

IL_009a:
		{
			// m_hSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_32 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_32, 2, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_32);
			// m_hSocket.Connect(szIP, nPort);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_33 = __this->get_m_hSocket_0();
			String_t* L_34 = ___szIP0;
			int32_t L_35 = ___nPort1;
			NullCheck(L_33);
			Socket_Connect_m3D3BE0D486BFCB947CAF7C7D83ABD4153040FF00(L_33, L_34, L_35, /*hidden argument*/NULL);
		}

IL_00b5:
		{
			// }
			goto IL_00ef;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b7;
		throw e;
	}

CATCH_00b7:
	{ // begin catch(System.Exception)
		{
			// catch(Exception e)
			V_4 = ((Exception_t *)__exception_local);
			// push_debug_info(e.ToString() + ", Conect IPString, bDns:" + bDns);
			Exception_t * L_36 = V_4;
			NullCheck(L_36);
			String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
			String_t* L_38 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___bDns2), /*hidden argument*/NULL);
			String_t* L_39 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_37, _stringLiteral20EF8B28E8A7BF1AF0315CB8F0BA2D7322F6BC83, L_38, /*hidden argument*/NULL);
			CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_39, /*hidden argument*/NULL);
			// m_hSocket = null;
			__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
			// if (bDns)
			bool L_40 = ___bDns2;
			if (!L_40)
			{
				goto IL_00ed;
			}
		}

IL_00e1:
		{
			// ++s_DnsExceptionCount;
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			int32_t L_41 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_DnsExceptionCount_6();
			((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_DnsExceptionCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)));
		}

IL_00ed:
		{
			// }
			goto IL_00ef;
		}
	} // end catch (depth: 1)

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void CTcp::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Connect_mCB4207DAA3A5E32848A24C990EC8F88FD27FC71C (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szIP0, int32_t ___nPort1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_Connect_mCB4207DAA3A5E32848A24C990EC8F88FD27FC71C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Close(); // ??????
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(__this, /*hidden argument*/NULL);
		// if(s_DnsExceptionCount < 10)
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_DnsExceptionCount_6();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0018;
		}
	}
	{
		// TryConnect(szIP, nPort, true);
		String_t* L_1 = ___szIP0;
		int32_t L_2 = ___nPort1;
		CTcp_TryConnect_mA07E60194BFC8D47784A34AE38509E2DEA67ED20(__this, L_1, L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (m_hSocket == null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_m_hSocket_0();
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// TryConnect(szIP, nPort, false);
		String_t* L_4 = ___szIP0;
		int32_t L_5 = ___nPort1;
		CTcp_TryConnect_mA07E60194BFC8D47784A34AE38509E2DEA67ED20(__this, L_4, L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (m_hSocket == null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_6 = __this->get_m_hSocket_0();
		if (L_6)
		{
			goto IL_006e;
		}
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		// m_hSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_7 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
		Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_7, 2, 1, 6, /*hidden argument*/NULL);
		__this->set_m_hSocket_0(L_7);
		// m_hSocket.Connect(szIP, nPort);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_8 = __this->get_m_hSocket_0();
		String_t* L_9 = ___szIP0;
		int32_t L_10 = ___nPort1;
		NullCheck(L_8);
		Socket_Connect_m3D3BE0D486BFCB947CAF7C7D83ABD4153040FF00(L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		goto IL_006e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004e;
		throw e;
	}

CATCH_004e:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString() + ", Third Conect failed");
		Exception_t * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_12, _stringLiteral7DC83CCF7162CA21061D7A4BE00CA9BC283B149F, /*hidden argument*/NULL);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_13, /*hidden argument*/NULL);
		// m_hSocket = null;
		__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
		// }
		goto IL_006e;
	} // end catch (depth: 1)

IL_006e:
	{
		// }
		return;
	}
}
// System.Void CTcp::Connect(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Connect_m7264180B876C324DCCAE279BDD9F355CA97C5580 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___ipa0, int32_t ___nPort1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_Connect_m7264180B876C324DCCAE279BDD9F355CA97C5580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Close(); // ??????
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(__this, /*hidden argument*/NULL);
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// if (m_hSocket == null)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			if (L_0)
			{
				goto IL_001c;
			}
		}

IL_000e:
		{
			// m_hSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_1, 2, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_1);
		}

IL_001c:
		{
			// m_hSocket.Connect(ipa, nPort);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = __this->get_m_hSocket_0();
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_3 = ___ipa0;
			int32_t L_4 = ___nPort1;
			NullCheck(L_2);
			Socket_Connect_mE3F6A0F6D9A997E44F4F6EA04E7C3EFDAE35EE0A(L_2, L_3, L_4, /*hidden argument*/NULL);
			// }
			goto IL_004b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString() + ", Conect IPAddress");
		Exception_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_6, _stringLiteralBC4E6ACDB62CE7BB7D434B7A9B3A573819DF4480, /*hidden argument*/NULL);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_7, /*hidden argument*/NULL);
		// m_hSocket = null;
		__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
		// }
		goto IL_004b;
	} // end catch (depth: 1)

IL_004b:
	{
		// }
		return;
	}
}
// System.Void CTcp::Connect(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Connect_mA860AE58E4DD6A21FF6F77E151ED4493A0F27857 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___ipDns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_Connect_mA860AE58E4DD6A21FF6F77E151ED4493A0F27857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Close(); // ??????
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(__this, /*hidden argument*/NULL);
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			// if (m_hSocket == null)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			if (L_0)
			{
				goto IL_001c;
			}
		}

IL_000e:
		{
			// m_hSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_1, 2, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_1);
		}

IL_001c:
		{
			// m_hSocket.Connect(ipDns);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = __this->get_m_hSocket_0();
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_3 = ___ipDns0;
			NullCheck(L_2);
			Socket_Connect_m06F14E236617A4BA22146BEC4334E24ED39D8536(L_2, L_3, /*hidden argument*/NULL);
			// }
			goto IL_004a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString() + ", Conect IPDns");
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_5, _stringLiteralEF9279917D1D5AC4F4813B5BEC728DF52B5D0A9A, /*hidden argument*/NULL);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_6, /*hidden argument*/NULL);
		// m_hSocket = null;
		__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
		// }
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
	{
		// }
		return;
	}
}
// System.Boolean CTcp::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method)
{
	{
		// if (m_hSocket != null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return m_hSocket.Connected;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_m_hSocket_0();
		NullCheck(L_1);
		bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean CTcp::IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcp_IsOpen_m18E14255045DCC8008B918BCF2180F0235B61C94 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method)
{
	{
		// return IsConnect();
		bool L_0 = CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CTcp::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (m_hSocket != null)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			if (!L_0)
			{
				goto IL_0033;
			}
		}

IL_0008:
		{
			// if (m_hSocket.Connected)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_m_hSocket_0();
			NullCheck(L_1);
			bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_002c;
			}
		}

IL_0015:
		{
			// m_hSocket.Shutdown(SocketShutdown.Both);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_m_hSocket_0();
			NullCheck(L_3);
			Socket_Shutdown_m196EA3E73DC67F9E14D6A129945D862131D6AABB(L_3, 2, /*hidden argument*/NULL);
			// m_hSocket.Close();
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_4 = __this->get_m_hSocket_0();
			NullCheck(L_4);
			Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_4, /*hidden argument*/NULL);
		}

IL_002c:
		{
			// m_hSocket = null;
			__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
		}

IL_0033:
		{
			// }
			goto IL_0075;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0035;
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_0 = ((Exception_t *)__exception_local);
			// if( m_hSocket != null )
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = __this->get_m_hSocket_0();
			if (!L_5)
			{
				goto IL_0056;
			}
		}

IL_003e:
		{
			// push_debug_info(e.ToString() + ", Socket is not null.");
			Exception_t * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_7, _stringLiteral9365479110C2FB628B5C707224FA869BB787ED0B, /*hidden argument*/NULL);
			CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_8, /*hidden argument*/NULL);
			goto IL_006c;
		}

IL_0056:
		{
			// push_debug_info(e.ToString() + ", Socket is null.");
			Exception_t * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
			String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_10, _stringLiteralF4A05CE08819EACE8AF77AF2778863E6D4C9CA2C, /*hidden argument*/NULL);
			CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_11, /*hidden argument*/NULL);
		}

IL_006c:
		{
			// m_hSocket = null;
			__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
			// }
			goto IL_0075;
		}
	} // end catch (depth: 1)

IL_0075:
	{
		// }
		return;
	}
}
// System.Int32 CTcp::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___size1, int32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (m_hSocket != null && m_hSocket.Connected)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			if (!L_0)
			{
				goto IL_0026;
			}
		}

IL_0008:
		{
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_m_hSocket_0();
			NullCheck(L_1);
			bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0026;
			}
		}

IL_0015:
		{
			// return m_hSocket.Receive(buffer, size, flags);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_m_hSocket_0();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___buffer0;
			int32_t L_5 = ___size1;
			int32_t L_6 = ___flags2;
			NullCheck(L_3);
			int32_t L_7 = Socket_Receive_m2D677AF5939F622C20316216B4E4E232B07AF931(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			goto IL_0043;
		}

IL_0026:
		{
			// }
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0028;
		throw e;
	}

CATCH_0028:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString() + ", Receive.");
		Exception_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, _stringLiteral7E6CB04F4729F4637F1A1C305ED4412AC8903F11, /*hidden argument*/NULL);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_10, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		// return 0;
		return 0;
	}

IL_0043:
	{
		// }
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 CTcp::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_Send_mA6B9FCC2474392E86AB9E7756537641FD04F25BC (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf0, int32_t ___size1, int32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcp_Send_mA6B9FCC2474392E86AB9E7756537641FD04F25BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (m_hSocket != null && m_hSocket.Connected)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			if (!L_0)
			{
				goto IL_0026;
			}
		}

IL_0008:
		{
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_m_hSocket_0();
			NullCheck(L_1);
			bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0026;
			}
		}

IL_0015:
		{
			// return m_hSocket.Send(buf, size, flags);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_m_hSocket_0();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___buf0;
			int32_t L_5 = ___size1;
			int32_t L_6 = ___flags2;
			NullCheck(L_3);
			int32_t L_7 = Socket_Send_m2FF02253EFA5AC56C2684594FF0DA4E9392FE4B5(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			goto IL_0043;
		}

IL_0026:
		{
			// }
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0028;
		throw e;
	}

CATCH_0028:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)__exception_local);
		// push_debug_info(e.ToString() + ", Send.");
		Exception_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, _stringLiteral042CB04D8F222417D9CCD891875BAE8F89BCCF02, /*hidden argument*/NULL);
		CTcp_push_debug_info_m28B2F4CB57C0100B174BDFB8E3E6C73226488E0F(__this, L_10, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		// return 0;
		return 0;
	}

IL_0043:
	{
		// }
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 CTcp::SendToServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcp_SendToServer_m2E4561DFD915AF01CDB0735D2234B4B124A42DC1 (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, String_t* ___szMsg0, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(szMsg))
		String_t* L_0 = ___szMsg0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000a:
	{
		// byte[] byBuf = System.Text.Encoding.UTF8.GetBytes(szMsg);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_3 = ___szMsg0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		// return Send(byBuf, byBuf.Length, SocketFlags.None);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = CTcp_Send_mA6B9FCC2474392E86AB9E7756537641FD04F25BC(__this, L_5, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), 0, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void CTcp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcp__cctor_m05E103CFC30DCE168D7887E5B6623D735B413763 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcp_GetHostAddressInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHostAddressInterface__ctor_mDBB369FB587F97E51DE50C36A6C0378AA84984C0 (GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Net.IPAddress[] CTcp_GetHostAddressInterface::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_Invoke_mF4A531A9CF4418934005B0274E9BF0514E6EDCB3 (GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * __this, String_t* ___szIP0, const RuntimeMethod* method)
{
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
			}
			else
			{
				// closed
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___szIP0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(targetMethod, ___szIP0);
					else
						result = GenericVirtFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(targetMethod, ___szIP0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___szIP0);
					else
						result = VirtFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___szIP0);
				}
			}
			else
			{
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(targetMethod, targetThis, ___szIP0);
					else
						result = GenericVirtFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(targetMethod, targetThis, ___szIP0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___szIP0);
					else
						result = VirtFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___szIP0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___szIP0) - 1), targetMethod);
				}
				else
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___szIP0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CTcp_GetHostAddressInterface::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetHostAddressInterface_BeginInvoke_m5073C05DDADDF9079C6FBB4DE62D60A90F373067 (GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * __this, String_t* ___szIP0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___szIP0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Net.IPAddress[] CTcp_GetHostAddressInterface::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_EndInvoke_m86A3AA04E7BB541A99E7A2D791ED1526D6606F24 (GetHostAddressInterface_tCF45C0726E46AE9AAED5693F18376B81E0DBDDC5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcp_IPAddrTest::TestConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddrTest_TestConnect_m9A161CE299D4D63A15AB86900787BE22E4BDA326 (IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPAddrTest_TestConnect_m9A161CE299D4D63A15AB86900787BE22E4BDA326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Threading.Thread t = new System.Threading.Thread(Connect);
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_0 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_0, __this, (intptr_t)((intptr_t)IPAddrTest_Connect_m3590ED8ABBEE0FE2A997D8E82AE2C79EA9104FEA_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_1 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_1, L_0, /*hidden argument*/NULL);
		// t.Start(this);
		NullCheck(L_1);
		Thread_Start_m3D27E6E9735ED3B6BF2CD332B8D90E7E8CE21933(L_1, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CTcp_IPAddrTest::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddrTest_Connect_m3590ED8ABBEE0FE2A997D8E82AE2C79EA9104FEA (IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPAddrTest_Connect_m3590ED8ABBEE0FE2A997D8E82AE2C79EA9104FEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Socket hSocket = null;
		V_0 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL;
		// bool bSuc = false;
		V_1 = (bool)0;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		{
			// hSocket = new Socket(m_pIPAddr.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_m_pIPAddr_0();
			NullCheck(L_0);
			int32_t L_1 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_0, /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_2, L_1, 1, 6, /*hidden argument*/NULL);
			V_0 = L_2;
			// hSocket.Connect(m_pIPAddr, m_nPort);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = V_0;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_4 = __this->get_m_pIPAddr_0();
			int32_t L_5 = __this->get_m_nPort_1();
			NullCheck(L_3);
			Socket_Connect_mE3F6A0F6D9A997E44F4F6EA04E7C3EFDAE35EE0A(L_3, L_4, L_5, /*hidden argument*/NULL);
			// if(hSocket.Connected)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_6 = V_0;
			NullCheck(L_6);
			bool L_7 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			// bSuc = true;
			V_1 = (bool)1;
		}

IL_0033:
		{
			// }
			goto IL_003c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0035;
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch(Exception e)
		// bSuc = false;
		V_1 = (bool)0;
		// hSocket = null;
		V_0 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL;
		// }
		goto IL_003c;
	} // end catch (depth: 1)

IL_003c:
	{
		// if(bSuc)
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		// if(s_nIPV6State == 1)
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		int32_t L_9 = ((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->get_s_nIPV6State_2();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		// if (m_bIsIPV6)
		bool L_10 = __this->get_m_bIsIPV6_2();
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// s_nIPV6State = 2; // ????IPV6?
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_nIPV6State_2(2);
		goto IL_006d;
	}

IL_0057:
	{
		// s_nIPV6State = 3; // ?????IPV4
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_nIPV6State_2(3);
		// }
		goto IL_006d;
	}

IL_005f:
	{
		// else if(!m_bIsIPV6)
		bool L_11 = __this->get_m_bIsIPV6_2();
		if (L_11)
		{
			goto IL_006d;
		}
	}
	{
		// s_nIPV6State = 3; // ??IPV4?????IPV4
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		((CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_StaticFields*)il2cpp_codegen_static_fields_for(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var))->set_s_nIPV6State_2(3);
	}

IL_006d:
	{
		// if(hSocket != null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		// hSocket.Shutdown(SocketShutdown.Both);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_13 = V_0;
		NullCheck(L_13);
		Socket_Shutdown_m196EA3E73DC67F9E14D6A129945D862131D6AABB(L_13, 2, /*hidden argument*/NULL);
		// hSocket.Close();
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_14 = V_0;
		NullCheck(L_14);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_14, /*hidden argument*/NULL);
		// hSocket = null;
		V_0 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL;
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void CTcp_IPAddrTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddrTest__ctor_m028DB5F18863004C01AF69238822ED3E3733FC87 (IPAddrTest_t6FD435D0D44A88BD53B4D857D041CB11D97DDCA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 (push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * __this, String_t* ___szInfo0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___szInfo0' to native representation
	char* ____szInfo0_marshaled = NULL;
	____szInfo0_marshaled = il2cpp_codegen_marshal_string(___szInfo0);

	// Native function invocation
	il2cppPInvokeFunc(____szInfo0_marshaled);

	// Marshaling cleanup of parameter '___szInfo0' native representation
	il2cpp_codegen_marshal_free(____szInfo0_marshaled);
	____szInfo0_marshaled = NULL;

}
// System.Void CTcp_push_debug_info_backback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void push_debug_info_backback__ctor_mAB76BAE3046990F1FBAB2CEE49367BDC8C840F06 (push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CTcp_push_debug_info_backback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void push_debug_info_backback_Invoke_m0950123B1E74B2568918439459A19C5E4F33F390 (push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * __this, String_t* ___szInfo0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___szInfo0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___szInfo0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___szInfo0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___szInfo0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___szInfo0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___szInfo0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___szInfo0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___szInfo0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___szInfo0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___szInfo0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___szInfo0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___szInfo0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___szInfo0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___szInfo0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CTcp_push_debug_info_backback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* push_debug_info_backback_BeginInvoke_mCF925912141AB1EC547B140BD818774318DC81A3 (push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * __this, String_t* ___szInfo0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___szInfo0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void CTcp_push_debug_info_backback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void push_debug_info_backback_EndInvoke_mCB3AFA0AD4F9130502F818A62B90603E99F27F6C (push_debug_info_backback_t399AEFF0872D6891C32C60284CAB2D60EFC379C3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcpAsync::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync__ctor_m82346A47B5FBAC4C01561B194D7C57F4E33CA0C3 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync__ctor_m82346A47B5FBAC4C01561B194D7C57F4E33CA0C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string m_szConnectAddr = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_szConnectAddr_6(L_0);
		// public CTcpAsync()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_nRandSeed = 0;
		__this->set_m_nRandSeed_1((((int64_t)((int64_t)0))));
		// m_RecvBuffer = new byte[8192];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->set_m_RecvBuffer_7(L_1);
		// }
		return;
	}
}
// System.Void CTcpAsync::TryConnect(System.String,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, String_t* ___szIP0, int32_t ___nPort1, bool ___bDns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* V_0 = NULL;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_1 = NULL;
	int32_t V_2 = 0;
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* G_B6_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (!bDns && m_pGetHostAddressInterface == null)
			bool L_0 = ___bDns2;
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0003:
		{
			GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * L_1 = __this->get_m_pGetHostAddressInterface_2();
			if (L_1)
			{
				goto IL_000e;
			}
		}

IL_000b:
		{
			// bDns = true;
			___bDns2 = (bool)1;
		}

IL_000e:
		{
			// IPAddress[] ipa = bDns ? Dns.GetHostAddresses(szIP) : m_pGetHostAddressInterface(szIP);
			bool L_2 = ___bDns2;
			if (L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * L_3 = __this->get_m_pGetHostAddressInterface_2();
			String_t* L_4 = ___szIP0;
			NullCheck(L_3);
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_5 = GetHostAddressInterface_Invoke_m40A9266E0BF5EFB40AE8BBD3F3F44E91C7CE9677(L_3, L_4, /*hidden argument*/NULL);
			G_B6_0 = L_5;
			goto IL_0025;
		}

IL_001f:
		{
			String_t* L_6 = ___szIP0;
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_7 = Dns_GetHostAddresses_mBB73A3CFACAF787C2DDB8EF473E87D31940A379D(L_6, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0025:
		{
			V_0 = G_B6_0;
			// if (ipa != null)
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_8 = V_0;
			if (!L_8)
			{
				goto IL_0116;
			}
		}

IL_002c:
		{
			// if(!m_bInitIPV6)
			bool L_9 = __this->get_m_bInitIPV6_5();
			if (L_9)
			{
				goto IL_0046;
			}
		}

IL_0034:
		{
			// m_bInitIPV6 = true;
			__this->set_m_bInitIPV6_5((bool)1);
			// m_bIsIPV6 = CTcp.IsIPV6Net();
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			bool L_10 = CTcp_IsIPV6Net_m553ED9D1A093C3705DC97C6639BFEA6E38DBE0C1(/*hidden argument*/NULL);
			__this->set_m_bIsIPV6_4(L_10);
		}

IL_0046:
		{
			// IPAddress pIPAddr = null;
			V_1 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)NULL;
			// for (int i = 0; i < ipa.Length; ++i)
			V_2 = 0;
			goto IL_00b8;
		}

IL_004c:
		{
			// pIPAddr = ipa[i];
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_11 = V_0;
			int32_t L_12 = V_2;
			NullCheck(L_11);
			int32_t L_13 = L_12;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			V_1 = L_14;
			// if (pIPAddr.AddressFamily == AddressFamily.InterNetworkV6)
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_15 = V_1;
			NullCheck(L_15);
			int32_t L_16 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_15, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)23)))))
			{
				goto IL_0064;
			}
		}

IL_005a:
		{
			// if (!m_bIsIPV6)
			bool L_17 = __this->get_m_bIsIPV6_4();
			if (L_17)
			{
				goto IL_006c;
			}
		}

IL_0062:
		{
			// continue;
			goto IL_00b4;
		}

IL_0064:
		{
			// if (m_bIsIPV6)
			bool L_18 = __this->get_m_bIsIPV6_4();
			if (L_18)
			{
				goto IL_00b4;
			}
		}

IL_006c:
		{
			// IPEndPoint ipDns = new IPEndPoint(pIPAddr, nPort);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_19 = V_1;
			int32_t L_20 = ___nPort1;
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_21 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
			IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_21, L_19, L_20, /*hidden argument*/NULL);
			V_3 = L_21;
			// m_hSocket = new Socket(pIPAddr.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_22 = V_1;
			NullCheck(L_22);
			int32_t L_23 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_22, /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_24 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_24, L_23, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_24);
			// m_hSocket.BeginConnect(ipDns, new AsyncCallback(ConnectCallback), m_hSocket);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_25 = __this->get_m_hSocket_0();
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_26 = V_3;
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_27 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_27, __this, (intptr_t)((intptr_t)CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B_RuntimeMethod_var), /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_28 = __this->get_m_hSocket_0();
			NullCheck(L_25);
			Socket_BeginConnect_m7A303BAA762EDA38A30E37F536A31EC2F18D2495(L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
			// m_szConnectAddr = pIPAddr.ToString();
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_29 = V_1;
			NullCheck(L_29);
			String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
			__this->set_m_szConnectAddr_6(L_30);
			// break;
			goto IL_00be;
		}

IL_00b4:
		{
			// for (int i = 0; i < ipa.Length; ++i)
			int32_t L_31 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		}

IL_00b8:
		{
			// for (int i = 0; i < ipa.Length; ++i)
			int32_t L_32 = V_2;
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_33 = V_0;
			NullCheck(L_33);
			if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))))
			{
				goto IL_004c;
			}
		}

IL_00be:
		{
			// if (m_hSocket == null && ipa != null)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_34 = __this->get_m_hSocket_0();
			if (L_34)
			{
				goto IL_0116;
			}
		}

IL_00c6:
		{
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_35 = V_0;
			if (!L_35)
			{
				goto IL_0116;
			}
		}

IL_00c9:
		{
			// int nLen = ipa.Length;
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_36 = V_0;
			NullCheck(L_36);
			V_4 = (((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))));
			// int nIndex = CTcp.RandInt(ref m_nRandSeed, 0, nLen - 1); // ?????
			int64_t* L_37 = __this->get_address_of_m_nRandSeed_1();
			int32_t L_38 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
			int32_t L_39 = CTcp_RandInt_mC0693F0E4441124DD80A3B6E15CE892A98D94950((int64_t*)L_37, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1)), /*hidden argument*/NULL);
			V_5 = L_39;
			// m_hSocket = new Socket(ipa[nIndex].AddressFamily, SocketType.Stream, ProtocolType.Tcp);
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_40 = V_0;
			int32_t L_41 = V_5;
			NullCheck(L_40);
			int32_t L_42 = L_41;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			NullCheck(L_43);
			int32_t L_44 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_43, /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_45 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_45, L_44, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_45);
			// m_hSocket.BeginConnect(ipa, nPort, new AsyncCallback(ConnectCallback), m_hSocket);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_46 = __this->get_m_hSocket_0();
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_47 = V_0;
			int32_t L_48 = ___nPort1;
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_49 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_49, __this, (intptr_t)((intptr_t)CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B_RuntimeMethod_var), /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_50 = __this->get_m_hSocket_0();
			NullCheck(L_46);
			Socket_BeginConnect_m040F02102860B693B6A585A43D0E5E1F4E6ADC93(L_46, L_47, L_48, L_49, L_50, /*hidden argument*/NULL);
		}

IL_0116:
		{
			// }
			goto IL_0133;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0118;
		throw e;
	}

CATCH_0118:
	{ // begin catch(System.Exception)
		{
			// catch (Exception)
			// m_hSocket = null;
			__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
			// if (bDns)
			bool L_51 = ___bDns2;
			if (!L_51)
			{
				goto IL_0131;
			}
		}

IL_0123:
		{
			// ++m_DnsExceptionCount;
			int32_t L_52 = __this->get_m_DnsExceptionCount_3();
			__this->set_m_DnsExceptionCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
		}

IL_0131:
		{
			// }
			goto IL_0133;
		}
	} // end catch (depth: 1)

IL_0133:
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::TrySafeConnect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_TrySafeConnect_m2BA9E1B4F9096D938195A173969BA9DBF2702B5B (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, String_t* ___szIP0, int32_t ___nPort1, const RuntimeMethod* method)
{
	{
		// if(m_pGetHostAddressInterface != null)
		GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * L_0 = __this->get_m_pGetHostAddressInterface_2();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// TryConnect(szIP, nPort, true);
		String_t* L_1 = ___szIP0;
		int32_t L_2 = ___nPort1;
		CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A(__this, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		// if(m_hSocket == null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_m_hSocket_0();
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// TryConnect(szIP, nPort, false);
		String_t* L_4 = ___szIP0;
		int32_t L_5 = ___nPort1;
		CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A(__this, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// TryConnect(szIP, nPort, false);
		String_t* L_6 = ___szIP0;
		int32_t L_7 = ___nPort1;
		CTcpAsync_TryConnect_m220DDCC1097233B3BA31D6A87B84A963DC9B0B8A(__this, L_6, L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::ConnectToServer(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_ConnectToServer_mEFE81F81A1355313D3FF42D5BC0CEB7D1260FF5A (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, String_t* ___szServerAddr0, int32_t ___nPort1, int64_t ___nRandSeed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_ConnectToServer_mEFE81F81A1355313D3FF42D5BC0CEB7D1260FF5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_1 = NULL;
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( nRandSeed != 0 )
		int64_t L_0 = ___nRandSeed2;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// m_nRandSeed = nRandSeed;
		int64_t L_1 = ___nRandSeed2;
		__this->set_m_nRandSeed_1(L_1);
	}

IL_000a:
	{
		// bool bSucConnect = false;
		V_0 = (bool)0;
		// if (IsConnect())
		bool L_2 = CTcpAsync_IsConnect_mA07A76DA3F17AA208AF7624EEDD9539D662A1391(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Quit();
		CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			// if (IPAddress.TryParse(szServerAddr, out ipa))
			String_t* L_3 = ___szServerAddr0;
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
			bool L_4 = IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA(L_3, (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE **)(&V_1), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005e;
			}
		}

IL_0025:
		{
			// IPEndPoint IP = new IPEndPoint(ipa, nPort);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_5 = V_1;
			int32_t L_6 = ___nPort1;
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_7 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
			IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_7, L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			// m_hSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_8 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_8, 2, 1, 6, /*hidden argument*/NULL);
			__this->set_m_hSocket_0(L_8);
			// m_hSocket.BeginConnect(IP, new AsyncCallback(ConnectCallback), m_hSocket);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_9 = __this->get_m_hSocket_0();
			IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_10 = V_2;
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_11 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_11, __this, (intptr_t)((intptr_t)CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B_RuntimeMethod_var), /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_12 = __this->get_m_hSocket_0();
			NullCheck(L_9);
			Socket_BeginConnect_m7A303BAA762EDA38A30E37F536A31EC2F18D2495(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
			// bSucConnect = true;
			V_0 = (bool)1;
			// }
			goto IL_0070;
		}

IL_005e:
		{
			// TrySafeConnect(szServerAddr, nPort);
			String_t* L_13 = ___szServerAddr0;
			int32_t L_14 = ___nPort1;
			CTcpAsync_TrySafeConnect_m2BA9E1B4F9096D938195A173969BA9DBF2702B5B(__this, L_13, L_14, /*hidden argument*/NULL);
			// bSucConnect = m_hSocket != null;
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_15 = __this->get_m_hSocket_0();
			V_0 = (bool)((!(((RuntimeObject*)(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		}

IL_0070:
		{
			// }
			goto IL_0075;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0072;
		throw e;
	}

CATCH_0072:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		// }
		goto IL_0075;
	} // end catch (depth: 1)

IL_0075:
	{
		// if(!bSucConnect)
		bool L_16 = V_0;
		if (L_16)
		{
			goto IL_007e;
		}
	}
	{
		// OnFailedConect();
		VirtActionInvoker0::Invoke(6 /* System.Void CTcpAsync::OnFailedConect() */, __this);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (m_hSocket != null)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			if (!L_0)
			{
				goto IL_0033;
			}
		}

IL_0008:
		{
			// if (m_hSocket.Connected)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_m_hSocket_0();
			NullCheck(L_1);
			bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0021;
			}
		}

IL_0015:
		{
			// m_hSocket.Shutdown(SocketShutdown.Both);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_m_hSocket_0();
			NullCheck(L_3);
			Socket_Shutdown_m196EA3E73DC67F9E14D6A129945D862131D6AABB(L_3, 2, /*hidden argument*/NULL);
		}

IL_0021:
		{
			// m_hSocket.Close();
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_4 = __this->get_m_hSocket_0();
			NullCheck(L_4);
			Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_4, /*hidden argument*/NULL);
			// m_hSocket = null;
			__this->set_m_hSocket_0((Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)NULL);
		}

IL_0033:
		{
			// }
			goto IL_0038;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0035;
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// }
		goto IL_0038;
	} // end catch (depth: 1)

IL_0038:
	{
		// }
		return;
	}
}
// System.Boolean CTcpAsync::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcpAsync_IsConnect_mA07A76DA3F17AA208AF7624EEDD9539D662A1391 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method)
{
	{
		// if (m_hSocket != null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return m_hSocket.Connected;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_m_hSocket_0();
		NullCheck(L_1);
		bool L_2 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void CTcpAsync::ConnectCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_ConnectCallback_mEDF18B11067B369AD5B09106C9F7BE67B4F12D2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// m_hSocket.EndConnect(ar);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			RuntimeObject* L_1 = ___ar0;
			NullCheck(L_0);
			Socket_EndConnect_m0CFDCA9629EAF8E764A7EB9D61C9DDA83988209F(L_0, L_1, /*hidden argument*/NULL);
			// if (m_hSocket.Connected)
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = __this->get_m_hSocket_0();
			NullCheck(L_2);
			bool L_3 = Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_004f;
			}
		}

IL_0019:
		{
			// m_hSocket.BeginReceive(m_RecvBuffer, 0, m_RecvBuffer.Length, 0, new AsyncCallback(ReceiveCallback), m_hSocket);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_4 = __this->get_m_hSocket_0();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_m_RecvBuffer_7();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_m_RecvBuffer_7();
			NullCheck(L_6);
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_7 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_7, __this, (intptr_t)((intptr_t)CTcpAsync_ReceiveCallback_m3899DAB2116B0A493DC52C03C5ED6A884D5DA6B6_RuntimeMethod_var), /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_8 = __this->get_m_hSocket_0();
			NullCheck(L_4);
			Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30(L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), 0, L_7, L_8, /*hidden argument*/NULL);
			// OnSucConnect();
			VirtActionInvoker0::Invoke(5 /* System.Void CTcpAsync::OnSucConnect() */, __this);
			// }
			goto IL_0055;
		}

IL_004f:
		{
			// OnFailedConect();
			VirtActionInvoker0::Invoke(6 /* System.Void CTcpAsync::OnFailedConect() */, __this);
		}

IL_0055:
		{
			// }
			goto IL_0066;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0057;
		throw e;
	}

CATCH_0057:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// Quit();
		CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B(__this, /*hidden argument*/NULL);
		// OnFailedConect();
		VirtActionInvoker0::Invoke(6 /* System.Void CTcpAsync::OnFailedConect() */, __this);
		// }
		goto IL_0066;
	} // end catch (depth: 1)

IL_0066:
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_ReceiveCallback_m3899DAB2116B0A493DC52C03C5ED6A884D5DA6B6 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_ReceiveCallback_m3899DAB2116B0A493DC52C03C5ED6A884D5DA6B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int nLen = m_hSocket.EndReceive(ar);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
			RuntimeObject* L_1 = ___ar0;
			NullCheck(L_0);
			int32_t L_2 = Socket_EndReceive_mF4C73ED2C78731706B7891AB94B7D4EF084476F0(L_0, L_1, /*hidden argument*/NULL);
			V_0 = L_2;
			// if (nLen > 0)
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) <= ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0011:
		{
			// OnReceiveBuf(m_RecvBuffer, nLen);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_m_RecvBuffer_7();
			int32_t L_5 = V_0;
			VirtFuncInvoker2< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(4 /* System.Int32 CTcpAsync::OnReceiveBuf(System.Byte[],System.Int32) */, __this, L_4, L_5);
			// m_hSocket.BeginReceive(m_RecvBuffer, 0, m_RecvBuffer.Length, 0, new AsyncCallback(ReceiveCallback), m_hSocket);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_6 = __this->get_m_hSocket_0();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = __this->get_m_RecvBuffer_7();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get_m_RecvBuffer_7();
			NullCheck(L_8);
			AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_9 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_9, __this, (intptr_t)((intptr_t)CTcpAsync_ReceiveCallback_m3899DAB2116B0A493DC52C03C5ED6A884D5DA6B6_RuntimeMethod_var), /*hidden argument*/NULL);
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_10 = __this->get_m_hSocket_0();
			NullCheck(L_6);
			Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30(L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))), 0, L_9, L_10, /*hidden argument*/NULL);
		}

IL_004d:
		{
			// }
			goto IL_0058;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004f;
		throw e;
	}

CATCH_004f:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// Quit();
		CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B(__this, /*hidden argument*/NULL);
		// }
		goto IL_0058;
	} // end catch (depth: 1)

IL_0058:
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::SendToServer(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_SendToServer_m903CF24A48B5AE51CCE6540967153EBC775D7A90 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___szBuf0, int32_t ___nBufSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_SendToServer_m903CF24A48B5AE51CCE6540967153EBC775D7A90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// byte[] bytes = new byte[nBufSize];
		int32_t L_0 = ___nBufSize1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// Array.Copy(szBuf, 0, bytes, 0, nBufSize);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___szBuf0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		int32_t L_4 = ___nBufSize1;
		Array_Copy_mA10D079DD8D9700CA44721A219A934A2397653F6((RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		// m_hSocket.BeginSend(bytes, 0, bytes.Length, 0, new AsyncCallback(SendCallback), m_hSocket);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = __this->get_m_hSocket_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		NullCheck(L_7);
		AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * L_8 = (AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 *)il2cpp_codegen_object_new(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m36AEE927E6AFEE950656BC5F7841682D23DE2EBB(L_8, __this, (intptr_t)((intptr_t)CTcpAsync_SendCallback_m0285BC59B887D8F0B2C056838E60D3FEE0617AC3_RuntimeMethod_var), /*hidden argument*/NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_9 = __this->get_m_hSocket_0();
		NullCheck(L_5);
		Socket_BeginSend_m05E491600486AAC8EFAF5F4EB0C24B13210D640E(L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))), 0, L_8, L_9, /*hidden argument*/NULL);
		// }
		goto IL_0040;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0037;
		throw e;
	}

CATCH_0037:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// Quit();
		CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B(__this, /*hidden argument*/NULL);
		// }
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::SendCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_SendCallback_m0285BC59B887D8F0B2C056838E60D3FEE0617AC3 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpAsync_SendCallback_m0285BC59B887D8F0B2C056838E60D3FEE0617AC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// int nSendSize = m_hSocket.EndSend(ar, out err);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_m_hSocket_0();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		Socket_EndSend_m58F48E67A449034B31B52F7EF2F46856FBCE0310(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// }
		goto IL_001a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// Quit();
		CTcpAsync_Quit_m862333C9D7D2528D4D992594E5EF39286E71830B(__this, /*hidden argument*/NULL);
		// }
		goto IL_001a;
	} // end catch (depth: 1)

IL_001a:
	{
		// }
		return;
	}
}
// System.Int32 CTcpAsync::OnReceiveBuf(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcpAsync_OnReceiveBuf_mC5CCF92A16B6FE838D668C26882CDEAF819314AE (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___recBuf0, int32_t ___nSize1, const RuntimeMethod* method)
{
	{
		// return nSize;
		int32_t L_0 = ___nSize1;
		return L_0;
	}
}
// System.Void CTcpAsync::OnSucConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_OnSucConnect_mE3994FBD0F5496E4FA7916A7E2AB914139B9E828 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CTcpAsync::OnFailedConect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpAsync_OnFailedConect_m2D43C5825409A96FAF9DC9C70DB49AE404EB8949 (CTcpAsync_t06F880462EE7E031B1AC71649538C348A8B5F891 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcpAsync_GetHostAddressInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHostAddressInterface__ctor_mBD4F53FF9447422225A75C5E7779C265094CF2DA (GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Net.IPAddress[] CTcpAsync_GetHostAddressInterface::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_Invoke_m40A9266E0BF5EFB40AE8BBD3F3F44E91C7CE9677 (GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * __this, String_t* ___szIP0, const RuntimeMethod* method)
{
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
			}
			else
			{
				// closed
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___szIP0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(targetMethod, ___szIP0);
					else
						result = GenericVirtFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(targetMethod, ___szIP0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___szIP0);
					else
						result = VirtFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___szIP0);
				}
			}
			else
			{
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(targetMethod, targetThis, ___szIP0);
					else
						result = GenericVirtFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(targetMethod, targetThis, ___szIP0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___szIP0);
					else
						result = VirtFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___szIP0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___szIP0) - 1), targetMethod);
				}
				else
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___szIP0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CTcpAsync_GetHostAddressInterface::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetHostAddressInterface_BeginInvoke_m58AA214FAFCB5C2B2B59E82EE4DCACF9605FE6AE (GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * __this, String_t* ___szIP0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___szIP0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Net.IPAddress[] CTcpAsync_GetHostAddressInterface::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_EndInvoke_m8BC87EBDBB94211F7CC57C8A1DCB6273E6BD0487 (GetHostAddressInterface_tAFB10A504DC06D7DB3A8CE15E314D2FEFD546E8B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcpThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread__ctor_mDEA294AEBB5A544CDC50C793E4C2B1B263371DD3 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpThread__ctor_mDEA294AEBB5A544CDC50C793E4C2B1B263371DD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string m_szConnectAddr = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_szConnectAddr_6(L_0);
		// public CTcpThread()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// m_nRandSeed = 0;
		__this->set_m_nRandSeed_1((((int64_t)((int64_t)0))));
		// m_RecvBuffer = new byte[8192];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192));
		__this->set_m_RecvBuffer_8(L_1);
		// }
		return;
	}
}
// System.Void CTcpThread::ConnectToServer(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_ConnectToServer_mE8BB3884B6AB344FBCA66F4EDC5D61193C92C31D (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, String_t* ___szServerAddr0, int32_t ___nPort1, int64_t ___nRandSeed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpThread_ConnectToServer_mE8BB3884B6AB344FBCA66F4EDC5D61193C92C31D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nRandSeed != 0)
		int64_t L_0 = ___nRandSeed2;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// m_nRandSeed = nRandSeed;
		int64_t L_1 = ___nRandSeed2;
		__this->set_m_nRandSeed_1(L_1);
	}

IL_000a:
	{
		// m_szConnectAddr = szServerAddr;
		String_t* L_2 = ___szServerAddr0;
		__this->set_m_szConnectAddr_6(L_2);
		// m_nConnectPort = nPort;
		int32_t L_3 = ___nPort1;
		__this->set_m_nConnectPort_7(L_3);
		// Thread t = new Thread(ThreadRun);
		ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_4 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_4, __this, (intptr_t)((intptr_t)CTcpThread_ThreadRun_m0210AD52DC93F4D6E24F842D48C37AABB7504C15_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_5 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
		Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_5, L_4, /*hidden argument*/NULL);
		// t.Start();
		NullCheck(L_5);
		Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CTcpThread::ThreadRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_ThreadRun_m0210AD52DC93F4D6E24F842D48C37AABB7504C15 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CTcpThread_ThreadRun_m0210AD52DC93F4D6E24F842D48C37AABB7504C15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_tcp != null)
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_0();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_tcp.Close();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_1 = __this->get_m_tcp_0();
		NullCheck(L_1);
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(L_1, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_0015:
	{
		// m_tcp = new CTcp();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_2 = (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C *)il2cpp_codegen_object_new(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		CTcp__ctor_mAB2F4D53543F40F4D7E790F75DEE059A6AA9DD92(L_2, /*hidden argument*/NULL);
		__this->set_m_tcp_0(L_2);
	}

IL_0020:
	{
		// m_tcp.ConnectToServer(m_szConnectAddr, m_nConnectPort, m_nRandSeed);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_3 = __this->get_m_tcp_0();
		String_t* L_4 = __this->get_m_szConnectAddr_6();
		int32_t L_5 = __this->get_m_nConnectPort_7();
		int64_t L_6 = __this->get_m_nRandSeed_1();
		NullCheck(L_3);
		CTcp_ConnectToServer_m98D8FA6C5195FB11383DAA788B1DCC88294B13A0(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// if(m_tcp.IsConnect())
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_7 = __this->get_m_tcp_0();
		NullCheck(L_7);
		bool L_8 = CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// OnSucConnect();
		VirtActionInvoker0::Invoke(5 /* System.Void CTcpThread::OnSucConnect() */, __this);
		// }
		goto IL_0058;
	}

IL_0052:
	{
		// OnFailedConect();
		VirtActionInvoker0::Invoke(6 /* System.Void CTcpThread::OnFailedConect() */, __this);
	}

IL_0058:
	{
		// BeginRecive();
		CTcpThread_BeginRecive_m0C17A84D49F6FC8A7C3E86AB5BE93F27B170D8EE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CTcpThread::BeginRecive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_BeginRecive_m0C17A84D49F6FC8A7C3E86AB5BE93F27B170D8EE (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int nRecvSize = 0;
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// nRecvSize = m_tcp.Receive(m_RecvBuffer, 4096);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_m_RecvBuffer_8();
		NullCheck(L_0);
		int32_t L_2 = CTcp_Receive_m63AA5B452DC3C5ACE1A2D143290AF0F065DCAB8E(L_0, L_1, ((int32_t)4096), 0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if(nRecvSize > 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// OnReceiveBuf(m_RecvBuffer, nRecvSize);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_m_RecvBuffer_8();
		int32_t L_5 = V_0;
		VirtFuncInvoker2< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(4 /* System.Int32 CTcpThread::OnReceiveBuf(System.Byte[],System.Int32) */, __this, L_4, L_5);
		// }
		goto IL_0036;
	}

IL_0030:
	{
		// Quit();
		CTcpThread_Quit_m5E8D8A2D824ED563FD754208E1332DCEAC279840(__this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// while (m_tcp.IsConnect())
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_6 = __this->get_m_tcp_0();
		NullCheck(L_6);
		bool L_7 = CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CTcpThread::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_Quit_m5E8D8A2D824ED563FD754208E1332DCEAC279840 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	{
		// m_tcp.Close();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_0();
		NullCheck(L_0);
		CTcp_Close_m9FD00D010C005344F8B659723EE9AA7425023FCD(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean CTcpThread::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CTcpThread_IsConnect_mEC2EC8F2E16E72E5802F222E1FAEFF522A2C0B30 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	{
		// if (m_tcp != null)
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return m_tcp.IsConnect();
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_1 = __this->get_m_tcp_0();
		NullCheck(L_1);
		bool L_2 = CTcp_IsConnect_mCFFBC3187E05822025E04CD223C94CBDE998BA59(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void CTcpThread::SendToServer(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_SendToServer_mB8D850FD63AFDA5429192407E3BC674D0C3141D5 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___szBuf0, int32_t ___nBufSize1, const RuntimeMethod* method)
{
	{
		// if (m_tcp != null)
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_0 = __this->get_m_tcp_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// m_tcp.Send(szBuf, nBufSize, SocketFlags.None);
		CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * L_1 = __this->get_m_tcp_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___szBuf0;
		int32_t L_3 = ___nBufSize1;
		NullCheck(L_1);
		CTcp_Send_mA6B9FCC2474392E86AB9E7756537641FD04F25BC(L_1, L_2, L_3, 0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Int32 CTcpThread::OnReceiveBuf(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CTcpThread_OnReceiveBuf_m20BC362E98237F6340CDCF6656D39BDCE46432CE (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___recBuf0, int32_t ___nSize1, const RuntimeMethod* method)
{
	{
		// return nSize;
		int32_t L_0 = ___nSize1;
		return L_0;
	}
}
// System.Void CTcpThread::OnSucConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_OnSucConnect_m2B4202D6D93A6C980369FA09DAEAC8344CD7E2BB (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CTcpThread::OnFailedConect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CTcpThread_OnFailedConect_m2F81EF2333C3DE4BBFFD79EFFE8FC1C24B3748F6 (CTcpThread_t748198D47D3538263A5365D074A715BDEFCD6E02 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CTcpThread_GetHostAddressInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHostAddressInterface__ctor_m15FC0A12BB699A06B7E231ACBB08E1B4C6B21E2D (GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Net.IPAddress[] CTcpThread_GetHostAddressInterface::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_Invoke_m7A95BE35DD51AABF24D39D8F7E59F5E1CF493E25 (GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * __this, String_t* ___szIP0, const RuntimeMethod* method)
{
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
			}
			else
			{
				// closed
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___szIP0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(targetMethod, ___szIP0);
					else
						result = GenericVirtFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(targetMethod, ___szIP0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___szIP0);
					else
						result = VirtFuncInvoker0< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___szIP0);
				}
			}
			else
			{
				typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___szIP0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(targetMethod, targetThis, ___szIP0);
					else
						result = GenericVirtFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(targetMethod, targetThis, ___szIP0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___szIP0);
					else
						result = VirtFuncInvoker1< IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___szIP0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___szIP0) - 1), targetMethod);
				}
				else
				{
					typedef IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___szIP0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CTcpThread_GetHostAddressInterface::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetHostAddressInterface_BeginInvoke_mDD33F2F709F1CDA218B5048EB9255DB27C3B6DDF (GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * __this, String_t* ___szIP0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___szIP0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Net.IPAddress[] CTcpThread_GetHostAddressInterface::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* GetHostAddressInterface_EndInvoke_m858343C01A4A657C9E1D09065625E9166428D9BA (GetHostAddressInterface_tC5DF0A7FED5947020DDD585461CA2B5379954FBF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ConfigManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Awake_m74445245B9BA45852B4D8C1E9245E48C8584A504 (ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ConfigManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Start_mBF8EC690961955D853F289B621C84E3816CE9B96 (ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ConfigManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_Update_m9CE49909CE038625D041AA0ADFE93B23308F4BCF (ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ConfigManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_LateUpdate_mA57D2F616C9A373B7F99E8FAA1CF67C41687F1FB (ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ConfigManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager_OnDestroy_mF47697B68BC128788BF4966B8E53D4B202FBD60F (ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ConfigManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigManager__ctor_m4F795BE56AA20590844CC2C3BC472338385DBB4E (ConfigManager_t82C6AB9EE1B36985E3E7AB0C719F360C771BE803 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigManager__ctor_m4F795BE56AA20590844CC2C3BC472338385DBB4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m12B1DBD51FCB3C6BDF50B06ADAE78094E4D6CA5B(__this, /*hidden argument*/Singleton_1__ctor_m12B1DBD51FCB3C6BDF50B06ADAE78094E4D6CA5B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DownResFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownResFile__ctor_m14BA3B2A53FE1C1E64EBEB2B2E48AA1ACBAABFD5 (DownResFile_t4E189A57B72FA4FC89A9CAF29488BA933BA81F81 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DownResInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownResInfo__ctor_mFF473532285A11F7988FFCCE7DC566AC74BB9974 (DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_mE60F41F3186E80B2BAB293918745366D18508C0F (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_mE60F41F3186E80B2BAB293918745366D18508C0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigManager.Instance.Awake();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_0);
		UIManager_Awake_mA946658D43E2FC2C3479BB9322CED4FF4C5D2EA0(L_0, /*hidden argument*/NULL);
		// AssetsManager.Instance.Awake();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69_il2cpp_TypeInfo_var);
		AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * L_1 = Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364(/*hidden argument*/Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364_RuntimeMethod_var);
		NullCheck(L_1);
		AssetsManager_Awake_m0DCBE4C6E82884A8C7020D1E1DBC29F9507CB6C2(L_1, /*hidden argument*/NULL);
		// LuaManager.Instance.Awake();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_il2cpp_TypeInfo_var);
		LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * L_2 = Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99(/*hidden argument*/Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99_RuntimeMethod_var);
		NullCheck(L_2);
		LuaManager_Awake_m992F6C2129CB8016DD72259C8E943E963125CEEC(L_2, /*hidden argument*/NULL);
		// UIManager.Instance.Awake();
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_3 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_3);
		UIManager_Awake_mA946658D43E2FC2C3479BB9322CED4FF4C5D2EA0(L_3, /*hidden argument*/NULL);
		// GameSceneManager.Instance.Awake();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_il2cpp_TypeInfo_var);
		GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * L_4 = Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470(/*hidden argument*/Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470_RuntimeMethod_var);
		NullCheck(L_4);
		GameSceneManager_Awake_m02225F99DFD7BFA6B7D9440F5A077EF8590284CC(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigManager.Instance.Start();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_0);
		UIManager_Start_mE176851C74E87A3EBAF5D28B5BFC4D8426D91397(L_0, /*hidden argument*/NULL);
		// AssetsManager.Instance.Start();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69_il2cpp_TypeInfo_var);
		AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * L_1 = Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364(/*hidden argument*/Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364_RuntimeMethod_var);
		NullCheck(L_1);
		AssetsManager_Start_mD50A1B79952342995642CE5728F55FEBE66DB9CC(L_1, /*hidden argument*/NULL);
		// LuaManager.Instance.Start();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_il2cpp_TypeInfo_var);
		LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * L_2 = Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99(/*hidden argument*/Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99_RuntimeMethod_var);
		NullCheck(L_2);
		LuaManager_Start_mEAD1EB37A79BB563769697C4C39FC35FA1DC4240(L_2, /*hidden argument*/NULL);
		// UIManager.Instance.Start();
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_3 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_3);
		UIManager_Start_mE176851C74E87A3EBAF5D28B5BFC4D8426D91397(L_3, /*hidden argument*/NULL);
		// GameSceneManager.Instance.Awake();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_il2cpp_TypeInfo_var);
		GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * L_4 = Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470(/*hidden argument*/Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470_RuntimeMethod_var);
		NullCheck(L_4);
		GameSceneManager_Awake_m02225F99DFD7BFA6B7D9440F5A077EF8590284CC(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIManager.Instance.Update();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_0);
		UIManager_Update_mEA6AD9AEDC70385E271BEDCF20C0F4CBD5AC9E7C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LateUpdate_m2958922DCD36152ACA1F9FAD812C3B25A057600B (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_LateUpdate_m2958922DCD36152ACA1F9FAD812C3B25A057600B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LuaManager.Instance.LateUpdate();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_il2cpp_TypeInfo_var);
		LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * L_0 = Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99(/*hidden argument*/Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99_RuntimeMethod_var);
		NullCheck(L_0);
		LuaManager_LateUpdate_mE6B13C7AF06DA8ECE09ABBC468B9CD908BE18CB1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDestroy_m3B6C1D5E9829DB64D361B95465B6829D8767AEEC (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnDestroy_m3B6C1D5E9829DB64D361B95465B6829D8767AEEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigManager.Instance.OnDestroy();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_0);
		UIManager_OnDestroy_m843179C95D552A353DE59EB48F621588E7E1D47D(L_0, /*hidden argument*/NULL);
		// AssetsManager.Instance.OnDestroy();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tACCDFFF59A18232AC9C2E9A66215DBE2D229EA69_il2cpp_TypeInfo_var);
		AssetsManager_t93B2DFB33A78B3B6A0B43B99FA5BDABCFADE76EC * L_1 = Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364(/*hidden argument*/Singleton_1_get_Instance_mC2F0C17954035334200293A408B8CD0AA7BD8364_RuntimeMethod_var);
		NullCheck(L_1);
		AssetsManager_OnDestroy_mD5C9385F8C5FC46C4301677BCAAB387DFA3CC0A4(L_1, /*hidden argument*/NULL);
		// LuaManager.Instance.OnDestroy();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_il2cpp_TypeInfo_var);
		LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * L_2 = Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99(/*hidden argument*/Singleton_1_get_Instance_m72D4199692C5A7E9729A1A2DEF6EA6F6BC6A8E99_RuntimeMethod_var);
		NullCheck(L_2);
		LuaManager_OnDestroy_mEC5A3D523F2655333F52C713BEBC232DD1D0275F(L_2, /*hidden argument*/NULL);
		// UIManager.Instance.OnDestroy();
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_3 = Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07(/*hidden argument*/Singleton_1_get_Instance_m6820CAD8C59891A751B41AF91A372194FFAB8B07_RuntimeMethod_var);
		NullCheck(L_3);
		UIManager_OnDestroy_m843179C95D552A353DE59EB48F621588E7E1D47D(L_3, /*hidden argument*/NULL);
		// GameSceneManager.Instance.OnDestroy();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_il2cpp_TypeInfo_var);
		GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * L_4 = Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470(/*hidden argument*/Singleton_1_get_Instance_m1A74DF3B32D3C004A5B9075A58F9391D12BB1470_RuntimeMethod_var);
		NullCheck(L_4);
		GameSceneManager_OnDestroy_m88C9E74DDEC1DEF3D5175DCBB7E48CDA3A4CA4C3(L_4, /*hidden argument*/NULL);
		// Quit();
		GameManager_Quit_m3A9859CCBC780AF1B91779615BC1C83106B23390(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Quit_m3A9859CCBC780AF1B91779615BC1C83106B23390 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameManagerBeforeSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameManagerBeforeSceneLoad_m9B0F60EBEEFE083EE136F035860B63ED124DBC7E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GameManagerBeforeSceneLoad_m9B0F60EBEEFE083EE136F035860B63ED124DBC7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(GameManager.Instance.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = MonoSingleton_1_get_Instance_mD8EFFB301FFEA4783518E5CFF7B9F9936F4926B6(/*hidden argument*/MonoSingleton_1_get_Instance_mD8EFFB301FFEA4783518E5CFF7B9F9936F4926B6_RuntimeMethod_var);
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameManagerAfterSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameManagerAfterSceneLoad_m5C90A650AD13D440B0B7A154B8402BC31EF3E96A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GameManagerAfterSceneLoad_m5C90A650AD13D440B0B7A154B8402BC31EF3E96A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("?????");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral515E2696A195B8EDED68A60E99C26BBC4EF7E499, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoSingleton_1_t028F2294CEDBC0BC59D8DF10A7EE2E42A1D7D672_il2cpp_TypeInfo_var);
		MonoSingleton_1__ctor_m562FB57BD234C278B1E64690093D2E2ECB8C672D(__this, /*hidden argument*/MonoSingleton_1__ctor_m562FB57BD234C278B1E64690093D2E2ECB8C672D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameSceneManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_Awake_m02225F99DFD7BFA6B7D9440F5A077EF8590284CC (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_Start_mA37DC92360F797A7ECE83239CBF20BF730047DBB (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_Update_mC323D005161163454A0BC7CB4B3615BAE0EE8FC1 (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameSceneManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_LateUpdate_m8DCF804BAB1E9DFD63137585814A0A57DE5DDF17 (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameSceneManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager_OnDestroy_m88C9E74DDEC1DEF3D5175DCBB7E48CDA3A4CA4C3 (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSceneManager__ctor_m8CE547319047D6610543B8037C2A3F1D27C2D46A (GameSceneManager_tFD3630F17D0B1396017D3B11BCA24DB7BFEAC638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSceneManager__ctor_m8CE547319047D6610543B8037C2A3F1D27C2D46A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE6DADD2086667252F9A51C4F66E7817DCF35322_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m8219C96D3634C3B19C28A2BD22B966CEC0E08180(__this, /*hidden argument*/Singleton_1__ctor_m8219C96D3634C3B19C28A2BD22B966CEC0E08180_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LuaManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_Awake_m992F6C2129CB8016DD72259C8E943E963125CEEC (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LuaManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_Start_mEAD1EB37A79BB563769697C4C39FC35FA1DC4240 (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LuaManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_Update_mCADA7D2BCC4A3BCA135111ED4811F675C704B4F7 (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LuaManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_LateUpdate_mE6B13C7AF06DA8ECE09ABBC468B9CD908BE18CB1 (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LuaManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager_OnDestroy_mEC5A3D523F2655333F52C713BEBC232DD1D0275F (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LuaManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LuaManager__ctor_m8B6AC61509FF173DCA93EC222A8A7A880CF64E3A (LuaManager_t4C41E1726383CFDD5D797B5A5DC33714225D5609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LuaManager__ctor_m8B6AC61509FF173DCA93EC222A8A7A880CF64E3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t076E9D76703EBA32C4AD2CAF67FEDB84D5FC21DA_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mB3D8900B7C5C65BD4E08969088F91AA58AC31513(__this, /*hidden argument*/Singleton_1__ctor_mB3D8900B7C5C65BD4E08969088F91AA58AC31513_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestDown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown_Start_m2BB18EBD5CC08DF5765B65D0D838EEAC79E47544 (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestDown_Start_m2BB18EBD5CC08DF5765B65D0D838EEAC79E47544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CTcp.StartTestIPV6("ipv6-test.com"); // ???????????IPV6??, ????????????CDN??
		IL2CPP_RUNTIME_CLASS_INIT(CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C_il2cpp_TypeInfo_var);
		CTcp_StartTestIPV6_m773306E40645875CA878DA09F797A25A45ACB855(_stringLiteral01940AC4E5F1835C40CD2E4DBD7DA4EE82F3B2B9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TestDown::StartDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown_StartDown_m26D1C297BE412F552C5374290D0A0344ACEBB68A (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestDown_StartDown_m26D1C297BE412F552C5374290D0A0344ACEBB68A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * V_0 = NULL;
	CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * V_1 = NULL;
	{
		// List<DownResInfo> downList = new List<DownResInfo>();
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_0 = (List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 *)il2cpp_codegen_object_new(List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377_il2cpp_TypeInfo_var);
		List_1__ctor_m65462203CA5B4F63C0A93D808049779348361641(L_0, /*hidden argument*/List_1__ctor_m65462203CA5B4F63C0A93D808049779348361641_RuntimeMethod_var);
		V_0 = L_0;
		// PushDownFile(downList, "http://www.heao.gov.cn/HEAOFiles/All/ZHC/2019/09301.jpg");
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_1 = V_0;
		TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00(__this, L_1, _stringLiteral449E62C9E9DD54FE856E9DCAEA49F57DFF74A2BB, /*hidden argument*/NULL);
		// PushDownFile(downList, "http://www.heao.gov.cn/HEAOFiles/All/ZHC/2019/09302.jpg");
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_2 = V_0;
		TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00(__this, L_2, _stringLiteralCA1DBEBAE8E3EB72DE6261AB9A6DA9066B83A9E9, /*hidden argument*/NULL);
		// PushDownFile(downList, "http://www.heao.gov.cn/HEAOFiles/All/ZHC/2019/09122.jpg");
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_3 = V_0;
		TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00(__this, L_3, _stringLiteralC1D729290E6C3F534D2DC768CA3FB4A8EFF4903D, /*hidden argument*/NULL);
		// PushDownFile(downList, "http://www.heao.gov.cn/a/201910/42140.shtml");
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_4 = V_0;
		TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00(__this, L_4, _stringLiteral5B3F3CE6F53D578A40B88B1F1957F50A46D6BBF6, /*hidden argument*/NULL);
		// CHttpDownMng mng = new CHttpDownMng();
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_5 = (CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 *)il2cpp_codegen_object_new(CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768_il2cpp_TypeInfo_var);
		CHttpDownMng__ctor_m16D4041628ECC49DD1804B5FE50BA09FFD88E677(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		// mng.StartDown(downList, 2, 100 * 1024, CTargetPlat.PersistentRootPath);
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_6 = V_1;
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_8 = CTargetPlat_get_PersistentRootPath_mCF196B9247DAB25518AC46BE2F6DD761EFED9B72(/*hidden argument*/NULL);
		NullCheck(L_6);
		CHttpDownMng_StartDown_mC179EDC64F87CD4DF35C97D6B39E22D23FAB1EC5(L_6, L_7, 2, ((int32_t)102400), L_8, /*hidden argument*/NULL);
		// m_downMng = mng;
		CHttpDownMng_t6C0EB1E5C38B49C8E3AEDC19DA42CAB3DDE7C768 * L_9 = V_1;
		__this->set_m_downMng_4(L_9);
		// }
		return;
	}
}
// System.Void TestDown::PushDownFile(System.Collections.Generic.List`1<DownResInfo>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00 (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * ___downList0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestDown_PushDownFile_mA01CED7188A6415BB9C040405D7975D4B7AE1D00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * V_0 = NULL;
	{
		// DownResInfo node = new DownResInfo();
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_0 = (DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 *)il2cpp_codegen_object_new(DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9_il2cpp_TypeInfo_var);
		DownResInfo__ctor_mFF473532285A11F7988FFCCE7DC566AC74BB9974(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// node.url = url;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_1 = V_0;
		String_t* L_2 = ___url1;
		NullCheck(L_1);
		L_1->set_url_0(L_2);
		// CHttpDown.GetDownFileSize(url, out node.nFileSize);
		String_t* L_3 = ___url1;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_4 = V_0;
		NullCheck(L_4);
		int32_t* L_5 = L_4->get_address_of_nFileSize_2();
		CHttpDown_GetDownFileSize_m4D459E98F92099A3E1B12A6E19CCCF92EF47AF36(L_3, (int32_t*)L_5, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		// downList.Add(node);
		List_1_t6835EB3B0C6ADD39D8B2F4DCE666174D621F5377 * L_6 = ___downList0;
		DownResInfo_tA2418D015C8A0EBEF6C15FAE55CCE916C9EBBBA9 * L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_m88EE0AC33B5581B91A7B0D555427FB7550FB99BC(L_6, L_7, /*hidden argument*/List_1_Add_m88EE0AC33B5581B91A7B0D555427FB7550FB99BC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TestDown::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown_OnGUI_m0B703072B0602701643E8EEC70AB01DDE443A6E4 (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestDown_OnGUI_m0B703072B0602701643E8EEC70AB01DDE443A6E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	String_t* V_2 = NULL;
	float G_B6_0 = 0.0f;
	float G_B5_0 = 0.0f;
	{
		// float fOffsetY = Screen.height - 720;
		int32_t L_0 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		V_0 = (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)720))))));
		// if (fOffsetY < 0.0f)
		float L_1 = V_0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		// fOffsetY = 0.0f;
		V_0 = (0.0f);
		goto IL_002b;
	}

IL_001d:
	{
		// else if (fOffsetY > 300)
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(300.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// fOffsetY = 300;
		V_0 = (300.0f);
	}

IL_002b:
	{
		// float fLeft = 50.0f;
		// float fTop = 250.0f + fOffsetY;
		float L_3 = V_0;
		V_1 = ((float)il2cpp_codegen_add((float)(250.0f), (float)L_3));
		// if (GUI.Button(new Rect(fLeft, fTop, 100.0f, 20.0f), "????"))
		float L_4 = (50.0f);
		float L_5 = V_1;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_6), L_4, L_5, (100.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m0F0D437C533454A4BF0096E0DC55EEB66366E08D(L_6, _stringLiteral5648D0BE0FFAC82BAB380D3F381AFCBC84A272DB, /*hidden argument*/NULL);
		G_B5_0 = L_4;
		if (!L_7)
		{
			G_B6_0 = L_4;
			goto IL_005b;
		}
	}
	{
		// StartDown();
		TestDown_StartDown_m26D1C297BE412F552C5374290D0A0344ACEBB68A(__this, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_005b:
	{
		// fLeft += 120;
		// if (GUI.Button(new Rect(fLeft, fTop, 120.0f, 20.0f), "??????"))
		float L_8 = V_1;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_9), ((float)il2cpp_codegen_add((float)G_B6_0, (float)(120.0f))), L_8, (120.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		bool L_10 = GUI_Button_m0F0D437C533454A4BF0096E0DC55EEB66366E08D(L_9, _stringLiteral8F159345B771A5B71C63927BE00AFF20E4E9603C, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		// string szPath = CTargetPlat.PersistentRootPath;
		IL2CPP_RUNTIME_CLASS_INIT(CTargetPlat_t8222494C92001E006674994E802967577430801B_il2cpp_TypeInfo_var);
		String_t* L_11 = CTargetPlat_get_PersistentRootPath_mCF196B9247DAB25518AC46BE2F6DD761EFED9B72(/*hidden argument*/NULL);
		V_2 = L_11;
		// szPath = szPath.Replace('/', '\\');
		String_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9(L_12, ((int32_t)47), ((int32_t)92), /*hidden argument*/NULL);
		V_2 = L_13;
		// System.Diagnostics.Process.Start("explorer.exe", szPath);
		String_t* L_14 = V_2;
		Process_Start_m8D896E2780025C6DDB4CDB22C0A29E9A813D4781(_stringLiteral7A0FD90576E08807BDE2CC57BCF9854BBCE05FE3, L_14, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void TestDown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestDown__ctor_m68752680247B99E7F3E42EA0851E9DFA5CABFEC8 (TestDown_t61B6A0603DF7E7F8D3CBD62C24A51CE261FF565A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestPath::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestPath_Start_m28A5FE8E65915831D4124A05F49E68184DAE2A3C (TestPath_t0230E19A69B6D0B74679D1AF05F6A5703C910F0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestPath_Start_m28A5FE8E65915831D4124A05F49E68184DAE2A3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShowPath.text = Application.dataPath           + "\n" + Application.streamingAssetsPath + "\n" +
		//                 Application.persistentDataPath + "\n" + Application.temporaryCachePath;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_ShowPath_4();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		String_t* L_3 = Application_get_dataPath_m33D721D71C0687F0013C8953FDB0807B7B3F2A01(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		String_t* L_6 = Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F(/*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		String_t* L_9 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		String_t* L_12 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_12);
		String_t* L_13 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_11, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_13);
		// Debug.Log(ShowPath.text);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_14 = __this->get_ShowPath_4();
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TestPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestPath__ctor_m851663042E260B6D46C00CDDFE506B7846453715 (TestPath_t0230E19A69B6D0B74679D1AF05F6A5703C910F0E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mA946658D43E2FC2C3479BB9322CED4FF4C5D2EA0 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mE176851C74E87A3EBAF5D28B5BFC4D8426D91397 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_mEA6AD9AEDC70385E271BEDCF20C0F4CBD5AC9E7C (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIManager::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_LateUpdate_m5C2920DAB0A389E2D9B1AF100BB2E598AA1ADA02 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnDestroy_m843179C95D552A353DE59EB48F621588E7E1D47D (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m40CA6521CEDDF979D58B6050A6D294A32A1CEA69 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager__ctor_m40CA6521CEDDF979D58B6050A6D294A32A1CEA69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tD85E8AE1B71891006CF9717C93422F5C93B034A5_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m12B1DBD51FCB3C6BDF50B06ADAE78094E4D6CA5B(__this, /*hidden argument*/Singleton_1__ctor_m12B1DBD51FCB3C6BDF50B06ADAE78094E4D6CA5B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CTcp_SetRandSeed_m478CBB645B464F72473EC700DCCEF7C2F01F6E74_inline (CTcp_tFF9A360B8950762BDEEE96126BF8045C8D74509C * __this, int64_t ___nRandSeed0, const RuntimeMethod* method)
{
	{
		// m_nRandSeed = nRandSeed;
		int64_t L_0 = ___nRandSeed0;
		__this->set_m_nRandSeed_1(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline (IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_0 = __this->get_addressList_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
