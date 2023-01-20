#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]>
struct Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F;
// System.Action`1<System.Double>
struct Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A;
// System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>
struct Action_1_t65E42951F2246B124818430106A38AF664E45C14;
// System.Action`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0;
// System.Action`1<Unity.LiveCapture.FrameRate>
struct Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A;
// System.Action`1<System.Guid>
struct Action_1_t33413EDB36E6D5980F6CA903E76E505099813427;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<Unity.LiveCapture.Networking.Remote>
struct Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>
struct Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D;
// System.Action`2<System.Guid,UnityEngine.Texture2D>
struct Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F;
// System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus>
struct Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>
struct BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>
struct BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32>
struct BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid>
struct BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0;
// Unity.LiveCapture.CircularBuffer`1<System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>>
struct CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0;
// Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>
struct CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65;
// Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>
struct CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A;
// System.Collections.Concurrent.ConcurrentDictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.Connection>
struct ConcurrentDictionary_2_tF1F22BAE89E31F1EC7F6B646509973C849BCDFAF;
// System.Collections.Concurrent.ConcurrentQueue`1<Unity.LiveCapture.Networking.NetworkBase/ConnectionEvent>
struct ConcurrentQueue_1_tD9F303D8EB5501F8392C6CD31AA793914ABB8AFD;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct DataReceiver_1_tD5B2D0ABEFD4F8E73CE610AE3416693AA9859977;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double>
struct DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>
struct DataSender_1_t784D97B8706785D5C08F443871C52732658E2342;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct DataSender_1_t892968D09CC86C790DEBA6F5AC7BE35EEBC265E1;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.FrameRate>
struct DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,System.Action`1<Unity.LiveCapture.Networking.Message>>
struct Dictionary_2_t6659580E835A103B8A8E353FDD132FC4400E8E23;
// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,System.Collections.Generic.Queue`1<Unity.LiveCapture.Networking.Message>>
struct Dictionary_2_tBE8D66389A2A6B5D221814B47CF8EE11F6AE579A;
// System.Collections.Generic.Dictionary`2<System.String,Unity.LiveCapture.Networking.Protocols.MessageBase>
struct Dictionary_2_t384F4764EF6E86833FA393FF9387C2CA57D70B93;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.ConstructorInfo>
struct Dictionary_2_tED30F5BF287C8F0CFD2481AC759936F08D9B9566;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
// System.Collections.Generic.Dictionary`2<System.UInt16,Unity.LiveCapture.Networking.Protocols.IDataReceiver>
struct Dictionary_2_tDC18D278991319E86A907745B3961CBBFBA5F2D1;
// System.Func`2<System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>
struct Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9;
// System.Func`2<System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>
struct Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B;
// System.Func`2<System.ValueTuple`2<System.Int32,System.Object>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>
struct Func_2_t55C73F76DA8C2F1D2913CEAC2EDBFB7041C8AE01;
// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>
struct Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01;
// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.Boolean>
struct Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75;
// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>
struct Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50;
// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Boolean>
struct Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1;
// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,Unity.LiveCapture.FloatCurve>
struct Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A;
// System.Func`2<System.Object,System.ValueTuple`2<System.Int32,System.Object>>
struct Func_2_tFD88D6C163320AE208FD95F14CB5B748862C5EA4;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32Enum>
struct Func_2_t213311159653563BDCC21CC060B449705C96791F;
// System.Func`2<System.Object,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>
struct Func_2_tBE380BC1D18F9E3464F6042FDA6320847D4B9F7B;
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>
struct HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5;
// System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct HashSet_1_t13DFE713621EC041B2E218C172F800E93F985341;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// Unity.LiveCapture.ICurve`1<System.Boolean>
struct ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491;
// Unity.LiveCapture.ICurve`1<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose>
struct ICurve_1_tC90AA09B6B17BD861FBA4E90710B964FCA5FD32A;
// Unity.LiveCapture.ICurve`1<UnityEngine.Quaternion>
struct ICurve_1_tD125C4ED6FE11EA5535711A507D2361C4CE66957;
// Unity.LiveCapture.ICurve`1<UnityEngine.Vector3>
struct ICurve_1_tB0D648BA629FA2E0DF45AAE6833C81928146BC03;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>>
struct IEnumerable_1_tACBDF1E0201F61D6820D41E8306882CE08BF40A9;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>
struct IEnumerable_1_t714EA69E267F646D55208663DA77AA0335C4F17B;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Int32,System.Object>>
struct IEnumerable_1_t264D156D9311568E3A62F569418D29946992D682;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding>
struct IEnumerable_1_t7BAECC29311DCC892FD7EF5D5092AF54C278D60E;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>
struct IEnumerable_1_tF96E0EEB69AB1CD8DC123B73D557F28E1773825E;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.FloatCurve>
struct IEnumerable_1_tB247A6721B0BE2282519DF8E6529D8D1062BA962;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>
struct IEnumerable_1_tB722BF0DD7023255945C99ED2187160DF98DB27E;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>
struct IEnumerable_1_t99B93B8AAAFEB1886DCCBDF522577633D3F8E51A;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>
struct IEnumerable_1_t3F226821F37EF974BA3DCAE8C7F59D044DA288DB;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>
struct IEnumerable_1_tC8F2A521B51D7CCE6BBF3787EF013D6CE47CE724;
// System.Collections.Generic.IEqualityComparer`1<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>
struct IEqualityComparer_1_tE45C88093C3D6C7E2CF2DD3CC131E95AB15F2284;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>
struct IGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E;
// System.Linq.ILookup`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>
struct ILookup_2_t9D49BB162780BBB39E08A003067676302C5C13E9;
// System.Linq.ILookup`2<System.Int32Enum,System.ValueTuple`2<System.Int32,System.Object>>
struct ILookup_2_t4387F709A2A5C41B3C9CAB0FE45B05BE5F048455;
// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD;
// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Transform>
struct KeyCollection_t0A57B2F148D43C374CEB66B1EE428EB77007DD59;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>>
struct List_1_t359B03B3BF11BA381133F65D0034B06CB224D35A;
// System.Collections.Generic.List`1<Unity.LiveCapture.Networking.Protocols.MessageBase>
struct List_1_t4A2CB9A44AEAEEE8A66B8CBE5CB2416A5D81A054;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>
struct List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199;
// System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>
struct List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82;
// Unity.LiveCapture.Registry`1<Unity.LiveCapture.ITimedDataSource>
struct Registry_1_t36377ECB540CA8D84BAB6BC76E7AED9140371ED6;
// Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>
struct TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Transform>
struct ValueCollection_tD94AE4964757B84F9AA8AC824125DE34C1F0D7F1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Transform>[]
struct EntryU5BU5D_tA477E34F31714BE344BB608D37F21ECF74AEF9BF;
// System.Collections.Generic.HashSet`1/Slot<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>[]
struct SlotU5BU5D_t19D91323A1E4A799DAFB8F5E5903D93ED16635FB;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>[]
struct ValueTuple_2U5BU5D_tD4449E8B7498AAFE5A016D609BCB83ED3C908790;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding[]
struct BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1;
// Unity.LiveCapture.Networking.ChannelType[]
struct ChannelTypeU5BU5D_tA4EF648E5AEC3D84F8871629E71A997C434C1E54;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape[]
struct FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0;
// Unity.LiveCapture.FloatCurve[]
struct FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6;
// Unity.LiveCapture.ICurve[]
struct ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506;
// Unity.LiveCapture.IPreviewable[]
struct IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping[]
struct RendererMappingU5BU5D_tE0E27BDD270EF27E436B7ED8F80260F942BD7324;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData[]
struct BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BlendShapeData[]
struct BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData[]
struct MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData[]
struct RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding
struct Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig
struct BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C;
// Unity.LiveCapture.Networking.Protocols.BoolSender
struct BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E;
// Unity.LiveCapture.BooleanCurve
struct BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18;
// Unity.LiveCapture.CompanionApp.ClientInitialization
struct ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF;
// Unity.LiveCapture.CompanionApp.CompanionAppClient
struct CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997;
// Unity.LiveCapture.CompanionApp.CompanionAppHost
struct CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator
struct CurveEvaluator_t16309E7ADEEF245FEE5D7A9C80E6D7712E56202B;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper
struct DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.LiveCapture.EulerCurve
struct EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333;
// Unity.LiveCapture.EulerKeyframeReducer
struct EulerKeyframeReducer_t0758EAA9F64718F007290BAB8B3BE6DC1A3908F6;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset
struct EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE;
// Unity.LiveCapture.Networking.Protocols.EventSender
struct EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A;
// Unity.LiveCapture.ARKitFaceCapture.FaceActor
struct FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D;
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves
struct FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E;
// Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost
struct FaceCaptureHost_t23D3ABE871908933DCEC94E462C1CA9EDE79BAAB;
// Unity.LiveCapture.ARKitFaceCapture.FaceClient
struct FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11;
// Unity.LiveCapture.ARKitFaceCapture.FaceDevice
struct FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468;
// Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder
struct FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776;
// Unity.LiveCapture.ARKitFaceCapture.FaceMapper
struct FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10;
// Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache
struct FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18;
// Unity.LiveCapture.FloatCurve
struct FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8;
// Unity.LiveCapture.FloatKeyframeReducer
struct FloatKeyframeReducer_t3EDFAC8A9BFCA20BDDDE248B864F36A92B717078;
// Unity.LiveCapture.FloatSampler
struct FloatSampler_t7B36468F0DFC5D7A50700A881202B0E5A67DE434;
// Unity.LiveCapture.FloatTangentUpdater
struct FloatTangentUpdater_tE7CDC5577D7FDBC968799C1E9CC285EB1EC45D95;
// Unity.LiveCapture.ICurve
struct ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator
struct IEvaluator_tCB667FD5FC96F5CE907E9BC25D8B644091F7B775;
// Unity.LiveCapture.ARKitFaceCapture.IFaceClient
struct IFaceClient_t61772A88AB5FFD903387CB63FF929A9837DCFC6F;
// Unity.LiveCapture.ARKitFaceCapture.IFaceClientInternal
struct IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// Unity.LiveCapture.IPreviewable
struct IPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85;
// Unity.LiveCapture.IPropertyPreviewer
struct IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453;
// Unity.LiveCapture.IReduceableCurve
struct IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3;
// Unity.LiveCapture.ISynchronizer
struct ISynchronizer_t368D24E347E382885F40D252BAFA4BD83BCC14E2;
// Unity.LiveCapture.ITakeBuilder
struct ITakeBuilder_t19B16DC3CFCC73FD9195CDBD63041FD6E042CED6;
// Unity.LiveCapture.ITakeRecorder
struct ITakeRecorder_tE726622E61EE57C3B3A9FFBAD6F934523E87AE4A;
// Unity.LiveCapture.ITimedDataSource
struct ITimedDataSource_tE56E92C5E1FD6740F8C7C24E5DE366F16884996E;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Unity.LiveCapture.LiveCaptureDevice
struct LiveCaptureDevice_t0D839EF945BC2180D8EF4D480CB4990B46A212DA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.LiveCapture.Networking.NetworkBase
struct NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.LiveCapture.PropertyPreviewer
struct PropertyPreviewer_t95C66865A49B216206BAC62881453868F8849C5B;
// Unity.LiveCapture.Networking.Protocols.Protocol
struct Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB;
// Unity.LiveCapture.Networking.Remote
struct Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping
struct RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator
struct SimpleEvaluator_t4E00D9296BC9A61A845106A00DB77C8826492F5D;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// Unity.LiveCapture.CompanionApp.SlateChangeTracker
struct SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.LiveCapture.Networking.Protocols.StringSender
struct StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20;
// Unity.LiveCapture.TakeNameFormatter
struct TakeNameFormatter_tF00FD67A2276183B8208920CE5A778D2E2895716;
// Unity.LiveCapture.TakeRecorder
struct TakeRecorder_t1C44C6CCFA139B9B7036F7D230CA3853741E4FC6;
// Unity.LiveCapture.Networking.Protocols.TextureSender
struct TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79;
// Unity.LiveCapture.TimedDataSourceManager
struct TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Unity.LiveCapture.Vector3Curve
struct Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50;
// Unity.LiveCapture.Vector3KeyframeReducer
struct Vector3KeyframeReducer_tB88D7E81DBA700BE7910919C86AF4A649E8D97D4;
// Unity.LiveCapture.Vector3Sampler
struct Vector3Sampler_tA861B8CE6116F33655989BC8EF25060F5BB3640A;
// Unity.LiveCapture.Vector3TangentUpdater
struct Vector3TangentUpdater_tF10889FA0EE5DFB9ED5EDA4B40716A5CEA43A188;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl
struct Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache
struct Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70;
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87;
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c
struct U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399;
// Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177;
// Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl
struct Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c
struct U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICurve_1_tB0D648BA629FA2E0DF45AAE6833C81928146BC03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICurve_1_tD125C4ED6FE11EA5535711A507D2361C4CE66957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB722BF0DD7023255945C99ED2187160DF98DB27E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC8F2A521B51D7CCE6BBF3787EF013D6CE47CE724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8D019E893051BC3086910ECFF833216372CD3104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE7220409D6E6986A233CA294924BFB2B3F014124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEvaluator_tCB667FD5FC96F5CE907E9BC25D8B644091F7B775_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITakeBuilder_t19B16DC3CFCC73FD9195CDBD63041FD6E042CED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITakeRecorder_tE726622E61EE57C3B3A9FFBAD6F934523E87AE4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28;
IL2CPP_EXTERN_C String_t* _stringLiteral060CFB0EBDB0486CB7CE70B72C56BBB262D50347;
IL2CPP_EXTERN_C String_t* _stringLiteral12AE57FA7567BBD95ADC812EEF3FEF042E76CBBF;
IL2CPP_EXTERN_C String_t* _stringLiteral14EF5545CC76C6501D4D80D92785D57FF0DAC77B;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE3DF5F2CEB25ED1C5A33DE9E1176176A298A37;
IL2CPP_EXTERN_C String_t* _stringLiteral200974AE0ACE946D456941344130ED3C68A1A16B;
IL2CPP_EXTERN_C String_t* _stringLiteral250048D511326BC306E0A5901FBDF08980252EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral30B41C0B889C876AC93DC49D095ED6AA55AB3F95;
IL2CPP_EXTERN_C String_t* _stringLiteral34B478E6EA510500EE7FDF26DA107A842967B909;
IL2CPP_EXTERN_C String_t* _stringLiteral39FD09E5AB42A13956FDE279F6AB245C09B1608E;
IL2CPP_EXTERN_C String_t* _stringLiteral3D46CFE1898B8C50B687DAFAEB8FCDE59ECC884D;
IL2CPP_EXTERN_C String_t* _stringLiteral3D6B5F9B31ADD59B36682127AA0D30BDE8EA3CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4148F7A7871FFEFC05B795805840B417445A93E5;
IL2CPP_EXTERN_C String_t* _stringLiteral4CECB7D45A4205D98B8D234FC6D79BE13495DDB9;
IL2CPP_EXTERN_C String_t* _stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91;
IL2CPP_EXTERN_C String_t* _stringLiteral55DA83BB186F1B711D8B618FC6760F360A8F7E49;
IL2CPP_EXTERN_C String_t* _stringLiteral5928331B64E0680322A4405881B8FBD1D2393E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB2DBE9AAD949E5B2DF6D5E2BDA7CDB755845F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2F31349A8069FBED0599F46B548C3FEC7F99D8;
IL2CPP_EXTERN_C String_t* _stringLiteral720E14D1CC596F5D0B876FD0879DC5BDFEDC7C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral72ABB269A5254F977C9CBCB241DE2B44FBF8B0CD;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF2D0501B1F83088CC6C36AAB72E446B3EFEAA8;
IL2CPP_EXTERN_C String_t* _stringLiteral7E0843419230F442F4F289AB7726382AECCEFAD8;
IL2CPP_EXTERN_C String_t* _stringLiteral7E2B60007097B5B8625B33F7372CC863EED32536;
IL2CPP_EXTERN_C String_t* _stringLiteral7F52DD21863A914AE5E365A99DD2CF91C344890D;
IL2CPP_EXTERN_C String_t* _stringLiteral7FC23073E6F9F246CD49477EA3E728E57FC93F64;
IL2CPP_EXTERN_C String_t* _stringLiteral88DC01C1BA6D0D58EBE15B97D28F08D421C24908;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4AC4A2EE341427495904E61A14250D7A00DEBF;
IL2CPP_EXTERN_C String_t* _stringLiteral9881139F683F62CA4914BF5C627A9611A2B39EFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA1ED92E3364CB2782D7C28069B2FE8809427FDBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA3341594AD1B01F5A7AC41BA19590945E9EE2D6B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F835E8DD6409D0C5DAA31575CA5F2460E8DE56;
IL2CPP_EXTERN_C String_t* _stringLiteralB3E21F54B8DF43E66261C0740D413CC234F14F98;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AD22E388E543E76A7249903B370AA938384CA4;
IL2CPP_EXTERN_C String_t* _stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E;
IL2CPP_EXTERN_C String_t* _stringLiteralBECFD64FF405550BA19C33604E0692E493917571;
IL2CPP_EXTERN_C String_t* _stringLiteralC326C3D7413B05626B2AE9F31692B2BAA556EE8E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4093BB231AF678908291A015F39320B02034802;
IL2CPP_EXTERN_C String_t* _stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD;
IL2CPP_EXTERN_C String_t* _stringLiteralE7E56C481ACAB0E1E2465C85EA893CF5F476BE67;
IL2CPP_EXTERN_C String_t* _stringLiteralEADC20C4DAAE01D829FB427A6B1740C54E64C651;
IL2CPP_EXTERN_C String_t* _stringLiteralFD5F7078CF0ED7B5F5F6AE6E7A114C0775E89C16;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingConfig_GetEvaluator_m1A2DE98C21BD8A2D26CC965143022985D0EAB781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppDevice_1_GetClient_m83873ED134187DD872E212F6481A3E8366E26BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppDevice_1_IsReady_m79321A9769ABB4108F5F81FE2DA683A4EAD652EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppDevice_1_OnDisable_m629CCFCC48D97D3711EBA8467FA1650CDFC7DBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppDevice_1_OnEnable_m33F9BEEBC5995DAAF3CE680CC1A913C35DE73402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppDevice_1_RegisterLiveProperties_m67451ECE497C7B6EE645416B719C016380A85157_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppDevice_1__ctor_m46799B5D6063660AF88BCC361E8A686C22E07850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisIPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_m1AD75C236475B4F1E2E5E9353AB3AAB58B67CD4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA1A846825C2320D180BD10D3D3C816A6ECE101E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_mD33ACD4B79AFB6328BF0BF4D96971078577E5D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mF7D03E11AC4F71507D1F12B7761577C3E98B5B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m09451A141A03EB9CE1BC350AB32DD6BA40053181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mC9675F67E9A03D93289DCB2E2CE9AAE8F29A4DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m91DC46AB9095251EBE272AECED7231D85124273A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mDE0C69C442D5FB26A9D04F5F698CDEFEFDE93F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToLookup_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_m6F7E7E89D08C1E6F4B1D28D2A5DF1F1FDEAE52FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_mD3A699301AFC095F51CAD86467B56C076F34FB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m0251F20B257790A55E6D70BECCB6DF04C75B3030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceClient_U3C_ctorU3Eb__4_0_m9F261BF17BC4A91741F8716ADADD4D4DCFBF9635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceDevice_OnFacePoseSampleReceived_mA7A035890FADF2B4D978A94B14724296E9928EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FaceDevice_U3COnRecordingChangedU3Eb__47_0_m34C40B188234C5C088238192C22DF023830462F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m8275D0CA5C2DC31FC6519044094C542BF8DBB270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mF4F71C17991C0CBBD4651AE5A9C64C4557E32F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mEE597D10B54FAB09E3FF5B5EA1BCBC42DB12E1EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Impl_Evaluate_m8F650C0530036B2A1DEECA020AA367AAC8A9C19F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m494165D99E5A4EFC93279F01DC2CAA6587E91127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFCBC0D2476591770514099DCFE513B3623217EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m73190613823680A72715CFEBDD6C227382F49BEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F8830996D7EF729FB150AF87B1F40A06F75AB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_m79B44F091568BB61F1C0D238BE3FE2023EDFBF7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__65_0_m52DE1CC981D04C304D952A4E49CD4B6799732EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_1_m7231EE0237DF7999CFEE6DB051B4450C408987C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_2_mB6DDEBCBF0249C66246763B66DE28F7343816788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_3_m52C709468CE9C718083502223AD33DE5C0381948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_4_m12892685E72122915880D0EA76F7C4F420AEED0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3C_ctorU3Eb__0_mB8F65CE277FD22C4CEA6F934F908A66FCF70772D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_mF5806403AA24B19740F70AE4E7738E9E6BC566DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_1_U3C_ctorU3Eb__1_m18B560582DE8E2821A7D2B3A24DB912598F95681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m398C8F26A599C7840B805E308A07D8CDCC4AD275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m8795193A52924A8A087AD53960256453A5ED2506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mC8CA5D229FDB741943A7B519F28DB4AA4B4FAC63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_0_0_0_var;
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2;;
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com;
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com;;
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke;
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke;;
struct BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70;;
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com;
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com;;
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke;
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke;;

struct BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1;
struct FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0;
struct FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6;
struct ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506;
struct IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F;
struct BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA;
struct MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A;
struct RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8D918C6600A80B12008DADCB54350FC33E14E4F3 
{
};

// Unity.LiveCapture.CircularBuffer`1<System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>>
struct CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0  : public RuntimeObject
{
	// T[] Unity.LiveCapture.CircularBuffer`1::m_Data
	ValueTuple_2U5BU5D_tD4449E8B7498AAFE5A016D609BCB83ED3C908790* ___m_Data_0;
	// System.Int32 Unity.LiveCapture.CircularBuffer`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 Unity.LiveCapture.CircularBuffer`1::m_EndIndex
	int32_t ___m_EndIndex_2;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>
struct Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA477E34F31714BE344BB608D37F21ECF74AEF9BF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0A57B2F148D43C374CEB66B1EE428EB77007DD59* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD94AE4964757B84F9AA8AC824125DE34C1F0D7F1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>
struct HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t19D91323A1E4A799DAFB8F5E5903D93ED16635FB* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>
struct List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererMappingU5BU5D_tE0E27BDD270EF27E436B7ED8F80260F942BD7324* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererMappingU5BU5D_tE0E27BDD270EF27E436B7ED8F80260F942BD7324* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>
struct List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding
struct Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307  : public RuntimeObject
{
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::m_Location
	int32_t ___m_Location_0;
	// System.Int32 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::m_ShapeIndex
	int32_t ___m_ShapeIndex_1;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::m_Config
	BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___m_Config_2;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::m_IsExpanded
	bool ___m_IsExpanded_3;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig
struct BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C  : public RuntimeObject
{
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::m_OverrideSmoothing
	bool ___m_OverrideSmoothing_0;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::m_Smoothing
	float ___m_Smoothing_1;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::m_EvaluatorPreset
	EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* ___m_EvaluatorPreset_2;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig/Type Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::m_Type
	int32_t ___m_Type_3;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::m_SimpleEvaluator
	Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* ___m_SimpleEvaluator_4;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::m_CurveEvaluator
	Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* ___m_CurveEvaluator_5;
};

// Unity.LiveCapture.BooleanCurve
struct BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18  : public RuntimeObject
{
	// Unity.LiveCapture.FloatCurve Unity.LiveCapture.BooleanCurve::m_Curve
	FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* ___m_Curve_0;
	// System.String Unity.LiveCapture.BooleanCurve::<RelativePath>k__BackingField
	String_t* ___U3CRelativePathU3Ek__BackingField_1;
	// System.String Unity.LiveCapture.BooleanCurve::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_2;
	// System.Type Unity.LiveCapture.BooleanCurve::<BindingType>k__BackingField
	Type_t* ___U3CBindingTypeU3Ek__BackingField_3;
	// System.Int32 Unity.LiveCapture.BooleanCurve::m_FrameNumber
	int32_t ___m_FrameNumber_4;
};

// Unity.LiveCapture.CompanionApp.CompanionAppHost
struct CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1  : public RuntimeObject
{
	// Unity.LiveCapture.Networking.Protocols.Protocol Unity.LiveCapture.CompanionApp.CompanionAppHost::m_Protocol
	Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___m_Protocol_0;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_DeviceModeSender
	BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* ___m_DeviceModeSender_1;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppHost::m_StartRecordingSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_StartRecordingSender_2;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppHost::m_StopRecordingSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_StopRecordingSender_3;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppHost::m_StartPlayerSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_StartPlayerSender_4;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppHost::m_StopPlayerSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_StopPlayerSender_5;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppHost::m_PausePlayerSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_PausePlayerSender_6;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_PlayerTimeSender
	BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* ___m_PlayerTimeSender_7;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_SetSelectedTakeSender
	BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* ___m_SetSelectedTakeSender_8;
	// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_SetTakeDataSender
	JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B* ___m_SetTakeDataSender_9;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_DeleteTakeSender
	BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* ___m_DeleteTakeSender_10;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_SetIterationBaseSender
	BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* ___m_SetIterationBaseSender_11;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppHost::m_ClearIterationBase
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_ClearIterationBase_12;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid> Unity.LiveCapture.CompanionApp.CompanionAppHost::m_RequestTexturePreview
	BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* ___m_RequestTexturePreview_13;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppHost::Initialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Initialized_14;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppHost::SessionEnded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___SessionEnded_15;
	// System.Action`1<System.Boolean> Unity.LiveCapture.CompanionApp.CompanionAppHost::IsRecordingReceived
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___IsRecordingReceived_16;
	// System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode> Unity.LiveCapture.CompanionApp.CompanionAppHost::ServerModeReceived
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___ServerModeReceived_17;
	// System.Action`1<Unity.LiveCapture.FrameRate> Unity.LiveCapture.CompanionApp.CompanionAppHost::FrameRateReceived
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* ___FrameRateReceived_18;
	// System.Action`1<System.Boolean> Unity.LiveCapture.CompanionApp.CompanionAppHost::HasSlateReceived
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___HasSlateReceived_19;
	// System.Action`1<System.Double> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateDurationReceived
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___SlateDurationReceived_20;
	// System.Action`1<System.Boolean> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateIsPreviewingReceived
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___SlateIsPreviewingReceived_21;
	// System.Action`1<System.Double> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlatePreviewTimeReceived
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___SlatePreviewTimeReceived_22;
	// System.Action`1<System.Int32> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateSelectedTakeReceived
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___SlateSelectedTakeReceived_23;
	// System.Action`1<System.Int32> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateIterationBaseReceived
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___SlateIterationBaseReceived_24;
	// System.Action`1<System.Int32> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateTakeNumberReceived
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___SlateTakeNumberReceived_25;
	// System.Action`1<System.String> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateShotNameReceived
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___SlateShotNameReceived_26;
	// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]> Unity.LiveCapture.CompanionApp.CompanionAppHost::SlateTakesReceived
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* ___SlateTakesReceived_27;
	// System.Action`1<System.String> Unity.LiveCapture.CompanionApp.CompanionAppHost::NextTakeNameReceived
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___NextTakeNameReceived_28;
	// System.Action`1<System.String> Unity.LiveCapture.CompanionApp.CompanionAppHost::NextAssetNameReceived
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___NextAssetNameReceived_29;
	// System.Action`2<System.Guid,UnityEngine.Texture2D> Unity.LiveCapture.CompanionApp.CompanionAppHost::TexturePreviewReceived
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* ___TexturePreviewReceived_30;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves
struct FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E  : public RuntimeObject
{
	// Unity.LiveCapture.FloatCurve[] Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::m_Curves
	FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* ___m_Curves_0;
	// System.String Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::<RelativePath>k__BackingField
	String_t* ___U3CRelativePathU3Ek__BackingField_1;
	// System.String Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_2;
	// System.Type Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::<BindingType>k__BackingField
	Type_t* ___U3CBindingTypeU3Ek__BackingField_3;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache
struct FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18  : public RuntimeObject
{
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::<Disposed>k__BackingField
	bool ___U3CDisposedU3Ek__BackingField_0;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceMessages
struct FaceMessages_t034AC3279CFEB7419F060D0073AE1400AEA44818  : public RuntimeObject
{
};

// Unity.LiveCapture.FloatCurve
struct FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8  : public RuntimeObject
{
	// Unity.LiveCapture.FloatSampler Unity.LiveCapture.FloatCurve::m_Sampler
	FloatSampler_t7B36468F0DFC5D7A50700A881202B0E5A67DE434* ___m_Sampler_0;
	// Unity.LiveCapture.FloatTangentUpdater Unity.LiveCapture.FloatCurve::m_TangentUpdater
	FloatTangentUpdater_tE7CDC5577D7FDBC968799C1E9CC285EB1EC45D95* ___m_TangentUpdater_1;
	// Unity.LiveCapture.FloatKeyframeReducer Unity.LiveCapture.FloatCurve::m_Reducer
	FloatKeyframeReducer_t3EDFAC8A9BFCA20BDDDE248B864F36A92B717078* ___m_Reducer_2;
	// UnityEngine.AnimationCurve Unity.LiveCapture.FloatCurve::m_Curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_Curve_3;
	// System.String Unity.LiveCapture.FloatCurve::<RelativePath>k__BackingField
	String_t* ___U3CRelativePathU3Ek__BackingField_4;
	// System.String Unity.LiveCapture.FloatCurve::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_5;
	// System.Type Unity.LiveCapture.FloatCurve::<BindingType>k__BackingField
	Type_t* ___U3CBindingTypeU3Ek__BackingField_6;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.LiveCapture.Networking.Protocols.MessageBase
struct MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968  : public RuntimeObject
{
	// System.String Unity.LiveCapture.Networking.Protocols.MessageBase::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_1;
	// Unity.LiveCapture.Networking.ChannelType Unity.LiveCapture.Networking.Protocols.MessageBase::<Channel>k__BackingField
	uint8_t ___U3CChannelU3Ek__BackingField_2;
	// Unity.LiveCapture.Networking.Protocols.Protocol Unity.LiveCapture.Networking.Protocols.MessageBase::<Protocol>k__BackingField
	Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___U3CProtocolU3Ek__BackingField_3;
	// System.UInt16 Unity.LiveCapture.Networking.Protocols.MessageBase::<Code>k__BackingField
	uint16_t ___U3CCodeU3Ek__BackingField_4;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.MessageBase::m_Version
	int32_t ___m_Version_5;
};

// Unity.LiveCapture.Networking.Protocols.Protocol
struct Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.LiveCapture.Networking.Protocols.MessageBase> Unity.LiveCapture.Networking.Protocols.Protocol::m_Messages
	List_1_t4A2CB9A44AEAEEE8A66B8CBE5CB2416A5D81A054* ___m_Messages_0;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.LiveCapture.Networking.Protocols.MessageBase> Unity.LiveCapture.Networking.Protocols.Protocol::m_IdToMessage
	Dictionary_2_t384F4764EF6E86833FA393FF9387C2CA57D70B93* ___m_IdToMessage_1;
	// System.Collections.Generic.Dictionary`2<System.UInt16,Unity.LiveCapture.Networking.Protocols.IDataReceiver> Unity.LiveCapture.Networking.Protocols.Protocol::m_CodeToHandler
	Dictionary_2_tDC18D278991319E86A907745B3961CBBFBA5F2D1* ___m_CodeToHandler_2;
	// Unity.LiveCapture.Networking.NetworkBase Unity.LiveCapture.Networking.Protocols.Protocol::m_Network
	NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___m_Network_3;
	// Unity.LiveCapture.Networking.Remote Unity.LiveCapture.Networking.Protocols.Protocol::m_Remote
	Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___m_Remote_4;
	// System.String Unity.LiveCapture.Networking.Protocols.Protocol::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// System.Version Unity.LiveCapture.Networking.Protocols.Protocol::<Version>k__BackingField
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___U3CVersionU3Ek__BackingField_6;
	// System.Boolean Unity.LiveCapture.Networking.Protocols.Protocol::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_7;
};

struct Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.ConstructorInfo> Unity.LiveCapture.Networking.Protocols.Protocol::s_ConstructorCache
	Dictionary_2_tED30F5BF287C8F0CFD2481AC759936F08D9B9566* ___s_ConstructorCache_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Unity.LiveCapture.Networking.Protocols.Protocol::s_TypeHashCache
	Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455* ___s_TypeHashCache_10;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping
struct RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067  : public RuntimeObject
{
	// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::m_Path
	String_t* ___m_Path_0;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding[] Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::m_Bindings
	BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* ___m_Bindings_1;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::m_IsExpanded
	bool ___m_IsExpanded_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Unity.LiveCapture.TimedDataSourceManager
struct TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174  : public RuntimeObject
{
	// Unity.LiveCapture.Registry`1<Unity.LiveCapture.ITimedDataSource> Unity.LiveCapture.TimedDataSourceManager::<Registry>k__BackingField
	Registry_1_t36377ECB540CA8D84BAB6BC76E7AED9140371ED6* ___U3CRegistryU3Ek__BackingField_1;
};

struct TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_StaticFields
{
	// Unity.LiveCapture.TimedDataSourceManager Unity.LiveCapture.TimedDataSourceManager::<Instance>k__BackingField
	TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* ___U3CInstanceU3Ek__BackingField_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.LiveCapture.Vector3Curve
struct Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50  : public RuntimeObject
{
	// Unity.LiveCapture.Vector3Sampler Unity.LiveCapture.Vector3Curve::m_Sampler
	Vector3Sampler_tA861B8CE6116F33655989BC8EF25060F5BB3640A* ___m_Sampler_0;
	// Unity.LiveCapture.Vector3TangentUpdater Unity.LiveCapture.Vector3Curve::m_TangentUpdater
	Vector3TangentUpdater_tF10889FA0EE5DFB9ED5EDA4B40716A5CEA43A188* ___m_TangentUpdater_1;
	// Unity.LiveCapture.Vector3KeyframeReducer Unity.LiveCapture.Vector3Curve::m_Reducer
	Vector3KeyframeReducer_tB88D7E81DBA700BE7910919C86AF4A649E8D97D4* ___m_Reducer_2;
	// UnityEngine.AnimationCurve[] Unity.LiveCapture.Vector3Curve::m_Curves
	AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC* ___m_Curves_3;
	// System.String Unity.LiveCapture.Vector3Curve::<RelativePath>k__BackingField
	String_t* ___U3CRelativePathU3Ek__BackingField_4;
	// System.String Unity.LiveCapture.Vector3Curve::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_5;
	// System.Type Unity.LiveCapture.Vector3Curve::<BindingType>k__BackingField
	Type_t* ___U3CBindingTypeU3Ek__BackingField_6;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl
struct Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B  : public RuntimeObject
{
	// UnityEngine.AnimationCurve Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl::m_Curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_Curve_0;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceActor/PropertyNames
struct PropertyNames_t84AFAD1597982C8EBC858C7A9D207E90268A0F2B  : public RuntimeObject
{
};

// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87  : public RuntimeObject
{
	// System.String Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0::relativePath
	String_t* ___relativePath_0;
	// System.String Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0::propertyName
	String_t* ___propertyName_1;
	// System.Type Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0::bindingType
	Type_t* ___bindingType_2;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c
struct U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399  : public RuntimeObject
{
};

struct U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_StaticFields
{
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c::<>9
	U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399* ___U3CU3E9_0;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177  : public RuntimeObject
{
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1> Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_0::senderV1
	BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67* ___senderV1_0;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5  : public RuntimeObject
{
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0> Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_1::senderV0
	BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B* ___senderV0_0;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceMessages/ToServer
struct ToServer_tBF00CA4AB13DB5F4FB872237888B0DA5C6589A99  : public RuntimeObject
{
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl
struct Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B  : public RuntimeObject
{
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::m_Multiplier
	float ___m_Multiplier_0;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::m_Offset
	float ___m_Offset_1;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::m_Max
	float ___m_Max_2;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl/Clamping Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::m_Clamping
	int32_t ___m_Clamping_3;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c
struct U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883  : public RuntimeObject
{
};

struct U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields
{
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<>9
	U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* ___U3CU3E9_0;
	// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<>9__3_1
	Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* ___U3CU3E9__3_1_1;
	// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<>9__3_2
	Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* ___U3CU3E9__3_2_2;
	// System.Func`2<System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<>9__3_4
	Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* ___U3CU3E9__3_4_3;
	// System.Func`2<System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<>9__3_3
	Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* ___U3CU3E9__3_3_4;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B  : public RuntimeObject
{
	// UnityEngine.Mesh Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c__DisplayClass3_0::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_0;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct DataReceiver_1_tD5B2D0ABEFD4F8E73CE610AE3416693AA9859977  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_t359B03B3BF11BA381133F65D0034B06CB224D35A* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>
struct DataSender_1_t784D97B8706785D5C08F443871C52732658E2342  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Options
	int32_t ___m_Options_7;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Version
	int32_t ___m_Version_8;
	// System.IO.MemoryStream Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Buffer0
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Buffer0_9;
	// System.IO.MemoryStream Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Buffer1
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Buffer1_10;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataSender`1::m_LastBuffer
	int32_t ___m_LastBuffer_11;
};

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct DataSender_1_t892968D09CC86C790DEBA6F5AC7BE35EEBC265E1  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Options
	int32_t ___m_Options_7;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Version
	int32_t ___m_Version_8;
	// System.IO.MemoryStream Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Buffer0
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Buffer0_9;
	// System.IO.MemoryStream Unity.LiveCapture.Networking.Protocols.DataSender`1::m_Buffer1
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Buffer1_10;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataSender`1::m_LastBuffer
	int32_t ___m_LastBuffer_11;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>
struct ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>
struct ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___Item2_1;
};

// System.ValueTuple`2<System.Int32,System.Object>
struct ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.ValueTuple`2<System.Int32Enum,System.Int32>
struct ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose
#pragma pack(push, tp, 1)
struct FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 
{
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::BrowDownLeft
	float ___BrowDownLeft_2;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::BrowDownRight
	float ___BrowDownRight_3;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::BrowInnerUp
	float ___BrowInnerUp_4;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::BrowOuterUpLeft
	float ___BrowOuterUpLeft_5;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::BrowOuterUpRight
	float ___BrowOuterUpRight_6;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::CheekPuff
	float ___CheekPuff_7;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::CheekSquintLeft
	float ___CheekSquintLeft_8;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::CheekSquintRight
	float ___CheekSquintRight_9;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeBlinkLeft
	float ___EyeBlinkLeft_10;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeBlinkRight
	float ___EyeBlinkRight_11;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookDownLeft
	float ___EyeLookDownLeft_12;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookDownRight
	float ___EyeLookDownRight_13;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookInLeft
	float ___EyeLookInLeft_14;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookInRight
	float ___EyeLookInRight_15;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookOutLeft
	float ___EyeLookOutLeft_16;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookOutRight
	float ___EyeLookOutRight_17;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookUpLeft
	float ___EyeLookUpLeft_18;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeLookUpRight
	float ___EyeLookUpRight_19;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeSquintLeft
	float ___EyeSquintLeft_20;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeSquintRight
	float ___EyeSquintRight_21;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeWideLeft
	float ___EyeWideLeft_22;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::EyeWideRight
	float ___EyeWideRight_23;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::JawForward
	float ___JawForward_24;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::JawLeft
	float ___JawLeft_25;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::JawOpen
	float ___JawOpen_26;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::JawRight
	float ___JawRight_27;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthClose
	float ___MouthClose_28;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthDimpleLeft
	float ___MouthDimpleLeft_29;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthDimpleRight
	float ___MouthDimpleRight_30;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthFrownLeft
	float ___MouthFrownLeft_31;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthFrownRight
	float ___MouthFrownRight_32;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthFunnel
	float ___MouthFunnel_33;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthLeft
	float ___MouthLeft_34;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthLowerDownLeft
	float ___MouthLowerDownLeft_35;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthLowerDownRight
	float ___MouthLowerDownRight_36;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthPressLeft
	float ___MouthPressLeft_37;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthPressRight
	float ___MouthPressRight_38;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthPucker
	float ___MouthPucker_39;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthRight
	float ___MouthRight_40;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthRollLower
	float ___MouthRollLower_41;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthRollUpper
	float ___MouthRollUpper_42;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthShrugLower
	float ___MouthShrugLower_43;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthShrugUpper
	float ___MouthShrugUpper_44;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthSmileLeft
	float ___MouthSmileLeft_45;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthSmileRight
	float ___MouthSmileRight_46;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthStretchLeft
	float ___MouthStretchLeft_47;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthStretchRight
	float ___MouthStretchRight_48;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthUpperUpLeft
	float ___MouthUpperUpLeft_49;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::MouthUpperUpRight
	float ___MouthUpperUpRight_50;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::NoseSneerLeft
	float ___NoseSneerLeft_51;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::NoseSneerRight
	float ___NoseSneerRight_52;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::TongueOut
	float ___TongueOut_53;
};
#pragma pack(pop, tp)

struct FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_StaticFields
{
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape[] Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::<Shapes>k__BackingField
	FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* ___U3CShapesU3Ek__BackingField_0;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost
struct FaceCaptureHost_t23D3ABE871908933DCEC94E462C1CA9EDE79BAAB  : public CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1
{
	// System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample> Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost::m_SendPoseImpl
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* ___m_SendPoseImpl_31;
};

// Unity.LiveCapture.FrameRate
struct FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 
{
	// System.UInt32 Unity.LiveCapture.FrameRate::m_Numerator
	uint32_t ___m_Numerator_0;
	// System.UInt32 Unity.LiveCapture.FrameRate::m_Denominator
	uint32_t ___m_Denominator_1;
	// System.Boolean Unity.LiveCapture.FrameRate::m_IsDropFrame
	bool ___m_IsDropFrame_2;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.FrameRate
struct FrameRate_t538A85F13DAFBF72960CCE300100049923F02621_marshaled_pinvoke
{
	uint32_t ___m_Numerator_0;
	uint32_t ___m_Denominator_1;
	int32_t ___m_IsDropFrame_2;
};
// Native definition for COM marshalling of Unity.LiveCapture.FrameRate
struct FrameRate_t538A85F13DAFBF72960CCE300100049923F02621_marshaled_com
{
	uint32_t ___m_Numerator_0;
	uint32_t ___m_Denominator_1;
	int32_t ___m_IsDropFrame_2;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// Unity.LiveCapture.Subframe
struct Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5 
{
	// System.UInt16 Unity.LiveCapture.Subframe::m_Subframe
	uint16_t ___m_Subframe_2;
	// System.UInt16 Unity.LiveCapture.Subframe::m_Resolution
	uint16_t ___m_Resolution_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 
{
	// System.Int32 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData::ShapeIndex
	int32_t ___ShapeIndex_0;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData::Config
	BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___Config_1;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData::LastWeight
	float ___LastWeight_2;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke
{
	int32_t ___ShapeIndex_0;
	BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___Config_1;
	float ___LastWeight_2;
};
// Native definition for COM marshalling of Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
struct BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com
{
	int32_t ___ShapeIndex_0;
	BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___Config_1;
	float ___LastWeight_2;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BlendShapeData
struct BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098 
{
	// System.Int32 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BlendShapeData::UseCount
	int32_t ___UseCount_0;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BlendShapeData::Weight
	float ___Weight_1;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache
struct Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C  : public FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::m_Bones
	Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* ___m_Bones_1;
	// System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::m_Renderers
	List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* ___m_Renderers_2;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 
{
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData::Location
	int32_t ___Location_0;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData[] Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData::Bindings
	BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* ___Bindings_1;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke
{
	int32_t ___Location_0;
	BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke* ___Bindings_1;
};
// Native definition for COM marshalling of Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
struct MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com
{
	int32_t ___Location_0;
	BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com* ___Bindings_1;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
struct RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 
{
	// UnityEngine.SkinnedMeshRenderer Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData::Renderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___Renderer_0;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BlendShapeData[] Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData::BlendShapeData
	BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* ___BlendShapeData_1;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData[] Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData::Mappings
	MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* ___Mappings_2;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
struct RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_pinvoke
{
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___Renderer_0;
	BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098* ___BlendShapeData_1;
	MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke* ___Mappings_2;
};
// Native definition for COM marshalling of Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
struct RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_com
{
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___Renderer_0;
	BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098* ___BlendShapeData_1;
	MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com* ___Mappings_2;
};

// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420  : public DataReceiver_1_tD5B2D0ABEFD4F8E73CE610AE3416693AA9859977
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>
struct BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B  : public DataSender_1_t784D97B8706785D5C08F443871C52732658E2342
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67  : public DataSender_1_t892968D09CC86C790DEBA6F5AC7BE35EEBC265E1
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>
struct TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F  : public CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0
{
	// Unity.LiveCapture.FrameRate Unity.LiveCapture.TimedDataBuffer`1::<FrameRate>k__BackingField
	FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___U3CFrameRateU3Ek__BackingField_3;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Unity.LiveCapture.CompanionApp.ClientInitialization
struct ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF  : public RuntimeObject
{
	// System.String Unity.LiveCapture.CompanionApp.ClientInitialization::Name
	String_t* ___Name_0;
	// System.String Unity.LiveCapture.CompanionApp.ClientInitialization::ID
	String_t* ___ID_1;
	// System.String Unity.LiveCapture.CompanionApp.ClientInitialization::Type
	String_t* ___Type_2;
	// UnityEngine.Vector2Int Unity.LiveCapture.CompanionApp.ClientInitialization::ScreenResolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___ScreenResolution_3;
};

// Unity.LiveCapture.CompanionApp.CompanionAppClient
struct CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997  : public RuntimeObject
{
	// Unity.LiveCapture.Networking.NetworkBase Unity.LiveCapture.CompanionApp.CompanionAppClient::m_Network
	NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___m_Network_0;
	// Unity.LiveCapture.Networking.Remote Unity.LiveCapture.CompanionApp.CompanionAppClient::m_Remote
	Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___m_Remote_1;
	// Unity.LiveCapture.Networking.Protocols.Protocol Unity.LiveCapture.CompanionApp.CompanionAppClient::m_Protocol
	Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___m_Protocol_2;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_InitializeSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_InitializeSender_3;
	// Unity.LiveCapture.Networking.Protocols.EventSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_EndSessionSender
	EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___m_EndSessionSender_4;
	// Unity.LiveCapture.Networking.Protocols.BoolSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_IsRecordingSender
	BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* ___m_IsRecordingSender_5;
	// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.DeviceMode> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_DeviceModeSender
	DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3* ___m_DeviceModeSender_6;
	// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.FrameRate> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_FrameRateSender
	DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90* ___m_FrameRateSender_7;
	// Unity.LiveCapture.Networking.Protocols.BoolSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_HasSlateSender
	BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* ___m_HasSlateSender_8;
	// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateDurationSender
	DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B* ___m_SlateDurationSender_9;
	// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlatePreviewTimeSender
	DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B* ___m_SlatePreviewTimeSender_10;
	// Unity.LiveCapture.Networking.Protocols.BoolSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateIsPreviewingSender
	BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* ___m_SlateIsPreviewingSender_11;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateSelectedTakeSender
	BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* ___m_SlateSelectedTakeSender_12;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateIterationBaseSender
	BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* ___m_SlateIterationBaseSender_13;
	// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateTakeNumberSender
	BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* ___m_SlateTakeNumberSender_14;
	// Unity.LiveCapture.Networking.Protocols.StringSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateShotNameSender
	StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* ___m_SlateShotNameSender_15;
	// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0> Unity.LiveCapture.CompanionApp.CompanionAppClient::m_SlateTakesSender
	JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* ___m_SlateTakesSender_16;
	// Unity.LiveCapture.Networking.Protocols.StringSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_NextTakeNameSender
	StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* ___m_NextTakeNameSender_17;
	// Unity.LiveCapture.Networking.Protocols.StringSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_NextAssetNameSender
	StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* ___m_NextAssetNameSender_18;
	// Unity.LiveCapture.Networking.Protocols.TextureSender Unity.LiveCapture.CompanionApp.CompanionAppClient::m_TexturePreviewSender
	TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* ___m_TexturePreviewSender_19;
	// System.String Unity.LiveCapture.CompanionApp.CompanionAppClient::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.Guid Unity.LiveCapture.CompanionApp.CompanionAppClient::<ID>k__BackingField
	Guid_t ___U3CIDU3Ek__BackingField_21;
	// UnityEngine.Vector2Int Unity.LiveCapture.CompanionApp.CompanionAppClient::<ScreenResolution>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CScreenResolutionU3Ek__BackingField_22;
	// System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode> Unity.LiveCapture.CompanionApp.CompanionAppClient::SetDeviceMode
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___SetDeviceMode_23;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppClient::StartRecording
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StartRecording_24;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppClient::StopRecording
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StopRecording_25;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppClient::StartPlayer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StartPlayer_26;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppClient::StopPlayer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StopPlayer_27;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppClient::PausePlayer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PausePlayer_28;
	// System.Action`1<System.Double> Unity.LiveCapture.CompanionApp.CompanionAppClient::SetPlayerTime
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___SetPlayerTime_29;
	// System.Action`1<System.Guid> Unity.LiveCapture.CompanionApp.CompanionAppClient::SetSelectedTake
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___SetSelectedTake_30;
	// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor> Unity.LiveCapture.CompanionApp.CompanionAppClient::SetTakeData
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* ___SetTakeData_31;
	// System.Action`1<System.Guid> Unity.LiveCapture.CompanionApp.CompanionAppClient::DeleteTake
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___DeleteTake_32;
	// System.Action`1<System.Guid> Unity.LiveCapture.CompanionApp.CompanionAppClient::SetIterationBase
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___SetIterationBase_33;
	// System.Action Unity.LiveCapture.CompanionApp.CompanionAppClient::ClearIterationBase
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___ClearIterationBase_34;
	// System.Action`1<System.Guid> Unity.LiveCapture.CompanionApp.CompanionAppClient::TexturePreviewRequested
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___TexturePreviewRequested_35;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape
struct FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93 
{
	// System.Int32 Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape::value__
	int32_t ___value___2;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder
struct FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776  : public RuntimeObject
{
	// Unity.LiveCapture.ICurve[] Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::m_Curves
	ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* ___m_Curves_0;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::m_PositionError
	float ___m_PositionError_1;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::m_RotationError
	float ___m_RotationError_2;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::m_BlendShapeError
	float ___m_BlendShapeError_3;
	// System.Nullable`1<System.Double> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::<InitialTime>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CInitialTimeU3Ek__BackingField_4;
	// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::<Time>k__BackingField
	double ___U3CTimeU3Ek__BackingField_5;
	// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::<TimeOffset>k__BackingField
	double ___U3CTimeOffsetU3Ek__BackingField_6;
	// System.Action Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::<OnReset>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COnResetU3Ek__BackingField_7;
	// Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_8;
};

// Unity.LiveCapture.ARKitFaceCapture.FacePose
struct FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C 
{
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose Unity.LiveCapture.ARKitFaceCapture.FacePose::BlendShapes
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___BlendShapes_1;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FacePose::HeadPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HeadPosition_2;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.FacePose::HeadOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___HeadOrientation_3;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.FacePose::LeftEyeOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___LeftEyeOrientation_4;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.FacePose::RightEyeOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RightEyeOrientation_5;
};

struct FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_StaticFields
{
	// Unity.LiveCapture.ARKitFaceCapture.FacePose Unity.LiveCapture.ARKitFaceCapture.FacePose::<Identity>k__BackingField
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C ___U3CIdentityU3Ek__BackingField_0;
};

// Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0
#pragma pack(push, tp, 1)
struct FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 
{
	// System.Single Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::m_Timestamp
	float ___m_Timestamp_0;
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::m_BlendShapes
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___m_BlendShapes_1;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::m_HeadPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_HeadPosition_2;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::m_HeadOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_HeadOrientation_3;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::m_LeftEyeOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LeftEyeOrientation_4;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::m_RightEyeOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RightEyeOrientation_5;
};
#pragma pack(pop, tp)

// Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1
#pragma pack(push, tp, 1)
struct FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 
{
	// System.Double Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::m_Time
	double ___m_Time_0;
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::m_BlendShapes
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___m_BlendShapes_1;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::m_HeadPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_HeadPosition_2;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::m_HeadOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_HeadOrientation_3;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::m_LeftEyeOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LeftEyeOrientation_4;
	// UnityEngine.Quaternion Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::m_RightEyeOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RightEyeOrientation_5;
};
#pragma pack(pop, tp)

// Unity.LiveCapture.FrameTime
struct FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 
{
	// System.Int32 Unity.LiveCapture.FrameTime::m_FrameNumber
	int32_t ___m_FrameNumber_0;
	// Unity.LiveCapture.Subframe Unity.LiveCapture.FrameTime::m_Subframe
	Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5 ___m_Subframe_1;
};

// Unity.LiveCapture.Networking.NetworkBase
struct NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A  : public RuntimeObject
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Unity.LiveCapture.Networking.NetworkBase::m_IsRunning
	bool ___m_IsRunning_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.Connection> Unity.LiveCapture.Networking.NetworkBase::m_RemoteToConnection
	ConcurrentDictionary_2_tF1F22BAE89E31F1EC7F6B646509973C849BCDFAF* ___m_RemoteToConnection_1;
	// System.Collections.Concurrent.ConcurrentQueue`1<Unity.LiveCapture.Networking.NetworkBase/ConnectionEvent> Unity.LiveCapture.Networking.NetworkBase::m_ConnectionEvents
	ConcurrentQueue_1_tD9F303D8EB5501F8392C6CD31AA793914ABB8AFD* ___m_ConnectionEvents_2;
	// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,System.Action`1<Unity.LiveCapture.Networking.Message>> Unity.LiveCapture.Networking.NetworkBase::m_MessageHandlers
	Dictionary_2_t6659580E835A103B8A8E353FDD132FC4400E8E23* ___m_MessageHandlers_3;
	// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,System.Collections.Generic.Queue`1<Unity.LiveCapture.Networking.Message>> Unity.LiveCapture.Networking.NetworkBase::m_BufferedMessages
	Dictionary_2_tBE8D66389A2A6B5D221814B47CF8EE11F6AE579A* ___m_BufferedMessages_4;
	// System.Version Unity.LiveCapture.Networking.NetworkBase::<ProtocolVersion>k__BackingField
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___U3CProtocolVersionU3Ek__BackingField_5;
	// Unity.LiveCapture.Networking.ChannelType[] Unity.LiveCapture.Networking.NetworkBase::<SupportedChannels>k__BackingField
	ChannelTypeU5BU5D_tA4EF648E5AEC3D84F8871629E71A997C434C1E54* ___U3CSupportedChannelsU3Ek__BackingField_6;
	// System.Guid Unity.LiveCapture.Networking.NetworkBase::<ID>k__BackingField
	Guid_t ___U3CIDU3Ek__BackingField_7;
	// System.Action Unity.LiveCapture.Networking.NetworkBase::Started
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Started_8;
	// System.Action Unity.LiveCapture.Networking.NetworkBase::Stopped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Stopped_9;
	// System.Action`1<Unity.LiveCapture.Networking.Remote> Unity.LiveCapture.Networking.NetworkBase::RemoteConnected
	Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6* ___RemoteConnected_10;
	// System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus> Unity.LiveCapture.Networking.NetworkBase::RemoteDisconnected
	Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433* ___RemoteDisconnected_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.LiveCapture.Networking.Remote
struct Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB  : public RuntimeObject
{
	// System.Guid Unity.LiveCapture.Networking.Remote::<ID>k__BackingField
	Guid_t ___U3CIDU3Ek__BackingField_1;
	// System.Net.IPEndPoint Unity.LiveCapture.Networking.Remote::<TcpEndPoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CTcpEndPointU3Ek__BackingField_2;
	// System.Net.IPEndPoint Unity.LiveCapture.Networking.Remote::<UdpEndPoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CUdpEndPointU3Ek__BackingField_3;
};

struct Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB_StaticFields
{
	// Unity.LiveCapture.Networking.Remote Unity.LiveCapture.Networking.Remote::<All>k__BackingField
	Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___U3CAllU3Ek__BackingField_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.LiveCapture.Timecode
struct Timecode_tC6305561B7EE8D322AC35E87324A4839278EE982 
{
	// System.Byte Unity.LiveCapture.Timecode::m_IsDropFrame
	uint8_t ___m_IsDropFrame_1;
	// System.SByte Unity.LiveCapture.Timecode::m_Hours
	int8_t ___m_Hours_2;
	// System.SByte Unity.LiveCapture.Timecode::m_Minutes
	int8_t ___m_Minutes_3;
	// System.SByte Unity.LiveCapture.Timecode::m_Seconds
	int8_t ___m_Seconds_4;
	// System.Int32 Unity.LiveCapture.Timecode::m_Frames
	int32_t ___m_Frames_5;
	// Unity.LiveCapture.Subframe Unity.LiveCapture.Timecode::m_Subframe
	Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5 ___m_Subframe_6;
};

struct Timecode_tC6305561B7EE8D322AC35E87324A4839278EE982_ThreadStaticFields
{
	// System.Text.StringBuilder Unity.LiveCapture.Timecode::s_StringBuilder
	StringBuilder_t* ___s_StringBuilder_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.LiveCapture.EulerCurve
struct EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333  : public RuntimeObject
{
	// Unity.LiveCapture.Vector3Sampler Unity.LiveCapture.EulerCurve::m_Sampler
	Vector3Sampler_tA861B8CE6116F33655989BC8EF25060F5BB3640A* ___m_Sampler_0;
	// Unity.LiveCapture.Vector3TangentUpdater Unity.LiveCapture.EulerCurve::m_TangentUpdater
	Vector3TangentUpdater_tF10889FA0EE5DFB9ED5EDA4B40716A5CEA43A188* ___m_TangentUpdater_1;
	// Unity.LiveCapture.EulerKeyframeReducer Unity.LiveCapture.EulerCurve::m_Reducer
	EulerKeyframeReducer_t0758EAA9F64718F007290BAB8B3BE6DC1A3908F6* ___m_Reducer_2;
	// UnityEngine.AnimationCurve[] Unity.LiveCapture.EulerCurve::m_Curves
	AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC* ___m_Curves_3;
	// System.Nullable`1<UnityEngine.Vector3> Unity.LiveCapture.EulerCurve::m_EulerAngles
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___m_EulerAngles_4;
	// System.String Unity.LiveCapture.EulerCurve::<RelativePath>k__BackingField
	String_t* ___U3CRelativePathU3Ek__BackingField_5;
	// System.String Unity.LiveCapture.EulerCurve::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_6;
	// System.Type Unity.LiveCapture.EulerCurve::<BindingType>k__BackingField
	Type_t* ___U3CBindingTypeU3Ek__BackingField_7;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceClient
struct FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11  : public CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997
{
	// System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample> Unity.LiveCapture.ARKitFaceCapture.FaceClient::FacePoseSampleReceived
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* ___FacePoseSampleReceived_37;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceSample
struct FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 
{
	// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceSample::m_Time
	double ___m_Time_0;
	// Unity.LiveCapture.ARKitFaceCapture.FacePose Unity.LiveCapture.ARKitFaceCapture.FaceSample::FacePose
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C ___FacePose_1;
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>
struct Action_1_t65E42951F2246B124818430106A38AF664E45C14  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>
struct Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0  : public MulticastDelegate_t
{
};

// System.Func`2<System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>
struct Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9  : public MulticastDelegate_t
{
};

// System.Func`2<System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>
struct Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>
struct Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.Boolean>
struct Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>
struct Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Boolean>
struct Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,Unity.LiveCapture.FloatCurve>
struct Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset
struct EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// Unity.LiveCapture.ARKitFaceCapture.FaceMapper
struct FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator
struct CurveEvaluator_t16309E7ADEEF245FEE5D7A9C80E6D7712E56202B  : public EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE
{
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator::m_Evaluator
	Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* ___m_Evaluator_4;
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper
struct DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390  : public FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10
{
	// System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_Maps
	List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* ___m_Maps_4;
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/EyeMovementDriverType Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_EyeMovementDriver
	int32_t ___m_EyeMovementDriver_5;
	// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_LeftEye
	String_t* ___m_LeftEye_6;
	// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_RightEye
	String_t* ___m_RightEye_7;
	// UnityEngine.Vector2 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_EyeAngleRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_EyeAngleRange_8;
	// UnityEngine.Vector2 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_EyeAngleOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_EyeAngleOffset_9;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_EyeSmoothing
	float ___m_EyeSmoothing_10;
	// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_HeadPosition
	String_t* ___m_HeadPosition_11;
	// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_HeadRotation
	String_t* ___m_HeadRotation_12;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_HeadSmoothing
	float ___m_HeadSmoothing_13;
	// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::m_BlendShapeSmoothing
	float ___m_BlendShapeSmoothing_14;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator
struct SimpleEvaluator_t4E00D9296BC9A61A845106A00DB77C8826492F5D  : public EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE
{
	// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator::m_Evaluator
	Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* ___m_Evaluator_4;
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Unity.LiveCapture.ARKitFaceCapture.FaceActor
struct FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.LiveCapture.ARKitFaceCapture.FaceMapper Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_Mapper
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* ___m_Mapper_4;
	// Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_EnabledChannels
	int32_t ___m_EnabledChannels_5;
	// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_BlendShapes
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___m_BlendShapes_6;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_HeadPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_HeadPosition_7;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_HeadOrientation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_HeadOrientation_8;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_LeftEyeOrientation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LeftEyeOrientation_9;
	// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_RightEyeOrientation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RightEyeOrientation_10;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_BlendShapesEnabled
	bool ___m_BlendShapesEnabled_11;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_HeadPositionEnabled
	bool ___m_HeadPositionEnabled_12;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_HeadOrientationEnabled
	bool ___m_HeadOrientationEnabled_13;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_EyeOrientationEnabled
	bool ___m_EyeOrientationEnabled_14;
	// Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_Cache
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___m_Cache_15;
	// Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags Unity.LiveCapture.ARKitFaceCapture.FaceActor::m_LastChannels
	int32_t ___m_LastChannels_16;
	// UnityEngine.Animator Unity.LiveCapture.ARKitFaceCapture.FaceActor::<Animator>k__BackingField
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___U3CAnimatorU3Ek__BackingField_17;
};

// Unity.LiveCapture.LiveCaptureDevice
struct LiveCaptureDevice_t0D839EF945BC2180D8EF4D480CB4990B46A212DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.LiveCapture.TakeRecorder Unity.LiveCapture.LiveCaptureDevice::m_TakeRecorder
	TakeRecorder_t1C44C6CCFA139B9B7036F7D230CA3853741E4FC6* ___m_TakeRecorder_4;
	// Unity.LiveCapture.ITakeRecorder Unity.LiveCapture.LiveCaptureDevice::m_TakeRecorderOverride
	RuntimeObject* ___m_TakeRecorderOverride_5;
	// UnityEngine.Transform Unity.LiveCapture.LiveCaptureDevice::m_CachedParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedParent_6;
};

// Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>
struct CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65  : public LiveCaptureDevice_t0D839EF945BC2180D8EF4D480CB4990B46A212DA
{
	// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_ClientRegistered
	bool ___m_ClientRegistered_7;
	// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_Recording
	bool ___m_Recording_8;
	// TClient Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_Client
	RuntimeObject* ___m_Client_9;
	// Unity.LiveCapture.CompanionApp.SlateChangeTracker Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_SlateChangeTracker
	SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93* ___m_SlateChangeTracker_10;
	// Unity.LiveCapture.TakeNameFormatter Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_TakeNameFormatter
	TakeNameFormatter_tF00FD67A2276183B8208920CE5A778D2E2895716* ___m_TakeNameFormatter_11;
	// System.String Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_LastAssetName
	String_t* ___m_LastAssetName_12;
	// Unity.LiveCapture.PropertyPreviewer Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_Previewer
	PropertyPreviewer_t95C66865A49B216206BAC62881453868F8849C5B* ___m_Previewer_13;
};

// Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>
struct CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A  : public LiveCaptureDevice_t0D839EF945BC2180D8EF4D480CB4990B46A212DA
{
	// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_ClientRegistered
	bool ___m_ClientRegistered_7;
	// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_Recording
	bool ___m_Recording_8;
	// TClient Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_Client
	RuntimeObject* ___m_Client_9;
	// Unity.LiveCapture.CompanionApp.SlateChangeTracker Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_SlateChangeTracker
	SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93* ___m_SlateChangeTracker_10;
	// Unity.LiveCapture.TakeNameFormatter Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_TakeNameFormatter
	TakeNameFormatter_tF00FD67A2276183B8208920CE5A778D2E2895716* ___m_TakeNameFormatter_11;
	// System.String Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_LastAssetName
	String_t* ___m_LastAssetName_12;
	// Unity.LiveCapture.PropertyPreviewer Unity.LiveCapture.CompanionApp.CompanionAppDevice`1::m_Previewer
	PropertyPreviewer_t95C66865A49B216206BAC62881453868F8849C5B* ___m_Previewer_13;
};

// Unity.LiveCapture.ARKitFaceCapture.FaceDevice
struct FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468  : public CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65
{
	// System.String Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_Guid
	String_t* ___m_Guid_16;
	// Unity.LiveCapture.ARKitFaceCapture.FaceActor Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_Actor
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___m_Actor_17;
	// Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_Channels
	int32_t ___m_Channels_18;
	// Unity.LiveCapture.ARKitFaceCapture.FacePose Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_Pose
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C ___m_Pose_19;
	// Unity.LiveCapture.FrameTime Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_SyncPresentationOffset
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___m_SyncPresentationOffset_20;
	// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_IsSynchronized
	bool ___m_IsSynchronized_21;
	// System.Int32 Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_BufferSize
	int32_t ___m_BufferSize_22;
	// Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_Recorder
	FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* ___m_Recorder_23;
	// Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose> Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_SyncBuffer
	TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* ___m_SyncBuffer_26;
	// Unity.LiveCapture.FrameTime Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_PresentationFrameTime
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___m_PresentationFrameTime_27;
	// Unity.LiveCapture.FrameTime Unity.LiveCapture.ARKitFaceCapture.FaceDevice::m_CurrentFrameTime
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___m_CurrentFrameTime_28;
	// Unity.LiveCapture.ISynchronizer Unity.LiveCapture.ARKitFaceCapture.FaceDevice::<Synchronizer>k__BackingField
	RuntimeObject* ___U3CSynchronizerU3Ek__BackingField_29;
};

struct FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_StaticFields
{
	// Unity.LiveCapture.FrameRate Unity.LiveCapture.ARKitFaceCapture.FaceDevice::k_SyncBufferNominalFrameRate
	FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___k_SyncBufferNominalFrameRate_24;
	// Unity.LiveCapture.FrameTime Unity.LiveCapture.ARKitFaceCapture.FaceDevice::k_OutOfOrderTolerance
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___k_OutOfOrderTolerance_25;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape[]
struct FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.LiveCapture.FloatCurve[]
struct FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6  : public RuntimeArray
{
	ALIGN_FIELD (8) FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* m_Items[1];

	inline FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.LiveCapture.IPreviewable[]
struct IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.LiveCapture.ICurve[]
struct ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData[]
struct BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F  : public RuntimeArray
{
	ALIGN_FIELD (8) BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 m_Items[1];

	inline BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Config_1), (void*)NULL);
	}
	inline BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Config_1), (void*)NULL);
	}
};
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BlendShapeData[]
struct BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA  : public RuntimeArray
{
	ALIGN_FIELD (8) BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098 m_Items[1];

	inline BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BlendShapeData_t8DFEC3E29E91148956F98C1CBFA2206FE4455098 value)
	{
		m_Items[index] = value;
	}
};
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData[]
struct MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A  : public RuntimeArray
{
	ALIGN_FIELD (8) MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 m_Items[1];

	inline MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Bindings_1), (void*)NULL);
	}
	inline MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Bindings_1), (void*)NULL);
	}
};
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding[]
struct BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1  : public RuntimeArray
{
	ALIGN_FIELD (8) Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* m_Items[1];

	inline Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData[]
struct RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1  : public RuntimeArray
{
	ALIGN_FIELD (8) RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 m_Items[1];

	inline RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___BlendShapeData_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Mappings_2), (void*)NULL);
		#endif
	}
	inline RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___BlendShapeData_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Mappings_2), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_pinvoke(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_pinvoke_back(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke& marshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled);
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_pinvoke_cleanup(BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_com(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_com_back(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com& marshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled);
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_com_cleanup(BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com& marshaled);
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_pinvoke(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_pinvoke_back(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke& marshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled);
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_pinvoke_cleanup(MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_com(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com& marshaled);
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_com_back(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com& marshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled);
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_com_cleanup(MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com& marshaled);

// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB_gshared (Action_1_t65E42951F2246B124818430106A38AF664E45C14* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m85237C700D57E8F9650D646DDB06AC917B28F7E8_gshared_inline (Action_1_t65E42951F2246B124818430106A38AF664E45C14* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___obj0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C_gshared (DataSender_1_t892968D09CC86C790DEBA6F5AC7BE35EEBC265E1* __this, FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA_gshared (DataSender_1_t784D97B8706785D5C08F443871C52732658E2342* __this, FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272_gshared (BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mFC68C22D34E1767B55279D221C903A8D3A0E18F0_gshared (Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5_gshared (DataReceiver_1_tD5B2D0ABEFD4F8E73CE610AE3416693AA9859977* __this, Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0* ___callback0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Int32Enum>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD7DF983428BF05DC218A798F599F830973BF8FFC_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32Enum,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE27CCE9BF36CDA5E1C92CEBAECF98A3D57951455_gshared (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEAD132AA607026BC95F9DE5B3F57BA6D5A9D1B68_gshared (RuntimeObject* ___source0, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Enumerable_ToArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF0ED7CE327D8D9E549912B674D4EDB30393887A4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int32Enum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m889D430A5EE74DDF6971773B4D8C48ACF923ECCF_gshared (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Int32Enum,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_mFD6C3D09A0699B365186241BCF95544D9C18BC9B_gshared (RuntimeObject* ___source0, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>::RegisterLiveProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppDevice_1_RegisterLiveProperties_mF29B52E2BB922691F92BE8F10732EFBB202368EE_gshared (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameRate Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::get_FrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_gshared_inline (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CircularBuffer`1<System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>>::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3_gshared (CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::TryGetBufferRange(Unity.LiveCapture.FrameTime&,Unity.LiveCapture.FrameTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2_gshared (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* ___oldestSample0, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* ___newestSample1, const RuntimeMethod* method) ;
// TClient Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>::GetClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompanionAppDevice_1_GetClient_m0286A312E784D2C1F8F95D5C096B62F7E4D783E9_gshared_inline (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppDevice_1_OnEnable_m5C8F388A7643B25A06F3955C71D646F247CD136D_gshared (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::.ctor(Unity.LiveCapture.FrameRate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8_gshared (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate0, int32_t ___capacity1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppDevice_1_OnDisable_m2BEC5F2F3ED3EE1B3966AD2D938FD5F373603E26_gshared (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompanionAppDevice_1_IsReady_mCCB10D19B292963D9368AE805ADFDC4D282B85F2_gshared (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.TimedSampleStatus Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::TryGetSample(Unity.LiveCapture.FrameTime,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_gshared (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___frame0, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* ___sampleValue1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CircularBuffer`1<System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1_gshared (CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::Add(Unity.LiveCapture.FrameTime,Unity.LiveCapture.FrameRate,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4_gshared (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___frameTime0, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate1, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C ___value2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppDevice_1__ctor_m4A1D127CD3D169453908B09E5FC3C9B9E44F77A2_gshared (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method) ;
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA_gshared (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method) ;
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD_gshared (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method) ;
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<UnityEngine.Quaternion>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_gshared (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method) ;
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<System.Boolean>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_gshared (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEFB19C6918BFCF7702199988CE08C7B1608A8343_gshared (Func_2_t213311159653563BDCC21CC060B449705C96791F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.ValueTuple`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA5E922510B621D04BBDE505F36C8C5205524357A_gshared (Func_2_tFD88D6C163320AE208FD95F14CB5B748862C5EA4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.ILookup`2<TKey,TElement> System.Linq.Enumerable::ToLookup<System.Object,System.Int32Enum,System.ValueTuple`2<System.Int32,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_ToLookup_TisRuntimeObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825_mB55D6AF7EF6ABE570E6EC276E1559D138148C424_gshared (RuntimeObject* ___source0, Func_2_t213311159653563BDCC21CC060B449705C96791F* ___keySelector1, Func_2_tFD88D6C163320AE208FD95F14CB5B748862C5EA4* ___elementSelector2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5BE29E53A07F3A9E71D5DC2F3B8051B2B6773E31_gshared (Func_2_tBE380BC1D18F9E3464F6042FDA6320847D4B9F7B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m060C5DB498949B7C112AEED3AC66288DC7529B39_gshared (RuntimeObject* ___source0, Func_2_tBE380BC1D18F9E3464F6042FDA6320847D4B9F7B* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m6B6C0A6A3D8BF4D7D400B729024BB5A32A3314ED_gshared (ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825* __this, int32_t ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.ValueTuple`2<System.Int32,System.Object>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mAB6B4F938751E17F68D3562B756ED947FC34EA00_gshared (Func_2_t55C73F76DA8C2F1D2913CEAC2EDBFB7041C8AE01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.ValueTuple`2<System.Int32,System.Object>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mF4A04A0661BF398374989D5B6C8D0052A4280D67_gshared (RuntimeObject* ___source0, Func_2_t55C73F76DA8C2F1D2913CEAC2EDBFB7041C8AE01* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161_gshared (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_gshared_inline (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* __this, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m927447BDEC82B53BEBBEF1C0C2B9BB080832F406_gshared (HashSet_1_t13DFE713621EC041B2E218C172F800E93F985341* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32Enum,System.Int32>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m1F28B3A58CF47AA73DF2773AE6DA8B729F28F3B6_gshared (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mFA90686372F9D9EC62A211FD0BE4FBA0F6B2FE8B_gshared (HashSet_1_t13DFE713621EC041B2E218C172F800E93F985341* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDDE7869B1E4E09A7CDC73F0171C3029F06FB1029_gshared (HashSet_1_t13DFE713621EC041B2E218C172F800E93F985341* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___item0, const RuntimeMethod* method) ;

// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost__ctor_m32953258ACED3B231876CA04DE699CA83E5E3049 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF98DD4E797E3101BF06283293FAF293B02BD4DFD (U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
inline bool BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67**, const RuntimeMethod*))BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Void System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB (Action_1_t65E42951F2246B124818430106A38AF664E45C14* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t65E42951F2246B124818430106A38AF664E45C14*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_m28328CA3F585F8D5A89A924582E3BCF03D6D79F9 (U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
inline bool BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B**, const RuntimeMethod*))BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Void System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>::Invoke(T)
inline void Action_1_Invoke_m85237C700D57E8F9650D646DDB06AC917B28F7E8_inline (Action_1_t65E42951F2246B124818430106A38AF664E45C14* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t65E42951F2246B124818430106A38AF664E45C14*, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61, const RuntimeMethod*))Action_1_Invoke_m85237C700D57E8F9650D646DDB06AC917B28F7E8_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1 Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 FaceSampleV1_op_Explicit_m79F64649976BF351B291D596E78D05B0E7E812C8 (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::Send(T)
inline void DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C (DataSender_1_t892968D09CC86C790DEBA6F5AC7BE35EEBC265E1* __this, FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t892968D09CC86C790DEBA6F5AC7BE35EEBC265E1*, FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569, const RuntimeMethod*))DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C_gshared)(__this, ___data0, method);
}
// Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0 Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 FaceSampleV0_op_Explicit_m02764DB8A85909FEE2340D0C0E317EF222B05AA3 (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0>::Send(T)
inline void DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA (DataSender_1_t784D97B8706785D5C08F443871C52732658E2342* __this, FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t784D97B8706785D5C08F443871C52732658E2342*, FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8, const RuntimeMethod*))DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA_gshared)(__this, ___data0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ClientInitialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient__ctor_mC5554FF4D6631B382711C5ED7F2391E1344F0752 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* ___data2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272 (BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>>(T)
inline BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* Protocol_Add_TisBinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_m79B44F091568BB61F1C0D238BE3FE2023EDFBF7D (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* ___message0, const RuntimeMethod* method)
{
	return ((  BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void System.Action`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFC68C22D34E1767B55279D221C903A8D3A0E18F0 (Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mFC68C22D34E1767B55279D221C903A8D3A0E18F0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5 (DataReceiver_1_tD5B2D0ABEFD4F8E73CE610AE3416693AA9859977* __this, Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_tD5B2D0ABEFD4F8E73CE610AE3416693AA9859977*, Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0*, const RuntimeMethod*))DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5_gshared)(__this, ___callback0, method);
}
// Unity.LiveCapture.ARKitFaceCapture.FaceSample Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 FaceSampleV1_op_Explicit_m0A2C976F89C91D70142F318E18AAB387EB3DFC96 (FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 ___sample0, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapePose_get_Item_mAB5ECD2860FE827BC96D10931AD9B684B8867278 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::SetValue(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_set_Item_m0D42B12DC73876AFA104FAC6499CD48A98E60099 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::GetValue(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___location0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::SetValue(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_SetValue_mC59446F3167C81A94DA752622191517AAA271F87 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___location0, float ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_FlipHorizontally_m5D6DF62DB4EF323DAE1ADB27345397226C53D595 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_mD33ACD4B79AFB6328BF0BF4D96971078577E5D63 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD7DF983428BF05DC218A798F599F830973BF8FFC_gshared)(___source0, method);
}
// System.Void System.Func`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m03087EA817D00F3361960C0FB18ABD9A173FE2F5 (Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mE27CCE9BF36CDA5E1C92CEBAECF98A3D57951455_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m0251F20B257790A55E6D70BECCB6DF04C75B3030 (RuntimeObject* ___source0, Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1*, const RuntimeMethod*))Enumerable_Where_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEAD132AA607026BC95F9DE5B3F57BA6D5A9D1B68_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* Enumerable_ToArray_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m91DC46AB9095251EBE272AECED7231D85124273A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF0ED7CE327D8D9E549912B674D4EDB30393887A4_gshared)(___source0, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB01F9C3C4A81118AFFC852EF9FFE55386FF01A2E (U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceSample::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceSample::set_Time(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7_inline (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* __this, double ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_Animator(UnityEngine.Animator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_Animator_m98048EBA7DB286EEA74D15FBEC0D1DEBBAA16DFC_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_ClearCache_mD2529A68C7964B23C098AA7BEC0AB2CF3FE79DD0 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::UpdateRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_UpdateRig_mD9829B2EB613FCCF60CC4F434FE83886E5C8C34A (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___continuous0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_Dispose_m5A96730404B43B0DE0A209CA098BE399CDA38A97 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape[] Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::get_Shapes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* FaceBlendShapePose_get_Shapes_mC820E40260ACCA58DF902558C25C93F3312E28C3_inline (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.FloatCurve::get_MaxError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatCurve_get_MaxError_m2DF59127A89AE34B054E9247EB0D8B70AA651E10 (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FloatCurve::set_MaxError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCurve_set_MaxError_mB01B1B59227491A371B6E44ECBEB7791CEB151C0 (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, float ___value0, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameRate Unity.LiveCapture.FloatCurve::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 FloatCurve_get_FrameRate_m17C976F2D76270424E5F26C363864D36D77A00EE (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FloatCurve::set_FrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCurve_set_FrameRate_mF6BC540AF09EBF26454DEDC623E70DDCDFAD167C (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m5D062FB11FC3B6E89464ACB80A833D91D6763D36 (U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,Unity.LiveCapture.FloatCurve>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7775C65D14B66C071CDDDF69928D76B18B395E47 (Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m889D430A5EE74DDF6971773B4D8C48ACF923ECCF_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,Unity.LiveCapture.FloatCurve>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mF7D03E11AC4F71507D1F12B7761577C3E98B5B80 (RuntimeObject* ___source0, Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799*, const RuntimeMethod*))Enumerable_Select_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisRuntimeObject_mFD6C3D09A0699B365186241BCF95544D9C18BC9B_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.FloatCurve>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* Enumerable_ToArray_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mDE0C69C442D5FB26A9D04F5F698CDEFEFDE93F8F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::AddKey(System.Double,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_AddKey_mFB79201DC9D62290648CDFF607BD9DF50C38D7DC (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, double ___time0, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FloatCurve::AddKey(System.Double,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCurve_AddKey_mEF0D59ED3A08EDA75453AF74E678A4A43C002C9E (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, double ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.FloatCurve::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatCurve_IsEmpty_m008AB3A3B950E6B78D89169EC3647F2DE6719B5B (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FloatCurve::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCurve_Clear_mFEB6194CAAD4976E1231B75B600A62B4287E4A78 (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FloatCurve::SetToAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCurve_SetToAnimationClip_mC99DE117C558A274533380026A299BEF4C706F90 (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FloatCurve::.ctor(System.String,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCurve__ctor_mDA574EA94A0D478C82752273F40DC20B6DEF9D65 (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* __this, String_t* ___relativePath0, String_t* ___propertyName1, Type_t* ___bindingType2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::RegisterLiveProperties()
inline void CompanionAppDevice_1_RegisterLiveProperties_m67451ECE497C7B6EE645416B719C016380A85157 (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65* __this, const RuntimeMethod* method)
{
	((  void (*) (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65*, const RuntimeMethod*))CompanionAppDevice_1_RegisterLiveProperties_mF29B52E2BB922691F92BE8F10732EFBB202368EE_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameRate Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::get_FrameRate()
inline FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_inline (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, const RuntimeMethod* method)
{
	return ((  FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 (*) (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F*, const RuntimeMethod*))TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_gshared_inline)(__this, method);
}
// System.Void Unity.LiveCapture.CircularBuffer`1<System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>>::SetCapacity(System.Int32)
inline void CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3 (CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0*, int32_t, const RuntimeMethod*))CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3_gshared)(__this, ___capacity0, method);
}
// System.Boolean Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::TryGetBufferRange(Unity.LiveCapture.FrameTime&,Unity.LiveCapture.FrameTime&)
inline bool TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2 (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* ___oldestSample0, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* ___newestSample1, const RuntimeMethod* method)
{
	return ((  bool (*) (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F*, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9*, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9*, const RuntimeMethod*))TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2_gshared)(__this, ___oldestSample0, ___newestSample1, method);
}
// TClient Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::GetClient()
inline RuntimeObject* CompanionAppDevice_1_GetClient_m83873ED134187DD872E212F6481A3E8366E26BCB_inline (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65*, const RuntimeMethod*))CompanionAppDevice_1_GetClient_m0286A312E784D2C1F8F95D5C096B62F7E4D783E9_gshared_inline)(__this, method);
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::OnEnable()
inline void CompanionAppDevice_1_OnEnable_m33F9BEEBC5995DAAF3CE680CC1A913C35DE73402 (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65* __this, const RuntimeMethod* method)
{
	((  void (*) (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65*, const RuntimeMethod*))CompanionAppDevice_1_OnEnable_m5C8F388A7643B25A06F3955C71D646F247CD136D_gshared)(__this, method);
}
// Unity.LiveCapture.TimedDataSourceManager Unity.LiveCapture.TimedDataSourceManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* TimedDataSourceManager_get_Instance_m5F498934F9AD58C582C6981535C84CC231926379_inline (const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.TimedDataSourceManager::EnsureIdIsValid(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedDataSourceManager_EnsureIdIsValid_m87FCB9BFBCF345D9DB8C5DC580A274D6D2396B29 (TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* __this, String_t** ___id0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.TimedDataSourceManager::Register(Unity.LiveCapture.ITimedDataSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedDataSourceManager_Register_m10569159450C522F1F8F759DE4A5CA6AE4E74709 (TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* __this, RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::.ctor(Unity.LiveCapture.FrameRate,System.Int32)
inline void TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8 (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate0, int32_t ___capacity1, const RuntimeMethod* method)
{
	((  void (*) (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F*, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621, int32_t, const RuntimeMethod*))TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8_gshared)(__this, ___frameRate0, ___capacity1, method);
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::OnDisable()
inline void CompanionAppDevice_1_OnDisable_m629CCFCC48D97D3711EBA8467FA1650CDFC7DBDC (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65* __this, const RuntimeMethod* method)
{
	((  void (*) (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65*, const RuntimeMethod*))CompanionAppDevice_1_OnDisable_m2BEC5F2F3ED3EE1B3966AD2D938FD5F373603E26_gshared)(__this, method);
}
// System.Boolean Unity.LiveCapture.TimedDataSourceManager::Unregister(Unity.LiveCapture.ITimedDataSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedDataSourceManager_Unregister_m6747AED0E710A9DDCF4CE0A657335B0670F3FBAD (TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* __this, RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Validate_m24D6542D83A005A2E6CBDC0C270C9B306A18DD8D (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::IsReady()
inline bool CompanionAppDevice_1_IsReady_m79321A9769ABB4108F5F81FE2DA683A4EAD652EB (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65*, const RuntimeMethod*))CompanionAppDevice_1_IsReady_mCCB10D19B292963D9368AE805ADFDC4D282B85F2_gshared)(__this, method);
}
// Unity.LiveCapture.ITakeRecorder Unity.LiveCapture.LiveCaptureDevice::GetTakeRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LiveCaptureDevice_GetTakeRecorder_m8DF43C6315C0046C0777FC63B59B221E1118C534 (LiveCaptureDevice_t0D839EF945BC2180D8EF4D480CB4990B46A212DA* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_FrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_FrameRate_m749005996C015C32F51CF84ADBBD7AA1F5F48B2B (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_Channels(Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_Channels_mFD2A2BA45B3DF4D67188DC5A86C4C332AE7527AA_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_OnReset(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_OnReset_m44FAF0C35D0C2DDDCA4B13EEB22DDBD74FAFE8C0_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Prepare(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Prepare_m7183C252C22251C1B6E1C101F8C2D69D5DAEA8D0 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___timeOffset0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::TryGetInternalClient(Unity.LiveCapture.ARKitFaceCapture.IFaceClientInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDevice_TryGetInternalClient_m5A88A3887834CD09DFD3AF5FEA980CF63D08326C (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, RuntimeObject** ___client0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<Unity.LiveCapture.IPreviewable>()
inline IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1* Component_GetComponents_TisIPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_m1AD75C236475B4F1E2E5E9353AB3AAB58B67CD4E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDeviceRecorder_IsEmpty_m6BFD173E0FF100E2E4959998BBBF6F3E044C4C2B (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_IsSynchronized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FaceDevice_get_IsSynchronized_m3D91B9EC81574591C84CC9FC941934425C9D1FB9_inline (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Double> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_InitialTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// UnityEngine.Animator Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_Animator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* FaceActor_get_Animator_m38D34A64E8C69274019554D9AAFECA2C5B2019AD_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* FaceDeviceRecorder_Bake_m6DF100846833EB6CF242B536B37AA2215D15EB4A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::Present()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_Present_m2C53E6984D2A65A4F919B3E071776439C10209B0 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_BlendShapes(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_BlendShapes_m367764D14E6783671E9CF3512E39A26CCB0E5E52_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadPosition_mF2509211B721CEB887D9A1CAB2DC63EE7DF03D16_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadOrientation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadOrientation_mBFE01868BA35528237375799D5F17842DCCB4F00_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_LeftEyeOrientation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_LeftEyeOrientation_mEB0ADF7AB7E1E0810F10D92D8A6F003939D9635C_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_RightEyeOrientation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_RightEyeOrientation_m9F7FECD4F55A01998D7AEA5B86E804F638853043_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_BlendShapesEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_BlendShapesEnabled_m6528236DFBB1FC4F068D199B2781ED097F97B9C7_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadPositionEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadPositionEnabled_mD75AA798500FCB6CDF787949D2B488055AEB82D5_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadOrientationEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadOrientationEnabled_m35DFF7431928FF0A496E839F00810A43B1C8A94D_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_EyeOrientationEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_EyeOrientationEnabled_m13724093F2073EBFB139B687C09777335FAF4AC3_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameTime Unity.LiveCapture.Timecode::ToFrameTime(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 Timecode_ToFrameTime_m4D8E53F03C313E2ABAC767BAEC54EC33B6E3F324 (Timecode_tC6305561B7EE8D322AC35E87324A4839278EE982* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate0, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameTime Unity.LiveCapture.FrameTime::Remap(Unity.LiveCapture.FrameTime,Unity.LiveCapture.FrameRate,Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FrameTime_Remap_mDDC87A4BD894EC514A3D169D2C9C3105D633D17B (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___frameTime0, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___srcRate1, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___dstRate2, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameTime Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_PresentationOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FaceDevice_get_PresentationOffset_m4D7FDCBE8C78CF053CC9BE74B3ABB2972A4DE789_inline (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameTime Unity.LiveCapture.FrameTime::op_Addition(Unity.LiveCapture.FrameTime,Unity.LiveCapture.FrameTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FrameTime_op_Addition_mD6B4587C026A4246CEB8D42BCBDCAB80A7A1F4E3 (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___a0, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___b1, const RuntimeMethod* method) ;
// Unity.LiveCapture.TimedSampleStatus Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::TryGetSample(Unity.LiveCapture.FrameTime,T&)
inline int32_t TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5 (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___frame0, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* ___sampleValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F*, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C*, const RuntimeMethod*))TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_gshared)(__this, ___frame0, ___sampleValue1, method);
}
// Unity.LiveCapture.FrameTime Unity.LiveCapture.FrameTime::op_Subtraction(Unity.LiveCapture.FrameTime,Unity.LiveCapture.FrameTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FrameTime_op_Subtraction_m5AE4E8E7AE9E50857D0B57D214288316980BAC3A (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___a0, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___b1, const RuntimeMethod* method) ;
// System.Int32 Unity.LiveCapture.FrameTime::get_FrameNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrameTime_get_FrameNumber_mCBC404E99B67419686B2957F86DBF0C87FF2AA70_inline (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CircularBuffer`1<System.ValueTuple`2<Unity.LiveCapture.FrameTime,Unity.LiveCapture.ARKitFaceCapture.FacePose>>::Clear()
inline void CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1 (CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0* __this, const RuntimeMethod* method)
{
	((  void (*) (CircularBuffer_1_tCDBCCCD715A69439B2B06421C570A31C91EFF1F0*, const RuntimeMethod*))CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1_gshared)(__this, method);
}
// System.Double Unity.LiveCapture.FrameTime::ToSeconds(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FrameTime_ToSeconds_mC18D775189165B6A190D9A596668DD7E15EF8790 (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Update(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Update_mC2D525E5AFDABDE9FF05C2E2AF839FADAEBBBEDD (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___time0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Record(Unity.LiveCapture.ARKitFaceCapture.FacePose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Record_mD9D17D1CBD8C8432B567547684BDD875BE6EDF11 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* ___sample0, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameTime Unity.LiveCapture.FrameTime::op_Increment(Unity.LiveCapture.FrameTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FrameTime_op_Increment_m8CB0173BACCC648F69556E54DA48BE2A113F05D0 (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___a0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.FrameTime::op_LessThanOrEqual(Unity.LiveCapture.FrameTime,Unity.LiveCapture.FrameTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameTime_op_LessThanOrEqual_mAB60E3178143621CF3140EDA35EC20C1BB413AAE (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___a0, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___b1, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameTime Unity.LiveCapture.FrameTime::FromSeconds(Unity.LiveCapture.FrameRate,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FrameTime_FromSeconds_mEDEEFCF2ECD780702683DFA082DB97D42143805B (FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate0, double ___time1, int32_t ___subframeResolution2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.TimedDataBuffer`1<Unity.LiveCapture.ARKitFaceCapture.FacePose>::Add(Unity.LiveCapture.FrameTime,Unity.LiveCapture.FrameRate,T)
inline void TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4 (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___frameTime0, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate1, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C ___value2, const RuntimeMethod* method)
{
	((  void (*) (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F*, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C, const RuntimeMethod*))TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4_gshared)(__this, ___frameTime0, ___frameRate1, ___value2, method);
}
// System.Void Unity.LiveCapture.LiveCaptureDevice::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LiveCaptureDevice_Refresh_mAD3C39521C5E3EC6DBD45539502BA200E28C6541 (LiveCaptureDevice_t0D839EF945BC2180D8EF4D480CB4990B46A212DA* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.FacePose Unity.LiveCapture.ARKitFaceCapture.FacePose::get_Identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C FacePose_get_Identity_mA875106D8CC95EC9E8080322064385037F417D86_inline (const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder__ctor_m41A7DC65993C3448EB3AF721862D8CC16424651A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::.ctor()
inline void CompanionAppDevice_1__ctor_m46799B5D6063660AF88BCC361E8A686C22E07850 (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65* __this, const RuntimeMethod* method)
{
	((  void (*) (CompanionAppDevice_1_t6370A475677F588D61FD91078154D9F2F0994E65*, const RuntimeMethod*))CompanionAppDevice_1__ctor_m4A1D127CD3D169453908B09E5FC3C9B9E44F77A2_gshared)(__this, method);
}
// Unity.LiveCapture.FrameRate Unity.LiveCapture.FrameRate::op_Implicit(Unity.LiveCapture.StandardFrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 FrameRate_op_Implicit_m2C2D70432734EBF6171ECA49EB5AC9DF3972D9A5 (int32_t ___rate0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.FrameTime::.ctor(System.Int32,Unity.LiveCapture.Subframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameTime__ctor_m83C3C64C18335587D4ECA5163C605A50947BE206 (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* __this, int32_t ___frameNumber0, Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5 ___subframe1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_Time_m25B457F156DB91417439AF2D4FB490065AF470C2_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_ElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_ElapsedTime_m26587C644AB4CFFF00E05BB881A6F90AC2FE81CA (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_TimeOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_TimeOffset_mB0B784EBD827B16598DE23BECDB9689F296594C3_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_Time(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_Time_m85D9A261545AAA4628DFF7A1A93B00D58FABC303_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_InitialTime(System.Nullable`1<System.Double>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_InitialTime_mEE3A6970E7A1681B68C45DD7478B7D6003EF3E8B_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___value0, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Reset_mD44B26B590BC80BCAD3AF513F79201F9FD55899A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_TimeOffset(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_TimeOffset_m18F2E0AA20D095709FCCE2013DE46AD9B4E2750B_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___value0, const RuntimeMethod* method) ;
// Unity.LiveCapture.IReduceableCurve Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetReduceable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_BlendShapeError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_BlendShapeError_m53B8030B80EC185C940DE6E334A655B255682EA9_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_PositionError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_PositionError_m592BE519CBA2DBCCDA7D19C7B1ACA76ECF6FDF18_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_RotationError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_RotationError_m94F72E2C9165A693217CE72BCFEE76F0E4B96033_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Action Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_OnReset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* FaceDeviceRecorder_get_OnReset_mCEA65CD2332BABD2CA8491AF176E5013562A48E2_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_Channels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose>(System.Int32)
inline RuntimeObject* FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776*, int32_t, const RuntimeMethod*))FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA_gshared)(__this, ___index0, method);
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_RecordingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<UnityEngine.Vector3>(System.Int32)
inline RuntimeObject* FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776*, int32_t, const RuntimeMethod*))FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD_gshared)(__this, ___index0, method);
}
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<UnityEngine.Quaternion>(System.Int32)
inline RuntimeObject* FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776*, int32_t, const RuntimeMethod*))FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_gshared)(__this, ___index0, method);
}
// Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetCurve<System.Boolean>(System.Int32)
inline RuntimeObject* FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776*, int32_t, const RuntimeMethod*))FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::.ctor(System.String,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves__ctor_m7666FD11E16D9B52F455F16BD7251A5756AE1C88 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, String_t* ___relativePath0, String_t* ___propertyName1, Type_t* ___bindingType2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Vector3Curve::.ctor(System.String,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Curve__ctor_m52F39AC8198602582952FBBDEBD7725EA0B676DB (Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50* __this, String_t* ___relativePath0, String_t* ___propertyName1, Type_t* ___bindingType2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.EulerCurve::.ctor(System.String,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EulerCurve__ctor_m173718548654B745A423C5FF38CA4CFBAA2F00A3 (EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333* __this, String_t* ___relativePath0, String_t* ___propertyName1, Type_t* ___bindingType2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.BooleanCurve::.ctor(System.String,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanCurve__ctor_m183761764803F7E352B62A7D211BC6776FC297D7 (BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18* __this, String_t* ___relativePath0, String_t* ___propertyName1, Type_t* ___bindingType2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_Dispose_m49FA618A3D13861405A07C431E846F2E41C419F8 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::get_Disposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FaceMapperCache_get_Disposed_m610CD1556B5E9F520DD8E7A250729D78BADA3E98_inline (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::set_Disposed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceMapperCache_set_Disposed_m1FC467C9C0835059125DF2060F5E27E4E0C3D7A3_inline (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m0BA13FF0A4B9D31B097CD51ED66DEAA657F541A0 (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m9604F6E2CED284F536D9651B96EA8F00001A2FC2 (Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>::get_Item(System.Int32)
inline RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* List_1_get_Item_m3F8830996D7EF729FB150AF87B1F40A06F75AB6A (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* (*) (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::get_Path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RendererMapping_get_Path_m6315136E45B9715CC33F54F3D9F22EF8BB0BA732_inline (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m494165D99E5A4EFC93279F01DC2CAA6587E91127 (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::Validate(Unity.LiveCapture.ARKitFaceCapture.FaceMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererMapping_Validate_mF563BF0CD2B41660F6C4BF563456063AF30F6433 (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* ___mapper0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>::get_Count()
inline int32_t List_1_get_Count_m73190613823680A72715CFEBDD6C227382F49BEA_inline (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceActor,System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache__ctor_mA2F6BCE9209DB58FBEF1E36EC4DEE054256A82EE (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, RuntimeObject* ___maps1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::get_Renderers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Cache_get_Renderers_m56B64E46CEA3870105466BFF665F7623622C0681_inline (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::GetEvaluator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindingConfig_GetEvaluator_m1A2DE98C21BD8A2D26CC965143022985D0EAB781 (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::get_OverrideSmoothing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BindingConfig_get_OverrideSmoothing_mD069020FE33A5466CFFABE0CF1E5480A60983E47_inline (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::get_Smoothing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BindingConfig_get_Smoothing_mDA3304DED53ECD2DF484E5CC4A9C9751642D973A_inline (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::TryGetBone(Unity.LiveCapture.ARKitFaceCapture.FaceActor,System.String,UnityEngine.Transform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862 (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, String_t* ___path1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___bone2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>::.ctor()
inline void List_1__ctor_mFCBC0D2476591770514099DCFE513B3623217EFC (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapper__ctor_m81864289E9C0B65DEDD20939032F6692DB4BA78D (FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData::.ctor(System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingData__ctor_mEDA2153AAA8A63486F681649AED667B015E509D9 (BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2* __this, int32_t ___shapeIndex0, BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___config1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingData__ctor_m84D3504F967F022835E20D75F7C4C0355C5A2BAF (MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70* __this, int32_t ___location0, BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* ___bindings1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1FCDB504FF027AE6EBFCDEFDBBCF2F2F11222F8B (U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding[] Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::get_Bindings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* RendererMapping_get_Bindings_m98DB150B6A0DC72CEE360B2F1DBED477A71D0725_inline (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m011226701DF8C4BD736CDA1851A82F1A14246571 (Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_mD3A699301AFC095F51CAD86467B56C076F34FB07 (RuntimeObject* ___source0, Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2DC254DEF0E38E6533DC42E4FE735A995446BAC9 (Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEFB19C6918BFCF7702199988CE08C7B1608A8343_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m86B92D30B37703484B821716BF4C729674D73178 (Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mA5E922510B621D04BBDE505F36C8C5205524357A_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.ILookup`2<TKey,TElement> System.Linq.Enumerable::ToLookup<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline RuntimeObject* Enumerable_ToLookup_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_m6F7E7E89D08C1E6F4B1D28D2A5DF1F1FDEAE52FE (RuntimeObject* ___source0, Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* ___keySelector1, Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50*, Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01*, const RuntimeMethod*))Enumerable_ToLookup_TisRuntimeObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825_mB55D6AF7EF6ABE570E6EC276E1559D138148C424_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Void System.Func`2<System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCBCC07794CE9E015D1544F6C6CA1B356860E920C (Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m5BE29E53A07F3A9E71D5DC2F3B8051B2B6773E31_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m09451A141A03EB9CE1BC350AB32DD6BA40053181 (RuntimeObject* ___source0, Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m060C5DB498949B7C112AEED3AC66288DC7529B39_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE_gshared)(___source0, method);
}
// System.Int32 UnityEngine.Mesh::get_blendShapeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererData__ctor_m9099D2BC332960D1C6811BD02AFD090AF22FA682 (RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* ___rendererMapping1, const RuntimeMethod* method) ;
// System.Int32 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_ShapeIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334_inline (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B9C51B88543AB5FBAF6AA889626D44029AA43CA (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Binding_get_Location_m352BFCFB29A83035B4B32355F03DCC8A0C26E12C_inline (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* Binding_get_Config_m6FE9C6952CB547CBA830969739B7A7F3FDEFCAC7_inline (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m8795193A52924A8A087AD53960256453A5ED2506 (ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254* __this, int32_t ___item10, BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254*, int32_t, BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C*, const RuntimeMethod*))ValueTuple_2__ctor_m6B6C0A6A3D8BF4D7D400B729024BB5A32A3314ED_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Func`2<System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6AC7BD6FFEB5F7ED930291DEB9EB8F0CC6295C91 (Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mAB6B4F938751E17F68D3562B756ED947FC34EA00_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mC9675F67E9A03D93289DCB2E2CE9AAE8F29A4DE1 (RuntimeObject* ___source0, Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B*, const RuntimeMethod*))Enumerable_Select_TisValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mF4A04A0661BF398374989D5B6C8D0052A4280D67_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::.ctor()
inline void Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::.ctor()
inline void List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161 (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82*, const RuntimeMethod*))List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161_gshared)(__this, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache__ctor_mD667974AEEC16A5CC0E7D64EB811352A1EFFB953 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::Add(T)
inline void List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_inline (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* __this, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82*, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53, const RuntimeMethod*))List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, String_t* ___key0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Transform>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA1A846825C2320D180BD10D3D3C816A6ECE101E0 (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* __this, String_t* ___key0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*, String_t*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvaluatorPreset__ctor_mE90D8654E20329A0F61FF3D52E7A6422EBADDA59 (EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::SmoothClamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Impl_SmoothClamp_mFC222DEB60E74887EBC80D61CF714734D63FD962 (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* __this, float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>::.ctor()
inline void HashSet_1__ctor_mEE597D10B54FAB09E3FF5B5EA1BCBC42DB12E1EA (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5*, const RuntimeMethod*))HashSet_1__ctor_m927447BDEC82B53BEBBEF1C0C2B9BB080832F406_gshared)(__this, method);
}
// System.Void System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mC8CA5D229FDB741943A7B519F28DB4AA4B4FAC63 (ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690* __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_m1F28B3A58CF47AA73DF2773AE6DA8B729F28F3B6_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>::Contains(T)
inline bool HashSet_1_Contains_mF4F71C17991C0CBBD4651AE5A9C64C4557E32F83 (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* __this, ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5*, ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690, const RuntimeMethod*))HashSet_1_Contains_mFA90686372F9D9EC62A211FD0BE4FBA0F6B2FE8B_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.ValueTuple`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32>>::Add(T)
inline bool HashSet_1_Add_m8275D0CA5C2DC31FC6519044094C542BF8DBB270 (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* __this, ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690 ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5*, ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690, const RuntimeMethod*))HashSet_1_Add_mDDE7869B1E4E09A7CDC73F0171C3029F06FB1029_gshared)(__this, ___item0, method);
}
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceCaptureHost__ctor_mCCAE6AC41B4C7B418E45EA07965B9006D09E2B93 (FaceCaptureHost_t23D3ABE871908933DCEC94E462C1CA9EDE79BAAB* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_mF5806403AA24B19740F70AE4E7738E9E6BC566DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_U3C_ctorU3Eb__1_m18B560582DE8E2821A7D2B3A24DB912598F95681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55DA83BB186F1B711D8B618FC6760F360A8F7E49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADC20C4DAAE01D829FB427A6B1740C54E64C651);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* V_0 = NULL;
	U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* V_1 = NULL;
	{
		// : base(network, remote, stream)
		NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* L_0 = ___network0;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_1 = ___remote1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream2;
		CompanionAppHost__ctor_m32953258ACED3B231876CA04DE699CA83E5E3049(__this, L_0, L_1, L_2, NULL);
		U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* L_3 = (U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass1_0__ctor_mF98DD4E797E3101BF06283293FAF293B02BD4DFD(L_3, NULL);
		V_0 = L_3;
		// if (BinarySender<FaceSampleV1>.TryGet(m_Protocol,
		//     FaceMessages.ToServer.FacePoseSample_V1,
		//     out var senderV1))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_4 = ((CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1*)__this)->___m_Protocol_0;
		U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* L_5 = V_0;
		NullCheck(L_5);
		BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67** L_6 = (&L_5->___senderV1_0);
		bool L_7;
		L_7 = BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491(L_4, _stringLiteralEADC20C4DAAE01D829FB427A6B1740C54E64C651, L_6, BinarySender_1_TryGet_m8DAA2C69DBB34FF0AA88C049A939EF65378DB491_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// m_SendPoseImpl = sample => senderV1.Send((FaceSampleV1)sample);
		U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* L_8 = V_0;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_9 = (Action_1_t65E42951F2246B124818430106A38AF664E45C14*)il2cpp_codegen_object_new(Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_mF5806403AA24B19740F70AE4E7738E9E6BC566DB_RuntimeMethod_var), NULL);
		__this->___m_SendPoseImpl_31 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SendPoseImpl_31), (void*)L_9);
		return;
	}

IL_003a:
	{
		U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* L_10 = (U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		U3CU3Ec__DisplayClass1_1__ctor_m28328CA3F585F8D5A89A924582E3BCF03D6D79F9(L_10, NULL);
		V_1 = L_10;
		// else if (BinarySender<FaceSampleV0>.TryGet(m_Protocol,
		//     FaceMessages.ToServer.FacePoseSample_V0,
		//     out var senderV0))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_11 = ((CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1*)__this)->___m_Protocol_0;
		U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* L_12 = V_1;
		NullCheck(L_12);
		BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B** L_13 = (&L_12->___senderV0_0);
		bool L_14;
		L_14 = BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F(L_11, _stringLiteral55DA83BB186F1B711D8B618FC6760F360A8F7E49, L_13, BinarySender_1_TryGet_m0A099A16F49E858511F5C9A07D19E55151B8E07F_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		// m_SendPoseImpl = sample => senderV0.Send((FaceSampleV0)sample);
		U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* L_15 = V_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_16 = (Action_1_t65E42951F2246B124818430106A38AF664E45C14*)il2cpp_codegen_object_new(Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass1_1_U3C_ctorU3Eb__1_m18B560582DE8E2821A7D2B3A24DB912598F95681_RuntimeMethod_var), NULL);
		__this->___m_SendPoseImpl_31 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SendPoseImpl_31), (void*)L_16);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost::SendPose(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceCaptureHost_SendPose_mEB8AB21A32DC3E049B907F0F381A21F63C1E1F6C (FaceCaptureHost_t23D3ABE871908933DCEC94E462C1CA9EDE79BAAB* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) 
{
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* G_B2_0 = NULL;
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* G_B1_0 = NULL;
	{
		// m_SendPoseImpl?.Invoke(sample);
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_0 = __this->___m_SendPoseImpl_31;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_2 = ___sample0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m85237C700D57E8F9650D646DDB06AC917B28F7E8_inline(G_B2_0, L_2, NULL);
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF98DD4E797E3101BF06283293FAF293B02BD4DFD (U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_0::<.ctor>b__0(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_mF5806403AA24B19740F70AE4E7738E9E6BC566DB (U3CU3Ec__DisplayClass1_0_t8B9CC79BD9B22F869AFD6D7986DDF9CAB4BB0177* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SendPoseImpl = sample => senderV1.Send((FaceSampleV1)sample);
		BinarySender_1_t6423AEC4CD84538AAD808D09A28949C621577C67* L_0 = __this->___senderV1_0;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_1 = ___sample0;
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_2;
		L_2 = FaceSampleV1_op_Explicit_m79F64649976BF351B291D596E78D05B0E7E812C8(L_1, NULL);
		NullCheck(L_0);
		DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C(L_0, L_2, DataSender_1_Send_mFB248F899070EE60DF989B65D723798158DC424C_RuntimeMethod_var);
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_m28328CA3F585F8D5A89A924582E3BCF03D6D79F9 (U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceCaptureHost/<>c__DisplayClass1_1::<.ctor>b__1(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1_U3C_ctorU3Eb__1_m18B560582DE8E2821A7D2B3A24DB912598F95681 (U3CU3Ec__DisplayClass1_1_tB4ABE6B4EF939D442E0CC642E52CF037C3B66BF5* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SendPoseImpl = sample => senderV0.Send((FaceSampleV0)sample);
		BinarySender_1_t2D2D9CE1C0A9DF39F589F5E10A0FB0BB82CC6D3B* L_0 = __this->___senderV0_0;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_1 = ___sample0;
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_2;
		L_2 = FaceSampleV0_op_Explicit_m02764DB8A85909FEE2340D0C0E317EF222B05AA3(L_1, NULL);
		NullCheck(L_0);
		DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA(L_0, L_2, DataSender_1_Send_mC45E318F7E358985E7E28BFF4880173FDD6E91DA_RuntimeMethod_var);
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceClient::add_FacePoseSampleReceived(System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceClient_add_FacePoseSampleReceived_m2FE51DEBA8D1801847A565F8C600988DA12316C5 (FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11* __this, Action_1_t65E42951F2246B124818430106A38AF664E45C14* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* V_0 = NULL;
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* V_1 = NULL;
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* V_2 = NULL;
	{
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_0 = __this->___FacePoseSampleReceived_37;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_1 = V_0;
		V_1 = L_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_2 = V_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t65E42951F2246B124818430106A38AF664E45C14*)Castclass((RuntimeObject*)L_4, Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var));
		Action_1_t65E42951F2246B124818430106A38AF664E45C14** L_5 = (&__this->___FacePoseSampleReceived_37);
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_6 = V_2;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_7 = V_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t65E42951F2246B124818430106A38AF664E45C14*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_9 = V_0;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t65E42951F2246B124818430106A38AF664E45C14*)L_9) == ((RuntimeObject*)(Action_1_t65E42951F2246B124818430106A38AF664E45C14*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceClient::remove_FacePoseSampleReceived(System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceClient_remove_FacePoseSampleReceived_m95B23B1D0114C1B1654508E5A6342B40524951B9 (FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11* __this, Action_1_t65E42951F2246B124818430106A38AF664E45C14* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* V_0 = NULL;
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* V_1 = NULL;
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* V_2 = NULL;
	{
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_0 = __this->___FacePoseSampleReceived_37;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_1 = V_0;
		V_1 = L_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_2 = V_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t65E42951F2246B124818430106A38AF664E45C14*)Castclass((RuntimeObject*)L_4, Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var));
		Action_1_t65E42951F2246B124818430106A38AF664E45C14** L_5 = (&__this->___FacePoseSampleReceived_37);
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_6 = V_2;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_7 = V_1;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t65E42951F2246B124818430106A38AF664E45C14*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_9 = V_0;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t65E42951F2246B124818430106A38AF664E45C14*)L_9) == ((RuntimeObject*)(Action_1_t65E42951F2246B124818430106A38AF664E45C14*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceClient::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ClientInitialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceClient__ctor_m11943436546CA475909F21F2BA96D4309E25D04E (FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceClient_U3C_ctorU3Eb__4_0_m9F261BF17BC4A91741F8716ADADD4D4DCFBF9635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_m79B44F091568BB61F1C0D238BE3FE2023EDFBF7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADC20C4DAAE01D829FB427A6B1740C54E64C651);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(network, remote, data)
		NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* L_0 = ___network0;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_1 = ___remote1;
		ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_2 = ___data2;
		CompanionAppClient__ctor_mC5554FF4D6631B382711C5ED7F2391E1344F0752(__this, L_0, L_1, L_2, NULL);
		// m_Protocol.Add(new BinaryReceiver<FaceSampleV1>(FaceMessages.ToServer.FacePoseSample_V1,
		//     ChannelType.UnreliableUnordered)).AddHandler(pose =>
		//     {
		//         FacePoseSampleReceived?.Invoke((FaceSample)pose);
		//     });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_3 = ((CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997*)__this)->___m_Protocol_2;
		BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* L_4 = (BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420*)il2cpp_codegen_object_new(BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272(L_4, _stringLiteralEADC20C4DAAE01D829FB427A6B1740C54E64C651, ((int32_t)32), 1, BinaryReceiver_1__ctor_mF6A2464C7523E9C8434E58D229B159A163740272_RuntimeMethod_var);
		NullCheck(L_3);
		BinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420* L_5;
		L_5 = Protocol_Add_TisBinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_m79B44F091568BB61F1C0D238BE3FE2023EDFBF7D(L_3, L_4, Protocol_Add_TisBinaryReceiver_1_t9B8E8AA4A02274CF7EA139EB5685F3EDA7AD2420_m79B44F091568BB61F1C0D238BE3FE2023EDFBF7D_RuntimeMethod_var);
		Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0* L_6 = (Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0*)il2cpp_codegen_object_new(Action_1_t4DC2BFC9D282A696E32987111541A902AFCB17F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mFC68C22D34E1767B55279D221C903A8D3A0E18F0(L_6, __this, (intptr_t)((void*)FaceClient_U3C_ctorU3Eb__4_0_m9F261BF17BC4A91741F8716ADADD4D4DCFBF9635_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5(L_5, L_6, DataReceiver_1_AddHandler_mBB758D7B271DC1C48A74A9CCE62617450D7D02D5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.FaceClient::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceClient_ToString_mB34E2100EB272480D8BD76C037F15CAF3F24ED28 (FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD22E388E543E76A7249903B370AA938384CA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => k_ClientType;
		return _stringLiteralB9AD22E388E543E76A7249903B370AA938384CA4;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceClient::<.ctor>b__4_0(Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceClient_U3C_ctorU3Eb__4_0_m9F261BF17BC4A91741F8716ADADD4D4DCFBF9635 (FaceClient_tF22D851C5CEC1015565BF71ED697FB81F42DBF11* __this, FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 ___pose0, const RuntimeMethod* method) 
{
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* G_B2_0 = NULL;
	Action_1_t65E42951F2246B124818430106A38AF664E45C14* G_B1_0 = NULL;
	{
		// FacePoseSampleReceived?.Invoke((FaceSample)pose);
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_0 = __this->___FacePoseSampleReceived_37;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_2 = ___pose0;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_3;
		L_3 = FaceSampleV1_op_Explicit_m0A2C976F89C91D70142F318E18AAB387EB3DFC96(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m85237C700D57E8F9650D646DDB06AC917B28F7E8_inline(G_B2_0, L_3, NULL);
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape[] Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::get_Shapes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* FaceBlendShapePose_get_Shapes_mC820E40260ACCA58DF902558C25C93F3312E28C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FaceBlendShape[] Shapes { get; } = Enum.GetValues(typeof(FaceBlendShape))
		il2cpp_codegen_runtime_class_init_inline(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_0 = ((FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_StaticFields*)il2cpp_codegen_static_fields_for(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var))->___U3CShapesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapePose_get_Item_mAB5ECD2860FE827BC96D10931AD9B684B8867278 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => GetValue(index);
		int32_t L_0 = ___index0;
		float L_1;
		L_1 = FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceBlendShapePose_get_Item_mAB5ECD2860FE827BC96D10931AD9B684B8867278_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceBlendShapePose_get_Item_mAB5ECD2860FE827BC96D10931AD9B684B8867278(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_set_Item_m0D42B12DC73876AFA104FAC6499CD48A98E60099 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	{
		// set => SetValue(index, value);
		int32_t L_0 = ___index0;
		float L_1 = ___value1;
		FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void FaceBlendShapePose_set_Item_m0D42B12DC73876AFA104FAC6499CD48A98E60099_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	FaceBlendShapePose_set_Item_m0D42B12DC73876AFA104FAC6499CD48A98E60099(_thisAdjusted, ___index0, ___value1, method);
}
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::GetValue(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___location0, const RuntimeMethod* method) 
{
	{
		// public float GetValue(FaceBlendShape location) => GetValue((int)location);
		int32_t L_0 = ___location0;
		float L_1;
		L_1 = FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77_AdjustorThunk (RuntimeObject* __this, int32_t ___location0, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(_thisAdjusted, ___location0, method);
	return _returnValue;
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::SetValue(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_SetValue_mC59446F3167C81A94DA752622191517AAA271F87 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___location0, float ___value1, const RuntimeMethod* method) 
{
	{
		// public void SetValue(FaceBlendShape location, float value) => SetValue((int)location, value);
		int32_t L_0 = ___location0;
		float L_1 = ___value1;
		FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void FaceBlendShapePose_SetValue_mC59446F3167C81A94DA752622191517AAA271F87_AdjustorThunk (RuntimeObject* __this, int32_t ___location0, float ___value1, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	FaceBlendShapePose_SetValue_mC59446F3167C81A94DA752622191517AAA271F87(_thisAdjusted, ___location0, ___value1, method);
}
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_00db;
			}
			case 1:
			{
				goto IL_00e2;
			}
			case 2:
			{
				goto IL_00e9;
			}
			case 3:
			{
				goto IL_00f0;
			}
			case 4:
			{
				goto IL_00f7;
			}
			case 5:
			{
				goto IL_00fe;
			}
			case 6:
			{
				goto IL_0105;
			}
			case 7:
			{
				goto IL_010c;
			}
			case 8:
			{
				goto IL_0113;
			}
			case 9:
			{
				goto IL_011a;
			}
			case 10:
			{
				goto IL_0121;
			}
			case 11:
			{
				goto IL_0128;
			}
			case 12:
			{
				goto IL_012f;
			}
			case 13:
			{
				goto IL_0136;
			}
			case 14:
			{
				goto IL_013d;
			}
			case 15:
			{
				goto IL_0144;
			}
			case 16:
			{
				goto IL_014b;
			}
			case 17:
			{
				goto IL_0152;
			}
			case 18:
			{
				goto IL_0159;
			}
			case 19:
			{
				goto IL_0160;
			}
			case 20:
			{
				goto IL_0167;
			}
			case 21:
			{
				goto IL_016e;
			}
			case 22:
			{
				goto IL_0175;
			}
			case 23:
			{
				goto IL_017c;
			}
			case 24:
			{
				goto IL_0183;
			}
			case 25:
			{
				goto IL_018a;
			}
			case 26:
			{
				goto IL_0191;
			}
			case 27:
			{
				goto IL_0198;
			}
			case 28:
			{
				goto IL_019f;
			}
			case 29:
			{
				goto IL_01a6;
			}
			case 30:
			{
				goto IL_01ad;
			}
			case 31:
			{
				goto IL_01b4;
			}
			case 32:
			{
				goto IL_01bb;
			}
			case 33:
			{
				goto IL_01c2;
			}
			case 34:
			{
				goto IL_01c9;
			}
			case 35:
			{
				goto IL_01d0;
			}
			case 36:
			{
				goto IL_01d7;
			}
			case 37:
			{
				goto IL_01de;
			}
			case 38:
			{
				goto IL_01e5;
			}
			case 39:
			{
				goto IL_01ec;
			}
			case 40:
			{
				goto IL_01f3;
			}
			case 41:
			{
				goto IL_01fa;
			}
			case 42:
			{
				goto IL_0201;
			}
			case 43:
			{
				goto IL_0208;
			}
			case 44:
			{
				goto IL_020f;
			}
			case 45:
			{
				goto IL_0216;
			}
			case 46:
			{
				goto IL_021d;
			}
			case 47:
			{
				goto IL_0224;
			}
			case 48:
			{
				goto IL_022b;
			}
			case 49:
			{
				goto IL_0232;
			}
			case 50:
			{
				goto IL_0239;
			}
			case 51:
			{
				goto IL_0240;
			}
		}
	}
	{
		goto IL_0247;
	}

IL_00db:
	{
		// case 0: return BrowDownLeft;
		float L_1 = __this->___BrowDownLeft_2;
		return L_1;
	}

IL_00e2:
	{
		// case 1: return BrowDownRight;
		float L_2 = __this->___BrowDownRight_3;
		return L_2;
	}

IL_00e9:
	{
		// case 2: return BrowInnerUp;
		float L_3 = __this->___BrowInnerUp_4;
		return L_3;
	}

IL_00f0:
	{
		// case 3: return BrowOuterUpLeft;
		float L_4 = __this->___BrowOuterUpLeft_5;
		return L_4;
	}

IL_00f7:
	{
		// case 4: return BrowOuterUpRight;
		float L_5 = __this->___BrowOuterUpRight_6;
		return L_5;
	}

IL_00fe:
	{
		// case 5: return CheekPuff;
		float L_6 = __this->___CheekPuff_7;
		return L_6;
	}

IL_0105:
	{
		// case 6: return CheekSquintLeft;
		float L_7 = __this->___CheekSquintLeft_8;
		return L_7;
	}

IL_010c:
	{
		// case 7: return CheekSquintRight;
		float L_8 = __this->___CheekSquintRight_9;
		return L_8;
	}

IL_0113:
	{
		// case 8: return EyeBlinkLeft;
		float L_9 = __this->___EyeBlinkLeft_10;
		return L_9;
	}

IL_011a:
	{
		// case 9: return EyeBlinkRight;
		float L_10 = __this->___EyeBlinkRight_11;
		return L_10;
	}

IL_0121:
	{
		// case 10: return EyeLookDownLeft;
		float L_11 = __this->___EyeLookDownLeft_12;
		return L_11;
	}

IL_0128:
	{
		// case 11: return EyeLookDownRight;
		float L_12 = __this->___EyeLookDownRight_13;
		return L_12;
	}

IL_012f:
	{
		// case 12: return EyeLookInLeft;
		float L_13 = __this->___EyeLookInLeft_14;
		return L_13;
	}

IL_0136:
	{
		// case 13: return EyeLookInRight;
		float L_14 = __this->___EyeLookInRight_15;
		return L_14;
	}

IL_013d:
	{
		// case 14: return EyeLookOutLeft;
		float L_15 = __this->___EyeLookOutLeft_16;
		return L_15;
	}

IL_0144:
	{
		// case 15: return EyeLookOutRight;
		float L_16 = __this->___EyeLookOutRight_17;
		return L_16;
	}

IL_014b:
	{
		// case 16: return EyeLookUpLeft;
		float L_17 = __this->___EyeLookUpLeft_18;
		return L_17;
	}

IL_0152:
	{
		// case 17: return EyeLookUpRight;
		float L_18 = __this->___EyeLookUpRight_19;
		return L_18;
	}

IL_0159:
	{
		// case 18: return EyeSquintLeft;
		float L_19 = __this->___EyeSquintLeft_20;
		return L_19;
	}

IL_0160:
	{
		// case 19: return EyeSquintRight;
		float L_20 = __this->___EyeSquintRight_21;
		return L_20;
	}

IL_0167:
	{
		// case 20: return EyeWideLeft;
		float L_21 = __this->___EyeWideLeft_22;
		return L_21;
	}

IL_016e:
	{
		// case 21: return EyeWideRight;
		float L_22 = __this->___EyeWideRight_23;
		return L_22;
	}

IL_0175:
	{
		// case 22: return JawForward;
		float L_23 = __this->___JawForward_24;
		return L_23;
	}

IL_017c:
	{
		// case 23: return JawLeft;
		float L_24 = __this->___JawLeft_25;
		return L_24;
	}

IL_0183:
	{
		// case 24: return JawOpen;
		float L_25 = __this->___JawOpen_26;
		return L_25;
	}

IL_018a:
	{
		// case 25: return JawRight;
		float L_26 = __this->___JawRight_27;
		return L_26;
	}

IL_0191:
	{
		// case 26: return MouthClose;
		float L_27 = __this->___MouthClose_28;
		return L_27;
	}

IL_0198:
	{
		// case 27: return MouthDimpleLeft;
		float L_28 = __this->___MouthDimpleLeft_29;
		return L_28;
	}

IL_019f:
	{
		// case 28: return MouthDimpleRight;
		float L_29 = __this->___MouthDimpleRight_30;
		return L_29;
	}

IL_01a6:
	{
		// case 29: return MouthFrownLeft;
		float L_30 = __this->___MouthFrownLeft_31;
		return L_30;
	}

IL_01ad:
	{
		// case 30: return MouthFrownRight;
		float L_31 = __this->___MouthFrownRight_32;
		return L_31;
	}

IL_01b4:
	{
		// case 31: return MouthFunnel;
		float L_32 = __this->___MouthFunnel_33;
		return L_32;
	}

IL_01bb:
	{
		// case 32: return MouthLeft;
		float L_33 = __this->___MouthLeft_34;
		return L_33;
	}

IL_01c2:
	{
		// case 33: return MouthLowerDownLeft;
		float L_34 = __this->___MouthLowerDownLeft_35;
		return L_34;
	}

IL_01c9:
	{
		// case 34: return MouthLowerDownRight;
		float L_35 = __this->___MouthLowerDownRight_36;
		return L_35;
	}

IL_01d0:
	{
		// case 35: return MouthPressLeft;
		float L_36 = __this->___MouthPressLeft_37;
		return L_36;
	}

IL_01d7:
	{
		// case 36: return MouthPressRight;
		float L_37 = __this->___MouthPressRight_38;
		return L_37;
	}

IL_01de:
	{
		// case 37: return MouthPucker;
		float L_38 = __this->___MouthPucker_39;
		return L_38;
	}

IL_01e5:
	{
		// case 38: return MouthRight;
		float L_39 = __this->___MouthRight_40;
		return L_39;
	}

IL_01ec:
	{
		// case 39: return MouthRollLower;
		float L_40 = __this->___MouthRollLower_41;
		return L_40;
	}

IL_01f3:
	{
		// case 40: return MouthRollUpper;
		float L_41 = __this->___MouthRollUpper_42;
		return L_41;
	}

IL_01fa:
	{
		// case 41: return MouthShrugLower;
		float L_42 = __this->___MouthShrugLower_43;
		return L_42;
	}

IL_0201:
	{
		// case 42: return MouthShrugUpper;
		float L_43 = __this->___MouthShrugUpper_44;
		return L_43;
	}

IL_0208:
	{
		// case 43: return MouthSmileLeft;
		float L_44 = __this->___MouthSmileLeft_45;
		return L_44;
	}

IL_020f:
	{
		// case 44: return MouthSmileRight;
		float L_45 = __this->___MouthSmileRight_46;
		return L_45;
	}

IL_0216:
	{
		// case 45: return MouthStretchLeft;
		float L_46 = __this->___MouthStretchLeft_47;
		return L_46;
	}

IL_021d:
	{
		// case 46: return MouthStretchRight;
		float L_47 = __this->___MouthStretchRight_48;
		return L_47;
	}

IL_0224:
	{
		// case 47: return MouthUpperUpLeft;
		float L_48 = __this->___MouthUpperUpLeft_49;
		return L_48;
	}

IL_022b:
	{
		// case 48: return MouthUpperUpRight;
		float L_49 = __this->___MouthUpperUpRight_50;
		return L_49;
	}

IL_0232:
	{
		// case 49: return NoseSneerLeft;
		float L_50 = __this->___NoseSneerLeft_51;
		return L_50;
	}

IL_0239:
	{
		// case 50: return NoseSneerRight;
		float L_51 = __this->___NoseSneerRight_52;
		return L_51;
	}

IL_0240:
	{
		// case 51: return TongueOut;
		float L_52 = __this->___TongueOut_53;
		return L_52;
	}

IL_0247:
	{
		// throw new IndexOutOfRangeException($"Blend shape index {index} out of valid range [0, {ShapeCount}].");
		int32_t L_53 = ___index0;
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_54);
		int32_t L_56 = ((int32_t)52);
		RuntimeObject* L_57 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_56);
		String_t* L_58;
		L_58 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7FC23073E6F9F246CD49477EA3E728E57FC93F64)), L_55, L_57, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_59 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_59, L_58, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  float FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	float _returnValue;
	_returnValue = FaceBlendShapePose_GetValue_mB4B10CC9D84F4DAE756FFC64C02EF5F20EC029CE(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::SetValue(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_00db;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_00eb;
			}
			case 3:
			{
				goto IL_00f3;
			}
			case 4:
			{
				goto IL_00fb;
			}
			case 5:
			{
				goto IL_0103;
			}
			case 6:
			{
				goto IL_010b;
			}
			case 7:
			{
				goto IL_0113;
			}
			case 8:
			{
				goto IL_011b;
			}
			case 9:
			{
				goto IL_0123;
			}
			case 10:
			{
				goto IL_012b;
			}
			case 11:
			{
				goto IL_0133;
			}
			case 12:
			{
				goto IL_013b;
			}
			case 13:
			{
				goto IL_0143;
			}
			case 14:
			{
				goto IL_014b;
			}
			case 15:
			{
				goto IL_0153;
			}
			case 16:
			{
				goto IL_015b;
			}
			case 17:
			{
				goto IL_0163;
			}
			case 18:
			{
				goto IL_016b;
			}
			case 19:
			{
				goto IL_0173;
			}
			case 20:
			{
				goto IL_017b;
			}
			case 21:
			{
				goto IL_0183;
			}
			case 22:
			{
				goto IL_018b;
			}
			case 23:
			{
				goto IL_0193;
			}
			case 24:
			{
				goto IL_019b;
			}
			case 25:
			{
				goto IL_01a3;
			}
			case 26:
			{
				goto IL_01ab;
			}
			case 27:
			{
				goto IL_01b3;
			}
			case 28:
			{
				goto IL_01bb;
			}
			case 29:
			{
				goto IL_01c3;
			}
			case 30:
			{
				goto IL_01cb;
			}
			case 31:
			{
				goto IL_01d3;
			}
			case 32:
			{
				goto IL_01db;
			}
			case 33:
			{
				goto IL_01e3;
			}
			case 34:
			{
				goto IL_01eb;
			}
			case 35:
			{
				goto IL_01f3;
			}
			case 36:
			{
				goto IL_01fb;
			}
			case 37:
			{
				goto IL_0203;
			}
			case 38:
			{
				goto IL_020b;
			}
			case 39:
			{
				goto IL_0213;
			}
			case 40:
			{
				goto IL_021b;
			}
			case 41:
			{
				goto IL_0223;
			}
			case 42:
			{
				goto IL_022b;
			}
			case 43:
			{
				goto IL_0233;
			}
			case 44:
			{
				goto IL_023b;
			}
			case 45:
			{
				goto IL_0243;
			}
			case 46:
			{
				goto IL_024b;
			}
			case 47:
			{
				goto IL_0253;
			}
			case 48:
			{
				goto IL_025b;
			}
			case 49:
			{
				goto IL_0263;
			}
			case 50:
			{
				goto IL_026b;
			}
			case 51:
			{
				goto IL_0273;
			}
		}
	}
	{
		goto IL_027b;
	}

IL_00db:
	{
		// case 0: BrowDownLeft = value; return;
		float L_1 = ___value1;
		__this->___BrowDownLeft_2 = L_1;
		// case 0: BrowDownLeft = value; return;
		return;
	}

IL_00e3:
	{
		// case 1: BrowDownRight = value; return;
		float L_2 = ___value1;
		__this->___BrowDownRight_3 = L_2;
		// case 1: BrowDownRight = value; return;
		return;
	}

IL_00eb:
	{
		// case 2: BrowInnerUp = value; return;
		float L_3 = ___value1;
		__this->___BrowInnerUp_4 = L_3;
		// case 2: BrowInnerUp = value; return;
		return;
	}

IL_00f3:
	{
		// case 3: BrowOuterUpLeft = value; return;
		float L_4 = ___value1;
		__this->___BrowOuterUpLeft_5 = L_4;
		// case 3: BrowOuterUpLeft = value; return;
		return;
	}

IL_00fb:
	{
		// case 4: BrowOuterUpRight = value; return;
		float L_5 = ___value1;
		__this->___BrowOuterUpRight_6 = L_5;
		// case 4: BrowOuterUpRight = value; return;
		return;
	}

IL_0103:
	{
		// case 5: CheekPuff = value; return;
		float L_6 = ___value1;
		__this->___CheekPuff_7 = L_6;
		// case 5: CheekPuff = value; return;
		return;
	}

IL_010b:
	{
		// case 6: CheekSquintLeft = value; return;
		float L_7 = ___value1;
		__this->___CheekSquintLeft_8 = L_7;
		// case 6: CheekSquintLeft = value; return;
		return;
	}

IL_0113:
	{
		// case 7: CheekSquintRight = value; return;
		float L_8 = ___value1;
		__this->___CheekSquintRight_9 = L_8;
		// case 7: CheekSquintRight = value; return;
		return;
	}

IL_011b:
	{
		// case 8: EyeBlinkLeft = value; return;
		float L_9 = ___value1;
		__this->___EyeBlinkLeft_10 = L_9;
		// case 8: EyeBlinkLeft = value; return;
		return;
	}

IL_0123:
	{
		// case 9: EyeBlinkRight = value; return;
		float L_10 = ___value1;
		__this->___EyeBlinkRight_11 = L_10;
		// case 9: EyeBlinkRight = value; return;
		return;
	}

IL_012b:
	{
		// case 10: EyeLookDownLeft = value; return;
		float L_11 = ___value1;
		__this->___EyeLookDownLeft_12 = L_11;
		// case 10: EyeLookDownLeft = value; return;
		return;
	}

IL_0133:
	{
		// case 11: EyeLookDownRight = value; return;
		float L_12 = ___value1;
		__this->___EyeLookDownRight_13 = L_12;
		// case 11: EyeLookDownRight = value; return;
		return;
	}

IL_013b:
	{
		// case 12: EyeLookInLeft = value; return;
		float L_13 = ___value1;
		__this->___EyeLookInLeft_14 = L_13;
		// case 12: EyeLookInLeft = value; return;
		return;
	}

IL_0143:
	{
		// case 13: EyeLookInRight = value; return;
		float L_14 = ___value1;
		__this->___EyeLookInRight_15 = L_14;
		// case 13: EyeLookInRight = value; return;
		return;
	}

IL_014b:
	{
		// case 14: EyeLookOutLeft = value; return;
		float L_15 = ___value1;
		__this->___EyeLookOutLeft_16 = L_15;
		// case 14: EyeLookOutLeft = value; return;
		return;
	}

IL_0153:
	{
		// case 15: EyeLookOutRight = value; return;
		float L_16 = ___value1;
		__this->___EyeLookOutRight_17 = L_16;
		// case 15: EyeLookOutRight = value; return;
		return;
	}

IL_015b:
	{
		// case 16: EyeLookUpLeft = value; return;
		float L_17 = ___value1;
		__this->___EyeLookUpLeft_18 = L_17;
		// case 16: EyeLookUpLeft = value; return;
		return;
	}

IL_0163:
	{
		// case 17: EyeLookUpRight = value; return;
		float L_18 = ___value1;
		__this->___EyeLookUpRight_19 = L_18;
		// case 17: EyeLookUpRight = value; return;
		return;
	}

IL_016b:
	{
		// case 18: EyeSquintLeft = value; return;
		float L_19 = ___value1;
		__this->___EyeSquintLeft_20 = L_19;
		// case 18: EyeSquintLeft = value; return;
		return;
	}

IL_0173:
	{
		// case 19: EyeSquintRight = value; return;
		float L_20 = ___value1;
		__this->___EyeSquintRight_21 = L_20;
		// case 19: EyeSquintRight = value; return;
		return;
	}

IL_017b:
	{
		// case 20: EyeWideLeft = value; return;
		float L_21 = ___value1;
		__this->___EyeWideLeft_22 = L_21;
		// case 20: EyeWideLeft = value; return;
		return;
	}

IL_0183:
	{
		// case 21: EyeWideRight = value; return;
		float L_22 = ___value1;
		__this->___EyeWideRight_23 = L_22;
		// case 21: EyeWideRight = value; return;
		return;
	}

IL_018b:
	{
		// case 22: JawForward = value; return;
		float L_23 = ___value1;
		__this->___JawForward_24 = L_23;
		// case 22: JawForward = value; return;
		return;
	}

IL_0193:
	{
		// case 23: JawLeft = value; return;
		float L_24 = ___value1;
		__this->___JawLeft_25 = L_24;
		// case 23: JawLeft = value; return;
		return;
	}

IL_019b:
	{
		// case 24: JawOpen = value; return;
		float L_25 = ___value1;
		__this->___JawOpen_26 = L_25;
		// case 24: JawOpen = value; return;
		return;
	}

IL_01a3:
	{
		// case 25: JawRight = value; return;
		float L_26 = ___value1;
		__this->___JawRight_27 = L_26;
		// case 25: JawRight = value; return;
		return;
	}

IL_01ab:
	{
		// case 26: MouthClose = value; return;
		float L_27 = ___value1;
		__this->___MouthClose_28 = L_27;
		// case 26: MouthClose = value; return;
		return;
	}

IL_01b3:
	{
		// case 27: MouthDimpleLeft = value; return;
		float L_28 = ___value1;
		__this->___MouthDimpleLeft_29 = L_28;
		// case 27: MouthDimpleLeft = value; return;
		return;
	}

IL_01bb:
	{
		// case 28: MouthDimpleRight = value; return;
		float L_29 = ___value1;
		__this->___MouthDimpleRight_30 = L_29;
		// case 28: MouthDimpleRight = value; return;
		return;
	}

IL_01c3:
	{
		// case 29: MouthFrownLeft = value; return;
		float L_30 = ___value1;
		__this->___MouthFrownLeft_31 = L_30;
		// case 29: MouthFrownLeft = value; return;
		return;
	}

IL_01cb:
	{
		// case 30: MouthFrownRight = value; return;
		float L_31 = ___value1;
		__this->___MouthFrownRight_32 = L_31;
		// case 30: MouthFrownRight = value; return;
		return;
	}

IL_01d3:
	{
		// case 31: MouthFunnel = value; return;
		float L_32 = ___value1;
		__this->___MouthFunnel_33 = L_32;
		// case 31: MouthFunnel = value; return;
		return;
	}

IL_01db:
	{
		// case 32: MouthLeft = value; return;
		float L_33 = ___value1;
		__this->___MouthLeft_34 = L_33;
		// case 32: MouthLeft = value; return;
		return;
	}

IL_01e3:
	{
		// case 33: MouthLowerDownLeft = value; return;
		float L_34 = ___value1;
		__this->___MouthLowerDownLeft_35 = L_34;
		// case 33: MouthLowerDownLeft = value; return;
		return;
	}

IL_01eb:
	{
		// case 34: MouthLowerDownRight = value; return;
		float L_35 = ___value1;
		__this->___MouthLowerDownRight_36 = L_35;
		// case 34: MouthLowerDownRight = value; return;
		return;
	}

IL_01f3:
	{
		// case 35: MouthPressLeft = value; return;
		float L_36 = ___value1;
		__this->___MouthPressLeft_37 = L_36;
		// case 35: MouthPressLeft = value; return;
		return;
	}

IL_01fb:
	{
		// case 36: MouthPressRight = value; return;
		float L_37 = ___value1;
		__this->___MouthPressRight_38 = L_37;
		// case 36: MouthPressRight = value; return;
		return;
	}

IL_0203:
	{
		// case 37: MouthPucker = value; return;
		float L_38 = ___value1;
		__this->___MouthPucker_39 = L_38;
		// case 37: MouthPucker = value; return;
		return;
	}

IL_020b:
	{
		// case 38: MouthRight = value; return;
		float L_39 = ___value1;
		__this->___MouthRight_40 = L_39;
		// case 38: MouthRight = value; return;
		return;
	}

IL_0213:
	{
		// case 39: MouthRollLower = value; return;
		float L_40 = ___value1;
		__this->___MouthRollLower_41 = L_40;
		// case 39: MouthRollLower = value; return;
		return;
	}

IL_021b:
	{
		// case 40: MouthRollUpper = value; return;
		float L_41 = ___value1;
		__this->___MouthRollUpper_42 = L_41;
		// case 40: MouthRollUpper = value; return;
		return;
	}

IL_0223:
	{
		// case 41: MouthShrugLower = value; return;
		float L_42 = ___value1;
		__this->___MouthShrugLower_43 = L_42;
		// case 41: MouthShrugLower = value; return;
		return;
	}

IL_022b:
	{
		// case 42: MouthShrugUpper = value; return;
		float L_43 = ___value1;
		__this->___MouthShrugUpper_44 = L_43;
		// case 42: MouthShrugUpper = value; return;
		return;
	}

IL_0233:
	{
		// case 43: MouthSmileLeft = value; return;
		float L_44 = ___value1;
		__this->___MouthSmileLeft_45 = L_44;
		// case 43: MouthSmileLeft = value; return;
		return;
	}

IL_023b:
	{
		// case 44: MouthSmileRight = value; return;
		float L_45 = ___value1;
		__this->___MouthSmileRight_46 = L_45;
		// case 44: MouthSmileRight = value; return;
		return;
	}

IL_0243:
	{
		// case 45: MouthStretchLeft = value; return;
		float L_46 = ___value1;
		__this->___MouthStretchLeft_47 = L_46;
		// case 45: MouthStretchLeft = value; return;
		return;
	}

IL_024b:
	{
		// case 46: MouthStretchRight = value; return;
		float L_47 = ___value1;
		__this->___MouthStretchRight_48 = L_47;
		// case 46: MouthStretchRight = value; return;
		return;
	}

IL_0253:
	{
		// case 47: MouthUpperUpLeft = value; return;
		float L_48 = ___value1;
		__this->___MouthUpperUpLeft_49 = L_48;
		// case 47: MouthUpperUpLeft = value; return;
		return;
	}

IL_025b:
	{
		// case 48: MouthUpperUpRight = value; return;
		float L_49 = ___value1;
		__this->___MouthUpperUpRight_50 = L_49;
		// case 48: MouthUpperUpRight = value; return;
		return;
	}

IL_0263:
	{
		// case 49: NoseSneerLeft = value; return;
		float L_50 = ___value1;
		__this->___NoseSneerLeft_51 = L_50;
		// case 49: NoseSneerLeft = value; return;
		return;
	}

IL_026b:
	{
		// case 50: NoseSneerRight = value; return;
		float L_51 = ___value1;
		__this->___NoseSneerRight_52 = L_51;
		// case 50: NoseSneerRight = value; return;
		return;
	}

IL_0273:
	{
		// case 51: TongueOut = value; return;
		float L_52 = ___value1;
		__this->___TongueOut_53 = L_52;
		// case 51: TongueOut = value; return;
		return;
	}

IL_027b:
	{
		// throw new IndexOutOfRangeException($"Blend shape index {index} out of valid range [0, {ShapeCount}].");
		int32_t L_53 = ___index0;
		int32_t L_54 = L_53;
		RuntimeObject* L_55 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_54);
		int32_t L_56 = ((int32_t)52);
		RuntimeObject* L_57 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_56);
		String_t* L_58;
		L_58 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7FC23073E6F9F246CD49477EA3E728E57FC93F64)), L_55, L_57, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_59 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_59, L_58, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	FaceBlendShapePose_SetValue_m9F9D6196EE085EDEF13623F8D488D43354D8765F(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose_FlipHorizontally_m5D6DF62DB4EF323DAE1ADB27345397226C53D595 (FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	float V_28 = 0.0f;
	float V_29 = 0.0f;
	float V_30 = 0.0f;
	float V_31 = 0.0f;
	float V_32 = 0.0f;
	float V_33 = 0.0f;
	float V_34 = 0.0f;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	float V_37 = 0.0f;
	float V_38 = 0.0f;
	float V_39 = 0.0f;
	{
		// var tempBrowDownLeft = BrowDownLeft;
		float L_0 = __this->___BrowDownLeft_2;
		V_0 = L_0;
		// var tempBrowDownRight = BrowDownRight;
		float L_1 = __this->___BrowDownRight_3;
		V_1 = L_1;
		// var tempBrowOuterUpLeft = BrowOuterUpLeft;
		float L_2 = __this->___BrowOuterUpLeft_5;
		V_2 = L_2;
		// var tempBrowOuterUpRight = BrowOuterUpRight;
		float L_3 = __this->___BrowOuterUpRight_6;
		V_3 = L_3;
		// var tempCheekSquintLeft = CheekSquintLeft;
		float L_4 = __this->___CheekSquintLeft_8;
		V_4 = L_4;
		// var tempCheekSquintRight = CheekSquintRight;
		float L_5 = __this->___CheekSquintRight_9;
		V_5 = L_5;
		// var tempEyeBlinkLeft = EyeBlinkLeft;
		float L_6 = __this->___EyeBlinkLeft_10;
		V_6 = L_6;
		// var tempEyeBlinkRight = EyeBlinkRight;
		float L_7 = __this->___EyeBlinkRight_11;
		V_7 = L_7;
		// var tempEyeLookDownLeft = EyeLookDownLeft;
		float L_8 = __this->___EyeLookDownLeft_12;
		V_8 = L_8;
		// var tempEyeLookDownRight = EyeLookDownRight;
		float L_9 = __this->___EyeLookDownRight_13;
		V_9 = L_9;
		// var tempEyeLookInLeft = EyeLookInLeft;
		float L_10 = __this->___EyeLookInLeft_14;
		V_10 = L_10;
		// var tempEyeLookInRight = EyeLookInRight;
		float L_11 = __this->___EyeLookInRight_15;
		V_11 = L_11;
		// var tempEyeLookOutLeft = EyeLookOutLeft;
		float L_12 = __this->___EyeLookOutLeft_16;
		V_12 = L_12;
		// var tempEyeLookOutRight = EyeLookOutRight;
		float L_13 = __this->___EyeLookOutRight_17;
		V_13 = L_13;
		// var tempEyeLookUpLeft = EyeLookUpLeft;
		float L_14 = __this->___EyeLookUpLeft_18;
		V_14 = L_14;
		// var tempEyeLookUpRight = EyeLookUpRight;
		float L_15 = __this->___EyeLookUpRight_19;
		V_15 = L_15;
		// var tempEyeSquintLeft = EyeSquintLeft;
		float L_16 = __this->___EyeSquintLeft_20;
		V_16 = L_16;
		// var tempEyeSquintRight = EyeSquintRight;
		float L_17 = __this->___EyeSquintRight_21;
		V_17 = L_17;
		// var tempEyeWideLeft = EyeWideLeft;
		float L_18 = __this->___EyeWideLeft_22;
		V_18 = L_18;
		// var tempEyeWideRight = EyeWideRight;
		float L_19 = __this->___EyeWideRight_23;
		V_19 = L_19;
		// var tempJawLeft = JawLeft;
		float L_20 = __this->___JawLeft_25;
		V_20 = L_20;
		// var tempJawRight = JawRight;
		float L_21 = __this->___JawRight_27;
		V_21 = L_21;
		// var tempMouthDimpleLeft = MouthDimpleLeft;
		float L_22 = __this->___MouthDimpleLeft_29;
		V_22 = L_22;
		// var tempMouthDimpleRight = MouthDimpleRight;
		float L_23 = __this->___MouthDimpleRight_30;
		V_23 = L_23;
		// var tempMouthFrownLeft = MouthFrownLeft;
		float L_24 = __this->___MouthFrownLeft_31;
		V_24 = L_24;
		// var tempMouthFrownRight = MouthFrownRight;
		float L_25 = __this->___MouthFrownRight_32;
		V_25 = L_25;
		// var tempMouthLeft = MouthLeft;
		float L_26 = __this->___MouthLeft_34;
		V_26 = L_26;
		// var tempMouthLowerDownLeft = MouthLowerDownLeft;
		float L_27 = __this->___MouthLowerDownLeft_35;
		V_27 = L_27;
		// var tempMouthLowerDownRight = MouthLowerDownRight;
		float L_28 = __this->___MouthLowerDownRight_36;
		V_28 = L_28;
		// var tempMouthPressLeft = MouthPressLeft;
		float L_29 = __this->___MouthPressLeft_37;
		V_29 = L_29;
		// var tempMouthPressRight = MouthPressRight;
		float L_30 = __this->___MouthPressRight_38;
		V_30 = L_30;
		// var tempMouthRight = MouthRight;
		float L_31 = __this->___MouthRight_40;
		V_31 = L_31;
		// var tempMouthSmileLeft = MouthSmileLeft;
		float L_32 = __this->___MouthSmileLeft_45;
		V_32 = L_32;
		// var tempMouthSmileRight = MouthSmileRight;
		float L_33 = __this->___MouthSmileRight_46;
		V_33 = L_33;
		// var tempMouthStretchLeft = MouthStretchLeft;
		float L_34 = __this->___MouthStretchLeft_47;
		V_34 = L_34;
		// var tempMouthStretchRight = MouthStretchRight;
		float L_35 = __this->___MouthStretchRight_48;
		V_35 = L_35;
		// var tempMouthUpperUpLeft = MouthUpperUpLeft;
		float L_36 = __this->___MouthUpperUpLeft_49;
		V_36 = L_36;
		// var tempMouthUpperUpRight = MouthUpperUpRight;
		float L_37 = __this->___MouthUpperUpRight_50;
		V_37 = L_37;
		// var tempNoseSneerLeft = NoseSneerLeft;
		float L_38 = __this->___NoseSneerLeft_51;
		V_38 = L_38;
		// var tempNoseSneerRight = NoseSneerRight;
		float L_39 = __this->___NoseSneerRight_52;
		V_39 = L_39;
		// BrowDownLeft = tempBrowDownRight;
		float L_40 = V_1;
		__this->___BrowDownLeft_2 = L_40;
		// BrowDownRight = tempBrowDownLeft;
		float L_41 = V_0;
		__this->___BrowDownRight_3 = L_41;
		// BrowOuterUpLeft = tempBrowOuterUpRight;
		float L_42 = V_3;
		__this->___BrowOuterUpLeft_5 = L_42;
		// BrowOuterUpRight = tempBrowOuterUpLeft;
		float L_43 = V_2;
		__this->___BrowOuterUpRight_6 = L_43;
		// CheekSquintLeft = tempCheekSquintRight;
		float L_44 = V_5;
		__this->___CheekSquintLeft_8 = L_44;
		// CheekSquintRight = tempCheekSquintLeft;
		float L_45 = V_4;
		__this->___CheekSquintRight_9 = L_45;
		// EyeBlinkLeft = tempEyeBlinkRight;
		float L_46 = V_7;
		__this->___EyeBlinkLeft_10 = L_46;
		// EyeBlinkRight = tempEyeBlinkLeft;
		float L_47 = V_6;
		__this->___EyeBlinkRight_11 = L_47;
		// EyeLookDownLeft = tempEyeLookDownRight;
		float L_48 = V_9;
		__this->___EyeLookDownLeft_12 = L_48;
		// EyeLookDownRight = tempEyeLookDownLeft;
		float L_49 = V_8;
		__this->___EyeLookDownRight_13 = L_49;
		// EyeLookInLeft = tempEyeLookInRight;
		float L_50 = V_11;
		__this->___EyeLookInLeft_14 = L_50;
		// EyeLookInRight = tempEyeLookInLeft;
		float L_51 = V_10;
		__this->___EyeLookInRight_15 = L_51;
		// EyeLookOutLeft = tempEyeLookOutRight;
		float L_52 = V_13;
		__this->___EyeLookOutLeft_16 = L_52;
		// EyeLookOutRight = tempEyeLookOutLeft;
		float L_53 = V_12;
		__this->___EyeLookOutRight_17 = L_53;
		// EyeLookUpLeft = tempEyeLookUpRight;
		float L_54 = V_15;
		__this->___EyeLookUpLeft_18 = L_54;
		// EyeLookUpRight = tempEyeLookUpLeft;
		float L_55 = V_14;
		__this->___EyeLookUpRight_19 = L_55;
		// EyeSquintLeft = tempEyeSquintRight;
		float L_56 = V_17;
		__this->___EyeSquintLeft_20 = L_56;
		// EyeSquintRight = tempEyeSquintLeft;
		float L_57 = V_16;
		__this->___EyeSquintRight_21 = L_57;
		// EyeWideLeft = tempEyeWideRight;
		float L_58 = V_19;
		__this->___EyeWideLeft_22 = L_58;
		// EyeWideRight = tempEyeWideLeft;
		float L_59 = V_18;
		__this->___EyeWideRight_23 = L_59;
		// JawLeft = tempJawRight;
		float L_60 = V_21;
		__this->___JawLeft_25 = L_60;
		// JawRight = tempJawLeft;
		float L_61 = V_20;
		__this->___JawRight_27 = L_61;
		// MouthDimpleLeft = tempMouthDimpleRight;
		float L_62 = V_23;
		__this->___MouthDimpleLeft_29 = L_62;
		// MouthDimpleRight = tempMouthDimpleLeft;
		float L_63 = V_22;
		__this->___MouthDimpleRight_30 = L_63;
		// MouthFrownLeft = tempMouthFrownRight;
		float L_64 = V_25;
		__this->___MouthFrownLeft_31 = L_64;
		// MouthFrownRight = tempMouthFrownLeft;
		float L_65 = V_24;
		__this->___MouthFrownRight_32 = L_65;
		// MouthLeft = tempMouthRight;
		float L_66 = V_31;
		__this->___MouthLeft_34 = L_66;
		// MouthLowerDownLeft = tempMouthLowerDownRight;
		float L_67 = V_28;
		__this->___MouthLowerDownLeft_35 = L_67;
		// MouthLowerDownRight = tempMouthLowerDownLeft;
		float L_68 = V_27;
		__this->___MouthLowerDownRight_36 = L_68;
		// MouthPressLeft = tempMouthPressRight;
		float L_69 = V_30;
		__this->___MouthPressLeft_37 = L_69;
		// MouthPressRight = tempMouthPressLeft;
		float L_70 = V_29;
		__this->___MouthPressRight_38 = L_70;
		// MouthRight = tempMouthLeft;
		float L_71 = V_26;
		__this->___MouthRight_40 = L_71;
		// MouthSmileLeft = tempMouthSmileRight;
		float L_72 = V_33;
		__this->___MouthSmileLeft_45 = L_72;
		// MouthSmileRight = tempMouthSmileLeft;
		float L_73 = V_32;
		__this->___MouthSmileRight_46 = L_73;
		// MouthStretchLeft = tempMouthStretchRight;
		float L_74 = V_35;
		__this->___MouthStretchLeft_47 = L_74;
		// MouthStretchRight = tempMouthStretchLeft;
		float L_75 = V_34;
		__this->___MouthStretchRight_48 = L_75;
		// MouthUpperUpLeft = tempMouthUpperUpRight;
		float L_76 = V_37;
		__this->___MouthUpperUpLeft_49 = L_76;
		// MouthUpperUpRight = tempMouthUpperUpLeft;
		float L_77 = V_36;
		__this->___MouthUpperUpRight_50 = L_77;
		// NoseSneerLeft = tempNoseSneerRight;
		float L_78 = V_39;
		__this->___NoseSneerLeft_51 = L_78;
		// NoseSneerRight = tempNoseSneerLeft;
		float L_79 = V_38;
		__this->___NoseSneerRight_52 = L_79;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FaceBlendShapePose_FlipHorizontally_m5D6DF62DB4EF323DAE1ADB27345397226C53D595_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*>(__this + _offset);
	FaceBlendShapePose_FlipHorizontally_m5D6DF62DB4EF323DAE1ADB27345397226C53D595(_thisAdjusted, method);
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapePose__cctor_mB30B8E13224436B134E9CE2FE9BA7452CF35563B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_mD33ACD4B79AFB6328BF0BF4D96971078577E5D63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m91DC46AB9095251EBE272AECED7231D85124273A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m0251F20B257790A55E6D70BECCB6DF04C75B3030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__65_0_m52DE1CC981D04C304D952A4E49CD4B6799732EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FaceBlendShape[] Shapes { get; } = Enum.GetValues(typeof(FaceBlendShape))
		//     .Cast<FaceBlendShape>()
		//     .Where(s => (int)s >= 0)
		//     .ToArray();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_Cast_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_mD33ACD4B79AFB6328BF0BF4D96971078577E5D63(L_2, Enumerable_Cast_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_mD33ACD4B79AFB6328BF0BF4D96971078577E5D63_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var);
		U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399* L_4 = ((U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1* L_5 = (Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1*)il2cpp_codegen_object_new(Func_2_tE43CD37C3F89BA33C197B97FBEF9AEFD65E06DE1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m03087EA817D00F3361960C0FB18ABD9A173FE2F5(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__65_0_m52DE1CC981D04C304D952A4E49CD4B6799732EB1_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m0251F20B257790A55E6D70BECCB6DF04C75B3030(L_3, L_5, Enumerable_Where_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m0251F20B257790A55E6D70BECCB6DF04C75B3030_RuntimeMethod_var);
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_7;
		L_7 = Enumerable_ToArray_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m91DC46AB9095251EBE272AECED7231D85124273A(L_6, Enumerable_ToArray_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_m91DC46AB9095251EBE272AECED7231D85124273A_RuntimeMethod_var);
		((FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_StaticFields*)il2cpp_codegen_static_fields_for(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var))->___U3CShapesU3Ek__BackingField_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_StaticFields*)il2cpp_codegen_static_fields_for(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var))->___U3CShapesU3Ek__BackingField_0), (void*)L_7);
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7BA3E92E58469391B391B9CF7CEABE0619F8DBE8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399* L_0 = (U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399*)il2cpp_codegen_object_new(U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB01F9C3C4A81118AFFC852EF9FFE55386FF01A2E(L_0, NULL);
		((U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB01F9C3C4A81118AFFC852EF9FFE55386FF01A2E (U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose/<>c::<.cctor>b__65_0(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__65_0_m52DE1CC981D04C304D952A4E49CD4B6799732EB1 (U3CU3Ec_tC59AFA8A56D2930608A3AA16706A8223AE982399* __this, int32_t ___s0, const RuntimeMethod* method) 
{
	{
		// .Where(s => (int)s >= 0)
		int32_t L_0 = ___s0;
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// Unity.LiveCapture.ARKitFaceCapture.FacePose Unity.LiveCapture.ARKitFaceCapture.FacePose::get_Identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C FacePose_get_Identity_mA875106D8CC95EC9E8080322064385037F417D86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FacePose Identity { get; } = new FacePose
		il2cpp_codegen_runtime_class_init_inline(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_0 = ((FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_StaticFields*)il2cpp_codegen_static_fields_for(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var))->___U3CIdentityU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FacePose::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacePose__cctor_mAFB1C4C096CD7043C37DA784EA791E51E8655484 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static FacePose Identity { get; } = new FacePose
		// {
		//     BlendShapes = default,
		//     HeadPosition = Vector3.zero,
		//     HeadOrientation = Quaternion.identity,
		//     LeftEyeOrientation = Quaternion.identity,
		//     RightEyeOrientation = Quaternion.identity,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C));
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_0 = (&(&V_0)->___BlendShapes_1);
		il2cpp_codegen_initobj(L_0, sizeof(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		(&V_0)->___HeadPosition_2 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		(&V_0)->___HeadOrientation_3 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		(&V_0)->___LeftEyeOrientation_4 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		(&V_0)->___RightEyeOrientation_5 = L_4;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_5 = V_0;
		((FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_StaticFields*)il2cpp_codegen_static_fields_for(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var))->___U3CIdentityU3Ek__BackingField_0 = L_5;
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
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceSample::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8 (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Time;
		double L_0 = __this->___m_Time_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61*>(__this + _offset);
	double _returnValue;
	_returnValue = FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceSample::set_Time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7 (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Time = value;
		double L_0 = ___value0;
		__this->___m_Time_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7_AdjustorThunk (RuntimeObject* __this, double ___value0, const RuntimeMethod* method)
{
	FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61*>(__this + _offset);
	FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animator Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_Animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* FaceActor_get_Animator_m38D34A64E8C69274019554D9AAFECA2C5B2019AD (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// public Animator Animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___U3CAnimatorU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_Animator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_Animator_m98048EBA7DB286EEA74D15FBEC0D1DEBBAA16DFC (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		// public Animator Animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___value0;
		__this->___U3CAnimatorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimatorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceMapper Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_Mapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* FaceActor_get_Mapper_m5875C42BA125631DDB7B2A20545E4CD54AAE9274 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// public FaceMapper Mapper => m_Mapper;
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_0 = __this->___m_Mapper_4;
		return L_0;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_BlendShapes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 FaceActor_get_BlendShapes_m89207C4E003A4DC83EE461E531044113777D0190 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BlendShapes;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_0 = __this->___m_BlendShapes_6;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_BlendShapes(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_BlendShapes_m367764D14E6783671E9CF3512E39A26CCB0E5E52 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BlendShapes = value;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_0 = ___value0;
		__this->___m_BlendShapes_6 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_HeadPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FaceActor_get_HeadPosition_mF620F9BD2D8A7446F36ABD81A3AB95FB6A04A8DA (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_HeadPosition_7;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_HeadPosition_mF2509211B721CEB887D9A1CAB2DC63EE7DF03D16 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_HeadPosition_7 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_HeadOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FaceActor_get_HeadOrientation_m4A5468EC5593BD035852DD4B6453096F74AC647C (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadOrientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_HeadOrientation_8;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadOrientation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_HeadOrientation_mBFE01868BA35528237375799D5F17842DCCB4F00 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadOrientation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_HeadOrientation_8 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_LeftEyeOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FaceActor_get_LeftEyeOrientation_m6B7B5E4CC3E50D4B2E0F14C9E9CF04DE0CA1A286 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LeftEyeOrientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_LeftEyeOrientation_9;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_LeftEyeOrientation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_LeftEyeOrientation_mEB0ADF7AB7E1E0810F10D92D8A6F003939D9635C (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftEyeOrientation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_LeftEyeOrientation_9 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_RightEyeOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FaceActor_get_RightEyeOrientation_m07482300A18A967EAB3F332B7D79B1549FB22372 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RightEyeOrientation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_RightEyeOrientation_10;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_RightEyeOrientation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_RightEyeOrientation_m9F7FECD4F55A01998D7AEA5B86E804F638853043 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightEyeOrientation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_RightEyeOrientation_10 = L_0;
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_BlendShapesEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceActor_get_BlendShapesEnabled_mD514CEADE2F97910B8A384A3FF1F1B9CF79E9557 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BlendShapesEnabled;
		bool L_0 = __this->___m_BlendShapesEnabled_11;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_BlendShapesEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_BlendShapesEnabled_m6528236DFBB1FC4F068D199B2781ED097F97B9C7 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BlendShapesEnabled = value;
		bool L_0 = ___value0;
		__this->___m_BlendShapesEnabled_11 = L_0;
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_HeadPositionEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceActor_get_HeadPositionEnabled_m862F690C567659A0B3148F43CAF17AB7B5A12EEE (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadPositionEnabled;
		bool L_0 = __this->___m_HeadPositionEnabled_12;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadPositionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_HeadPositionEnabled_mD75AA798500FCB6CDF787949D2B488055AEB82D5 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadPositionEnabled = value;
		bool L_0 = ___value0;
		__this->___m_HeadPositionEnabled_12 = L_0;
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_HeadOrientationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceActor_get_HeadOrientationEnabled_mC96FB966A2E9C82FDFC1628D05B187066E029254 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeadOrientationEnabled;
		bool L_0 = __this->___m_HeadOrientationEnabled_13;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_HeadOrientationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_HeadOrientationEnabled_m35DFF7431928FF0A496E839F00810A43B1C8A94D (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadOrientationEnabled = value;
		bool L_0 = ___value0;
		__this->___m_HeadOrientationEnabled_13 = L_0;
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceActor::get_EyeOrientationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceActor_get_EyeOrientationEnabled_mC87B7EB764663A4502392755A3B99FB754766BE1 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_EyeOrientationEnabled;
		bool L_0 = __this->___m_EyeOrientationEnabled_14;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::set_EyeOrientationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_set_EyeOrientationEnabled_m13724093F2073EBFB139B687C09777335FAF4AC3 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_EyeOrientationEnabled = value;
		bool L_0 = ___value0;
		__this->___m_EyeOrientationEnabled_14 = L_0;
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_Awake_m8622FCEB6D8DC7E2A1C7C6C6F51783BBF5C582F6 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		FaceActor_set_Animator_m98048EBA7DB286EEA74D15FBEC0D1DEBBAA16DFC_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_OnDisable_m40343C9E68C889B459E3ED2CC226C0486D8B94F7 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// ClearCache();
		FaceActor_ClearCache_mD2529A68C7964B23C098AA7BEC0AB2CF3FE79DD0(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_LateUpdate_m3A3B8D5A177F22BEC748FABCB9E7EED65C2AB6F2 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// UpdateRig(true);
		FaceActor_UpdateRig_mD9829B2EB613FCCF60CC4F434FE83886E5C8C34A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::SetMapper(Unity.LiveCapture.ARKitFaceCapture.FaceMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_SetMapper_mE834387304D0D37DAB26660811869427394BBFB5 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* ___mapper0, const RuntimeMethod* method) 
{
	{
		// m_Mapper = mapper;
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_0 = ___mapper0;
		__this->___m_Mapper_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Mapper_4), (void*)L_0);
		// ClearCache();
		FaceActor_ClearCache_mD2529A68C7964B23C098AA7BEC0AB2CF3FE79DD0(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_ClearCache_mD2529A68C7964B23C098AA7BEC0AB2CF3FE79DD0 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B2_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B1_0 = NULL;
	{
		// m_Cache?.Dispose();
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_0 = __this->___m_Cache_15;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		FaceMapperCache_Dispose_m5A96730404B43B0DE0A209CA098BE399CDA38A97(G_B2_0, NULL);
	}

IL_0011:
	{
		// m_Cache = null;
		__this->___m_Cache_15 = (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cache_15), (void*)(FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*)NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::UpdateRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_UpdateRig_mD9829B2EB613FCCF60CC4F434FE83886E5C8C34A (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___continuous0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* G_B14_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B14_1 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B14_2 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B14_3 = NULL;
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* G_B13_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B13_1 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B13_2 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B13_3 = NULL;
	int32_t G_B15_0 = 0;
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* G_B15_1 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B15_2 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B15_3 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B15_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B19_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B19_1 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B19_2 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B19_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B18_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B18_1 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B18_2 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B18_3 = NULL;
	int32_t G_B20_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B20_1 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B20_2 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B20_3 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B20_4 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B24_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B24_1 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B24_2 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B24_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B23_0 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B23_1 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B23_2 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B23_3 = NULL;
	int32_t G_B25_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B25_1 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B25_2 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B25_3 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B25_4 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B29_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B29_1 = NULL;
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* G_B29_2 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B29_3 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B29_4 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B29_5 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B28_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B28_1 = NULL;
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* G_B28_2 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B28_3 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B28_4 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B28_5 = NULL;
	int32_t G_B30_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B30_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B30_2 = NULL;
	FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* G_B30_3 = NULL;
	FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* G_B30_4 = NULL;
	FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* G_B30_5 = NULL;
	FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* G_B30_6 = NULL;
	{
		// if (m_Mapper != null)
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_0 = __this->___m_Mapper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_01b0;
		}
	}
	{
		// if (m_Cache == null)
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_2 = __this->___m_Cache_15;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		// m_Cache = m_Mapper.CreateCache(this);
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_3 = __this->___m_Mapper_4;
		NullCheck(L_3);
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_4;
		L_4 = VirtualFuncInvoker1< FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* >::Invoke(4 /* Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache Unity.LiveCapture.ARKitFaceCapture.FaceMapper::CreateCache(Unity.LiveCapture.ARKitFaceCapture.FaceActor) */, L_3, __this);
		__this->___m_Cache_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cache_15), (void*)L_4);
		// continuous = false;
		___continuous0 = (bool)0;
	}

IL_002e:
	{
		// var channels = m_EnabledChannels;
		int32_t L_5 = __this->___m_EnabledChannels_5;
		V_0 = L_5;
		// if (!m_BlendShapesEnabled)
		bool L_6 = __this->___m_BlendShapesEnabled_11;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		// channels &= ~FaceChannelFlags.BlendShapes;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7&((int32_t)-2)));
	}

IL_0042:
	{
		// if (!m_HeadPositionEnabled)
		bool L_8 = __this->___m_HeadPositionEnabled_12;
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		// channels &= ~FaceChannelFlags.HeadPosition;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9&((int32_t)-3)));
	}

IL_004f:
	{
		// if (!m_HeadOrientationEnabled)
		bool L_10 = __this->___m_HeadOrientationEnabled_13;
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		// channels &= ~FaceChannelFlags.HeadRotation;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11&((int32_t)-5)));
	}

IL_005c:
	{
		// if (!m_EyeOrientationEnabled)
		bool L_12 = __this->___m_EyeOrientationEnabled_14;
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		// channels &= ~FaceChannelFlags.Eyes;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13&((int32_t)-9)));
	}

IL_0069:
	{
		// if (channels.HasFlag(FaceChannelFlags.BlendShapes))
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		int32_t L_16 = 1;
		bool L_17 = il2cpp_codegen_enum_has_flag((int32_t)L_15, (int32_t)L_16);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// m_Mapper.ApplyBlendShapesToRig(
		//     this,
		//     m_Cache,
		//     ref m_BlendShapes,
		//     continuous && m_LastChannels.HasFlag(FaceChannelFlags.BlendShapes)
		// );
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_18 = __this->___m_Mapper_4;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_19 = __this->___m_Cache_15;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_20 = (&__this->___m_BlendShapes_6);
		bool L_21 = ___continuous0;
		G_B13_0 = L_20;
		G_B13_1 = L_19;
		G_B13_2 = __this;
		G_B13_3 = L_18;
		if (!L_21)
		{
			G_B14_0 = L_20;
			G_B14_1 = L_19;
			G_B14_2 = __this;
			G_B14_3 = L_18;
			goto IL_00aa;
		}
	}
	{
		int32_t L_22 = __this->___m_LastChannels_16;
		int32_t L_23 = L_22;
		int32_t L_24 = 1;
		bool L_25 = il2cpp_codegen_enum_has_flag((int32_t)L_23, (int32_t)L_24);
		G_B15_0 = ((int32_t)(L_25));
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		G_B15_4 = G_B13_3;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
		G_B15_4 = G_B14_3;
	}

IL_00ab:
	{
		NullCheck(G_B15_4);
		VirtualActionInvoker4< FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D*, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*, bool >::Invoke(5 /* System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::ApplyBlendShapesToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose&,System.Boolean) */, G_B15_4, G_B15_3, G_B15_2, G_B15_1, (bool)G_B15_0);
	}

IL_00b0:
	{
		// if (channels.HasFlag(FaceChannelFlags.HeadPosition))
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		int32_t L_28 = 2;
		bool L_29 = il2cpp_codegen_enum_has_flag((int32_t)L_27, (int32_t)L_28);
		if (!L_29)
		{
			goto IL_00f7;
		}
	}
	{
		// m_Mapper.ApplyHeadPositionToRig(
		//     this,
		//     m_Cache,
		//     ref m_HeadPosition,
		//     continuous && m_LastChannels.HasFlag(FaceChannelFlags.HeadPosition)
		// );
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_30 = __this->___m_Mapper_4;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_31 = __this->___m_Cache_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___m_HeadPosition_7);
		bool L_33 = ___continuous0;
		G_B18_0 = L_32;
		G_B18_1 = L_31;
		G_B18_2 = __this;
		G_B18_3 = L_30;
		if (!L_33)
		{
			G_B19_0 = L_32;
			G_B19_1 = L_31;
			G_B19_2 = __this;
			G_B19_3 = L_30;
			goto IL_00f1;
		}
	}
	{
		int32_t L_34 = __this->___m_LastChannels_16;
		int32_t L_35 = L_34;
		int32_t L_36 = 2;
		bool L_37 = il2cpp_codegen_enum_has_flag((int32_t)L_35, (int32_t)L_36);
		G_B20_0 = ((int32_t)(L_37));
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B20_0 = 0;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
	}

IL_00f2:
	{
		NullCheck(G_B20_4);
		VirtualActionInvoker4< FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D*, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, bool >::Invoke(6 /* System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::ApplyHeadPositionToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,UnityEngine.Vector3&,System.Boolean) */, G_B20_4, G_B20_3, G_B20_2, G_B20_1, (bool)G_B20_0);
	}

IL_00f7:
	{
		// if (channels.HasFlag(FaceChannelFlags.HeadRotation))
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		int32_t L_40 = 4;
		bool L_41 = il2cpp_codegen_enum_has_flag((int32_t)L_39, (int32_t)L_40);
		if (!L_41)
		{
			goto IL_0146;
		}
	}
	{
		// var headRotation = Quaternion.Euler(m_HeadOrientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = __this->___m_HeadOrientation_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_42, NULL);
		V_1 = L_43;
		// m_Mapper.ApplyHeadRotationToRig(
		//     this,
		//     m_Cache,
		//     ref headRotation,
		//     continuous && m_LastChannels.HasFlag(FaceChannelFlags.HeadRotation)
		// );
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_44 = __this->___m_Mapper_4;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_45 = __this->___m_Cache_15;
		bool L_46 = ___continuous0;
		G_B23_0 = (&V_1);
		G_B23_1 = L_45;
		G_B23_2 = __this;
		G_B23_3 = L_44;
		if (!L_46)
		{
			G_B24_0 = (&V_1);
			G_B24_1 = L_45;
			G_B24_2 = __this;
			G_B24_3 = L_44;
			goto IL_0140;
		}
	}
	{
		int32_t L_47 = __this->___m_LastChannels_16;
		int32_t L_48 = L_47;
		int32_t L_49 = 4;
		bool L_50 = il2cpp_codegen_enum_has_flag((int32_t)L_48, (int32_t)L_49);
		G_B25_0 = ((int32_t)(L_50));
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		G_B25_3 = G_B23_2;
		G_B25_4 = G_B23_3;
		goto IL_0141;
	}

IL_0140:
	{
		G_B25_0 = 0;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
		G_B25_3 = G_B24_2;
		G_B25_4 = G_B24_3;
	}

IL_0141:
	{
		NullCheck(G_B25_4);
		VirtualActionInvoker4< FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D*, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, bool >::Invoke(7 /* System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::ApplyHeadRotationToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,UnityEngine.Quaternion&,System.Boolean) */, G_B25_4, G_B25_3, G_B25_2, G_B25_1, (bool)G_B25_0);
	}

IL_0146:
	{
		// if (channels.HasFlag(FaceChannelFlags.Eyes))
		int32_t L_51 = V_0;
		int32_t L_52 = L_51;
		int32_t L_53 = 8;
		bool L_54 = il2cpp_codegen_enum_has_flag((int32_t)L_52, (int32_t)L_53);
		if (!L_54)
		{
			goto IL_01a9;
		}
	}
	{
		// var leftEyeRotation = Quaternion.Euler(m_LeftEyeOrientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = __this->___m_LeftEyeOrientation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_55, NULL);
		V_2 = L_56;
		// var rightEyeRotation = Quaternion.Euler(m_RightEyeOrientation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___m_RightEyeOrientation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_57, NULL);
		V_3 = L_58;
		// m_Mapper.ApplyEyeRotationToRig(
		//     this,
		//     m_Cache,
		//     ref m_BlendShapes,
		//     ref leftEyeRotation,
		//     ref rightEyeRotation,
		//     continuous && m_LastChannels.HasFlag(FaceChannelFlags.Eyes)
		// );
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_59 = __this->___m_Mapper_4;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_60 = __this->___m_Cache_15;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_61 = (&__this->___m_BlendShapes_6);
		bool L_62 = ___continuous0;
		G_B28_0 = (&V_3);
		G_B28_1 = (&V_2);
		G_B28_2 = L_61;
		G_B28_3 = L_60;
		G_B28_4 = __this;
		G_B28_5 = L_59;
		if (!L_62)
		{
			G_B29_0 = (&V_3);
			G_B29_1 = (&V_2);
			G_B29_2 = L_61;
			G_B29_3 = L_60;
			G_B29_4 = __this;
			G_B29_5 = L_59;
			goto IL_01a3;
		}
	}
	{
		int32_t L_63 = __this->___m_LastChannels_16;
		int32_t L_64 = L_63;
		int32_t L_65 = 8;
		bool L_66 = il2cpp_codegen_enum_has_flag((int32_t)L_64, (int32_t)L_65);
		G_B30_0 = ((int32_t)(L_66));
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		G_B30_3 = G_B28_2;
		G_B30_4 = G_B28_3;
		G_B30_5 = G_B28_4;
		G_B30_6 = G_B28_5;
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
		G_B30_3 = G_B29_2;
		G_B30_4 = G_B29_3;
		G_B30_5 = G_B29_4;
		G_B30_6 = G_B29_5;
	}

IL_01a4:
	{
		NullCheck(G_B30_6);
		VirtualActionInvoker6< FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D*, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, bool >::Invoke(8 /* System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::ApplyEyeRotationToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose&,UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Boolean) */, G_B30_6, G_B30_5, G_B30_4, G_B30_3, G_B30_2, G_B30_1, (bool)G_B30_0);
	}

IL_01a9:
	{
		// m_LastChannels = channels;
		int32_t L_67 = V_0;
		__this->___m_LastChannels_16 = L_67;
	}

IL_01b0:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::Register(Unity.LiveCapture.IPropertyPreviewer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor_Register_m2602E364E00ED147613526AC2186A0720FA2D520 (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, RuntimeObject* ___previewer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral200974AE0ACE946D456941344130ED3C68A1A16B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30B41C0B889C876AC93DC49D095ED6AA55AB3F95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D6B5F9B31ADD59B36682127AA0D30BDE8EA3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4148F7A7871FFEFC05B795805840B417445A93E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CECB7D45A4205D98B8D234FC6D79BE13495DDB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5928331B64E0680322A4405881B8FBD1D2393E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AB2DBE9AAD949E5B2DF6D5E2BDA7CDB755845F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2F31349A8069FBED0599F46B548C3FEC7F99D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral720E14D1CC596F5D0B876FD0879DC5BDFEDC7C3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E2B60007097B5B8625B33F7372CC863EED32536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F52DD21863A914AE5E365A99DD2CF91C344890D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4AC4A2EE341427495904E61A14250D7A00DEBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1ED92E3364CB2782D7C28069B2FE8809427FDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F835E8DD6409D0C5DAA31575CA5F2460E8DE56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFD64FF405550BA19C33604E0692E493917571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC326C3D7413B05626B2AE9F31692B2BAA556EE8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7E56C481ACAB0E1E2465C85EA893CF5F476BE67);
		s_Il2CppMethodInitialized = true;
	}
	FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (m_Mapper != null)
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_0 = __this->___m_Mapper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// m_Mapper.RegisterPreviewableProperties(this, m_Cache, previewer);
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_2 = __this->___m_Mapper_4;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_3 = __this->___m_Cache_15;
		RuntimeObject* L_4 = ___previewer0;
		NullCheck(L_2);
		VirtualActionInvoker3< FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D*, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*, RuntimeObject* >::Invoke(9 /* System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::RegisterPreviewableProperties(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.IPropertyPreviewer) */, L_2, __this, L_3, L_4);
	}

IL_0021:
	{
		// previewer.Register(this, "m_HeadPosition.x");
		RuntimeObject* L_5 = ___previewer0;
		NullCheck(L_5);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_5, __this, _stringLiteralC326C3D7413B05626B2AE9F31692B2BAA556EE8E);
		// previewer.Register(this, "m_HeadPosition.y");
		RuntimeObject* L_6 = ___previewer0;
		NullCheck(L_6);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_6, __this, _stringLiteral720E14D1CC596F5D0B876FD0879DC5BDFEDC7C3F);
		// previewer.Register(this, "m_HeadPosition.z");
		RuntimeObject* L_7 = ___previewer0;
		NullCheck(L_7);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_7, __this, _stringLiteral3D6B5F9B31ADD59B36682127AA0D30BDE8EA3CC8);
		// previewer.Register(this, "m_HeadOrientation.x");
		RuntimeObject* L_8 = ___previewer0;
		NullCheck(L_8);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_8, __this, _stringLiteral30B41C0B889C876AC93DC49D095ED6AA55AB3F95);
		// previewer.Register(this, "m_HeadOrientation.y");
		RuntimeObject* L_9 = ___previewer0;
		NullCheck(L_9);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_9, __this, _stringLiteralBECFD64FF405550BA19C33604E0692E493917571);
		// previewer.Register(this, "m_HeadOrientation.z");
		RuntimeObject* L_10 = ___previewer0;
		NullCheck(L_10);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_10, __this, _stringLiteral4148F7A7871FFEFC05B795805840B417445A93E5);
		// previewer.Register(this, "m_LeftEyeOrientation.x");
		RuntimeObject* L_11 = ___previewer0;
		NullCheck(L_11);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_11, __this, _stringLiteral7F52DD21863A914AE5E365A99DD2CF91C344890D);
		// previewer.Register(this, "m_LeftEyeOrientation.y");
		RuntimeObject* L_12 = ___previewer0;
		NullCheck(L_12);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_12, __this, _stringLiteral6AB2DBE9AAD949E5B2DF6D5E2BDA7CDB755845F4);
		// previewer.Register(this, "m_LeftEyeOrientation.z");
		RuntimeObject* L_13 = ___previewer0;
		NullCheck(L_13);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_13, __this, _stringLiteralA1ED92E3364CB2782D7C28069B2FE8809427FDBA);
		// previewer.Register(this, "m_RightEyeOrientation.x");
		RuntimeObject* L_14 = ___previewer0;
		NullCheck(L_14);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_14, __this, _stringLiteral6D2F31349A8069FBED0599F46B548C3FEC7F99D8);
		// previewer.Register(this, "m_RightEyeOrientation.y");
		RuntimeObject* L_15 = ___previewer0;
		NullCheck(L_15);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_15, __this, _stringLiteral4CECB7D45A4205D98B8D234FC6D79BE13495DDB9);
		// previewer.Register(this, "m_RightEyeOrientation.z");
		RuntimeObject* L_16 = ___previewer0;
		NullCheck(L_16);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_16, __this, _stringLiteralA7F835E8DD6409D0C5DAA31575CA5F2460E8DE56);
		// previewer.Register(this, "m_BlendShapesEnabled");
		RuntimeObject* L_17 = ___previewer0;
		NullCheck(L_17);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_17, __this, _stringLiteral5928331B64E0680322A4405881B8FBD1D2393E5B);
		// previewer.Register(this, "m_HeadPositionEnabled");
		RuntimeObject* L_18 = ___previewer0;
		NullCheck(L_18);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_18, __this, _stringLiteral8A4AC4A2EE341427495904E61A14250D7A00DEBF);
		// previewer.Register(this, "m_HeadOrientationEnabled");
		RuntimeObject* L_19 = ___previewer0;
		NullCheck(L_19);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_19, __this, _stringLiteralE7E56C481ACAB0E1E2465C85EA893CF5F476BE67);
		// previewer.Register(this, "m_EyeOrientationEnabled");
		RuntimeObject* L_20 = ___previewer0;
		NullCheck(L_20);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_20, __this, _stringLiteral7E2B60007097B5B8625B33F7372CC863EED32536);
		// foreach (var shape in FaceBlendShapePose.Shapes)
		il2cpp_codegen_runtime_class_init_inline(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_21;
		L_21 = FaceBlendShapePose_get_Shapes_mC820E40260ACCA58DF902558C25C93F3312E28C3_inline(NULL);
		V_0 = L_21;
		V_1 = 0;
		goto IL_010a;
	}

IL_00eb:
	{
		// foreach (var shape in FaceBlendShapePose.Shapes)
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (int32_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_2 = L_25;
		// previewer.Register(this, $"m_BlendShapes.{shape}");
		RuntimeObject* L_26 = ___previewer0;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral200974AE0ACE946D456941344130ED3C68A1A16B, L_29, NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_26, __this, L_30);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_010a:
	{
		// foreach (var shape in FaceBlendShapePose.Shapes)
		int32_t L_32 = V_1;
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00eb;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceActor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceActor__ctor_m56100C7FA85C604BE2E655E44F4EDEA3085FA70B (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// FaceChannelFlags m_EnabledChannels = FaceChannelFlags.All;
		__this->___m_EnabledChannels_5 = (-1);
		// Vector3 m_HeadOrientation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_HeadOrientation_8 = L_0;
		// Vector3 m_LeftEyeOrientation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_LeftEyeOrientation_9 = L_1;
		// Vector3 m_RightEyeOrientation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___m_RightEyeOrientation_10 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::get_MaxError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceBlendShapeCurves_get_MaxError_mC3C24B2A1843C80274DCFEF12F83DBF2460E38F6 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Curves[0].MaxError;
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		float L_3;
		L_3 = FloatCurve_get_MaxError_m2DF59127A89AE34B054E9247EB0D8B70AA651E10(L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::set_MaxError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_set_MaxError_m2CBB44C3886A83236FBE37DAABA876C1BD748528 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, float ___value0, const RuntimeMethod* method) 
{
	FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// curve.MaxError = value;
		float L_5 = ___value0;
		NullCheck(L_4);
		FloatCurve_set_MaxError_mB01B1B59227491A371B6E44ECBEB7791CEB151C0(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// foreach (var curve in m_Curves)
		int32_t L_7 = V_1;
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::get_RelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceBlendShapeCurves_get_RelativePath_m537C0484CA60F4DC2FF06E965AD9B316F5EFCC3F (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	{
		// public string RelativePath { get; }
		String_t* L_0 = __this->___U3CRelativePathU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceBlendShapeCurves_get_PropertyName_m3BB335E498975677F9A0D4BD1E26C481DB36BE63 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	{
		// public string PropertyName { get; }
		String_t* L_0 = __this->___U3CPropertyNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Type Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::get_BindingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FaceBlendShapeCurves_get_BindingType_mA26C2FADC11C4B5EFCD1E53192F2E68086B48A77 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	{
		// public Type BindingType { get; }
		Type_t* L_0 = __this->___U3CBindingTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// Unity.LiveCapture.FrameRate Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 FaceBlendShapeCurves_get_FrameRate_m0238713092E90FB67ED1AE325715347039CA81C7 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Curves[0].FrameRate;
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_3;
		L_3 = FloatCurve_get_FrameRate_m17C976F2D76270424E5F26C363864D36D77A00EE(L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::set_FrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_set_FrameRate_mFDE2F81992D36269FFA6F67AE1B91B618FCF71FC (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) 
{
	FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// curve.FrameRate = value;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_5 = ___value0;
		NullCheck(L_4);
		FloatCurve_set_FrameRate_mF6BC540AF09EBF26454DEDC623E70DDCDFAD167C(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// foreach (var curve in m_Curves)
		int32_t L_7 = V_1;
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::.ctor(System.String,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves__ctor_m7666FD11E16D9B52F455F16BD7251A5756AE1C88 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, String_t* ___relativePath0, String_t* ___propertyName1, Type_t* ___bindingType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mF7D03E11AC4F71507D1F12B7761577C3E98B5B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mDE0C69C442D5FB26A9D04F5F698CDEFEFDE93F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3C_ctorU3Eb__0_mB8F65CE277FD22C4CEA6F934F908A66FCF70772D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_0 = (U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_m5D062FB11FC3B6E89464ACB80A833D91D6763D36(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_1 = V_0;
		String_t* L_2 = ___relativePath0;
		NullCheck(L_1);
		L_1->___relativePath_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___relativePath_0), (void*)L_2);
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_3 = V_0;
		String_t* L_4 = ___propertyName1;
		NullCheck(L_3);
		L_3->___propertyName_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___propertyName_1), (void*)L_4);
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_5 = V_0;
		Type_t* L_6 = ___bindingType2;
		NullCheck(L_5);
		L_5->___bindingType_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___bindingType_2), (void*)L_6);
		// public FaceBlendShapeCurves(string relativePath, string propertyName, Type bindingType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RelativePath = relativePath;
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___relativePath_0;
		__this->___U3CRelativePathU3Ek__BackingField_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRelativePathU3Ek__BackingField_1), (void*)L_8);
		// PropertyName = propertyName;
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___propertyName_1;
		__this->___U3CPropertyNameU3Ek__BackingField_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertyNameU3Ek__BackingField_2), (void*)L_10);
		// BindingType = bindingType;
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_11 = V_0;
		NullCheck(L_11);
		Type_t* L_12 = L_11->___bindingType_2;
		__this->___U3CBindingTypeU3Ek__BackingField_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindingTypeU3Ek__BackingField_3), (void*)L_12);
		// m_Curves = FaceBlendShapePose.Shapes
		//     .Select(shape => new FloatCurve(relativePath, $"{propertyName}.{shape}", bindingType))
		//     .ToArray();
		il2cpp_codegen_runtime_class_init_inline(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_13;
		L_13 = FaceBlendShapePose_get_Shapes_mC820E40260ACCA58DF902558C25C93F3312E28C3_inline(NULL);
		U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* L_14 = V_0;
		Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799* L_15 = (Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799*)il2cpp_codegen_object_new(Func_2_tBD48E9E219FD255CE6CA425A6E8DC4154C067799_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_m7775C65D14B66C071CDDDF69928D76B18B395E47(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3C_ctorU3Eb__0_mB8F65CE277FD22C4CEA6F934F908A66FCF70772D_RuntimeMethod_var), NULL);
		RuntimeObject* L_16;
		L_16 = Enumerable_Select_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mF7D03E11AC4F71507D1F12B7761577C3E98B5B80((RuntimeObject*)L_13, L_15, Enumerable_Select_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mF7D03E11AC4F71507D1F12B7761577C3E98B5B80_RuntimeMethod_var);
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_17;
		L_17 = Enumerable_ToArray_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mDE0C69C442D5FB26A9D04F5F698CDEFEFDE93F8F(L_16, Enumerable_ToArray_TisFloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_mDE0C69C442D5FB26A9D04F5F698CDEFEFDE93F8F_RuntimeMethod_var);
		__this->___m_Curves_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Curves_0), (void*)L_17);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::AddKey(System.Double,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_AddKey_m4C696A4DEA5B9558A90026C78CF454324AAE864B (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, double ___time0, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___value1, const RuntimeMethod* method) 
{
	{
		// AddKey(time, ref value);
		double L_0 = ___time0;
		FaceBlendShapeCurves_AddKey_mFB79201DC9D62290648CDFF607BD9DF50C38D7DC(__this, L_0, (&___value1), NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::AddKey(System.Double,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_AddKey_mFB79201DC9D62290648CDFF607BD9DF50C38D7DC (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, double ___time0, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < FaceBlendShapePose.ShapeCount; ++i)
		V_0 = 0;
		goto IL_001d;
	}

IL_0004:
	{
		// m_Curves[i].AddKey(time, value[i]);
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		double L_4 = ___time0;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_5 = ___value1;
		int32_t L_6 = V_0;
		float L_7;
		L_7 = FaceBlendShapePose_get_Item_mAB5ECD2860FE827BC96D10931AD9B684B8867278(L_5, L_6, NULL);
		NullCheck(L_3);
		FloatCurve_AddKey_mEF0D59ED3A08EDA75453AF74E678A4A43C002C9E(L_3, L_4, L_7, NULL);
		// for (var i = 0; i < FaceBlendShapePose.ShapeCount; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001d:
	{
		// for (var i = 0; i < FaceBlendShapePose.ShapeCount; ++i)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)52))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceBlendShapeCurves_IsEmpty_mEB705537429C31757D7AE915D1B4E28B1F6EF0CA (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	{
		// return m_Curves[0].IsEmpty();
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		bool L_3;
		L_3 = FloatCurve_IsEmpty_m008AB3A3B950E6B78D89169EC3647F2DE6719B5B(L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_Clear_m81CEA708C6742CADED02406ED626EF65183C7E80 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, const RuntimeMethod* method) 
{
	FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// curve.Clear();
		NullCheck(L_4);
		FloatCurve_Clear_mFEB6194CAAD4976E1231B75B600A62B4287E4A78(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (var curve in m_Curves)
		int32_t L_6 = V_1;
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves::SetToAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceBlendShapeCurves_SetToAnimationClip_m2AE289F41275C214178B39859FF9B5DA8580E932 (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, const RuntimeMethod* method) 
{
	FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// curve.SetToAnimationClip(clip);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_5 = ___clip0;
		NullCheck(L_4);
		FloatCurve_SetToAnimationClip_mC99DE117C558A274533380026A299BEF4C706F90(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// foreach (var curve in m_Curves)
		int32_t L_7 = V_1;
		FloatCurveU5BU5D_t89FC447F4B2E57F9E09A8250AA21AB6BD55FBCF6* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m5D062FB11FC3B6E89464ACB80A833D91D6763D36 (U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Unity.LiveCapture.FloatCurve Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapeCurves/<>c__DisplayClass16_0::<.ctor>b__0(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* U3CU3Ec__DisplayClass16_0_U3C_ctorU3Eb__0_mB8F65CE277FD22C4CEA6F934F908A66FCF70772D (U3CU3Ec__DisplayClass16_0_tD654AB422DA8E2676FB4731FCC6AFE9D0809CB87* __this, int32_t ___shape0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(shape => new FloatCurve(relativePath, $"{propertyName}.{shape}", bindingType))
		String_t* L_0 = __this->___relativePath_0;
		String_t* L_1 = __this->___propertyName_1;
		int32_t L_2 = ___shape0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_1, L_4, NULL);
		Type_t* L_6 = __this->___bindingType_2;
		FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8* L_7 = (FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8*)il2cpp_codegen_object_new(FloatCurve_t2CCCAE0AACF2C5401EFAF4688F8502265CA1AEE8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FloatCurve__ctor_mDA574EA94A0D478C82752273F40DC20B6DEF9D65(L_7, L_0, L_5, L_6, NULL);
		return L_7;
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
// Unity.LiveCapture.ARKitFaceCapture.FaceActor Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_Actor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* FaceDevice_get_Actor_m913FDF924281A5EDA23854FC070557E7E0EDD964 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Actor;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = __this->___m_Actor_17;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::set_Actor(Unity.LiveCapture.ARKitFaceCapture.FaceActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_set_Actor_mA3CC4339DECE10F2AFB789B465EFD8589AECBA98 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppDevice_1_RegisterLiveProperties_m67451ECE497C7B6EE645416B719C016380A85157_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Actor != value)
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = __this->___m_Actor_17;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_Actor = value;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_3 = ___value0;
		__this->___m_Actor_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Actor_17), (void*)L_3);
		// RegisterLiveProperties();
		CompanionAppDevice_1_RegisterLiveProperties_m67451ECE497C7B6EE645416B719C016380A85157(__this, CompanionAppDevice_1_RegisterLiveProperties_m67451ECE497C7B6EE645416B719C016380A85157_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceDevice_get_Id_mEBDB5AFAD5697EDAF31B9EAA28662C27C2FCDA77 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// public string Id => m_Guid;
		String_t* L_0 = __this->___m_Guid_16;
		return L_0;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.FaceDevice::Unity.LiveCapture.IRegistrable.get_FriendlyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceDevice_Unity_LiveCapture_IRegistrable_get_FriendlyName_mD77BA5BAC73B07503FA48081B072F4450B77A8CA (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// string IRegistrable.FriendlyName => name;
		String_t* L_0;
		L_0 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		return L_0;
	}
}
// Unity.LiveCapture.ISynchronizer Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_Synchronizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDevice_get_Synchronizer_m0D247D5DF143B45979CD83ECC449E05C829E2F2B (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// public ISynchronizer Synchronizer { get; set; }
		RuntimeObject* L_0 = __this->___U3CSynchronizerU3Ek__BackingField_29;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::set_Synchronizer(Unity.LiveCapture.ISynchronizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_set_Synchronizer_mB58A676C4C4023C8A623E0CDF4F11F01E72A13AE (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ISynchronizer Synchronizer { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CSynchronizerU3Ek__BackingField_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSynchronizerU3Ek__BackingField_29), (void*)L_0);
		return;
	}
}
// Unity.LiveCapture.FrameRate Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 FaceDevice_get_FrameRate_mC946DA70705874999CAFA7A5C1583169A3A46131 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FrameRate FrameRate => m_SyncBuffer.FrameRate;
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_0 = __this->___m_SyncBuffer_26;
		NullCheck(L_0);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_1;
		L_1 = TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_inline(L_0, TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceDevice_get_BufferSize_m2A208D07E2B1BF4F4B7889B8748872C918EEDB2B (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BufferSize;
		int32_t L_0 = __this->___m_BufferSize_22;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_set_BufferSize_m716447118F5B79EECB7810CB085BE68C0074077A (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SyncBuffer.SetCapacity(value);
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_0 = __this->___m_SyncBuffer_26;
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3(L_0, L_1, CircularBuffer_1_SetCapacity_m68145E20F5DCC727ABD2E587772A96ECE75AFBE3_RuntimeMethod_var);
		// m_BufferSize = value;
		int32_t L_2 = ___value0;
		__this->___m_BufferSize_22 = L_2;
		// }
		return;
	}
}
// System.Nullable`1<System.Int32> Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_MaxBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 FaceDevice_get_MaxBufferSize_m44B58B45F12CDBA1E537D0D11005C59AD1230480 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public int? MaxBufferSize => null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		return L_0;
	}
}
// System.Nullable`1<System.Int32> Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_MinBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 FaceDevice_get_MinBufferSize_mFBFB527543670B5D97EE57FAEDE7A38C6071019B (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public int? MinBufferSize => null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = V_0;
		return L_0;
	}
}
// Unity.LiveCapture.FrameTime Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_PresentationOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FaceDevice_get_PresentationOffset_m4D7FDCBE8C78CF053CC9BE74B3ABB2972A4DE789 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SyncPresentationOffset;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_0 = __this->___m_SyncPresentationOffset_20;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::set_PresentationOffset(Unity.LiveCapture.FrameTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_set_PresentationOffset_mB675585D71F624723FB102471129F084D53AE6A8 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SyncPresentationOffset = value;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_0 = ___value0;
		__this->___m_SyncPresentationOffset_20 = L_0;
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDevice_get_IsSynchronized_m3D91B9EC81574591C84CC9FC941934425C9D1FB9 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsSynchronized;
		bool L_0 = __this->___m_IsSynchronized_21;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::set_IsSynchronized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_set_IsSynchronized_mC0B0C9EF1654A9BFBEEACA5F497FB38EB7FD2DF7 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_IsSynchronized = value;
		bool L_0 = ___value0;
		__this->___m_IsSynchronized_21 = L_0;
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::TryGetBufferRange(Unity.LiveCapture.FrameTime&,Unity.LiveCapture.FrameTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDevice_TryGetBufferRange_m2F20D1AD51FADC31AA9355CC6694EB25545A9C48 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* ___oldestSample0, FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* ___newestSample1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_SyncBuffer.TryGetBufferRange(out oldestSample, out newestSample);
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_0 = __this->___m_SyncBuffer_26;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* L_1 = ___oldestSample0;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* L_2 = ___newestSample1;
		NullCheck(L_0);
		bool L_3;
		L_3 = TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2(L_0, L_1, L_2, TimedDataBuffer_1_TryGetBufferRange_m56513CD7832C27C2654831628A858BBD16C516B2_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::TryGetInternalClient(Unity.LiveCapture.ARKitFaceCapture.IFaceClientInternal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDevice_TryGetInternalClient_m5A88A3887834CD09DFD3AF5FEA980CF63D08326C (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, RuntimeObject** ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppDevice_1_GetClient_m83873ED134187DD872E212F6481A3E8366E26BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// client = GetClient() as IFaceClientInternal;
		RuntimeObject** L_0 = ___client0;
		RuntimeObject* L_1;
		L_1 = CompanionAppDevice_1_GetClient_m83873ED134187DD872E212F6481A3E8366E26BCB_inline(__this, CompanionAppDevice_1_GetClient_m83873ED134187DD872E212F6481A3E8366E26BCB_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var)));
		// return client != null;
		RuntimeObject** L_2 = ___client0;
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnEnable_m8228C0C898A698559D5EFC266111F80CD9F6C4D3 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppDevice_1_OnEnable_m33F9BEEBC5995DAAF3CE680CC1A913C35DE73402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		CompanionAppDevice_1_OnEnable_m33F9BEEBC5995DAAF3CE680CC1A913C35DE73402(__this, CompanionAppDevice_1_OnEnable_m33F9BEEBC5995DAAF3CE680CC1A913C35DE73402_RuntimeMethod_var);
		// TimedDataSourceManager.Instance.EnsureIdIsValid(ref m_Guid);
		il2cpp_codegen_runtime_class_init_inline(TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var);
		TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* L_0;
		L_0 = TimedDataSourceManager_get_Instance_m5F498934F9AD58C582C6981535C84CC231926379_inline(NULL);
		String_t** L_1 = (&__this->___m_Guid_16);
		NullCheck(L_0);
		bool L_2;
		L_2 = TimedDataSourceManager_EnsureIdIsValid_m87FCB9BFBCF345D9DB8C5DC580A274D6D2396B29(L_0, L_1, NULL);
		// TimedDataSourceManager.Instance.Register(this);
		TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* L_3;
		L_3 = TimedDataSourceManager_get_Instance_m5F498934F9AD58C582C6981535C84CC231926379_inline(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = TimedDataSourceManager_Register_m10569159450C522F1F8F759DE4A5CA6AE4E74709(L_3, __this, NULL);
		// m_SyncBuffer = new TimedDataBuffer<FacePose>(k_SyncBufferNominalFrameRate, m_BufferSize);
		il2cpp_codegen_runtime_class_init_inline(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_5 = ((FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_StaticFields*)il2cpp_codegen_static_fields_for(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var))->___k_SyncBufferNominalFrameRate_24;
		int32_t L_6 = __this->___m_BufferSize_22;
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_7 = (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F*)il2cpp_codegen_object_new(TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8(L_7, L_5, L_6, TimedDataBuffer_1__ctor_m409A75C7A3C80A7BD37DFE7FFCE2113FFE4B16B8_RuntimeMethod_var);
		__this->___m_SyncBuffer_26 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SyncBuffer_26), (void*)L_7);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnDisable_mCC080DA2FB83D95B45C2E3C67930A3F95B64FFD2 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppDevice_1_OnDisable_m629CCFCC48D97D3711EBA8467FA1650CDFC7DBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		CompanionAppDevice_1_OnDisable_m629CCFCC48D97D3711EBA8467FA1650CDFC7DBDC(__this, CompanionAppDevice_1_OnDisable_m629CCFCC48D97D3711EBA8467FA1650CDFC7DBDC_RuntimeMethod_var);
		// TimedDataSourceManager.Instance.Unregister(this);
		il2cpp_codegen_runtime_class_init_inline(TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var);
		TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* L_0;
		L_0 = TimedDataSourceManager_get_Instance_m5F498934F9AD58C582C6981535C84CC231926379_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = TimedDataSourceManager_Unregister_m6747AED0E710A9DDCF4CE0A657335B0670F3FBAD(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnValidate_m3A033625605BC97CE333016187D8C8C1B4D87EE4 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// m_Recorder.Validate();
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_0 = __this->___m_Recorder_23;
		NullCheck(L_0);
		FaceDeviceRecorder_Validate_m24D6542D83A005A2E6CBDC0C270C9B306A18DD8D(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDevice::IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDevice_IsReady_mF6DF9F16E2122A08C4F56FDE556986CB9A869F50 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppDevice_1_IsReady_m79321A9769ABB4108F5F81FE2DA683A4EAD652EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return base.IsReady() && m_Actor != null;
		bool L_0;
		L_0 = CompanionAppDevice_1_IsReady_m79321A9769ABB4108F5F81FE2DA683A4EAD652EB(__this, CompanionAppDevice_1_IsReady_m79321A9769ABB4108F5F81FE2DA683A4EAD652EB_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_1 = __this->___m_Actor_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnRecordingChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnRecordingChanged_mA4A0DF15DA17DCA43DDBF72032DC53EDFA84103F (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDevice_U3COnRecordingChangedU3Eb__47_0_m34C40B188234C5C088238192C22DF023830462F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITakeRecorder_tE726622E61EE57C3B3A9FFBAD6F934523E87AE4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (IsRecording())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean Unity.LiveCapture.LiveCaptureDevice::IsRecording() */, __this);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// var takeRecorder = GetTakeRecorder();
		RuntimeObject* L_1;
		L_1 = LiveCaptureDevice_GetTakeRecorder_m8DF43C6315C0046C0777FC63B59B221E1118C534(__this, NULL);
		// var timeOffset = takeRecorder.GetPreviewTime();
		RuntimeObject* L_2 = L_1;
		NullCheck(L_2);
		double L_3;
		L_3 = InterfaceFuncInvoker0< double >::Invoke(11 /* System.Double Unity.LiveCapture.ITakeRecorder::GetPreviewTime() */, ITakeRecorder_tE726622E61EE57C3B3A9FFBAD6F934523E87AE4A_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		// var frameRate = takeRecorder.FrameRate;
		NullCheck(L_2);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_4;
		L_4 = InterfaceFuncInvoker0< FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 >::Invoke(0 /* Unity.LiveCapture.FrameRate Unity.LiveCapture.ITakeRecorder::get_FrameRate() */, ITakeRecorder_tE726622E61EE57C3B3A9FFBAD6F934523E87AE4A_il2cpp_TypeInfo_var, L_2);
		V_1 = L_4;
		// m_Recorder.FrameRate = frameRate;
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_5 = __this->___m_Recorder_23;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_6 = V_1;
		NullCheck(L_5);
		FaceDeviceRecorder_set_FrameRate_m749005996C015C32F51CF84ADBBD7AA1F5F48B2B(L_5, L_6, NULL);
		// m_Recorder.Channels = m_Channels;
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_7 = __this->___m_Recorder_23;
		int32_t L_8 = __this->___m_Channels_18;
		NullCheck(L_7);
		FaceDeviceRecorder_set_Channels_mFD2A2BA45B3DF4D67188DC5A86C4C332AE7527AA_inline(L_7, L_8, NULL);
		// m_Recorder.OnReset = () =>
		// {
		//     m_Recorder.Record(ref m_Pose);
		// };
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_9 = __this->___m_Recorder_23;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)FaceDevice_U3COnRecordingChangedU3Eb__47_0_m34C40B188234C5C088238192C22DF023830462F3_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		FaceDeviceRecorder_set_OnReset_m44FAF0C35D0C2DDDCA4B13EEB22DDBD74FAFE8C0_inline(L_9, L_10, NULL);
		// m_Recorder.Prepare(timeOffset);
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_11 = __this->___m_Recorder_23;
		double L_12 = V_0;
		NullCheck(L_11);
		FaceDeviceRecorder_Prepare_m7183C252C22251C1B6E1C101F8C2D69D5DAEA8D0(L_11, L_12, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.FaceDevice::GetAssetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FaceDevice_GetAssetName_m653E0483F8E2ECCA5B35C6776D361C926A289452 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Actor != null ? m_Actor.name : name;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = __this->___m_Actor_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		return L_2;
	}

IL_0015:
	{
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_3 = __this->___m_Actor_17;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		return L_4;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnClientAssigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnClientAssigned_m9487C813E12AA63D43C40F2DB729F17B9EBD2DBD (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDevice_OnFacePoseSampleReceived_mA7A035890FADF2B4D978A94B14724296E9928EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (TryGetInternalClient(out var client))
		bool L_0;
		L_0 = FaceDevice_TryGetInternalClient_m5A88A3887834CD09DFD3AF5FEA980CF63D08326C(__this, (&V_0), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// client.FacePoseSampleReceived += OnFacePoseSampleReceived;
		RuntimeObject* L_1 = V_0;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_2 = (Action_1_t65E42951F2246B124818430106A38AF664E45C14*)il2cpp_codegen_object_new(Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB(L_2, __this, (intptr_t)((void*)FaceDevice_OnFacePoseSampleReceived_mA7A035890FADF2B4D978A94B14724296E9928EEF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65E42951F2246B124818430106A38AF664E45C14* >::Invoke(0 /* System.Void Unity.LiveCapture.ARKitFaceCapture.IFaceClientInternal::add_FacePoseSampleReceived(System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>) */, IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnClientUnassigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnClientUnassigned_mF43ADB9D267DFE903D01272D6197545ACD6BE705 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDevice_OnFacePoseSampleReceived_mA7A035890FADF2B4D978A94B14724296E9928EEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (TryGetInternalClient(out var client))
		bool L_0;
		L_0 = FaceDevice_TryGetInternalClient_m5A88A3887834CD09DFD3AF5FEA980CF63D08326C(__this, (&V_0), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// client.FacePoseSampleReceived -= OnFacePoseSampleReceived;
		RuntimeObject* L_1 = V_0;
		Action_1_t65E42951F2246B124818430106A38AF664E45C14* L_2 = (Action_1_t65E42951F2246B124818430106A38AF664E45C14*)il2cpp_codegen_object_new(Action_1_t65E42951F2246B124818430106A38AF664E45C14_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mBF1C56C669B390FDA2F8541B7560230E18A85FBB(L_2, __this, (intptr_t)((void*)FaceDevice_OnFacePoseSampleReceived_mA7A035890FADF2B4D978A94B14724296E9928EEF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t65E42951F2246B124818430106A38AF664E45C14* >::Invoke(1 /* System.Void Unity.LiveCapture.ARKitFaceCapture.IFaceClientInternal::remove_FacePoseSampleReceived(System.Action`1<Unity.LiveCapture.ARKitFaceCapture.FaceSample>) */, IFaceClientInternal_tC51EEAB33B9C0307A7EF0C1EFC97556972EE2C60_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnRegisterLiveProperties(Unity.LiveCapture.IPropertyPreviewer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnRegisterLiveProperties_mC73835261E85440FEFF61CA56F5AA0505807DB3E (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, RuntimeObject* ___previewer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisIPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_m1AD75C236475B4F1E2E5E9353AB3AAB58B67CD4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var previewable in m_Actor.GetComponents<IPreviewable>())
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = __this->___m_Actor_17;
		NullCheck(L_0);
		IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1* L_1;
		L_1 = Component_GetComponents_TisIPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_m1AD75C236475B4F1E2E5E9353AB3AAB58B67CD4E(L_0, Component_GetComponents_TisIPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_m1AD75C236475B4F1E2E5E9353AB3AAB58B67CD4E_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_0010:
	{
		// foreach (var previewable in m_Actor.GetComponents<IPreviewable>())
		IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// previewable.Register(previewer);
		RuntimeObject* L_6 = ___previewer0;
		NullCheck(L_5);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Unity.LiveCapture.IPreviewable::Register(Unity.LiveCapture.IPropertyPreviewer) */, IPreviewable_tC02C3034DC9C76B19E109A3DB07CCBAD29242F85_il2cpp_TypeInfo_var, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		// foreach (var previewable in m_Actor.GetComponents<IPreviewable>())
		int32_t L_8 = V_1;
		IPreviewableU5BU5D_t197A94D1CD3DB4BF1EAE2E0BAC31761443FE72D1* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::Write(Unity.LiveCapture.ITakeBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_Write_m2E8662D72DF841CDBA3333C1AA214C442FF72900 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, RuntimeObject* ___takeBuilder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITakeBuilder_t19B16DC3CFCC73FD9195CDBD63041FD6E042CED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DC01C1BA6D0D58EBE15B97D28F08D421C24908);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// if (m_Actor == null || m_Recorder.IsEmpty())
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = __this->___m_Actor_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_2 = __this->___m_Recorder_23;
		NullCheck(L_2);
		bool L_3;
		L_3 = FaceDeviceRecorder_IsEmpty_m6BFD173E0FF100E2E4959998BBBF6F3E044C4C2B(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// double? startTime = IsSynchronized ? m_Recorder.InitialTime : null;
		bool L_4;
		L_4 = FaceDevice_get_IsSynchronized_m3D91B9EC81574591C84CC9FC941934425C9D1FB9_inline(__this, NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_5 = V_1;
		G_B6_0 = L_5;
		goto IL_003a;
	}

IL_002f:
	{
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_6 = __this->___m_Recorder_23;
		NullCheck(L_6);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_7;
		L_7 = FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2_inline(L_6, NULL);
		G_B6_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B6_0;
		// takeBuilder.CreateAnimationTrack(
		//     "Face",
		//     m_Actor.Animator,
		//     m_Recorder.Bake(),
		//     startTime: startTime);
		RuntimeObject* L_8 = ___takeBuilder0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_9 = __this->___m_Actor_17;
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = FaceActor_get_Animator_m38D34A64E8C69274019554D9AAFECA2C5B2019AD_inline(L_9, NULL);
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_11 = __this->___m_Recorder_23;
		NullCheck(L_11);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_12;
		L_12 = FaceDeviceRecorder_Bake_m6DF100846833EB6CF242B536B37AA2215D15EB4A(L_11, NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_13 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker5< String_t*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, RuntimeObject*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 >::Invoke(0 /* System.Void Unity.LiveCapture.ITakeBuilder::CreateAnimationTrack(System.String,UnityEngine.Animator,UnityEngine.AnimationClip,Unity.LiveCapture.ITrackMetadata,System.Nullable`1<System.Double>) */, ITakeBuilder_t19B16DC3CFCC73FD9195CDBD63041FD6E042CED6_il2cpp_TypeInfo_var, L_8, _stringLiteral88DC01C1BA6D0D58EBE15B97D28F08D421C24908, L_10, L_12, (RuntimeObject*)NULL, L_13);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::UpdateDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_UpdateDevice_mD3CD71E88331BADC1D8E8992B45BF6DB82C77D53 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// UpdateClient();
		VirtualActionInvoker0::Invoke(16 /* System.Void Unity.LiveCapture.CompanionApp.CompanionAppDevice`1<Unity.LiveCapture.ARKitFaceCapture.IFaceClient>::UpdateClient() */, __this);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::LiveUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_LiveUpdate_m655C050DEFE7596751E9554FA6CBDC0EE21350ED (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// Present();
		FaceDevice_Present_m2C53E6984D2A65A4F919B3E071776439C10209B0(__this, NULL);
		// if (m_Channels.HasFlag(FaceChannelFlags.BlendShapes))
		int32_t L_0 = __this->___m_Channels_18;
		int32_t L_1 = L_0;
		int32_t L_2 = 1;
		bool L_3 = il2cpp_codegen_enum_has_flag((int32_t)L_1, (int32_t)L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// m_Actor.BlendShapes = m_Pose.BlendShapes;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_4 = __this->___m_Actor_17;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_5 = (&__this->___m_Pose_19);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_6 = L_5->___BlendShapes_1;
		NullCheck(L_4);
		FaceActor_set_BlendShapes_m367764D14E6783671E9CF3512E39A26CCB0E5E52_inline(L_4, L_6, NULL);
	}

IL_0034:
	{
		// if (m_Channels.HasFlag(FaceChannelFlags.HeadPosition))
		int32_t L_7 = __this->___m_Channels_18;
		int32_t L_8 = L_7;
		int32_t L_9 = 2;
		bool L_10 = il2cpp_codegen_enum_has_flag((int32_t)L_8, (int32_t)L_9);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		// m_Actor.HeadPosition = m_Pose.HeadPosition;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_11 = __this->___m_Actor_17;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_12 = (&__this->___m_Pose_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___HeadPosition_2;
		NullCheck(L_11);
		FaceActor_set_HeadPosition_mF2509211B721CEB887D9A1CAB2DC63EE7DF03D16_inline(L_11, L_13, NULL);
	}

IL_0062:
	{
		// if (m_Channels.HasFlag(FaceChannelFlags.HeadRotation))
		int32_t L_14 = __this->___m_Channels_18;
		int32_t L_15 = L_14;
		int32_t L_16 = 4;
		bool L_17 = il2cpp_codegen_enum_has_flag((int32_t)L_15, (int32_t)L_16);
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// m_Actor.HeadOrientation = m_Pose.HeadOrientation.eulerAngles;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_18 = __this->___m_Actor_17;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_19 = (&__this->___m_Pose_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_20 = (&L_19->___HeadOrientation_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_20, NULL);
		NullCheck(L_18);
		FaceActor_set_HeadOrientation_mBFE01868BA35528237375799D5F17842DCCB4F00_inline(L_18, L_21, NULL);
	}

IL_0095:
	{
		// if (m_Channels.HasFlag(FaceChannelFlags.Eyes))
		int32_t L_22 = __this->___m_Channels_18;
		int32_t L_23 = L_22;
		int32_t L_24 = 8;
		bool L_25 = il2cpp_codegen_enum_has_flag((int32_t)L_23, (int32_t)L_24);
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		// m_Actor.LeftEyeOrientation = m_Pose.LeftEyeOrientation.eulerAngles;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_26 = __this->___m_Actor_17;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_27 = (&__this->___m_Pose_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_28 = (&L_27->___LeftEyeOrientation_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_28, NULL);
		NullCheck(L_26);
		FaceActor_set_LeftEyeOrientation_mEB0ADF7AB7E1E0810F10D92D8A6F003939D9635C_inline(L_26, L_29, NULL);
		// m_Actor.RightEyeOrientation = m_Pose.RightEyeOrientation.eulerAngles;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_30 = __this->___m_Actor_17;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_31 = (&__this->___m_Pose_19);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_32 = (&L_31->___RightEyeOrientation_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_32, NULL);
		NullCheck(L_30);
		FaceActor_set_RightEyeOrientation_m9F7FECD4F55A01998D7AEA5B86E804F638853043_inline(L_30, L_33, NULL);
	}

IL_00e3:
	{
		// m_Actor.BlendShapesEnabled = m_Channels.HasFlag(FaceChannelFlags.BlendShapes);
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_34 = __this->___m_Actor_17;
		int32_t L_35 = __this->___m_Channels_18;
		int32_t L_36 = L_35;
		int32_t L_37 = 1;
		bool L_38 = il2cpp_codegen_enum_has_flag((int32_t)L_36, (int32_t)L_37);
		NullCheck(L_34);
		FaceActor_set_BlendShapesEnabled_m6528236DFBB1FC4F068D199B2781ED097F97B9C7_inline(L_34, L_38, NULL);
		// m_Actor.HeadPositionEnabled = m_Channels.HasFlag(FaceChannelFlags.HeadPosition);
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_39 = __this->___m_Actor_17;
		int32_t L_40 = __this->___m_Channels_18;
		int32_t L_41 = L_40;
		int32_t L_42 = 2;
		bool L_43 = il2cpp_codegen_enum_has_flag((int32_t)L_41, (int32_t)L_42);
		NullCheck(L_39);
		FaceActor_set_HeadPositionEnabled_mD75AA798500FCB6CDF787949D2B488055AEB82D5_inline(L_39, L_43, NULL);
		// m_Actor.HeadOrientationEnabled = m_Channels.HasFlag(FaceChannelFlags.HeadRotation);
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_44 = __this->___m_Actor_17;
		int32_t L_45 = __this->___m_Channels_18;
		int32_t L_46 = L_45;
		int32_t L_47 = 4;
		bool L_48 = il2cpp_codegen_enum_has_flag((int32_t)L_46, (int32_t)L_47);
		NullCheck(L_44);
		FaceActor_set_HeadOrientationEnabled_m35DFF7431928FF0A496E839F00810A43B1C8A94D_inline(L_44, L_48, NULL);
		// m_Actor.EyeOrientationEnabled = m_Channels.HasFlag(FaceChannelFlags.Eyes);
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_49 = __this->___m_Actor_17;
		int32_t L_50 = __this->___m_Channels_18;
		int32_t L_51 = L_50;
		int32_t L_52 = 8;
		bool L_53 = il2cpp_codegen_enum_has_flag((int32_t)L_51, (int32_t)L_52);
		NullCheck(L_49);
		FaceActor_set_EyeOrientationEnabled_m13724093F2073EBFB139B687C09777335FAF4AC3_inline(L_49, L_53, NULL);
		// }
		return;
	}
}
// Unity.LiveCapture.TimedSampleStatus Unity.LiveCapture.ARKitFaceCapture.FaceDevice::PresentAt(Unity.LiveCapture.Timecode,Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceDevice_PresentAt_m310FC67BD4FE9E37B9EC60DC78E83512CF6FB0EA (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, Timecode_tC6305561B7EE8D322AC35E87324A4839278EE982 ___timecode0, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var requestedFrameTime = FrameTime.Remap(timecode.ToFrameTime(frameRate), frameRate, m_SyncBuffer.FrameRate);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0 = ___frameRate1;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_1;
		L_1 = Timecode_ToFrameTime_m4D8E53F03C313E2ABAC767BAEC54EC33B6E3F324((&___timecode0), L_0, NULL);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_2 = ___frameRate1;
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_3 = __this->___m_SyncBuffer_26;
		NullCheck(L_3);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_4;
		L_4 = TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_inline(L_3, TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_5;
		L_5 = FrameTime_Remap_mDDC87A4BD894EC514A3D169D2C9C3105D633D17B(L_1, L_2, L_4, NULL);
		V_0 = L_5;
		// m_PresentationFrameTime = requestedFrameTime + PresentationOffset;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_6 = V_0;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_7;
		L_7 = FaceDevice_get_PresentationOffset_m4D7FDCBE8C78CF053CC9BE74B3ABB2972A4DE789_inline(__this, NULL);
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_8;
		L_8 = FrameTime_op_Addition_mD6B4587C026A4246CEB8D42BCBDCAB80A7A1F4E3(L_6, L_7, NULL);
		__this->___m_PresentationFrameTime_27 = L_8;
		// return m_SyncBuffer.TryGetSample(m_PresentationFrameTime, out var _);
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_9 = __this->___m_SyncBuffer_26;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_10 = __this->___m_PresentationFrameTime_27;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5(L_9, L_10, (&V_1), TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::Present()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_Present_m2C53E6984D2A65A4F919B3E071776439C10209B0 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C V_1;
	memset((&V_1), 0, sizeof(V_1));
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	{
		// var delta = (m_PresentationFrameTime - m_CurrentFrameTime).FrameNumber;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_0 = __this->___m_PresentationFrameTime_27;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_1 = __this->___m_CurrentFrameTime_28;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_2;
		L_2 = FrameTime_op_Subtraction_m5AE4E8E7AE9E50857D0B57D214288316980BAC3A(L_0, L_1, NULL);
		V_2 = L_2;
		int32_t L_3;
		L_3 = FrameTime_get_FrameNumber_mCBC404E99B67419686B2957F86DBF0C87FF2AA70_inline((&V_2), NULL);
		V_0 = L_3;
		// if (delta < k_OutOfOrderFrameTolerance || delta > k_MinTimeShiftTolerance)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)-5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)15))))
		{
			goto IL_003b;
		}
	}

IL_0024:
	{
		// m_CurrentFrameTime = m_PresentationFrameTime;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_6 = __this->___m_PresentationFrameTime_27;
		__this->___m_CurrentFrameTime_28 = L_6;
		// m_SyncBuffer.Clear();
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_7 = __this->___m_SyncBuffer_26;
		NullCheck(L_7);
		CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1(L_7, CircularBuffer_1_Clear_mEAA7A0BE32165340DEADDDD675F0198491FCB8E1_RuntimeMethod_var);
	}

IL_003b:
	{
		// if (IsRecording())
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean Unity.LiveCapture.LiveCaptureDevice::IsRecording() */, __this);
		if (!L_8)
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_00b1;
	}

IL_0048:
	{
		// if (m_SyncBuffer.TryGetSample(m_CurrentFrameTime, out var facePose) == TimedSampleStatus.Ok)
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_9 = __this->___m_SyncBuffer_26;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_10 = __this->___m_CurrentFrameTime_28;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5(L_9, L_10, (&V_3), TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_00a0;
		}
	}
	{
		// var time = m_CurrentFrameTime.ToSeconds(m_SyncBuffer.FrameRate);
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* L_12 = (&__this->___m_CurrentFrameTime_28);
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_13 = __this->___m_SyncBuffer_26;
		NullCheck(L_13);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_14;
		L_14 = TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_inline(L_13, TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		double L_15;
		L_15 = FrameTime_ToSeconds_mC18D775189165B6A190D9A596668DD7E15EF8790(L_12, L_14, NULL);
		V_4 = L_15;
		// m_Recorder.Channels = m_Channels;
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_16 = __this->___m_Recorder_23;
		int32_t L_17 = __this->___m_Channels_18;
		NullCheck(L_16);
		FaceDeviceRecorder_set_Channels_mFD2A2BA45B3DF4D67188DC5A86C4C332AE7527AA_inline(L_16, L_17, NULL);
		// m_Recorder.Update(time);
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_18 = __this->___m_Recorder_23;
		double L_19 = V_4;
		NullCheck(L_18);
		FaceDeviceRecorder_Update_mC2D525E5AFDABDE9FF05C2E2AF839FADAEBBBEDD(L_18, L_19, NULL);
		// m_Recorder.Record(ref facePose);
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_20 = __this->___m_Recorder_23;
		NullCheck(L_20);
		FaceDeviceRecorder_Record_mD9D17D1CBD8C8432B567547684BDD875BE6EDF11(L_20, (&V_3), NULL);
	}

IL_00a0:
	{
		// m_CurrentFrameTime++;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_21 = __this->___m_CurrentFrameTime_28;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_22;
		L_22 = FrameTime_op_Increment_m8CB0173BACCC648F69556E54DA48BE2A113F05D0(L_21, NULL);
		__this->___m_CurrentFrameTime_28 = L_22;
	}

IL_00b1:
	{
		// while (m_CurrentFrameTime <= m_PresentationFrameTime)
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_23 = __this->___m_CurrentFrameTime_28;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_24 = __this->___m_PresentationFrameTime_27;
		bool L_25;
		L_25 = FrameTime_op_LessThanOrEqual_mAB60E3178143621CF3140EDA35EC20C1BB413AAE(L_23, L_24, NULL);
		if (L_25)
		{
			goto IL_0048;
		}
	}
	{
		goto IL_00e3;
	}

IL_00c6:
	{
		// m_CurrentFrameTime = m_PresentationFrameTime;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_26 = __this->___m_PresentationFrameTime_27;
		__this->___m_CurrentFrameTime_28 = L_26;
		// m_CurrentFrameTime++;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_27 = __this->___m_CurrentFrameTime_28;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_28;
		L_28 = FrameTime_op_Increment_m8CB0173BACCC648F69556E54DA48BE2A113F05D0(L_27, NULL);
		__this->___m_CurrentFrameTime_28 = L_28;
	}

IL_00e3:
	{
		// if (m_SyncBuffer.TryGetSample(m_PresentationFrameTime, out var pose) != TimedSampleStatus.DataMissing)
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_29 = __this->___m_SyncBuffer_26;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_30 = __this->___m_PresentationFrameTime_27;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5(L_29, L_30, (&V_1), TimedDataBuffer_1_TryGetSample_m2F13FE3911F9736AF2F05451B942948AB14020D5_RuntimeMethod_var);
		if ((((int32_t)L_31) == ((int32_t)3)))
		{
			goto IL_0100;
		}
	}
	{
		// m_Pose = pose;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_32 = V_1;
		__this->___m_Pose_19 = L_32;
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::OnFacePoseSampleReceived(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_OnFacePoseSampleReceived_mA7A035890FADF2B4D978A94B14724296E9928EEF (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsSynchronized)
		bool L_0;
		L_0 = FaceDevice_get_IsSynchronized_m3D91B9EC81574591C84CC9FC941934425C9D1FB9_inline(__this, NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// m_PresentationFrameTime = FrameTime.FromSeconds(m_SyncBuffer.FrameRate, sample.Time);
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_1 = __this->___m_SyncBuffer_26;
		NullCheck(L_1);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_2;
		L_2 = TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_inline(L_1, TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_RuntimeMethod_var);
		double L_3;
		L_3 = FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline((&___sample0), NULL);
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_4;
		L_4 = FrameTime_FromSeconds_mEDEEFCF2ECD780702683DFA082DB97D42143805B(L_2, L_3, ((int32_t)51200), NULL);
		__this->___m_PresentationFrameTime_27 = L_4;
	}

IL_002a:
	{
		// var frameTime = FrameTime.FromSeconds(k_SyncBufferNominalFrameRate, sample.Time);
		il2cpp_codegen_runtime_class_init_inline(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_5 = ((FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_StaticFields*)il2cpp_codegen_static_fields_for(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var))->___k_SyncBufferNominalFrameRate_24;
		double L_6;
		L_6 = FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline((&___sample0), NULL);
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_7;
		L_7 = FrameTime_FromSeconds_mEDEEFCF2ECD780702683DFA082DB97D42143805B(L_5, L_6, ((int32_t)51200), NULL);
		V_0 = L_7;
		// m_SyncBuffer.Add(frameTime, k_SyncBufferNominalFrameRate, sample.FacePose);
		TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* L_8 = __this->___m_SyncBuffer_26;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_9 = V_0;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_10 = ((FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_StaticFields*)il2cpp_codegen_static_fields_for(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var))->___k_SyncBufferNominalFrameRate_24;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_11 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_12 = L_11.___FacePose_1;
		NullCheck(L_8);
		TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4(L_8, L_9, L_10, L_12, TimedDataBuffer_1_Add_m1EA4C2C1DA5B8068DCA9DD8A02CCE0C4903913B4_RuntimeMethod_var);
		// Refresh();
		LiveCaptureDevice_Refresh_mAD3C39521C5E3EC6DBD45539502BA200E28C6541(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice__ctor_m751472A88482A6079211323A9F438792B9A6B718 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppDevice_1__ctor_m46799B5D6063660AF88BCC361E8A686C22E07850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FaceChannelFlags m_Channels = FaceChannelFlags.All;
		__this->___m_Channels_18 = (-1);
		// FacePose m_Pose = FacePose.Identity;
		il2cpp_codegen_runtime_class_init_inline(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_0;
		L_0 = FacePose_get_Identity_mA875106D8CC95EC9E8080322064385037F417D86_inline(NULL);
		__this->___m_Pose_19 = L_0;
		// int m_BufferSize = 3;
		__this->___m_BufferSize_22 = 3;
		// FaceDeviceRecorder m_Recorder = new FaceDeviceRecorder();
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_1 = (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776*)il2cpp_codegen_object_new(FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FaceDeviceRecorder__ctor_m41A7DC65993C3448EB3AF721862D8CC16424651A(L_1, NULL);
		__this->___m_Recorder_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Recorder_23), (void*)L_1);
		CompanionAppDevice_1__ctor_m46799B5D6063660AF88BCC361E8A686C22E07850(__this, CompanionAppDevice_1__ctor_m46799B5D6063660AF88BCC361E8A686C22E07850_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice__cctor_mED9AB79DCE041AB3402D1612564BB15A8EEAEBF0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly FrameRate k_SyncBufferNominalFrameRate = StandardFrameRate.FPS_60_00;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0;
		L_0 = FrameRate_op_Implicit_m2C2D70432734EBF6171ECA49EB5AC9DF3972D9A5(((int32_t)10), NULL);
		((FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_StaticFields*)il2cpp_codegen_static_fields_for(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var))->___k_SyncBufferNominalFrameRate_24 = L_0;
		// static readonly FrameTime k_OutOfOrderTolerance = new FrameTime(3);
		il2cpp_codegen_initobj((&V_0), sizeof(Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5));
		Subframe_t621525010F5D2F8CD4733907500FA07A3B22C8A5 L_1 = V_0;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_2;
		memset((&L_2), 0, sizeof(L_2));
		FrameTime__ctor_m83C3C64C18335587D4ECA5163C605A50947BE206((&L_2), 3, L_1, /*hidden argument*/NULL);
		((FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_StaticFields*)il2cpp_codegen_static_fields_for(FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468_il2cpp_TypeInfo_var))->___k_OutOfOrderTolerance_25 = L_2;
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDevice::<OnRecordingChanged>b__47_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDevice_U3COnRecordingChangedU3Eb__47_0_m34C40B188234C5C088238192C22DF023830462F3 (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// m_Recorder.Record(ref m_Pose);
		FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* L_0 = __this->___m_Recorder_23;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_1 = (&__this->___m_Pose_19);
		NullCheck(L_0);
		FaceDeviceRecorder_Record_mD9D17D1CBD8C8432B567547684BDD875BE6EDF11(L_0, L_1, NULL);
		// };
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
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_PositionError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_PositionError_m592BE519CBA2DBCCDA7D19C7B1ACA76ECF6FDF18 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PositionError;
		float L_0 = __this->___m_PositionError_1;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_PositionError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_PositionError_mE8F233A465A04DDDC334473F01250133498A63CD (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PositionError = value;
		float L_0 = ___value0;
		__this->___m_PositionError_1 = L_0;
		return;
	}
}
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_RotationError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_RotationError_m94F72E2C9165A693217CE72BCFEE76F0E4B96033 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RotationError;
		float L_0 = __this->___m_RotationError_2;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_RotationError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_RotationError_mDDAAD69A008F1D1F0281C5D15C15776DD8183F55 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RotationError = value;
		float L_0 = ___value0;
		__this->___m_RotationError_2 = L_0;
		return;
	}
}
// System.Single Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_BlendShapeError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_BlendShapeError_m53B8030B80EC185C940DE6E334A655B255682EA9 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BlendShapeError;
		float L_0 = __this->___m_BlendShapeError_3;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_BlendShapeError(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_BlendShapeError_mC30404E9728EBEA4E78FF66A22DF466D7801524A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BlendShapeError = value;
		float L_0 = ___value0;
		__this->___m_BlendShapeError_3 = L_0;
		return;
	}
}
// System.Nullable`1<System.Double> Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_InitialTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double? InitialTime { get; private set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CInitialTimeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_InitialTime(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_InitialTime_mEE3A6970E7A1681B68C45DD7478B7D6003EF3E8B (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// public double? InitialTime { get; private set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CInitialTimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_Time_m25B457F156DB91417439AF2D4FB490065AF470C2 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double Time { get; private set; }
		double L_0 = __this->___U3CTimeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_Time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_Time_m85D9A261545AAA4628DFF7A1A93B00D58FABC303 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Time { get; private set; }
		double L_0 = ___value0;
		__this->___U3CTimeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_ElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_ElapsedTime_m26587C644AB4CFFF00E05BB881A6F90AC2FE81CA (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public double ElapsedTime => InitialTime.HasValue ? Time - InitialTime.Value : 0d;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0;
		L_0 = FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		return (0.0);
	}

IL_001a:
	{
		double L_2;
		L_2 = FaceDeviceRecorder_get_Time_m25B457F156DB91417439AF2D4FB490065AF470C2_inline(__this, NULL);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
		L_3 = FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2_inline(__this, NULL);
		V_0 = L_3;
		double L_4;
		L_4 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&V_0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		return ((double)il2cpp_codegen_subtract(L_2, L_4));
	}
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_TimeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_TimeOffset_mB0B784EBD827B16598DE23BECDB9689F296594C3 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double TimeOffset { get; private set; }
		double L_0 = __this->___U3CTimeOffsetU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_TimeOffset(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_TimeOffset_m18F2E0AA20D095709FCCE2013DE46AD9B4E2750B (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double TimeOffset { get; private set; }
		double L_0 = ___value0;
		__this->___U3CTimeOffsetU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Double Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_RecordingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double RecordingTime => ElapsedTime + TimeOffset;
		double L_0;
		L_0 = FaceDeviceRecorder_get_ElapsedTime_m26587C644AB4CFFF00E05BB881A6F90AC2FE81CA(__this, NULL);
		double L_1;
		L_1 = FaceDeviceRecorder_get_TimeOffset_mB0B784EBD827B16598DE23BECDB9689F296594C3_inline(__this, NULL);
		return ((double)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Action Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_OnReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* FaceDeviceRecorder_get_OnReset_mCEA65CD2332BABD2CA8491AF176E5013562A48E2 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public Action OnReset { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COnResetU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_OnReset(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_OnReset_m44FAF0C35D0C2DDDCA4B13EEB22DDBD74FAFE8C0 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action OnReset { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___value0;
		__this->___U3COnResetU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResetU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public FaceChannelFlags Channels { get; set; }
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_Channels(Unity.LiveCapture.ARKitFaceCapture.FaceChannelFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_Channels_mFD2A2BA45B3DF4D67188DC5A86C4C332AE7527AA (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FaceChannelFlags Channels { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CChannelsU3Ek__BackingField_8 = L_0;
		return;
	}
}
// Unity.LiveCapture.FrameRate Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 FaceDeviceRecorder_get_FrameRate_mF1D2E177FE84FC9375E3AA266E5AA9CF200AA953 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => m_Curves[0].FrameRate;
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_0 = __this->___m_Curves_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_3;
		L_3 = InterfaceFuncInvoker0< FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 >::Invoke(3 /* Unity.LiveCapture.FrameRate Unity.LiveCapture.ICurve::get_FrameRate() */, ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::set_FrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_FrameRate_m749005996C015C32F51CF84ADBBD7AA1F5F48B2B (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// curve.FrameRate = value;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_5 = ___value0;
		NullCheck(L_4);
		InterfaceActionInvoker1< FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 >::Invoke(4 /* System.Void Unity.LiveCapture.ICurve::set_FrameRate(Unity.LiveCapture.FrameRate) */, ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var, L_4, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0018:
	{
		// foreach (var curve in m_Curves)
		int32_t L_7 = V_1;
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Validate_m24D6542D83A005A2E6CBDC0C270C9B306A18DD8D (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// m_PositionError = Mathf.Clamp(m_PositionError, 0f, 100f);
		float L_0 = __this->___m_PositionError_1;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (100.0f), NULL);
		__this->___m_PositionError_1 = L_1;
		// m_RotationError = Mathf.Clamp(m_RotationError, 0f, 10f);
		float L_2 = __this->___m_RotationError_2;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (10.0f), NULL);
		__this->___m_RotationError_2 = L_3;
		// m_BlendShapeError = Mathf.Clamp(m_BlendShapeError, 0f, 100f);
		float L_4 = __this->___m_BlendShapeError_3;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (100.0f), NULL);
		__this->___m_BlendShapeError_3 = L_5;
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceDeviceRecorder_IsEmpty_m6BFD173E0FF100E2E4959998BBBF6F3E044C4C2B (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (!curve.IsEmpty())
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean Unity.LiveCapture.ICurve::IsEmpty() */, ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		// foreach (var curve in m_Curves)
		int32_t L_7 = V_1;
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Update(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Update_mC2D525E5AFDABDE9FF05C2E2AF839FADAEBBBEDD (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Time = time;
		double L_0 = ___time0;
		FaceDeviceRecorder_set_Time_m85D9A261545AAA4628DFF7A1A93B00D58FABC303_inline(__this, L_0, NULL);
		// if (ElapsedTime < 0d)
		double L_1;
		L_1 = FaceDeviceRecorder_get_ElapsedTime_m26587C644AB4CFFF00E05BB881A6F90AC2FE81CA(__this, NULL);
		if ((!(((double)L_1) < ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		// InitialTime = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = V_0;
		FaceDeviceRecorder_set_InitialTime_mEE3A6970E7A1681B68C45DD7478B7D6003EF3E8B_inline(__this, L_2, NULL);
	}

IL_0027:
	{
		// if (!InitialTime.HasValue)
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
		L_3 = FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2_inline(__this, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		// InitialTime = time;
		double L_5 = ___time0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		FaceDeviceRecorder_set_InitialTime_mEE3A6970E7A1681B68C45DD7478B7D6003EF3E8B_inline(__this, L_6, NULL);
		// Reset();
		FaceDeviceRecorder_Reset_mD44B26B590BC80BCAD3AF513F79201F9FD55899A(__this, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Prepare(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Prepare_m7183C252C22251C1B6E1C101F8C2D69D5DAEA8D0 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___timeOffset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InitialTime = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = V_0;
		FaceDeviceRecorder_set_InitialTime_mEE3A6970E7A1681B68C45DD7478B7D6003EF3E8B_inline(__this, L_0, NULL);
		// Time = 0d;
		FaceDeviceRecorder_set_Time_m85D9A261545AAA4628DFF7A1A93B00D58FABC303_inline(__this, (0.0), NULL);
		// TimeOffset = timeOffset;
		double L_1 = ___timeOffset0;
		FaceDeviceRecorder_set_TimeOffset_m18F2E0AA20D095709FCCE2013DE46AD9B4E2750B_inline(__this, L_1, NULL);
		// GetReduceable(0).MaxError = BlendShapeError / 100f;
		RuntimeObject* L_2;
		L_2 = FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502(__this, 0, NULL);
		float L_3;
		L_3 = FaceDeviceRecorder_get_BlendShapeError_m53B8030B80EC185C940DE6E334A655B255682EA9_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< float >::Invoke(1 /* System.Void Unity.LiveCapture.IReduceableCurve::set_MaxError(System.Single) */, IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var, L_2, ((float)(L_3/(100.0f))));
		// GetReduceable(1).MaxError = PositionError / 100f;
		RuntimeObject* L_4;
		L_4 = FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502(__this, 1, NULL);
		float L_5;
		L_5 = FaceDeviceRecorder_get_PositionError_m592BE519CBA2DBCCDA7D19C7B1ACA76ECF6FDF18_inline(__this, NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< float >::Invoke(1 /* System.Void Unity.LiveCapture.IReduceableCurve::set_MaxError(System.Single) */, IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var, L_4, ((float)(L_5/(100.0f))));
		// GetReduceable(2).MaxError = RotationError;
		RuntimeObject* L_6;
		L_6 = FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502(__this, 2, NULL);
		float L_7;
		L_7 = FaceDeviceRecorder_get_RotationError_m94F72E2C9165A693217CE72BCFEE76F0E4B96033_inline(__this, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< float >::Invoke(1 /* System.Void Unity.LiveCapture.IReduceableCurve::set_MaxError(System.Single) */, IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var, L_6, L_7);
		// GetReduceable(3).MaxError = RotationError;
		RuntimeObject* L_8;
		L_8 = FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502(__this, 3, NULL);
		float L_9;
		L_9 = FaceDeviceRecorder_get_RotationError_m94F72E2C9165A693217CE72BCFEE76F0E4B96033_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< float >::Invoke(1 /* System.Void Unity.LiveCapture.IReduceableCurve::set_MaxError(System.Single) */, IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var, L_8, L_9);
		// GetReduceable(4).MaxError = RotationError;
		RuntimeObject* L_10;
		L_10 = FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502(__this, 4, NULL);
		float L_11;
		L_11 = FaceDeviceRecorder_get_RotationError_m94F72E2C9165A693217CE72BCFEE76F0E4B96033_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< float >::Invoke(1 /* System.Void Unity.LiveCapture.IReduceableCurve::set_MaxError(System.Single) */, IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var, L_10, L_11);
		// Reset();
		FaceDeviceRecorder_Reset_mD44B26B590BC80BCAD3AF513F79201F9FD55899A(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Reset_mD44B26B590BC80BCAD3AF513F79201F9FD55899A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* V_0 = NULL;
	int32_t V_1 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_0 = __this->___m_Curves_0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// curve.Clear();
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Unity.LiveCapture.ICurve::Clear() */, ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var, L_4);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (var curve in m_Curves)
		int32_t L_6 = V_1;
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// OnReset?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = FaceDeviceRecorder_get_OnReset_mCEA65CD2332BABD2CA8491AF176E5013562A48E2_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		NullCheck(G_B5_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Record(Unity.LiveCapture.ARKitFaceCapture.FacePose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder_Record_mD9D17D1CBD8C8432B567547684BDD875BE6EDF11 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* ___sample0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_1_tB0D648BA629FA2E0DF45AAE6833C81928146BC03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_1_tD125C4ED6FE11EA5535711A507D2361C4CE66957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Channels.HasFlag(FaceChannelFlags.BlendShapes))
		int32_t L_0;
		L_0 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_1 = L_0;
		int32_t L_2 = 1;
		bool L_3 = il2cpp_codegen_enum_has_flag((int32_t)L_1, (int32_t)L_2);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// (GetCurve<FaceBlendShapePose>(0) as FaceBlendShapeCurves).AddKey(RecordingTime, ref sample.BlendShapes);
		RuntimeObject* L_4;
		L_4 = FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA(__this, 0, FaceDeviceRecorder_GetCurve_TisFaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_m027B75A3E46380FE4ADCC4B138B6DECA96EE8FEA_RuntimeMethod_var);
		double L_5;
		L_5 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_6 = ___sample0;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_7 = (&L_6->___BlendShapes_1);
		NullCheck(((FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E*)IsInstClass((RuntimeObject*)L_4, FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E_il2cpp_TypeInfo_var)));
		FaceBlendShapeCurves_AddKey_mFB79201DC9D62290648CDFF607BD9DF50C38D7DC(((FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E*)IsInstClass((RuntimeObject*)L_4, FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E_il2cpp_TypeInfo_var)), L_5, L_7, NULL);
	}

IL_0035:
	{
		// if (Channels.HasFlag(FaceChannelFlags.HeadPosition))
		int32_t L_8;
		L_8 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_9 = L_8;
		int32_t L_10 = 2;
		bool L_11 = il2cpp_codegen_enum_has_flag((int32_t)L_9, (int32_t)L_10);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// GetCurve<Vector3>(1).AddKey(RecordingTime, sample.HeadPosition);
		RuntimeObject* L_12;
		L_12 = FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD(__this, 1, FaceDeviceRecorder_GetCurve_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m48F51DF080CD96551F4461E96EC2BF1F37105CCD_RuntimeMethod_var);
		double L_13;
		L_13 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_14 = ___sample0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___HeadPosition_2;
		NullCheck(L_12);
		InterfaceActionInvoker2< double, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<UnityEngine.Vector3>::AddKey(System.Double,T) */, ICurve_1_tB0D648BA629FA2E0DF45AAE6833C81928146BC03_il2cpp_TypeInfo_var, L_12, L_13, L_15);
	}

IL_0065:
	{
		// if (Channels.HasFlag(FaceChannelFlags.HeadRotation))
		int32_t L_16;
		L_16 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_17 = L_16;
		int32_t L_18 = 4;
		bool L_19 = il2cpp_codegen_enum_has_flag((int32_t)L_17, (int32_t)L_18);
		if (!L_19)
		{
			goto IL_0095;
		}
	}
	{
		// GetCurve<Quaternion>(2).AddKey(RecordingTime, sample.HeadOrientation);
		RuntimeObject* L_20;
		L_20 = FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E(__this, 2, FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_RuntimeMethod_var);
		double L_21;
		L_21 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_22 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22->___HeadOrientation_3;
		NullCheck(L_20);
		InterfaceActionInvoker2< double, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<UnityEngine.Quaternion>::AddKey(System.Double,T) */, ICurve_1_tD125C4ED6FE11EA5535711A507D2361C4CE66957_il2cpp_TypeInfo_var, L_20, L_21, L_23);
	}

IL_0095:
	{
		// if (Channels.HasFlag(FaceChannelFlags.Eyes))
		int32_t L_24;
		L_24 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_25 = L_24;
		int32_t L_26 = 8;
		bool L_27 = il2cpp_codegen_enum_has_flag((int32_t)L_25, (int32_t)L_26);
		if (!L_27)
		{
			goto IL_00dd;
		}
	}
	{
		// GetCurve<Quaternion>(3).AddKey(RecordingTime, sample.LeftEyeOrientation);
		RuntimeObject* L_28;
		L_28 = FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E(__this, 3, FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_RuntimeMethod_var);
		double L_29;
		L_29 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_30 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = L_30->___LeftEyeOrientation_4;
		NullCheck(L_28);
		InterfaceActionInvoker2< double, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<UnityEngine.Quaternion>::AddKey(System.Double,T) */, ICurve_1_tD125C4ED6FE11EA5535711A507D2361C4CE66957_il2cpp_TypeInfo_var, L_28, L_29, L_31);
		// GetCurve<Quaternion>(4).AddKey(RecordingTime, sample.RightEyeOrientation);
		RuntimeObject* L_32;
		L_32 = FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E(__this, 4, FaceDeviceRecorder_GetCurve_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m833793C1E1558A4F130E31CC706F37F19944773E_RuntimeMethod_var);
		double L_33;
		L_33 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C* L_34 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = L_34->___RightEyeOrientation_5;
		NullCheck(L_32);
		InterfaceActionInvoker2< double, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<UnityEngine.Quaternion>::AddKey(System.Double,T) */, ICurve_1_tD125C4ED6FE11EA5535711A507D2361C4CE66957_il2cpp_TypeInfo_var, L_32, L_33, L_35);
	}

IL_00dd:
	{
		// GetCurve<bool>(5).AddKey(RecordingTime, Channels.HasFlag(FaceChannelFlags.BlendShapes));
		RuntimeObject* L_36;
		L_36 = FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F(__this, 5, FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_RuntimeMethod_var);
		double L_37;
		L_37 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		int32_t L_38;
		L_38 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_39 = L_38;
		int32_t L_40 = 1;
		bool L_41 = il2cpp_codegen_enum_has_flag((int32_t)L_39, (int32_t)L_40);
		NullCheck(L_36);
		InterfaceActionInvoker2< double, bool >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<System.Boolean>::AddKey(System.Double,T) */, ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491_il2cpp_TypeInfo_var, L_36, L_37, L_41);
		// GetCurve<bool>(6).AddKey(RecordingTime, Channels.HasFlag(FaceChannelFlags.HeadPosition));
		RuntimeObject* L_42;
		L_42 = FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F(__this, 6, FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_RuntimeMethod_var);
		double L_43;
		L_43 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		int32_t L_44;
		L_44 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_45 = L_44;
		int32_t L_46 = 2;
		bool L_47 = il2cpp_codegen_enum_has_flag((int32_t)L_45, (int32_t)L_46);
		NullCheck(L_42);
		InterfaceActionInvoker2< double, bool >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<System.Boolean>::AddKey(System.Double,T) */, ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491_il2cpp_TypeInfo_var, L_42, L_43, L_47);
		// GetCurve<bool>(7).AddKey(RecordingTime, Channels.HasFlag(FaceChannelFlags.HeadRotation));
		RuntimeObject* L_48;
		L_48 = FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F(__this, 7, FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_RuntimeMethod_var);
		double L_49;
		L_49 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		int32_t L_50;
		L_50 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_51 = L_50;
		int32_t L_52 = 4;
		bool L_53 = il2cpp_codegen_enum_has_flag((int32_t)L_51, (int32_t)L_52);
		NullCheck(L_48);
		InterfaceActionInvoker2< double, bool >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<System.Boolean>::AddKey(System.Double,T) */, ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491_il2cpp_TypeInfo_var, L_48, L_49, L_53);
		// GetCurve<bool>(8).AddKey(RecordingTime, Channels.HasFlag(FaceChannelFlags.Eyes));
		RuntimeObject* L_54;
		L_54 = FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F(__this, 8, FaceDeviceRecorder_GetCurve_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD3196ED67A1BD5D37D3059D11D800D966A8CCE9F_RuntimeMethod_var);
		double L_55;
		L_55 = FaceDeviceRecorder_get_RecordingTime_mB1F98488A5FE9EC342C8186B694EA7CA6A450F9A(__this, NULL);
		int32_t L_56;
		L_56 = FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline(__this, NULL);
		int32_t L_57 = L_56;
		int32_t L_58 = 8;
		bool L_59 = il2cpp_codegen_enum_has_flag((int32_t)L_57, (int32_t)L_58);
		NullCheck(L_54);
		InterfaceActionInvoker2< double, bool >::Invoke(0 /* System.Void Unity.LiveCapture.ICurve`1<System.Boolean>::AddKey(System.Double,T) */, ICurve_1_tBEF2F039EC968F8B8DB06591FC2CBD4B4CA83491_il2cpp_TypeInfo_var, L_54, L_55, L_59);
		// }
		return;
	}
}
// UnityEngine.AnimationClip Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::Bake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* FaceDeviceRecorder_Bake_m6DF100846833EB6CF242B536B37AA2215D15EB4A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_0 = NULL;
	ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var animationClip = new AnimationClip();
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*)il2cpp_codegen_object_new(AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79(L_0, NULL);
		V_0 = L_0;
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_1 = __this->___m_Curves_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		// foreach (var curve in m_Curves)
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// curve.SetToAnimationClip(animationClip);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker1< AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* >::Invoke(7 /* System.Void Unity.LiveCapture.ICurve::SetToAnimationClip(UnityEngine.AnimationClip) */, ICurve_t5A065D6F7368A5E9B3D1CF8F92D73980AC97B7D5_il2cpp_TypeInfo_var, L_5, L_6);
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		// foreach (var curve in m_Curves)
		int32_t L_8 = V_2;
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// return animationClip;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_10 = V_0;
		return L_10;
	}
}
// Unity.LiveCapture.IReduceableCurve Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::GetReduceable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FaceDeviceRecorder_GetReduceable_mE53A3A03C9AA7BEEEBEBDFCC7CB092E8A5E5E502 (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Curves[index] as IReduceableCurve;
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_0 = __this->___m_Curves_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IReduceableCurve_tB7A0EFCDE905CF9AF82E0E3520F67B65EB1FC8F3_il2cpp_TypeInfo_var));
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceDeviceRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceDeviceRecorder__ctor_m41A7DC65993C3448EB3AF721862D8CC16424651A (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral060CFB0EBDB0486CB7CE70B72C56BBB262D50347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5928331B64E0680322A4405881B8FBD1D2393E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E2B60007097B5B8625B33F7372CC863EED32536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4AC4A2EE341427495904E61A14250D7A00DEBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3341594AD1B01F5A7AC41BA19590945E9EE2D6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E21F54B8DF43E66261C0740D413CC234F14F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4093BB231AF678908291A015F39320B02034802);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7E56C481ACAB0E1E2465C85EA893CF5F476BE67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD5F7078CF0ED7B5F5F6AE6E7A114C0775E89C16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ICurve[] m_Curves =
		// {
		//     new FaceBlendShapeCurves(string.Empty, FaceActor.PropertyNames.BlendShapes, typeof(FaceActor)),
		//     new Vector3Curve(string.Empty, FaceActor.PropertyNames.HeadPosition, typeof(FaceActor)),
		//     new EulerCurve(string.Empty, FaceActor.PropertyNames.HeadOrientation, typeof(FaceActor)),
		//     new EulerCurve(string.Empty, FaceActor.PropertyNames.LeftEyeOrientation, typeof(FaceActor)),
		//     new EulerCurve(string.Empty, FaceActor.PropertyNames.RightEyeOrientation, typeof(FaceActor)),
		//     new BooleanCurve(string.Empty, FaceActor.PropertyNames.BlendShapesEnabled, typeof(FaceActor)),
		//     new BooleanCurve(string.Empty, FaceActor.PropertyNames.HeadPositionEnabled, typeof(FaceActor)),
		//     new BooleanCurve(string.Empty, FaceActor.PropertyNames.HeadOrientationEnabled, typeof(FaceActor)),
		//     new BooleanCurve(string.Empty, FaceActor.PropertyNames.EyeOrientationEnabled, typeof(FaceActor)),
		// };
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_0 = (ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506*)(ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506*)SZArrayNew(ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_1 = L_0;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E* L_5 = (FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E*)il2cpp_codegen_object_new(FaceBlendShapeCurves_tA2DD519C6F33D5C3707B24E574920CDD622F313E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FaceBlendShapeCurves__ctor_m7666FD11E16D9B52F455F16BD7251A5756AE1C88(L_5, L_2, _stringLiteralB3E21F54B8DF43E66261C0740D413CC234F14F98, L_4, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_6 = L_1;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50* L_10 = (Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50*)il2cpp_codegen_object_new(Vector3Curve_tD9E112FB3A3E064FF11EC4A12F98DEAB48664D50_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Vector3Curve__ctor_m52F39AC8198602582952FBBDEBD7725EA0B676DB(L_10, L_7, _stringLiteralA3341594AD1B01F5A7AC41BA19590945E9EE2D6B, L_9, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_11 = L_6;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333* L_15 = (EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333*)il2cpp_codegen_object_new(EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EulerCurve__ctor_m173718548654B745A423C5FF38CA4CFBAA2F00A3(L_15, L_12, _stringLiteral060CFB0EBDB0486CB7CE70B72C56BBB262D50347, L_14, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_16 = L_11;
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333* L_20 = (EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333*)il2cpp_codegen_object_new(EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		EulerCurve__ctor_m173718548654B745A423C5FF38CA4CFBAA2F00A3(L_20, L_17, _stringLiteralD4093BB231AF678908291A015F39320B02034802, L_19, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_21 = L_16;
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333* L_25 = (EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333*)il2cpp_codegen_object_new(EulerCurve_t717AD00CC9D166D1EA46B709252C68CCF3857333_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		EulerCurve__ctor_m173718548654B745A423C5FF38CA4CFBAA2F00A3(L_25, L_22, _stringLiteralFD5F7078CF0ED7B5F5F6AE6E7A114C0775E89C16, L_24, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_25);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_26 = L_21;
		String_t* L_27 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18* L_30 = (BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18*)il2cpp_codegen_object_new(BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		BooleanCurve__ctor_m183761764803F7E352B62A7D211BC6776FC297D7(L_30, L_27, _stringLiteral5928331B64E0680322A4405881B8FBD1D2393E5B, L_29, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_30);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_31 = L_26;
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18* L_35 = (BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18*)il2cpp_codegen_object_new(BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		BooleanCurve__ctor_m183761764803F7E352B62A7D211BC6776FC297D7(L_35, L_32, _stringLiteral8A4AC4A2EE341427495904E61A14250D7A00DEBF, L_34, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_35);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_36 = L_31;
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18* L_40 = (BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18*)il2cpp_codegen_object_new(BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		BooleanCurve__ctor_m183761764803F7E352B62A7D211BC6776FC297D7(L_40, L_37, _stringLiteralE7E56C481ACAB0E1E2465C85EA893CF5F476BE67, L_39, NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_40);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_40);
		ICurveU5BU5D_t05B04679E34C1CE68943592898541EF0F44DD506* L_41 = L_36;
		String_t* L_42 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D_0_0_0_var) };
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18* L_45 = (BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18*)il2cpp_codegen_object_new(BooleanCurve_tD5AD54E5FA2657FFF8D67D0811ED69073047ED18_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		BooleanCurve__ctor_m183761764803F7E352B62A7D211BC6776FC297D7(L_45, L_42, _stringLiteral7E2B60007097B5B8625B33F7372CC863EED32536, L_44, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_45);
		__this->___m_Curves_0 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Curves_0), (void*)L_41);
		// float m_PositionError = 0.5f;
		__this->___m_PositionError_1 = (0.5f);
		// float m_RotationError = 0.5f;
		__this->___m_RotationError_2 = (0.5f);
		// float m_BlendShapeError = 0.5f;
		__this->___m_BlendShapeError_3 = (0.5f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache Unity.LiveCapture.ARKitFaceCapture.FaceMapper::CreateCache(Unity.LiveCapture.ARKitFaceCapture.FaceActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* FaceMapper_CreateCache_m9209D39F2F3AC3611A8C8AA8B4A7236795C73784 (FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, const RuntimeMethod* method) 
{
	{
		// return null;
		return (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18*)NULL;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::RegisterPreviewableProperties(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.IPropertyPreviewer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapper_RegisterPreviewableProperties_mBE65121077482E8F12242E181819FDFC38C31070 (FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___cache1, RuntimeObject* ___previewer2, const RuntimeMethod* method) 
{
	{
		// ) {}
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapper__ctor_m81864289E9C0B65DEDD20939032F6692DB4BA78D (FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::get_Disposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FaceMapperCache_get_Disposed_m610CD1556B5E9F520DD8E7A250729D78BADA3E98 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) 
{
	{
		// public bool Disposed { get; private set; }
		bool L_0 = __this->___U3CDisposedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::set_Disposed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_set_Disposed_m1FC467C9C0835059125DF2060F5E27E4E0C3D7A3 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Disposed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_Finalize_m745AF31B52A626F67EC4EA11A715568ABEBC04B0 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose(false);
			FaceMapperCache_Dispose_m49FA618A3D13861405A07C431E846F2E41C419F8(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_Dispose_m5A96730404B43B0DE0A209CA098BE399CDA38A97 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		FaceMapperCache_Dispose_m49FA618A3D13861405A07C431E846F2E41C419F8(__this, (bool)1, NULL);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_Dispose_m49FA618A3D13861405A07C431E846F2E41C419F8 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		// if (Disposed)
		bool L_0;
		L_0 = FaceMapperCache_get_Disposed_m610CD1556B5E9F520DD8E7A250729D78BADA3E98_inline(__this, NULL);
		if (!L_0)
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
		// OnDispose(disposing);
		bool L_1 = ___disposing0;
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::OnDispose(System.Boolean) */, __this, L_1);
		// Disposed = true;
		FaceMapperCache_set_Disposed_m1FC467C9C0835059125DF2060F5E27E4E0C3D7A3_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::OnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache_OnDispose_mB10491A894E4EF2ED83BB1FF15CFF2852151A2EB (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnDispose(bool disposing) {}
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FaceMapperCache__ctor_mD667974AEEC16A5CC0E7D64EB811352A1EFFB953 (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_get_Location_m352BFCFB29A83035B4B32355F03DCC8A0C26E12C (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public FaceBlendShape Location => m_Location;
		int32_t L_0 = __this->___m_Location_0;
		return L_0;
	}
}
// System.Int32 Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_ShapeIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334 (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public int ShapeIndex => m_ShapeIndex;
		int32_t L_0 = __this->___m_ShapeIndex_1;
		return L_0;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* Binding_get_Config_m6FE9C6952CB547CBA830969739B7A7F3FDEFCAC7 (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public BindingConfig Config => m_Config;
		BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_0 = __this->___m_Config_2;
		return L_0;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::get_IsExpanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Binding_get_IsExpanded_mEA20081321BA54F102ABA184579CBD0583340057 (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsExpanded => m_IsExpanded;
		bool L_0 = __this->___m_IsExpanded_3;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Binding__ctor_m4E41274A2293358673C7A99A1CC0A9BDD15BED95 (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, int32_t ___location0, int32_t ___shapeIndex1, BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___config2, bool ___isExpanded3, const RuntimeMethod* method) 
{
	{
		// FaceBlendShape m_Location = FaceBlendShape.Invalid;
		__this->___m_Location_0 = (-1);
		// int m_ShapeIndex = -1;
		__this->___m_ShapeIndex_1 = (-1);
		// public Binding(FaceBlendShape location, int shapeIndex, BindingConfig config, bool isExpanded)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Location = location;
		int32_t L_0 = ___location0;
		__this->___m_Location_0 = L_0;
		// m_ShapeIndex = shapeIndex;
		int32_t L_1 = ___shapeIndex1;
		__this->___m_ShapeIndex_1 = L_1;
		// m_Config = config;
		BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_2 = ___config2;
		__this->___m_Config_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Config_2), (void*)L_2);
		// m_IsExpanded = isExpanded;
		bool L_3 = ___isExpanded3;
		__this->___m_IsExpanded_3 = L_3;
		// }
		return;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Binding_ToString_m09347E08259D5221D933CF47330D4511948FEB89 (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E0843419230F442F4F289AB7726382AECCEFAD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"Location: {m_Location}, Mesh Blend Shape Index: {m_ShapeIndex}";
		int32_t L_0 = __this->___m_Location_0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(FaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___m_ShapeIndex_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7E0843419230F442F4F289AB7726382AECCEFAD8, L_2, L_5, NULL);
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
// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BindingConfig_get_Smoothing_mDA3304DED53ECD2DF484E5CC4A9C9751642D973A (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) 
{
	{
		// public float Smoothing => m_Smoothing;
		float L_0 = __this->___m_Smoothing_1;
		return L_0;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::get_OverrideSmoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingConfig_get_OverrideSmoothing_mD069020FE33A5466CFFABE0CF1E5480A60983E47 (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) 
{
	{
		// public bool OverrideSmoothing => m_OverrideSmoothing;
		bool L_0 = __this->___m_OverrideSmoothing_0;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::.ctor(Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingConfig__ctor_m19A773E02AEA2D16051E339EB04DAE50D3659F5C (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* ___preset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_Smoothing = 0.1f;
		__this->___m_Smoothing_1 = (0.100000001f);
		// SimpleEvaluator.Impl m_SimpleEvaluator = new SimpleEvaluator.Impl();
		Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* L_0 = (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B*)il2cpp_codegen_object_new(Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Impl__ctor_m0BA13FF0A4B9D31B097CD51ED66DEAA657F541A0(L_0, NULL);
		__this->___m_SimpleEvaluator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SimpleEvaluator_4), (void*)L_0);
		// CurveEvaluator.Impl m_CurveEvaluator = new CurveEvaluator.Impl();
		Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* L_1 = (Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B*)il2cpp_codegen_object_new(Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Impl__ctor_m9604F6E2CED284F536D9651B96EA8F00001A2FC2(L_1, NULL);
		__this->___m_CurveEvaluator_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurveEvaluator_5), (void*)L_1);
		// public BindingConfig(EvaluatorPreset preset)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_EvaluatorPreset = preset;
		EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* L_2 = ___preset0;
		__this->___m_EvaluatorPreset_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EvaluatorPreset_2), (void*)L_2);
		// }
		return;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig::GetEvaluator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindingConfig_GetEvaluator_m1A2DE98C21BD8A2D26CC965143022985D0EAB781 (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_EvaluatorPreset != null)
		EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* L_0 = __this->___m_EvaluatorPreset_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return m_EvaluatorPreset.Evaluator;
		EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* L_2 = __this->___m_EvaluatorPreset_2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset::get_Evaluator() */, L_2);
		return L_3;
	}

IL_001a:
	{
		// switch (m_Type)
		int32_t L_4 = __this->___m_Type_3;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0038;
	}

IL_002a:
	{
		// return m_SimpleEvaluator;
		Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* L_7 = __this->___m_SimpleEvaluator_4;
		return L_7;
	}

IL_0031:
	{
		// return m_CurveEvaluator;
		Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* L_8 = __this->___m_CurveEvaluator_5;
		return L_8;
	}

IL_0038:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingConfig_GetEvaluator_m1A2DE98C21BD8A2D26CC965143022985D0EAB781_RuntimeMethod_var)));
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper_OnValidate_mB97056C806AE68CF8E0D8C658E0E7A84E1603136 (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m494165D99E5A4EFC93279F01DC2CAA6587E91127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m73190613823680A72715CFEBDD6C227382F49BEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F8830996D7EF729FB150AF87B1F40A06F75AB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ABB269A5254F977C9CBCB241DE2B44FBF8B0CD);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_0 = NULL;
	int32_t V_1 = 0;
	RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// var usedPaths = new HashSet<string>();
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_0 = L_0;
		// for (var i = 0; i < m_Maps.Count;)
		V_1 = 0;
		goto IL_0066;
	}

IL_000a:
	{
		// var rendererMapping = m_Maps[i];
		List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* L_1 = __this->___m_Maps_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_3;
		L_3 = List_1_get_Item_m3F8830996D7EF729FB150AF87B1F40A06F75AB6A(L_1, L_2, List_1_get_Item_m3F8830996D7EF729FB150AF87B1F40A06F75AB6A_RuntimeMethod_var);
		V_2 = L_3;
		// var path = rendererMapping.Path;
		RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_4 = V_2;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = RendererMapping_get_Path_m6315136E45B9715CC33F54F3D9F22EF8BB0BA732_inline(L_4, NULL);
		V_3 = L_5;
		// if (!string.IsNullOrEmpty(path) && usedPaths.Contains(path))
		String_t* L_6 = V_3;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = V_0;
		String_t* L_9 = V_3;
		NullCheck(L_8);
		bool L_10;
		L_10 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_8, L_9, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// m_Maps.RemoveAt(i);
		List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* L_11 = __this->___m_Maps_4;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		List_1_RemoveAt_m494165D99E5A4EFC93279F01DC2CAA6587E91127(L_11, L_12, List_1_RemoveAt_m494165D99E5A4EFC93279F01DC2CAA6587E91127_RuntimeMethod_var);
		// Debug.LogError($"Face mapper \"{name}\" has multiple mappings for renderer \"{rendererMapping}\". The extra mapping has been removed.");
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_14 = V_2;
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral72ABB269A5254F977C9CBCB241DE2B44FBF8B0CD, L_13, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
		// continue;
		goto IL_0066;
	}

IL_0053:
	{
		// usedPaths.Add(path);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_16, L_17, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		// rendererMapping.Validate(this);
		RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_19 = V_2;
		NullCheck(L_19);
		RendererMapping_Validate_mF563BF0CD2B41660F6C4BF563456063AF30F6433(L_19, __this, NULL);
		// i++;
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0066:
	{
		// for (var i = 0; i < m_Maps.Count;)
		int32_t L_21 = V_1;
		List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* L_22 = __this->___m_Maps_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m73190613823680A72715CFEBDD6C227382F49BEA_inline(L_22, List_1_get_Count_m73190613823680A72715CFEBDD6C227382F49BEA_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::CreateCache(Unity.LiveCapture.ARKitFaceCapture.FaceActor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* DefaultFaceMapper_CreateCache_mA9F4B41A66E000B2F0AE67AB48DF60138697B1A2 (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Cache(actor, m_Maps);
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = ___actor0;
		List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* L_1 = __this->___m_Maps_4;
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_2 = (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)il2cpp_codegen_object_new(Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Cache__ctor_mA2F6BCE9209DB58FBEF1E36EC4DEE054256A82EE(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::ApplyBlendShapesToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper_ApplyBlendShapesToRig_m454003019EEF4246FA79697419DA7130776DAB32 (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___cache1, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* ___pose2, bool ___continuous3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F2A521B51D7CCE6BBF3787EF013D6CE47CE724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8D019E893051BC3086910ECFF833216372CD3104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEvaluator_tCB667FD5FC96F5CE907E9BC25D8B644091F7B775_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* V_9 = NULL;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	float G_B14_0 = 0.0f;
	{
		// if (actor == null)
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = ___actor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var c = cache as Cache;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_2 = ___cache1;
		// foreach (var data in c.Renderers)
		NullCheck(((Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)IsInstClass((RuntimeObject*)L_2, Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3;
		L_3 = Cache_get_Renderers_m56B64E46CEA3870105466BFF665F7623622C0681_inline(((Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)IsInstClass((RuntimeObject*)L_2, Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::GetEnumerator() */, IEnumerable_1_tC8F2A521B51D7CCE6BBF3787EF013D6CE47CE724_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bc:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_01c5;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_01c5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01af_1;
			}

IL_0020_1:
			{
				// foreach (var data in c.Renderers)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_8;
				L_8 = InterfaceFuncInvoker0< RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::get_Current() */, IEnumerator_1_t8D019E893051BC3086910ECFF833216372CD3104_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				// if (data.Renderer == null || data.Renderer.sharedMesh == null)
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_9 = V_1;
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_10 = L_9.___Renderer_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_11)
				{
					goto IL_01af_1;
				}
			}
			{
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_12 = V_1;
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_13 = L_12.___Renderer_0;
				NullCheck(L_13);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14;
				L_14 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_15)
				{
					goto IL_01af_1;
				}
			}
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				V_2 = 0;
				goto IL_006c_1;
			}

IL_0052_1:
			{
				// data.BlendShapeData[i].Weight = 0f;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_16 = V_1;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_17 = L_16.___BlendShapeData_1;
				int32_t L_18 = V_2;
				NullCheck(L_17);
				((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Weight_1 = (0.0f);
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				int32_t L_19 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_006c_1:
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				int32_t L_20 = V_2;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_21 = V_1;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_22 = L_21.___BlendShapeData_1;
				NullCheck(L_22);
				if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
				{
					goto IL_0052_1;
				}
			}
			{
				// for (var i = 0; i < data.Mappings.Length; i++)
				V_3 = 0;
				goto IL_0156_1;
			}

IL_007e_1:
			{
				// var mapping = data.Mappings[i];
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_23 = V_1;
				MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_24 = L_23.___Mappings_2;
				int32_t L_25 = V_3;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				V_4 = L_27;
				// var bindings = mapping.Bindings;
				MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 L_28 = V_4;
				BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_29 = L_28.___Bindings_1;
				V_5 = L_29;
				// var value = pose.GetValue(mapping.Location);
				FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_30 = ___pose2;
				MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 L_31 = V_4;
				int32_t L_32 = L_31.___Location_0;
				float L_33;
				L_33 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_30, L_32, NULL);
				V_6 = L_33;
				// for (var j = 0; j < mapping.Bindings.Length; j++)
				V_7 = 0;
				goto IL_0142_1;
			}

IL_00ac_1:
			{
				// var binding = bindings[j];
				BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_34 = V_5;
				int32_t L_35 = V_7;
				NullCheck(L_34);
				int32_t L_36 = L_35;
				BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
				V_8 = L_37;
				// var config = binding.Config;
				BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_38 = V_8;
				BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_39 = L_38.___Config_1;
				V_9 = L_39;
				// var weight = config.GetEvaluator().Evaluate(value);
				BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_40 = V_9;
				NullCheck(L_40);
				RuntimeObject* L_41;
				L_41 = BindingConfig_GetEvaluator_m1A2DE98C21BD8A2D26CC965143022985D0EAB781(L_40, NULL);
				float L_42 = V_6;
				NullCheck(L_41);
				float L_43;
				L_43 = InterfaceFuncInvoker1< float, float >::Invoke(0 /* System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator::Evaluate(System.Single) */, IEvaluator_tCB667FD5FC96F5CE907E9BC25D8B644091F7B775_il2cpp_TypeInfo_var, L_41, L_42);
				V_10 = L_43;
				// var smoothing = config.OverrideSmoothing ? config.Smoothing : m_BlendShapeSmoothing;
				BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_44 = V_9;
				NullCheck(L_44);
				bool L_45;
				L_45 = BindingConfig_get_OverrideSmoothing_mD069020FE33A5466CFFABE0CF1E5480A60983E47_inline(L_44, NULL);
				if (L_45)
				{
					goto IL_00e1_1;
				}
			}
			{
				float L_46 = __this->___m_BlendShapeSmoothing_14;
				G_B14_0 = L_46;
				goto IL_00e8_1;
			}

IL_00e1_1:
			{
				BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_47 = V_9;
				NullCheck(L_47);
				float L_48;
				L_48 = BindingConfig_get_Smoothing_mDA3304DED53ECD2DF484E5CC4A9C9751642D973A_inline(L_47, NULL);
				G_B14_0 = L_48;
			}

IL_00e8_1:
			{
				V_11 = G_B14_0;
				// if (continuous)
				bool L_49 = ___continuous3;
				if (!L_49)
				{
					goto IL_0100_1;
				}
			}
			{
				// weight = Mathf.Lerp(weight, binding.LastWeight, smoothing);
				float L_50 = V_10;
				BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_51 = V_8;
				float L_52 = L_51.___LastWeight_2;
				float L_53 = V_11;
				float L_54;
				L_54 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_50, L_52, L_53, NULL);
				V_10 = L_54;
			}

IL_0100_1:
			{
				// data.BlendShapeData[binding.ShapeIndex].Weight += weight;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_55 = V_1;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_56 = L_55.___BlendShapeData_1;
				BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_57 = V_8;
				int32_t L_58 = L_57.___ShapeIndex_0;
				NullCheck(L_56);
				float* L_59 = (&((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___Weight_1);
				float* L_60 = L_59;
				float L_61 = *((float*)L_60);
				float L_62 = V_10;
				*((float*)L_60) = (float)((float)il2cpp_codegen_add(L_61, L_62));
				// data.Mappings[i].Bindings[j].LastWeight = weight;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_63 = V_1;
				MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_64 = L_63.___Mappings_2;
				int32_t L_65 = V_3;
				NullCheck(L_64);
				BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___Bindings_1;
				int32_t L_67 = V_7;
				NullCheck(L_66);
				float L_68 = V_10;
				((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___LastWeight_2 = L_68;
				// for (var j = 0; j < mapping.Bindings.Length; j++)
				int32_t L_69 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_69, 1));
			}

IL_0142_1:
			{
				// for (var j = 0; j < mapping.Bindings.Length; j++)
				int32_t L_70 = V_7;
				MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 L_71 = V_4;
				BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_72 = L_71.___Bindings_1;
				NullCheck(L_72);
				if ((((int32_t)L_70) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
				{
					goto IL_00ac_1;
				}
			}
			{
				// for (var i = 0; i < data.Mappings.Length; i++)
				int32_t L_73 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_73, 1));
			}

IL_0156_1:
			{
				// for (var i = 0; i < data.Mappings.Length; i++)
				int32_t L_74 = V_3;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_75 = V_1;
				MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_76 = L_75.___Mappings_2;
				NullCheck(L_76);
				if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
				{
					goto IL_007e_1;
				}
			}
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				V_12 = 0;
				goto IL_01a3_1;
			}

IL_0169_1:
			{
				// if (data.BlendShapeData[i].UseCount > 0)
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_77 = V_1;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_78 = L_77.___BlendShapeData_1;
				int32_t L_79 = V_12;
				NullCheck(L_78);
				int32_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___UseCount_0;
				if ((((int32_t)L_80) <= ((int32_t)0)))
				{
					goto IL_019d_1;
				}
			}
			{
				// data.Renderer.SetBlendShapeWeight(i, data.BlendShapeData[i].Weight);
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_81 = V_1;
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_82 = L_81.___Renderer_0;
				int32_t L_83 = V_12;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_84 = V_1;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_85 = L_84.___BlendShapeData_1;
				int32_t L_86 = V_12;
				NullCheck(L_85);
				float L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___Weight_1;
				NullCheck(L_82);
				SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_82, L_83, L_87, NULL);
			}

IL_019d_1:
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				int32_t L_88 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_88, 1));
			}

IL_01a3_1:
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				int32_t L_89 = V_12;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_90 = V_1;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_91 = L_90.___BlendShapeData_1;
				NullCheck(L_91);
				if ((((int32_t)L_89) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
				{
					goto IL_0169_1;
				}
			}

IL_01af_1:
			{
				// foreach (var data in c.Renderers)
				RuntimeObject* L_92 = V_0;
				NullCheck(L_92);
				bool L_93;
				L_93 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_92);
				if (L_93)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_01c6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c6:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::ApplyHeadPositionToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper_ApplyHeadPositionToRig_mBA3DE7E4B7B8A9DF01DDA847C3C1C39916AA5B31 (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___cache1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___headPosition2, bool ___continuous3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_1 = NULL;
	{
		// if (actor == null)
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = ___actor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var c = cache as Cache;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_2 = ___cache1;
		V_0 = ((Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)IsInstClass((RuntimeObject*)L_2, Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(m_HeadPosition) && c.TryGetBone(actor, m_HeadPosition, out var head))
		String_t* L_3 = __this->___m_HeadPosition_11;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0058;
		}
	}
	{
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_5 = V_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_6 = ___actor0;
		String_t* L_7 = __this->___m_HeadPosition_11;
		NullCheck(L_5);
		bool L_8;
		L_8 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_5, L_6, L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// head.localPosition = continuous ? Vector3.Lerp(headPosition, head.localPosition, m_HeadSmoothing) : headPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		bool L_10 = ___continuous3;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_003c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___headPosition2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11);
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		goto IL_0053;
	}

IL_003c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = ___headPosition2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = __this->___m_HeadSmoothing_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_14, L_16, L_17, NULL);
		G_B7_0 = L_18;
		G_B7_1 = G_B6_0;
	}

IL_0053:
	{
		NullCheck(G_B7_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(G_B7_1, G_B7_0, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::ApplyHeadRotationToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper_ApplyHeadRotationToRig_m47460B3C1EB962385C9B6786FD46E123C61695D6 (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___cache1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___headOrientation2, bool ___continuous3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_1 = NULL;
	{
		// if (actor == null)
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = ___actor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var c = cache as Cache;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_2 = ___cache1;
		V_0 = ((Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)IsInstClass((RuntimeObject*)L_2, Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(m_HeadRotation) && c.TryGetBone(actor, m_HeadRotation, out var head))
		String_t* L_3 = __this->___m_HeadRotation_12;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0058;
		}
	}
	{
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_5 = V_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_6 = ___actor0;
		String_t* L_7 = __this->___m_HeadRotation_12;
		NullCheck(L_5);
		bool L_8;
		L_8 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_5, L_6, L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		// head.localRotation = continuous ? Quaternion.Slerp(headOrientation, head.localRotation, m_HeadSmoothing) : headOrientation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		bool L_10 = ___continuous3;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_003c;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_11 = ___headOrientation2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_11);
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		goto IL_0053;
	}

IL_003c:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_13 = ___headOrientation2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_15, NULL);
		float L_17 = __this->___m_HeadSmoothing_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_14, L_16, L_17, NULL);
		G_B7_0 = L_18;
		G_B7_1 = G_B6_0;
	}

IL_0053:
	{
		NullCheck(G_B7_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B7_1, G_B7_0, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::ApplyEyeRotationToRig(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.ARKitFaceCapture.FaceBlendShapePose&,UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper_ApplyEyeRotationToRig_mAF3B56B4084184414EDEA67AC6F085201506E94A (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___cache1, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* ___pose2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___leftEyeRotation3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rightEyeRotation4, bool ___continuous5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B9_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B20_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B19_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B21_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	{
		// if (actor == null)
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_0 = ___actor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var c = cache as Cache;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_2 = ___cache1;
		V_0 = ((Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)IsInstClass((RuntimeObject*)L_2, Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(m_LeftEye) && c.TryGetBone(actor, m_LeftEye, out var leftEye))
		String_t* L_3 = __this->___m_LeftEye_6;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0150;
		}
	}
	{
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_5 = V_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_6 = ___actor0;
		String_t* L_7 = __this->___m_LeftEye_6;
		NullCheck(L_5);
		bool L_8;
		L_8 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_5, L_6, L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0150;
		}
	}
	{
		// switch (m_EyeMovementDriver)
		int32_t L_9 = __this->___m_EyeMovementDriver_5;
		V_3 = L_9;
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0150;
		}
	}
	{
		// var leftEyeH = pose.GetValue(FaceBlendShape.EyeLookInLeft) - pose.GetValue(FaceBlendShape.EyeLookOutLeft);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_12 = ___pose2;
		float L_13;
		L_13 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_12, ((int32_t)12), NULL);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_14 = ___pose2;
		float L_15;
		L_15 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_14, ((int32_t)14), NULL);
		// var leftEyeV = pose.GetValue(FaceBlendShape.EyeLookUpLeft) - pose.GetValue(FaceBlendShape.EyeLookDownLeft);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_16 = ___pose2;
		float L_17;
		L_17 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_16, ((int32_t)16), NULL);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_18 = ___pose2;
		float L_19;
		L_19 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_18, ((int32_t)10), NULL);
		V_4 = ((float)il2cpp_codegen_subtract(L_17, L_19));
		// var leftEyeYaw = Quaternion.AngleAxis(leftEyeH * m_EyeAngleRange.x + m_EyeAngleOffset.x, Vector3.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___m_EyeAngleRange_8);
		float L_21 = L_20->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___m_EyeAngleOffset_9);
		float L_23 = L_22->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_13, L_15)), L_21)), L_23)), L_24, NULL);
		V_5 = L_25;
		// var leftEyePitch = Quaternion.AngleAxis(leftEyeV * m_EyeAngleRange.y + m_EyeAngleOffset.y, Vector3.left);
		float L_26 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (&__this->___m_EyeAngleRange_8);
		float L_28 = L_27->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->___m_EyeAngleOffset_9);
		float L_30 = L_29->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_26, L_28)), L_30)), L_31, NULL);
		// var targetRotation = leftEyePitch * leftEyeYaw;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_32, L_33, NULL);
		V_6 = L_34;
		// leftEye.localRotation = continuous ? Quaternion.Slerp(targetRotation, leftEye.localRotation, m_EyeSmoothing) : targetRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_1;
		bool L_36 = ___continuous5;
		G_B7_0 = L_35;
		if (L_36)
		{
			G_B8_0 = L_35;
			goto IL_00c7;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = V_6;
		G_B9_0 = L_37;
		G_B9_1 = G_B7_0;
		goto IL_00da;
	}

IL_00c7:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_1;
		NullCheck(L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_39, NULL);
		float L_41 = __this->___m_EyeSmoothing_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_38, L_40, L_41, NULL);
		G_B9_0 = L_42;
		G_B9_1 = G_B8_0;
	}

IL_00da:
	{
		NullCheck(G_B9_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B9_1, G_B9_0, NULL);
		// break;
		goto IL_0150;
	}

IL_00e1:
	{
		// var targetRotation = continuous ? Quaternion.Slerp(leftEyeRotation, leftEye.localRotation, m_EyeSmoothing) : leftEyeRotation;
		bool L_43 = ___continuous5;
		if (L_43)
		{
			goto IL_00ee;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_44 = ___leftEyeRotation3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_44);
		G_B13_0 = L_45;
		goto IL_0106;
	}

IL_00ee:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_46 = ___leftEyeRotation3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = V_1;
		NullCheck(L_48);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_48, NULL);
		float L_50 = __this->___m_EyeSmoothing_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_47, L_49, L_50, NULL);
		G_B13_0 = L_51;
	}

IL_0106:
	{
		V_7 = G_B13_0;
		// var offsetXRotation = Quaternion.AngleAxis(m_EyeAngleOffset.x, Vector3.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_52 = (&__this->___m_EyeAngleOffset_9);
		float L_53 = L_52->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_53, L_54, NULL);
		// var offsetYRotation = Quaternion.AngleAxis(m_EyeAngleOffset.y, Vector3.left);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_56 = (&__this->___m_EyeAngleOffset_9);
		float L_57 = L_56->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_57, L_58, NULL);
		V_8 = L_59;
		// var offsetRotation = offsetXRotation * offsetYRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = V_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_55, L_60, NULL);
		V_9 = L_61;
		// targetRotation *= offsetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = V_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		L_64 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_62, L_63, NULL);
		V_7 = L_64;
		// leftEye.localRotation = targetRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66 = V_7;
		NullCheck(L_65);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_65, L_66, NULL);
	}

IL_0150:
	{
		// if (!string.IsNullOrEmpty(m_RightEye) && c.TryGetBone(actor, m_RightEye, out var rightEye))
		String_t* L_67 = __this->___m_RightEye_7;
		bool L_68;
		L_68 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_67, NULL);
		if (L_68)
		{
			goto IL_028e;
		}
	}
	{
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_69 = V_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_70 = ___actor0;
		String_t* L_71 = __this->___m_RightEye_7;
		NullCheck(L_69);
		bool L_72;
		L_72 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_69, L_70, L_71, (&V_2), NULL);
		if (!L_72)
		{
			goto IL_028e;
		}
	}
	{
		// switch (m_EyeMovementDriver)
		int32_t L_73 = __this->___m_EyeMovementDriver_5;
		V_3 = L_73;
		int32_t L_74 = V_3;
		if (!L_74)
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_75 = V_3;
		if ((!(((uint32_t)L_75) == ((uint32_t)1))))
		{
			goto IL_028e;
		}
	}
	{
		// var rightEyeH = pose.GetValue(FaceBlendShape.EyeLookInRight) - pose.GetValue(FaceBlendShape.EyeLookOutRight);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_76 = ___pose2;
		float L_77;
		L_77 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_76, ((int32_t)13), NULL);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_78 = ___pose2;
		float L_79;
		L_79 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_78, ((int32_t)15), NULL);
		// var rightEyeV = pose.GetValue(FaceBlendShape.EyeLookUpRight) - pose.GetValue(FaceBlendShape.EyeLookDownRight);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_80 = ___pose2;
		float L_81;
		L_81 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_80, ((int32_t)17), NULL);
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79* L_82 = ___pose2;
		float L_83;
		L_83 = FaceBlendShapePose_GetValue_mB533A2B0DFA0D65D8E67859D577DD52E80D27C77(L_82, ((int32_t)11), NULL);
		V_10 = ((float)il2cpp_codegen_subtract(L_81, L_83));
		// var rightEyeYaw = Quaternion.AngleAxis(rightEyeH * m_EyeAngleRange.x + m_EyeAngleOffset.x, Vector3.down);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84 = (&__this->___m_EyeAngleRange_8);
		float L_85 = L_84->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_86 = (&__this->___m_EyeAngleOffset_9);
		float L_87 = L_86->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_89;
		L_89 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_77, L_79)), L_85)), L_87)), L_88, NULL);
		V_11 = L_89;
		// var rightEyePitch = Quaternion.AngleAxis(rightEyeV * m_EyeAngleRange.y + m_EyeAngleOffset.y, Vector3.left);
		float L_90 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = (&__this->___m_EyeAngleRange_8);
		float L_92 = L_91->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_93 = (&__this->___m_EyeAngleOffset_9);
		float L_94 = L_93->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_96;
		L_96 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_90, L_92)), L_94)), L_95, NULL);
		// var targetRotation = rightEyePitch * rightEyeYaw;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_97 = V_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98;
		L_98 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_96, L_97, NULL);
		V_12 = L_98;
		// rightEye.localRotation = continuous ? Quaternion.Slerp(targetRotation, rightEye.localRotation, m_EyeSmoothing) : targetRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_99 = V_2;
		bool L_100 = ___continuous5;
		G_B19_0 = L_99;
		if (L_100)
		{
			G_B20_0 = L_99;
			goto IL_0206;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_101 = V_12;
		G_B21_0 = L_101;
		G_B21_1 = G_B19_0;
		goto IL_0219;
	}

IL_0206:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_102 = V_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = V_2;
		NullCheck(L_103);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_104;
		L_104 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_103, NULL);
		float L_105 = __this->___m_EyeSmoothing_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106;
		L_106 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_102, L_104, L_105, NULL);
		G_B21_0 = L_106;
		G_B21_1 = G_B20_0;
	}

IL_0219:
	{
		NullCheck(G_B21_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B21_1, G_B21_0, NULL);
		// break;
		return;
	}

IL_021f:
	{
		// var targetRotation = continuous ? Quaternion.Slerp(rightEyeRotation, rightEye.localRotation, m_EyeSmoothing) : rightEyeRotation;
		bool L_107 = ___continuous5;
		if (L_107)
		{
			goto IL_022c;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_108 = ___rightEyeRotation4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_109 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_108);
		G_B25_0 = L_109;
		goto IL_0244;
	}

IL_022c:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_110 = ___rightEyeRotation4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_111 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112 = V_2;
		NullCheck(L_112);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_113;
		L_113 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_112, NULL);
		float L_114 = __this->___m_EyeSmoothing_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_115;
		L_115 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_111, L_113, L_114, NULL);
		G_B25_0 = L_115;
	}

IL_0244:
	{
		V_13 = G_B25_0;
		// var offsetXRotation = Quaternion.AngleAxis(m_EyeAngleOffset.x, Vector3.down);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_116 = (&__this->___m_EyeAngleOffset_9);
		float L_117 = L_116->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_119;
		L_119 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_117, L_118, NULL);
		// var offsetYRotation = Quaternion.AngleAxis(m_EyeAngleOffset.y, Vector3.left);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_120 = (&__this->___m_EyeAngleOffset_9);
		float L_121 = L_120->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_123;
		L_123 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_121, L_122, NULL);
		V_14 = L_123;
		// var offsetRotation = offsetXRotation * offsetYRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124 = V_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_125;
		L_125 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_119, L_124, NULL);
		V_15 = L_125;
		// targetRotation *= offsetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_126 = V_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_127 = V_15;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_128;
		L_128 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_126, L_127, NULL);
		V_13 = L_128;
		// rightEye.localRotation = targetRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_130 = V_13;
		NullCheck(L_129);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_129, L_130, NULL);
	}

IL_028e:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::RegisterPreviewableProperties(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.FaceMapperCache,Unity.LiveCapture.IPropertyPreviewer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper_RegisterPreviewableProperties_m9D10762394CC18D4A924EB18B60DF82C10157EEC (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* ___cache1, RuntimeObject* ___previewer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F2A521B51D7CCE6BBF3787EF013D6CE47CE724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8D019E893051BC3086910ECFF833216372CD3104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14EF5545CC76C6501D4D80D92785D57FF0DAC77B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE3DF5F2CEB25ED1C5A33DE9E1176176A298A37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral250048D511326BC306E0A5901FBDF08980252EDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39FD09E5AB42A13956FDE279F6AB245C09B1608E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D46CFE1898B8C50B687DAFAEB8FCDE59ECC884D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF2D0501B1F83088CC6C36AAB72E446B3EFEAA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9881139F683F62CA4914BF5C627A9611A2B39EFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B2_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B1_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B4_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B3_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B6_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B5_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B8_0 = NULL;
	Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* G_B7_0 = NULL;
	{
		// var c = cache as Cache;
		FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* L_0 = ___cache1;
		// if (c.TryGetBone(actor, m_HeadPosition, out var headPosition))
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_1 = ((Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C*)IsInstClass((RuntimeObject*)L_0, Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C_il2cpp_TypeInfo_var));
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_2 = ___actor0;
		String_t* L_3 = __this->___m_HeadPosition_11;
		NullCheck(L_1);
		bool L_4;
		L_4 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_1, L_2, L_3, (&V_0), NULL);
		G_B1_0 = L_1;
		if (!L_4)
		{
			G_B2_0 = L_1;
			goto IL_003b;
		}
	}
	{
		// previewer.Register(headPosition, "m_LocalPosition.x");
		RuntimeObject* L_5 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_5, L_6, _stringLiteral9881139F683F62CA4914BF5C627A9611A2B39EFE);
		// previewer.Register(headPosition, "m_LocalPosition.y");
		RuntimeObject* L_7 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_7, L_8, _stringLiteral1FE3DF5F2CEB25ED1C5A33DE9E1176176A298A37);
		// previewer.Register(headPosition, "m_LocalPosition.z");
		RuntimeObject* L_9 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_9, L_10, _stringLiteral7CF2D0501B1F83088CC6C36AAB72E446B3EFEAA8);
		G_B2_0 = G_B1_0;
	}

IL_003b:
	{
		// if (c.TryGetBone(actor, m_HeadRotation, out var headRotation))
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_11 = G_B2_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_12 = ___actor0;
		String_t* L_13 = __this->___m_HeadRotation_12;
		NullCheck(L_11);
		bool L_14;
		L_14 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_11, L_12, L_13, (&V_1), NULL);
		G_B3_0 = L_11;
		if (!L_14)
		{
			G_B4_0 = L_11;
			goto IL_00a0;
		}
	}
	{
		// previewer.Register(headRotation, "m_LocalRotation.x");
		RuntimeObject* L_15 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_15, L_16, _stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91);
		// previewer.Register(headRotation, "m_LocalRotation.y");
		RuntimeObject* L_17 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
		NullCheck(L_17);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_17, L_18, _stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E);
		// previewer.Register(headRotation, "m_LocalRotation.z");
		RuntimeObject* L_19 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_19, L_20, _stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD);
		// previewer.Register(headRotation, "m_LocalRotation.w");
		RuntimeObject* L_21 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_1;
		NullCheck(L_21);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_21, L_22, _stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28);
		// previewer.Register(headRotation, "m_LocalEulerAnglesHint.x");
		RuntimeObject* L_23 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_23, L_24, _stringLiteral14EF5545CC76C6501D4D80D92785D57FF0DAC77B);
		// previewer.Register(headRotation, "m_LocalEulerAnglesHint.y");
		RuntimeObject* L_25 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_1;
		NullCheck(L_25);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_25, L_26, _stringLiteral39FD09E5AB42A13956FDE279F6AB245C09B1608E);
		// previewer.Register(headRotation, "m_LocalEulerAnglesHint.z");
		RuntimeObject* L_27 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_27, L_28, _stringLiteral3D46CFE1898B8C50B687DAFAEB8FCDE59ECC884D);
		G_B4_0 = G_B3_0;
	}

IL_00a0:
	{
		// if (c.TryGetBone(actor, m_LeftEye, out var leftEye))
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_29 = G_B4_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_30 = ___actor0;
		String_t* L_31 = __this->___m_LeftEye_6;
		NullCheck(L_29);
		bool L_32;
		L_32 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_29, L_30, L_31, (&V_2), NULL);
		G_B5_0 = L_29;
		if (!L_32)
		{
			G_B6_0 = L_29;
			goto IL_0105;
		}
	}
	{
		// previewer.Register(leftEye, "m_LocalRotation.x");
		RuntimeObject* L_33 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_2;
		NullCheck(L_33);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_33, L_34, _stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91);
		// previewer.Register(leftEye, "m_LocalRotation.y");
		RuntimeObject* L_35 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_35, L_36, _stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E);
		// previewer.Register(leftEye, "m_LocalRotation.z");
		RuntimeObject* L_37 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = V_2;
		NullCheck(L_37);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_37, L_38, _stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD);
		// previewer.Register(leftEye, "m_LocalRotation.w");
		RuntimeObject* L_39 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = V_2;
		NullCheck(L_39);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_39, L_40, _stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28);
		// previewer.Register(leftEye, "m_LocalEulerAnglesHint.x");
		RuntimeObject* L_41 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_2;
		NullCheck(L_41);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_41, L_42, _stringLiteral14EF5545CC76C6501D4D80D92785D57FF0DAC77B);
		// previewer.Register(leftEye, "m_LocalEulerAnglesHint.y");
		RuntimeObject* L_43 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_2;
		NullCheck(L_43);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_43, L_44, _stringLiteral39FD09E5AB42A13956FDE279F6AB245C09B1608E);
		// previewer.Register(leftEye, "m_LocalEulerAnglesHint.z");
		RuntimeObject* L_45 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_2;
		NullCheck(L_45);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_45, L_46, _stringLiteral3D46CFE1898B8C50B687DAFAEB8FCDE59ECC884D);
		G_B6_0 = G_B5_0;
	}

IL_0105:
	{
		// if (c.TryGetBone(actor, m_RightEye, out var rightEye))
		Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* L_47 = G_B6_0;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_48 = ___actor0;
		String_t* L_49 = __this->___m_RightEye_7;
		NullCheck(L_47);
		bool L_50;
		L_50 = Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862(L_47, L_48, L_49, (&V_3), NULL);
		G_B7_0 = L_47;
		if (!L_50)
		{
			G_B8_0 = L_47;
			goto IL_016a;
		}
	}
	{
		// previewer.Register(rightEye, "m_LocalRotation.x");
		RuntimeObject* L_51 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = V_3;
		NullCheck(L_51);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_51, L_52, _stringLiteral50AA53D4D916DB821F96DA65EB57749EAA424D91);
		// previewer.Register(rightEye, "m_LocalRotation.y");
		RuntimeObject* L_53 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = V_3;
		NullCheck(L_53);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_53, L_54, _stringLiteralBD5FF6EEFBF44FA994DCC6A7603DBE5E9EBBE97E);
		// previewer.Register(rightEye, "m_LocalRotation.z");
		RuntimeObject* L_55 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = V_3;
		NullCheck(L_55);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_55, L_56, _stringLiteralE1CEB820DB6EF5D353EB716299B88006817D49FD);
		// previewer.Register(rightEye, "m_LocalRotation.w");
		RuntimeObject* L_57 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = V_3;
		NullCheck(L_57);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_57, L_58, _stringLiteral04350A0C169A1A02D3881682FB83E4976F215C28);
		// previewer.Register(rightEye, "m_LocalEulerAnglesHint.x");
		RuntimeObject* L_59 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = V_3;
		NullCheck(L_59);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_59, L_60, _stringLiteral14EF5545CC76C6501D4D80D92785D57FF0DAC77B);
		// previewer.Register(rightEye, "m_LocalEulerAnglesHint.y");
		RuntimeObject* L_61 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_3;
		NullCheck(L_61);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_61, L_62, _stringLiteral39FD09E5AB42A13956FDE279F6AB245C09B1608E);
		// previewer.Register(rightEye, "m_LocalEulerAnglesHint.z");
		RuntimeObject* L_63 = ___previewer2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = V_3;
		NullCheck(L_63);
		InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_63, L_64, _stringLiteral3D46CFE1898B8C50B687DAFAEB8FCDE59ECC884D);
		G_B8_0 = G_B7_0;
	}

IL_016a:
	{
		// foreach (var data in c.Renderers)
		NullCheck(G_B8_0);
		RuntimeObject* L_65;
		L_65 = Cache_get_Renderers_m56B64E46CEA3870105466BFF665F7623622C0681_inline(G_B8_0, NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::GetEnumerator() */, IEnumerable_1_tC8F2A521B51D7CCE6BBF3787EF013D6CE47CE724_il2cpp_TypeInfo_var, L_65);
		V_4 = L_66;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01d8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_67 = V_4;
					if (!L_67)
					{
						goto IL_01e3;
					}
				}
				{
					RuntimeObject* L_68 = V_4;
					NullCheck(L_68);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_68);
				}

IL_01e3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01cd_1;
			}

IL_0178_1:
			{
				// foreach (var data in c.Renderers)
				RuntimeObject* L_69 = V_4;
				NullCheck(L_69);
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_70;
				L_70 = InterfaceFuncInvoker0< RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData>::get_Current() */, IEnumerator_1_t8D019E893051BC3086910ECFF833216372CD3104_il2cpp_TypeInfo_var, L_69);
				V_5 = L_70;
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				V_6 = 0;
				goto IL_01c0_1;
			}

IL_0186_1:
			{
				// if (data.BlendShapeData[i].UseCount > 0)
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_71 = V_5;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_72 = L_71.___BlendShapeData_1;
				int32_t L_73 = V_6;
				NullCheck(L_72);
				int32_t L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___UseCount_0;
				if ((((int32_t)L_74) <= ((int32_t)0)))
				{
					goto IL_01ba_1;
				}
			}
			{
				// previewer.Register(data.Renderer, $"m_BlendShapeWeights.Array.data[{i}]");
				RuntimeObject* L_75 = ___previewer2;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_76 = V_5;
				SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_77 = L_76.___Renderer_0;
				int32_t L_78 = V_6;
				int32_t L_79 = L_78;
				RuntimeObject* L_80 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_79);
				String_t* L_81;
				L_81 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral250048D511326BC306E0A5901FBDF08980252EDE, L_80, NULL);
				NullCheck(L_75);
				InterfaceActionInvoker2< Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, String_t* >::Invoke(0 /* System.Void Unity.LiveCapture.IPropertyPreviewer::Register(UnityEngine.Component,System.String) */, IPropertyPreviewer_t5DE00C978C948AA7E1046E7E6BCEC68F6BE08453_il2cpp_TypeInfo_var, L_75, L_77, L_81);
			}

IL_01ba_1:
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				int32_t L_82 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_82, 1));
			}

IL_01c0_1:
			{
				// for (var i = 0; i < data.BlendShapeData.Length; i++)
				int32_t L_83 = V_6;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_84 = V_5;
				BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_85 = L_84.___BlendShapeData_1;
				NullCheck(L_85);
				if ((((int32_t)L_83) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
				{
					goto IL_0186_1;
				}
			}

IL_01cd_1:
			{
				// foreach (var data in c.Renderers)
				RuntimeObject* L_86 = V_4;
				NullCheck(L_86);
				bool L_87;
				L_87 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_86);
				if (L_87)
				{
					goto IL_0178_1;
				}
			}
			{
				goto IL_01e4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01e4:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFaceMapper__ctor_mFE8A61A467C3A1E36EEE4CF8410C000A18F2C141 (DefaultFaceMapper_tF2D4C12674824959F3ADAE247AADE3541E668390* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFCBC0D2476591770514099DCFE513B3623217EFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<RendererMapping> m_Maps = new List<RendererMapping>();
		List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199* L_0 = (List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199*)il2cpp_codegen_object_new(List_1_tCB050C4F1D519033319AF7299DD0BFAAF5A31199_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mFCBC0D2476591770514099DCFE513B3623217EFC(L_0, List_1__ctor_mFCBC0D2476591770514099DCFE513B3623217EFC_RuntimeMethod_var);
		__this->___m_Maps_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Maps_4), (void*)L_0);
		// string m_LeftEye = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_LeftEye_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftEye_6), (void*)L_1);
		// string m_RightEye = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_RightEye_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightEye_7), (void*)L_2);
		// Vector2 m_EyeAngleRange = new Vector2(45, 30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (45.0f), (30.0f), /*hidden argument*/NULL);
		__this->___m_EyeAngleRange_8 = L_3;
		// Vector2 m_EyeAngleOffset = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___m_EyeAngleOffset_9 = L_4;
		// float m_EyeSmoothing = 0.1f;
		__this->___m_EyeSmoothing_10 = (0.100000001f);
		// string m_HeadPosition = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_HeadPosition_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadPosition_11), (void*)L_5);
		// string m_HeadRotation = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_HeadRotation_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HeadRotation_12), (void*)L_6);
		// float m_HeadSmoothing = 0.1f;
		__this->___m_HeadSmoothing_13 = (0.100000001f);
		// float m_BlendShapeSmoothing = 0.1f;
		__this->___m_BlendShapeSmoothing_14 = (0.100000001f);
		FaceMapper__ctor_m81864289E9C0B65DEDD20939032F6692DB4BA78D(__this, NULL);
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
// Conversion methods for marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_pinvoke(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Config' of type 'BindingData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Config_1Exception, NULL);
}
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_pinvoke_back(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke& marshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled)
{
	Exception_t* ___Config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Config' of type 'BindingData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Config_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_pinvoke_cleanup(BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_com(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com& marshaled)
{
	Exception_t* ___Config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Config' of type 'BindingData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Config_1Exception, NULL);
}
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_com_back(const BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com& marshaled, BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2& unmarshaled)
{
	Exception_t* ___Config_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Config' of type 'BindingData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Config_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData
IL2CPP_EXTERN_C void BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshal_com_cleanup(BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_marshaled_com& marshaled)
{
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData::.ctor(System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingData__ctor_mEDA2153AAA8A63486F681649AED667B015E509D9 (BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2* __this, int32_t ___shapeIndex0, BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___config1, const RuntimeMethod* method) 
{
	{
		// ShapeIndex = shapeIndex;
		int32_t L_0 = ___shapeIndex0;
		__this->___ShapeIndex_0 = L_0;
		// Config = config;
		BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_1 = ___config1;
		__this->___Config_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Config_1), (void*)L_1);
		// LastWeight = 0f;
		__this->___LastWeight_2 = (0.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BindingData__ctor_mEDA2153AAA8A63486F681649AED667B015E509D9_AdjustorThunk (RuntimeObject* __this, int32_t ___shapeIndex0, BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* ___config1, const RuntimeMethod* method)
{
	BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2*>(__this + _offset);
	BindingData__ctor_mEDA2153AAA8A63486F681649AED667B015E509D9(_thisAdjusted, ___shapeIndex0, ___config1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_pinvoke(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Bindings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Bindings' of type 'MappingData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Bindings_1Exception, NULL);
}
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_pinvoke_back(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke& marshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled)
{
	Exception_t* ___Bindings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Bindings' of type 'MappingData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Bindings_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_pinvoke_cleanup(MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_com(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com& marshaled)
{
	Exception_t* ___Bindings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Bindings' of type 'MappingData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Bindings_1Exception, NULL);
}
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_com_back(const MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com& marshaled, MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70& unmarshaled)
{
	Exception_t* ___Bindings_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Bindings' of type 'MappingData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Bindings_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData
IL2CPP_EXTERN_C void MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshal_com_cleanup(MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_marshaled_com& marshaled)
{
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingData__ctor_m84D3504F967F022835E20D75F7C4C0355C5A2BAF (MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70* __this, int32_t ___location0, BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* ___bindings1, const RuntimeMethod* method) 
{
	{
		// Location = location;
		int32_t L_0 = ___location0;
		__this->___Location_0 = L_0;
		// Bindings = bindings;
		BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_1 = ___bindings1;
		__this->___Bindings_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Bindings_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MappingData__ctor_m84D3504F967F022835E20D75F7C4C0355C5A2BAF_AdjustorThunk (RuntimeObject* __this, int32_t ___location0, BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* ___bindings1, const RuntimeMethod* method)
{
	MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70*>(__this + _offset);
	MappingData__ctor_m84D3504F967F022835E20D75F7C4C0355C5A2BAF(_thisAdjusted, ___location0, ___bindings1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
IL2CPP_EXTERN_C void RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshal_pinvoke(const RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53& unmarshaled, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'RendererData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshal_pinvoke_back(const RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_pinvoke& marshaled, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53& unmarshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'RendererData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
IL2CPP_EXTERN_C void RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshal_pinvoke_cleanup(RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
IL2CPP_EXTERN_C void RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshal_com(const RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53& unmarshaled, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_com& marshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'RendererData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshal_com_back(const RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_com& marshaled, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53& unmarshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'RendererData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData
IL2CPP_EXTERN_C void RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshal_com_cleanup(RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53_marshaled_com& marshaled)
{
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceActor,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererData__ctor_m9099D2BC332960D1C6811BD02AFD090AF22FA682 (RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* ___rendererMapping1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m09451A141A03EB9CE1BC350AB32DD6BA40053181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToLookup_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_m6F7E7E89D08C1E6F4B1D28D2A5DF1F1FDEAE52FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_mD3A699301AFC095F51CAD86467B56C076F34FB07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_1_m7231EE0237DF7999CFEE6DB051B4450C408987C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_2_mB6DDEBCBF0249C66246763B66DE28F7343816788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_3_m52C709468CE9C718083502223AD33DE5C0381948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m398C8F26A599C7840B805E308A07D8CDCC4AD275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* V_2 = NULL;
	int32_t V_3 = 0;
	BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* V_4 = NULL;
	int32_t V_5 = 0;
	BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B5_0 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B4_0 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* G_B6_0 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B6_1 = NULL;
	U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* G_B8_0 = NULL;
	U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* G_B7_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B9_0 = NULL;
	U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* G_B9_1 = NULL;
	Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B13_2 = NULL;
	Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B12_2 = NULL;
	Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* G_B15_0 = NULL;
	Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B15_3 = NULL;
	Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* G_B14_0 = NULL;
	Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B14_3 = NULL;
	Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B17_2 = NULL;
	Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* G_B16_2 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* L_0 = (U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m1FCDB504FF027AE6EBFCDEFDBBCF2F2F11222F8B(L_0, NULL);
		V_0 = L_0;
		// var target = actor == null ? null : actor.transform.Find(rendererMapping.Path);
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_1 = ___actor0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_3 = ___actor0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_5 = ___rendererMapping1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = RendererMapping_get_Path_m6315136E45B9715CC33F54F3D9F22EF8BB0BA732_inline(L_5, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, L_6, NULL);
		G_B3_0 = L_7;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
	}

IL_0023:
	{
		V_1 = G_B3_0;
		// Renderer = target == null ? null : target.GetComponent<SkinnedMeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = __this;
		if (L_9)
		{
			G_B5_0 = __this;
			goto IL_0036;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		NullCheck(L_10);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_11;
		L_11 = Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0(L_10, Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = ((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		G_B6_1->___Renderer_0 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___Renderer_0), (void*)G_B6_0);
		// var mesh = Renderer == null ? null : Renderer.sharedMesh;
		U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* L_12 = V_0;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_13 = __this->___Renderer_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B7_0 = L_12;
		if (L_14)
		{
			G_B8_0 = L_12;
			goto IL_0058;
		}
	}
	{
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_15 = __this->___Renderer_0;
		NullCheck(L_15);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16;
		L_16 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_15, NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		goto IL_0059;
	}

IL_0058:
	{
		G_B9_0 = ((Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)(NULL));
		G_B9_1 = G_B8_0;
	}

IL_0059:
	{
		NullCheck(G_B9_1);
		G_B9_1->___mesh_0 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___mesh_0), (void*)G_B9_0);
		// if (mesh == null)
		U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* L_17 = V_0;
		NullCheck(L_17);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_18 = L_17->___mesh_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_0085;
		}
	}
	{
		// BlendShapeData = new BlendShapeData[0];
		BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_20 = (BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA*)(BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA*)SZArrayNew(BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___BlendShapeData_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BlendShapeData_1), (void*)L_20);
		// Mappings = new MappingData[0];
		MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_21 = (MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A*)(MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A*)SZArrayNew(MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___Mappings_2 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mappings_2), (void*)L_21);
		// return;
		return;
	}

IL_0085:
	{
		// Mappings = rendererMapping.Bindings
		//     .Where(b => b.ShapeIndex >= 0 && b.ShapeIndex < mesh.blendShapeCount)
		//     .ToLookup(b => b.Location, b => (shapeIndex: b.ShapeIndex, config: b.Config))
		//     .Select(m => new MappingData(m.Key, m.Select(b => new BindingData(b.shapeIndex, b.config)).ToArray()))
		//     .ToArray();
		RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_22 = ___rendererMapping1;
		NullCheck(L_22);
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_23;
		L_23 = RendererMapping_get_Bindings_m98DB150B6A0DC72CEE360B2F1DBED477A71D0725_inline(L_22, NULL);
		U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* L_24 = V_0;
		Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75* L_25 = (Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75*)il2cpp_codegen_object_new(Func_2_t9FA0AB15FE5D5D6FE6BCCB623D5C1DD34C1B6B75_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Func_2__ctor_m011226701DF8C4BD736CDA1851A82F1A14246571(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m398C8F26A599C7840B805E308A07D8CDCC4AD275_RuntimeMethod_var), NULL);
		RuntimeObject* L_26;
		L_26 = Enumerable_Where_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_mD3A699301AFC095F51CAD86467B56C076F34FB07((RuntimeObject*)L_23, L_25, Enumerable_Where_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_mD3A699301AFC095F51CAD86467B56C076F34FB07_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* L_27 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1;
		Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* L_28 = L_27;
		G_B12_0 = L_28;
		G_B12_1 = L_26;
		G_B12_2 = __this;
		if (L_28)
		{
			G_B13_0 = L_28;
			G_B13_1 = L_26;
			G_B13_2 = __this;
			goto IL_00bc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* L_29 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* L_30 = (Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50*)il2cpp_codegen_object_new(Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_2__ctor_m2DC254DEF0E38E6533DC42E4FE735A995446BAC9(L_30, L_29, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_1_m7231EE0237DF7999CFEE6DB051B4450C408987C9_RuntimeMethod_var), NULL);
		Func_2_tF2139F6C8CC4880C6BE063CDE4E1749FC2E36C50* L_31 = L_30;
		((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_1_1), (void*)L_31);
		G_B13_0 = L_31;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* L_32 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_2_2;
		Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* L_33 = L_32;
		G_B14_0 = L_33;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		if (L_33)
		{
			G_B15_0 = L_33;
			G_B15_1 = G_B13_0;
			G_B15_2 = G_B13_1;
			G_B15_3 = G_B13_2;
			goto IL_00db;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* L_34 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* L_35 = (Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01*)il2cpp_codegen_object_new(Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Func_2__ctor_m86B92D30B37703484B821716BF4C729674D73178(L_35, L_34, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_2_mB6DDEBCBF0249C66246763B66DE28F7343816788_RuntimeMethod_var), NULL);
		Func_2_t797843B612CBBC8A5FF0A0D5FC78A89DE13F1A01* L_36 = L_35;
		((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_2_2 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_2_2), (void*)L_36);
		G_B15_0 = L_36;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
	}

IL_00db:
	{
		RuntimeObject* L_37;
		L_37 = Enumerable_ToLookup_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_m6F7E7E89D08C1E6F4B1D28D2A5DF1F1FDEAE52FE(G_B15_2, G_B15_1, G_B15_0, Enumerable_ToLookup_TisBinding_tB19A0181E8B1F73F96707B14669DA246C5A1F307_TisFaceBlendShape_tB7D84414999EC6784C9C2DE03DC5D7F65F594E93_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_m6F7E7E89D08C1E6F4B1D28D2A5DF1F1FDEAE52FE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* L_38 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_3_4;
		Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* L_39 = L_38;
		G_B16_0 = L_39;
		G_B16_1 = L_37;
		G_B16_2 = G_B15_3;
		if (L_39)
		{
			G_B17_0 = L_39;
			G_B17_1 = L_37;
			G_B17_2 = G_B15_3;
			goto IL_00ff;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* L_40 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* L_41 = (Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9*)il2cpp_codegen_object_new(Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Func_2__ctor_mCBCC07794CE9E015D1544F6C6CA1B356860E920C(L_41, L_40, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_3_m52C709468CE9C718083502223AD33DE5C0381948_RuntimeMethod_var), NULL);
		Func_2_tE78D7B6940DDA2DA0AD2E6E708E5CC36D17C2CC9* L_42 = L_41;
		((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_3_4 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_3_4), (void*)L_42);
		G_B17_0 = L_42;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
	}

IL_00ff:
	{
		RuntimeObject* L_43;
		L_43 = Enumerable_Select_TisIGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m09451A141A03EB9CE1BC350AB32DD6BA40053181(G_B17_1, G_B17_0, Enumerable_Select_TisIGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m09451A141A03EB9CE1BC350AB32DD6BA40053181_RuntimeMethod_var);
		MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_44;
		L_44 = Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE(L_43, Enumerable_ToArray_TisMappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70_m903A8F9D205ED4C47403F9918653C1CACC0247CE_RuntimeMethod_var);
		G_B17_2->___Mappings_2 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&G_B17_2->___Mappings_2), (void*)L_44);
		// BlendShapeData = new BlendShapeData[mesh.blendShapeCount];
		U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* L_45 = V_0;
		NullCheck(L_45);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = L_45->___mesh_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408(L_46, NULL);
		BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_48 = (BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA*)(BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA*)SZArrayNew(BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA_il2cpp_TypeInfo_var, (uint32_t)L_47);
		__this->___BlendShapeData_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BlendShapeData_1), (void*)L_48);
		// foreach (var mapping in Mappings)
		MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_49 = __this->___Mappings_2;
		V_2 = L_49;
		V_3 = 0;
		goto IL_017b;
	}

IL_012f:
	{
		// foreach (var mapping in Mappings)
		MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_50 = V_2;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		// foreach (var binding in mapping.Bindings)
		BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_54 = L_53.___Bindings_1;
		V_4 = L_54;
		V_5 = 0;
		goto IL_016f;
	}

IL_0142:
	{
		// foreach (var binding in mapping.Bindings)
		BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_55 = V_4;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_6 = L_58;
		// BlendShapeData[binding.ShapeIndex].UseCount++;
		BlendShapeDataU5BU5D_t7CBB84A242A58B8CC68A360186C86CD5F673D6BA* L_59 = __this->___BlendShapeData_1;
		BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_60 = V_6;
		int32_t L_61 = L_60.___ShapeIndex_0;
		NullCheck(L_59);
		int32_t* L_62 = (&((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___UseCount_0);
		int32_t* L_63 = L_62;
		int32_t L_64 = *((int32_t*)L_63);
		*((int32_t*)L_63) = (int32_t)((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_016f:
	{
		// foreach (var binding in mapping.Bindings)
		int32_t L_66 = V_5;
		BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_67 = V_4;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_68 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_017b:
	{
		// foreach (var mapping in Mappings)
		int32_t L_69 = V_3;
		MappingDataU5BU5D_t23F53487BF042BE9BE7088C78A91EE5544EA9A8A* L_70 = V_2;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_012f;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RendererData__ctor_m9099D2BC332960D1C6811BD02AFD090AF22FA682_AdjustorThunk (RuntimeObject* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* ___rendererMapping1, const RuntimeMethod* method)
{
	RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53*>(__this + _offset);
	RendererData__ctor_m9099D2BC332960D1C6811BD02AFD090AF22FA682(_thisAdjusted, ___actor0, ___rendererMapping1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m1FCDB504FF027AE6EBFCDEFDBBCF2F2F11222F8B (U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c__DisplayClass3_0::<.ctor>b__0(Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_m398C8F26A599C7840B805E308A07D8CDCC4AD275 (U3CU3Ec__DisplayClass3_0_t43BEDDEB260BD290D4E19D158256C68E9E82993B* __this, Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* ___b0, const RuntimeMethod* method) 
{
	{
		// .Where(b => b.ShapeIndex >= 0 && b.ShapeIndex < mesh.blendShapeCount)
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_0 = ___b0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_2 = ___b0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334_inline(L_2, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = __this->___mesh_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408(L_4, NULL);
		return (bool)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m30B0C2FC89980A314EFCEFE0ADD54DFCA83AE336 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* L_0 = (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883*)il2cpp_codegen_object_new(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5B9C51B88543AB5FBAF6AA889626D44029AA43CA(L_0, NULL);
		((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B9C51B88543AB5FBAF6AA889626D44029AA43CA (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<.ctor>b__3_1(Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__3_1_m7231EE0237DF7999CFEE6DB051B4450C408987C9 (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* __this, Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* ___b0, const RuntimeMethod* method) 
{
	{
		// .ToLookup(b => b.Location, b => (shapeIndex: b.ShapeIndex, config: b.Config))
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_0 = ___b0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Binding_get_Location_m352BFCFB29A83035B4B32355F03DCC8A0C26E12C_inline(L_0, NULL);
		return L_1;
	}
}
// System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<.ctor>b__3_2(Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254 U3CU3Ec_U3C_ctorU3Eb__3_2_mB6DDEBCBF0249C66246763B66DE28F7343816788 (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* __this, Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m8795193A52924A8A087AD53960256453A5ED2506_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .ToLookup(b => b.Location, b => (shapeIndex: b.ShapeIndex, config: b.Config))
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_0 = ___b0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334_inline(L_0, NULL);
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_2 = ___b0;
		NullCheck(L_2);
		BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_3;
		L_3 = Binding_get_Config_m6FE9C6952CB547CBA830969739B7A7F3FDEFCAC7_inline(L_2, NULL);
		ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_m8795193A52924A8A087AD53960256453A5ED2506((&L_4), L_1, L_3, /*hidden argument*/ValueTuple_2__ctor_m8795193A52924A8A087AD53960256453A5ED2506_RuntimeMethod_var);
		return L_4;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/MappingData Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<.ctor>b__3_3(System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 U3CU3Ec_U3C_ctorU3Eb__3_3_m52C709468CE9C718083502223AD33DE5C0381948 (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* __this, RuntimeObject* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mC9675F67E9A03D93289DCB2E2CE9AAE8F29A4DE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_4_m12892685E72122915880D0EA76F7C4F420AEED0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	int32_t G_B1_2 = 0;
	{
		// .Select(m => new MappingData(m.Key, m.Select(b => new BindingData(b.shapeIndex, b.config)).ToArray()))
		RuntimeObject* L_0 = ___m0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* TKey System.Linq.IGrouping`2<Unity.LiveCapture.ARKitFaceCapture.FaceBlendShape,System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>>::get_Key() */, IGrouping_2_t2AFF370B0F1C69DE7C15E4868B0E7E24B93EB93E_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___m0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* L_3 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_3;
		Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var);
		U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* L_5 = ((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* L_6 = (Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B*)il2cpp_codegen_object_new(Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m6AC7BD6FFEB5F7ED930291DEB9EB8F0CC6295C91(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_4_m12892685E72122915880D0EA76F7C4F420AEED0A_RuntimeMethod_var), NULL);
		Func_2_t24050B199FA4C952DD19BD7C0C1F9B91DAB1312B* L_7 = L_6;
		((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883_il2cpp_TypeInfo_var))->___U3CU3E9__3_4_3), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mC9675F67E9A03D93289DCB2E2CE9AAE8F29A4DE1(G_B2_1, G_B2_0, Enumerable_Select_TisValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mC9675F67E9A03D93289DCB2E2CE9AAE8F29A4DE1_RuntimeMethod_var);
		BindingDataU5BU5D_t71AEB5895D1CAE054652723B50FABF6D895F611F* L_9;
		L_9 = Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48(L_8, Enumerable_ToArray_TisBindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2_mD1641C7ACFF7471A35E1EEFEDF67D5ED79F01A48_RuntimeMethod_var);
		MappingData_t88EB85DB24B93F7A0EF696AEECA59FA653F41D70 L_10;
		memset((&L_10), 0, sizeof(L_10));
		MappingData__ctor_m84D3504F967F022835E20D75F7C4C0355C5A2BAF((&L_10), G_B2_2, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/BindingData Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData/<>c::<.ctor>b__3_4(System.ValueTuple`2<System.Int32,Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.BindingConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 U3CU3Ec_U3C_ctorU3Eb__3_4_m12892685E72122915880D0EA76F7C4F420AEED0A (U3CU3Ec_t7D835EF772B559185D0D3F48414AD1B243D8E883* __this, ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254 ___b0, const RuntimeMethod* method) 
{
	{
		// .Select(m => new MappingData(m.Key, m.Select(b => new BindingData(b.shapeIndex, b.config)).ToArray()))
		ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254 L_0 = ___b0;
		int32_t L_1 = L_0.___Item1_0;
		ValueTuple_2_tF13E9FAD16BD422FC8C0AD9D00DE7DE0D635D254 L_2 = ___b0;
		BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_3 = L_2.___Item2_1;
		BindingData_t6C97A229BDAE3CA3A287181BD9B1C3105D210AE2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		BindingData__ctor_mEDA2153AAA8A63486F681649AED667B015E509D9((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/RendererData> Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::get_Renderers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Cache_get_Renderers_m56B64E46CEA3870105466BFF665F7623622C0681 (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<RendererData> Renderers => m_Renderers;
		List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* L_0 = __this->___m_Renderers_2;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::.ctor(Unity.LiveCapture.ARKitFaceCapture.FaceActor,System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache__ctor_mA2F6BCE9209DB58FBEF1E36EC4DEE054256A82EE (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, RuntimeObject* ___maps1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB722BF0DD7023255945C99ED2187160DF98DB27E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE7220409D6E6986A233CA294924BFB2B3F014124_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* V_1 = NULL;
	{
		// readonly Dictionary<string, Transform> m_Bones = new Dictionary<string, Transform>();
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_0 = (Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4*)il2cpp_codegen_object_new(Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F(L_0, Dictionary_2__ctor_mAF22C7EEE7291D6105DF5BE9A731BCF8ABCE416F_RuntimeMethod_var);
		__this->___m_Bones_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Bones_1), (void*)L_0);
		// readonly List<RendererData> m_Renderers = new List<RendererData>();
		List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* L_1 = (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82*)il2cpp_codegen_object_new(List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161(L_1, List_1__ctor_m65371B46567EEDEE2D28E90AE8A230B426A56161_RuntimeMethod_var);
		__this->___m_Renderers_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Renderers_2), (void*)L_1);
		// public Cache(FaceActor actor, IEnumerable<RendererMapping> maps)
		FaceMapperCache__ctor_mD667974AEEC16A5CC0E7D64EB811352A1EFFB953(__this, NULL);
		// foreach (var map in maps)
		RuntimeObject* L_2 = ___maps1;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>::GetEnumerator() */, IEnumerable_1_tB722BF0DD7023255945C99ED2187160DF98DB27E_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0051;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0025_1:
			{
				// foreach (var map in maps)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_7;
				L_7 = InterfaceFuncInvoker0< RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping>::get_Current() */, IEnumerator_1_tE7220409D6E6986A233CA294924BFB2B3F014124_il2cpp_TypeInfo_var, L_6);
				V_1 = L_7;
				// m_Renderers.Add(new RendererData(actor, map));
				List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* L_8 = __this->___m_Renderers_2;
				FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_9 = ___actor0;
				RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* L_10 = V_1;
				RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_11;
				memset((&L_11), 0, sizeof(L_11));
				RendererData__ctor_m9099D2BC332960D1C6811BD02AFD090AF22FA682((&L_11), L_9, L_10, /*hidden argument*/NULL);
				NullCheck(L_8);
				List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_inline(L_8, L_11, List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_RuntimeMethod_var);
			}

IL_003e_1:
			{
				// foreach (var map in maps)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.DefaultFaceMapper/Cache::TryGetBone(Unity.LiveCapture.ARKitFaceCapture.FaceActor,System.String,UnityEngine.Transform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cache_TryGetBone_mAB3CDA9DA04D81ECAF579C123FBB84AC598FD862 (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* ___actor0, String_t* ___path1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___bone2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA1A846825C2320D180BD10D3D3C816A6ECE101E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Bones.TryGetValue(path, out bone))
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_0 = __this->___m_Bones_1;
		String_t* L_1 = ___path1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_2 = ___bone2;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E(L_0, L_1, L_2, Dictionary_2_TryGetValue_mD19A272B7E29A5C74EE2B009A730A415B987C20E_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		// bone = actor.transform.Find(path);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_4 = ___bone2;
		FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* L_5 = ___actor0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		String_t* L_7 = ___path1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, L_7, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_8);
		// if (bone != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_9 = ___bone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = *((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**)L_9);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0035;
		}
	}
	{
		// m_Bones.Add(path, bone);
		Dictionary_2_tF51794D0F14665A9868A7AA446CD5BD75C8663C4* L_12 = __this->___m_Bones_1;
		String_t* L_13 = ___path1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_14 = ___bone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = *((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**)L_14);
		NullCheck(L_12);
		Dictionary_2_Add_mA1A846825C2320D180BD10D3D3C816A6ECE101E0(L_12, L_13, L_15, Dictionary_2_Add_mA1A846825C2320D180BD10D3D3C816A6ECE101E0_RuntimeMethod_var);
	}

IL_0035:
	{
		// return bone != null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_16 = ___bone2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = *((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1**)L_16);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_18;
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
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.EvaluatorPreset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvaluatorPreset__ctor_mE90D8654E20329A0F61FF3D52E7A6422EBADDA59 (EvaluatorPreset_t249844E1ECEA3C9254FF42F0B418298F26171EFE* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator::get_Evaluator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurveEvaluator_get_Evaluator_m92E295DC2F89927EFBE3078D891BA51D72278A27 (CurveEvaluator_t16309E7ADEEF245FEE5D7A9C80E6D7712E56202B* __this, const RuntimeMethod* method) 
{
	{
		// public override IEvaluator Evaluator => m_Evaluator;
		Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* L_0 = __this->___m_Evaluator_4;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurveEvaluator__ctor_m8B721915EC710F3CB89A01D200FADF41CE90D355 (CurveEvaluator_t16309E7ADEEF245FEE5D7A9C80E6D7712E56202B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Impl m_Evaluator = new Impl();
		Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* L_0 = (Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B*)il2cpp_codegen_object_new(Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Impl__ctor_m9604F6E2CED284F536D9651B96EA8F00001A2FC2(L_0, NULL);
		__this->___m_Evaluator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Evaluator_4), (void*)L_0);
		EvaluatorPreset__ctor_mE90D8654E20329A0F61FF3D52E7A6422EBADDA59(__this, NULL);
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
// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Impl_Evaluate_m55C0EEC080C89EA0C271ECB1083ED7F205DFD106 (Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return m_Curve.Evaluate(value);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_Curve_0;
		float L_1 = ___value0;
		NullCheck(L_0);
		float L_2;
		L_2 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.CurveEvaluator/Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m9604F6E2CED284F536D9651B96EA8F00001A2FC2 (Impl_t420C94D938AFA26032DB65EBE711C97C9DF4482B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimationCurve m_Curve = new AnimationCurve(new Keyframe(0f, 0f), new Keyframe(1f, 100f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (100.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___m_Curve_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Curve_0), (void*)L_5);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.IEvaluator Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator::get_Evaluator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleEvaluator_get_Evaluator_mE4F6A897717F83E11802B3EED1C64B1FD1748D35 (SimpleEvaluator_t4E00D9296BC9A61A845106A00DB77C8826492F5D* __this, const RuntimeMethod* method) 
{
	{
		// public override IEvaluator Evaluator => m_Evaluator;
		Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* L_0 = __this->___m_Evaluator_4;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleEvaluator__ctor_m21EC77DD433B9A57B8073FBA864A5101F5E8B764 (SimpleEvaluator_t4E00D9296BC9A61A845106A00DB77C8826492F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Impl m_Evaluator = new Impl();
		Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* L_0 = (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B*)il2cpp_codegen_object_new(Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Impl__ctor_m0BA13FF0A4B9D31B097CD51ED66DEAA657F541A0(L_0, NULL);
		__this->___m_Evaluator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Evaluator_4), (void*)L_0);
		EvaluatorPreset__ctor_mE90D8654E20329A0F61FF3D52E7A6422EBADDA59(__this, NULL);
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
// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Impl_Evaluate_m8F650C0530036B2A1DEECA020AA367AAC8A9C19F (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* __this, float ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (m_Clamping)
		int32_t L_0 = __this->___m_Clamping_3;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0046;
	}

IL_0010:
	{
		// return Mathf.Min((m_Multiplier * value) + m_Offset, m_Max);
		float L_3 = __this->___m_Multiplier_0;
		float L_4 = ___value0;
		float L_5 = __this->___m_Offset_1;
		float L_6 = __this->___m_Max_2;
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6, NULL);
		return L_7;
	}

IL_002b:
	{
		// return SmoothClamp(m_Offset, m_Max, m_Multiplier * value);
		float L_8 = __this->___m_Offset_1;
		float L_9 = __this->___m_Max_2;
		float L_10 = __this->___m_Multiplier_0;
		float L_11 = ___value0;
		float L_12;
		L_12 = Impl_SmoothClamp_mFC222DEB60E74887EBC80D61CF714734D63FD962(__this, L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		return L_12;
	}

IL_0046:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Impl_Evaluate_m8F650C0530036B2A1DEECA020AA367AAC8A9C19F_RuntimeMethod_var)));
	}
}
// System.Single Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::SmoothClamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Impl_SmoothClamp_mFC222DEB60E74887EBC80D61CF714734D63FD962 (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* __this, float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	{
		// if (Mathf.Approximately(a, b))
		float L_0 = ___a0;
		float L_1 = ___b1;
		bool L_2;
		L_2 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return a;
		float L_3 = ___a0;
		return L_3;
	}

IL_000b:
	{
		// t = Mathf.Clamp01((t - a) / (b - a));
		float L_4 = ___t2;
		float L_5 = ___a0;
		float L_6 = ___b1;
		float L_7 = ___a0;
		float L_8;
		L_8 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_4, L_5))/((float)il2cpp_codegen_subtract(L_6, L_7)))), NULL);
		___t2 = L_8;
		// t = (0.5f * t) + 0.5f;
		float L_9 = ___t2;
		___t2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.5f), L_9)), (0.5f)));
		// return ((t * t * (6f - 4f * t)) - 1f) * (b - a) + a;
		float L_10 = ___t2;
		float L_11 = ___t2;
		float L_12 = ___t2;
		float L_13 = ___b1;
		float L_14 = ___a0;
		float L_15 = ___a0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), ((float)il2cpp_codegen_subtract((6.0f), ((float)il2cpp_codegen_multiply((4.0f), L_12)))))), (1.0f))), ((float)il2cpp_codegen_subtract(L_13, L_14)))), L_15));
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.SimpleEvaluator/Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m0BA13FF0A4B9D31B097CD51ED66DEAA657F541A0 (Impl_tDBD91382D69101DB8B25028BE3FB1FCDC0FA685B* __this, const RuntimeMethod* method) 
{
	{
		// float m_Multiplier = 100f;
		__this->___m_Multiplier_0 = (100.0f);
		// float m_Max = 100f;
		__this->___m_Max_2 = (100.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RendererMapping_get_Path_m6315136E45B9715CC33F54F3D9F22EF8BB0BA732 (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) 
{
	{
		// public string Path => m_Path;
		String_t* L_0 = __this->___m_Path_0;
		return L_0;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.Binding[] Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::get_Bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* RendererMapping_get_Bindings_m98DB150B6A0DC72CEE360B2F1DBED477A71D0725 (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) 
{
	{
		// public Binding[] Bindings => m_Bindings;
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_0 = __this->___m_Bindings_1;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::Validate(Unity.LiveCapture.ARKitFaceCapture.FaceMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererMapping_Validate_mF563BF0CD2B41660F6C4BF563456063AF30F6433 (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* ___mapper0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8275D0CA5C2DC31FC6519044094C542BF8DBB270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mF4F71C17991C0CBBD4651AE5A9C64C4557E32F83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mEE597D10B54FAB09E3FF5B5EA1BCBC42DB12E1EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mC8CA5D229FDB741943A7B519F28DB4AA4B4FAC63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12AE57FA7567BBD95ADC812EEF3FEF042E76CBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34B478E6EA510500EE7FDF26DA107A842967B909);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* V_0 = NULL;
	BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* V_1 = NULL;
	int32_t V_2 = 0;
	Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* V_3 = NULL;
	ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var usedKeys = new HashSet<(FaceBlendShape, int)>();
		HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* L_0 = (HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5*)il2cpp_codegen_object_new(HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_mEE597D10B54FAB09E3FF5B5EA1BCBC42DB12E1EA(L_0, HashSet_1__ctor_mEE597D10B54FAB09E3FF5B5EA1BCBC42DB12E1EA_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var binding in Bindings)
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_1;
		L_1 = RendererMapping_get_Bindings_m98DB150B6A0DC72CEE360B2F1DBED477A71D0725_inline(__this, NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0062;
	}

IL_0011:
	{
		// foreach (var binding in Bindings)
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// var key = (location : binding.Location, shapeIndex : binding.ShapeIndex);
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Binding_get_Location_m352BFCFB29A83035B4B32355F03DCC8A0C26E12C_inline(L_6, NULL);
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334_inline(L_8, NULL);
		ValueTuple_2__ctor_mC8CA5D229FDB741943A7B519F28DB4AA4B4FAC63((&V_4), L_7, L_9, ValueTuple_2__ctor_mC8CA5D229FDB741943A7B519F28DB4AA4B4FAC63_RuntimeMethod_var);
		// if (usedKeys.Contains(key))
		HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* L_10 = V_0;
		ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690 L_11 = V_4;
		NullCheck(L_10);
		bool L_12;
		L_12 = HashSet_1_Contains_mF4F71C17991C0CBBD4651AE5A9C64C4557E32F83(L_10, L_11, HashSet_1_Contains_mF4F71C17991C0CBBD4651AE5A9C64C4557E32F83_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		// Debug.LogError($"Renderer \"{this}\" in face mapper \"{mapper.name}\" has multiple bindings for {binding}. " +
		//     $"Try removing the duplicate, or re-initialize the mapping for the renderer to fix the asset.");
		FaceMapper_tE0EC0AAAB26C34D56FC8F87F4847D27610CC0E10* L_13 = ___mapper0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* L_15 = V_3;
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral34B478E6EA510500EE7FDF26DA107A842967B909, __this, L_14, L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteral12AE57FA7567BBD95ADC812EEF3FEF042E76CBBF, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
		// continue;
		goto IL_005e;
	}

IL_0055:
	{
		// usedKeys.Add(key);
		HashSet_1_tED0B0F4462B4A42D02475D4459B408AB91B494B5* L_18 = V_0;
		ValueTuple_2_t32504C9A4ED15BDB659F2DC284F541937ABCE690 L_19 = V_4;
		NullCheck(L_18);
		bool L_20;
		L_20 = HashSet_1_Add_m8275D0CA5C2DC31FC6519044094C542BF8DBB270(L_18, L_19, HashSet_1_Add_m8275D0CA5C2DC31FC6519044094C542BF8DBB270_RuntimeMethod_var);
	}

IL_005e:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0062:
	{
		// foreach (var binding in Bindings)
		int32_t L_22 = V_2;
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.String Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RendererMapping_ToString_m819F71E7AB49FB475D70877C66E087211CF633E6 (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => System.IO.Path.GetFileName(Path);
		String_t* L_0;
		L_0 = RendererMapping_get_Path_m6315136E45B9715CC33F54F3D9F22EF8BB0BA732_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.LiveCapture.ARKitFaceCapture.DefaultMapper.RendererMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RendererMapping__ctor_mF69FC40465BB455D9970BC6E065B74F318C69C12 (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string m_Path = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Path_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Path_0), (void*)L_0);
		// Binding[] m_Bindings = new Binding[0];
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_1 = (BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1*)(BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1*)SZArrayNew(BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_Bindings_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Bindings_1), (void*)L_1);
		// bool m_IsExpanded = true;
		__this->___m_IsExpanded_2 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0 Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 FaceSampleV0_op_Explicit_m02764DB8A85909FEE2340D0C0E317EF222B05AA3 (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) 
{
	FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new FaceSampleV0
		// {
		//     m_Timestamp = (float)sample.Time,
		//     m_BlendShapes = sample.FacePose.BlendShapes,
		//     m_HeadPosition = sample.FacePose.HeadPosition,
		//     m_HeadOrientation = sample.FacePose.HeadOrientation,
		//     m_LeftEyeOrientation = sample.FacePose.LeftEyeOrientation,
		//     m_RightEyeOrientation = sample.FacePose.RightEyeOrientation,
		// };;
		il2cpp_codegen_initobj((&V_0), sizeof(FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8));
		double L_0;
		L_0 = FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline((&___sample0), NULL);
		(&V_0)->___m_Timestamp_0 = ((float)L_0);
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_1 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_2 = L_1.___FacePose_1;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_3 = L_2.___BlendShapes_1;
		(&V_0)->___m_BlendShapes_1 = L_3;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_4 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_5 = L_4.___FacePose_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___HeadPosition_2;
		(&V_0)->___m_HeadPosition_2 = L_6;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_7 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_8 = L_7.___FacePose_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___HeadOrientation_3;
		(&V_0)->___m_HeadOrientation_3 = L_9;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_10 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_11 = L_10.___FacePose_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11.___LeftEyeOrientation_4;
		(&V_0)->___m_LeftEyeOrientation_4 = L_12;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_13 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_14 = L_13.___FacePose_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14.___RightEyeOrientation_5;
		(&V_0)->___m_RightEyeOrientation_5 = L_15;
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_16 = V_0;
		return L_16;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceSample Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 FaceSampleV0_op_Explicit_m743A4D1E49D0D9EBBBEB1381FA23AD525196C57C (FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 ___sample0, const RuntimeMethod* method) 
{
	FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new FaceSample
		// {
		//     Time = sample.m_Timestamp,
		//     FacePose = new FacePose
		//     {
		//         BlendShapes = sample.m_BlendShapes,
		//         HeadPosition = sample.m_HeadPosition,
		//         HeadOrientation = sample.m_HeadOrientation,
		//         LeftEyeOrientation = sample.m_LeftEyeOrientation,
		//         RightEyeOrientation = sample.m_RightEyeOrientation,
		//     },
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61));
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_0 = ___sample0;
		float L_1 = L_0.___m_Timestamp_0;
		FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7_inline((&V_0), ((double)L_1), NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C));
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_2 = ___sample0;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_3 = L_2.___m_BlendShapes_1;
		(&V_1)->___BlendShapes_1 = L_3;
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_4 = ___sample0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___m_HeadPosition_2;
		(&V_1)->___HeadPosition_2 = L_5;
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_6 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6.___m_HeadOrientation_3;
		(&V_1)->___HeadOrientation_3 = L_7;
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_8 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___m_LeftEyeOrientation_4;
		(&V_1)->___LeftEyeOrientation_4 = L_9;
		FaceSampleV0_t873A9B049A56BCECEBD6BCCBF58CB1E33A0C91A8 L_10 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10.___m_RightEyeOrientation_5;
		(&V_1)->___RightEyeOrientation_5 = L_11;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_12 = V_1;
		(&V_0)->___FacePose_1 = L_12;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_13 = V_0;
		return L_13;
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
// Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1 Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.FaceSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 FaceSampleV1_op_Explicit_m79F64649976BF351B291D596E78D05B0E7E812C8 (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___sample0, const RuntimeMethod* method) 
{
	FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new FaceSampleV1
		// {
		//     m_Time = sample.Time,
		//     m_BlendShapes = sample.FacePose.BlendShapes,
		//     m_HeadPosition = sample.FacePose.HeadPosition,
		//     m_HeadOrientation = sample.FacePose.HeadOrientation,
		//     m_LeftEyeOrientation = sample.FacePose.LeftEyeOrientation,
		//     m_RightEyeOrientation = sample.FacePose.RightEyeOrientation,
		// };;
		il2cpp_codegen_initobj((&V_0), sizeof(FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569));
		double L_0;
		L_0 = FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline((&___sample0), NULL);
		(&V_0)->___m_Time_0 = L_0;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_1 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_2 = L_1.___FacePose_1;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_3 = L_2.___BlendShapes_1;
		(&V_0)->___m_BlendShapes_1 = L_3;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_4 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_5 = L_4.___FacePose_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___HeadPosition_2;
		(&V_0)->___m_HeadPosition_2 = L_6;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_7 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_8 = L_7.___FacePose_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___HeadOrientation_3;
		(&V_0)->___m_HeadOrientation_3 = L_9;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_10 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_11 = L_10.___FacePose_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = L_11.___LeftEyeOrientation_4;
		(&V_0)->___m_LeftEyeOrientation_4 = L_12;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_13 = ___sample0;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_14 = L_13.___FacePose_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14.___RightEyeOrientation_5;
		(&V_0)->___m_RightEyeOrientation_5 = L_15;
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_16 = V_0;
		return L_16;
	}
}
// Unity.LiveCapture.ARKitFaceCapture.FaceSample Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1::op_Explicit(Unity.LiveCapture.ARKitFaceCapture.Networking.FaceSampleV1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 FaceSampleV1_op_Explicit_m0A2C976F89C91D70142F318E18AAB387EB3DFC96 (FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 ___sample0, const RuntimeMethod* method) 
{
	FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new FaceSample
		// {
		//     Time = sample.m_Time,
		//     FacePose = new FacePose
		//     {
		//         BlendShapes = sample.m_BlendShapes,
		//         HeadPosition = sample.m_HeadPosition,
		//         HeadOrientation = sample.m_HeadOrientation,
		//         LeftEyeOrientation = sample.m_LeftEyeOrientation,
		//         RightEyeOrientation = sample.m_RightEyeOrientation,
		//     },
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61));
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_0 = ___sample0;
		double L_1 = L_0.___m_Time_0;
		FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7_inline((&V_0), L_1, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C));
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_2 = ___sample0;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_3 = L_2.___m_BlendShapes_1;
		(&V_1)->___BlendShapes_1 = L_3;
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_4 = ___sample0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___m_HeadPosition_2;
		(&V_1)->___HeadPosition_2 = L_5;
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_6 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6.___m_HeadOrientation_3;
		(&V_1)->___HeadOrientation_3 = L_7;
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_8 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___m_LeftEyeOrientation_4;
		(&V_1)->___LeftEyeOrientation_4 = L_9;
		FaceSampleV1_tB371EA101D5D2EA25C146ADA01B313F0E1288569 L_10 = ___sample0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10.___m_RightEyeOrientation_5;
		(&V_1)->___RightEyeOrientation_5 = L_11;
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_12 = V_1;
		(&V_0)->___FacePose_1 = L_12;
		FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double FaceSample_get_Time_m9A433577AF9B792451BCD0C9B0ABACF4FFD06CD8_inline (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Time;
		double L_0 = __this->___m_Time_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceSample_set_Time_m436F64C26BC9DFEA4D11E3D63B27AADD14A29CF7_inline (FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Time = value;
		double L_0 = ___value0;
		__this->___m_Time_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_Animator_m98048EBA7DB286EEA74D15FBEC0D1DEBBAA16DFC_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		// public Animator Animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___value0;
		__this->___U3CAnimatorU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAnimatorU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* FaceBlendShapePose_get_Shapes_mC820E40260ACCA58DF902558C25C93F3312E28C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FaceBlendShape[] Shapes { get; } = Enum.GetValues(typeof(FaceBlendShape))
		il2cpp_codegen_runtime_class_init_inline(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var);
		FaceBlendShapeU5BU5D_tDFBC9A70D1F388E11B6DAECEC02A461D5E3F89A0* L_0 = ((FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_StaticFields*)il2cpp_codegen_static_fields_for(FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79_il2cpp_TypeInfo_var))->___U3CShapesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* TimedDataSourceManager_get_Instance_m5F498934F9AD58C582C6981535C84CC231926379_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimedDataSourceManager Instance { get; } = new TimedDataSourceManager(nameof(TimedDataSourceManager));
		il2cpp_codegen_runtime_class_init_inline(TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var);
		TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174* L_0 = ((TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_StaticFields*)il2cpp_codegen_static_fields_for(TimedDataSourceManager_t10D2DDC3A41DFA68F97EF293E33F7E36D6120174_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_Channels_mFD2A2BA45B3DF4D67188DC5A86C4C332AE7527AA_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FaceChannelFlags Channels { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CChannelsU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_OnReset_m44FAF0C35D0C2DDDCA4B13EEB22DDBD74FAFE8C0_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action OnReset { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___value0;
		__this->___U3COnResetU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnResetU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FaceDevice_get_IsSynchronized_m3D91B9EC81574591C84CC9FC941934425C9D1FB9_inline (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsSynchronized;
		bool L_0 = __this->___m_IsSynchronized_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 FaceDeviceRecorder_get_InitialTime_m9EF90B4F3CB3AEF35184903B7BCCE1BC715D4BA2_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double? InitialTime { get; private set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = __this->___U3CInitialTimeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* FaceActor_get_Animator_m38D34A64E8C69274019554D9AAFECA2C5B2019AD_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, const RuntimeMethod* method) 
{
	{
		// public Animator Animator { get; private set; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___U3CAnimatorU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_BlendShapes_m367764D14E6783671E9CF3512E39A26CCB0E5E52_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BlendShapes = value;
		FaceBlendShapePose_tCC06D23D88F0799CC628002E4745263E5CA94B79 L_0 = ___value0;
		__this->___m_BlendShapes_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadPosition_mF2509211B721CEB887D9A1CAB2DC63EE7DF03D16_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadPosition = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_HeadPosition_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadOrientation_mBFE01868BA35528237375799D5F17842DCCB4F00_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadOrientation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_HeadOrientation_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_LeftEyeOrientation_mEB0ADF7AB7E1E0810F10D92D8A6F003939D9635C_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LeftEyeOrientation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_LeftEyeOrientation_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_RightEyeOrientation_m9F7FECD4F55A01998D7AEA5B86E804F638853043_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RightEyeOrientation = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___m_RightEyeOrientation_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_BlendShapesEnabled_m6528236DFBB1FC4F068D199B2781ED097F97B9C7_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BlendShapesEnabled = value;
		bool L_0 = ___value0;
		__this->___m_BlendShapesEnabled_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadPositionEnabled_mD75AA798500FCB6CDF787949D2B488055AEB82D5_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadPositionEnabled = value;
		bool L_0 = ___value0;
		__this->___m_HeadPositionEnabled_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_HeadOrientationEnabled_m35DFF7431928FF0A496E839F00810A43B1C8A94D_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HeadOrientationEnabled = value;
		bool L_0 = ___value0;
		__this->___m_HeadOrientationEnabled_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceActor_set_EyeOrientationEnabled_m13724093F2073EBFB139B687C09777335FAF4AC3_inline (FaceActor_tC8A7752CD293BB0E2D6541995CFB16D95433DE4D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_EyeOrientationEnabled = value;
		bool L_0 = ___value0;
		__this->___m_EyeOrientationEnabled_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 FaceDevice_get_PresentationOffset_m4D7FDCBE8C78CF053CC9BE74B3ABB2972A4DE789_inline (FaceDevice_tB2D698FD5C8CEB37D0AC6460FA470FC385B65468* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SyncPresentationOffset;
		FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9 L_0 = __this->___m_SyncPresentationOffset_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrameTime_get_FrameNumber_mCBC404E99B67419686B2957F86DBF0C87FF2AA70_inline (FrameTime_tE9F4AAD4F998C29CFF5456B4691BCA1C05B9F6C9* __this, const RuntimeMethod* method) 
{
	{
		// public int FrameNumber => m_FrameNumber;
		int32_t L_0 = __this->___m_FrameNumber_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C FacePose_get_Identity_mA875106D8CC95EC9E8080322064385037F417D86_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FacePose Identity { get; } = new FacePose
		il2cpp_codegen_runtime_class_init_inline(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var);
		FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C L_0 = ((FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_StaticFields*)il2cpp_codegen_static_fields_for(FacePose_t6D961999E164A82A34AD78BD707BAC55D314F18C_il2cpp_TypeInfo_var))->___U3CIdentityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_Time_m25B457F156DB91417439AF2D4FB490065AF470C2_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double Time { get; private set; }
		double L_0 = __this->___U3CTimeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double FaceDeviceRecorder_get_TimeOffset_mB0B784EBD827B16598DE23BECDB9689F296594C3_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public double TimeOffset { get; private set; }
		double L_0 = __this->___U3CTimeOffsetU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_Time_m85D9A261545AAA4628DFF7A1A93B00D58FABC303_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Time { get; private set; }
		double L_0 = ___value0;
		__this->___U3CTimeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_InitialTime_mEE3A6970E7A1681B68C45DD7478B7D6003EF3E8B_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___value0, const RuntimeMethod* method) 
{
	{
		// public double? InitialTime { get; private set; }
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_0 = ___value0;
		__this->___U3CInitialTimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceDeviceRecorder_set_TimeOffset_m18F2E0AA20D095709FCCE2013DE46AD9B4E2750B_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double TimeOffset { get; private set; }
		double L_0 = ___value0;
		__this->___U3CTimeOffsetU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_BlendShapeError_m53B8030B80EC185C940DE6E334A655B255682EA9_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BlendShapeError;
		float L_0 = __this->___m_BlendShapeError_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_PositionError_m592BE519CBA2DBCCDA7D19C7B1ACA76ECF6FDF18_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PositionError;
		float L_0 = __this->___m_PositionError_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FaceDeviceRecorder_get_RotationError_m94F72E2C9165A693217CE72BCFEE76F0E4B96033_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RotationError;
		float L_0 = __this->___m_RotationError_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* FaceDeviceRecorder_get_OnReset_mCEA65CD2332BABD2CA8491AF176E5013562A48E2_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public Action OnReset { get; set; }
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COnResetU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FaceDeviceRecorder_get_Channels_m9C8C073542A9A62FAD739904B88A4529BA296977_inline (FaceDeviceRecorder_tA2C538ECD2C18AE226CD52118A2F9022F3C61776* __this, const RuntimeMethod* method) 
{
	{
		// public FaceChannelFlags Channels { get; set; }
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FaceMapperCache_get_Disposed_m610CD1556B5E9F520DD8E7A250729D78BADA3E98_inline (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, const RuntimeMethod* method) 
{
	{
		// public bool Disposed { get; private set; }
		bool L_0 = __this->___U3CDisposedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FaceMapperCache_set_Disposed_m1FC467C9C0835059125DF2060F5E27E4E0C3D7A3_inline (FaceMapperCache_t9BD74DAB10C761F88984989D766CD1A006E93F18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Disposed { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CDisposedU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RendererMapping_get_Path_m6315136E45B9715CC33F54F3D9F22EF8BB0BA732_inline (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) 
{
	{
		// public string Path => m_Path;
		String_t* L_0 = __this->___m_Path_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Cache_get_Renderers_m56B64E46CEA3870105466BFF665F7623622C0681_inline (Cache_tC88E0D95D8346F1850AE9C65B3D3CC8828D4F38C* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<RendererData> Renderers => m_Renderers;
		List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* L_0 = __this->___m_Renderers_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BindingConfig_get_OverrideSmoothing_mD069020FE33A5466CFFABE0CF1E5480A60983E47_inline (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) 
{
	{
		// public bool OverrideSmoothing => m_OverrideSmoothing;
		bool L_0 = __this->___m_OverrideSmoothing_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BindingConfig_get_Smoothing_mDA3304DED53ECD2DF484E5CC4A9C9751642D973A_inline (BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* __this, const RuntimeMethod* method) 
{
	{
		// public float Smoothing => m_Smoothing;
		float L_0 = __this->___m_Smoothing_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* RendererMapping_get_Bindings_m98DB150B6A0DC72CEE360B2F1DBED477A71D0725_inline (RendererMapping_t70A002B8BEB20E7CD83405179D3EA112EBA74067* __this, const RuntimeMethod* method) 
{
	{
		// public Binding[] Bindings => m_Bindings;
		BindingU5BU5D_tC4412C701E2D5149A150BB57954E6F9AE8BE45D1* L_0 = __this->___m_Bindings_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Binding_get_ShapeIndex_m593236C900850B05764BC19D60B8536C20DF1334_inline (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public int ShapeIndex => m_ShapeIndex;
		int32_t L_0 = __this->___m_ShapeIndex_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Binding_get_Location_m352BFCFB29A83035B4B32355F03DCC8A0C26E12C_inline (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public FaceBlendShape Location => m_Location;
		int32_t L_0 = __this->___m_Location_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* Binding_get_Config_m6FE9C6952CB547CBA830969739B7A7F3FDEFCAC7_inline (Binding_tB19A0181E8B1F73F96707B14669DA246C5A1F307* __this, const RuntimeMethod* method) 
{
	{
		// public BindingConfig Config => m_Config;
		BindingConfig_t98AE22AAB01ECD34BFB91EAA432E820D5348CF5C* L_0 = __this->___m_Config_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m85237C700D57E8F9650D646DDB06AC917B28F7E8_gshared_inline (Action_1_t65E42951F2246B124818430106A38AF664E45C14* __this, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FaceSample_tBABA6C103BF7D31ADE5914C4D2AB559FF8B63F61, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 TimedDataBuffer_1_get_FrameRate_mFF1829D044E2D7E4868972BA3D4FA01B65E34A45_gshared_inline (TimedDataBuffer_1_t451E4059C7E9774A5EDA9A3BE119C862A3754E4F* __this, const RuntimeMethod* method) 
{
	{
		// public FrameRate FrameRate { get; }
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0 = (FrameRate_t538A85F13DAFBF72960CCE300100049923F02621)__this->___U3CFrameRateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompanionAppDevice_1_GetClient_m0286A312E784D2C1F8F95D5C096B62F7E4D783E9_gshared_inline (CompanionAppDevice_1_t6D7C04B0105E178B1209E9992DE4651A2D59DA6A* __this, const RuntimeMethod* method) 
{
	{
		// return m_Client;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Client_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m149BC49C4794ACF43695F691E4C135CEDA4457B7_gshared_inline (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82* __this, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 ___item0, const RuntimeMethod* method) 
{
	RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1* L_1 = (RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RendererDataU5BU5D_t5E58379063218C20645624E0610C237E68AE5BF1* L_6 = V_0;
		int32_t L_7 = V_1;
		RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53)L_8);
		return;
	}

IL_0034:
	{
		RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53 L_9 = ___item0;
		((  void (*) (List_1_tE664B6A16F8927C5F65DA7F6AFA730F46AD37B82*, RendererData_tD433917DE07F4452121E7F0604A3010BEE522D53, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
