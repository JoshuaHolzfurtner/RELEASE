#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]>
struct Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.ByteEnum>
struct Action_1_tCDE2BF37CF96F24FC76DF7BC259C4F887BD38E12;
// System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F;
// System.Action`1<System.Double>
struct Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A;
// System.Action`1<Unity.LiveCapture.FrameRate>
struct Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A;
// System.Action`1<System.Guid>
struct Action_1_t33413EDB36E6D5980F6CA903E76E505099813427;
// System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<Unity.LiveCapture.Networking.Message>
struct Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.LiveCapture.Networking.Remote>
struct Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6;
// System.Action`1<Unity.LiveCapture.SerializableGuid>
struct Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>
struct Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D;
// System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806;
// System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316;
// System.Action`1<Unity.LiveCapture.Networking.Protocols.TextureData>
struct Action_1_t12104754636C0471D01E9321801E298E3DDC9869;
// System.Action`2<System.Guid,System.Object>
struct Action_2_t9B2E784F9E1BF1BA770316E3E717CEDFB48F86AE;
// System.Action`2<System.Guid,UnityEngine.Texture2D>
struct Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus>
struct Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.ByteEnum>
struct BinaryReceiver_1_tE0F8BC2CD90B293EE985DE3DB04216A94D1C43EE;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>
struct BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.FrameRate>
struct BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Int32>
struct BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3;
// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.SerializableGuid>
struct BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.ByteEnum>
struct BinarySender_1_tDC2D41DB2D4BE7083A343F8F9AC5060F460FA163;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>
struct BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.FrameRate>
struct BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32>
struct BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249;
// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid>
struct BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0;
// System.Collections.Concurrent.ConcurrentBag`1<Unity.LiveCapture.Networking.Message>
struct ConcurrentBag_1_t19879B91FF05E26BAE7DA4ABF67A81B13B2977BC;
// System.Collections.Concurrent.ConcurrentBag`1<System.Net.Sockets.SocketAsyncEventArgs>
struct ConcurrentBag_1_t17FD0CBDEA9A7E619DF5AA9C5152CF91933523FC;
// System.Collections.Concurrent.ConcurrentDictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.Connection>
struct ConcurrentDictionary_2_tF1F22BAE89E31F1EC7F6B646509973C849BCDFAF;
// System.Collections.Concurrent.ConcurrentQueue`1<Unity.LiveCapture.Networking.NetworkBase/ConnectionEvent>
struct ConcurrentQueue_1_tD9F303D8EB5501F8392C6CD31AA793914ABB8AFD;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Boolean>
struct DataReceiver_1_tB8B18BADCF319191B855D301BBD1D4310019B1FE;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.ByteEnum>
struct DataReceiver_1_tDEF9AC0E6994C09F6C5DA960BDCC76CE0A8F475F;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct DataReceiver_1_t5B3A315122A3A3F344920A37CA66FE26BFF286B3;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Double>
struct DataReceiver_1_tD8BB3E6FBCAD718F690B2DBED17FBE3F75F54988;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.FrameRate>
struct DataReceiver_1_t75F47CC44D3CEAE38FA3CCE0955EE3344496DD67;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Int32>
struct DataReceiver_1_t1AC851C1799071A9F92BA704086A92969E2EE598;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Object>
struct DataReceiver_1_tC815D262E03B4349EDEFFE526D2A5ECBBF95DB66;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.SerializableGuid>
struct DataReceiver_1_t0417E786457DDE68F17374FE6D4F9F6C761D1801;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.String>
struct DataReceiver_1_t9C49F5C5995704CBB73774C8BA88E2C8C2002770;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct DataReceiver_1_t55F1160F156BE3FB3182B55F446D7A7B4F3C9F53;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct DataReceiver_1_t51ACA31A0B1260CFBF1715476FDC23DD5DE79FF9;
// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.Networking.Protocols.TextureData>
struct DataReceiver_1_tD50DFD14A81BB208FEB0D86FC8757AFAB4DF0EE0;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Boolean>
struct DataSender_1_tB28173AF33AF21D33414B8B9E2FCCB041C0665AA;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.ByteEnum>
struct DataSender_1_tCD5B19F757112B02061B1C01A656E47C41CFCE4C;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double>
struct DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.FrameRate>
struct DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Int32>
struct DataSender_1_tA72D3C4D52A23C5A10A6CA707A2333878527064A;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Object>
struct DataSender_1_t52CA7F06584EE6BA48A9C6CAFCD987319AD2177F;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.SerializableGuid>
struct DataSender_1_tC56BD0EB4BC5579BF3722E894ACDF8CB4FB9549C;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.String>
struct DataSender_1_t67BCF359AF76BB460F669D191A5DCFA01E02A161;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct DataSender_1_tAB89CFD5EBC29C057349F67BFE926460D6593C89;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct DataSender_1_t86DC27CD2A94194F9E137479CACA8FFC7FCDF678;
// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.Networking.Protocols.TextureData>
struct DataSender_1_t229782187C22021F33EECCD18B4C19FBE543F3EF;
// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>
struct Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,System.Action`1<Unity.LiveCapture.Networking.Message>>
struct Dictionary_2_t6659580E835A103B8A8E353FDD132FC4400E8E23;
// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,System.Collections.Generic.Queue`1<Unity.LiveCapture.Networking.Message>>
struct Dictionary_2_tBE8D66389A2A6B5D221814B47CF8EE11F6AE579A;
// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943;
// System.Collections.Generic.Dictionary`2<System.String,Unity.LiveCapture.Networking.Protocols.MessageBase>
struct Dictionary_2_t384F4764EF6E86833FA393FF9387C2CA57D70B93;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.ConstructorInfo>
struct Dictionary_2_tED30F5BF287C8F0CFD2481AC759936F08D9B9566;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t384D2A0FF42BF1302A3F513FC32DB105F1CD5455;
// System.Collections.Generic.Dictionary`2<System.UInt16,Unity.LiveCapture.Networking.Protocols.IDataReceiver>
struct Dictionary_2_tDC18D278991319E86A907745B3961CBBFBA5F2D1;
// System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean>
struct Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Unity.LiveCapture.CompanionApp.TakeDescriptor,Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199;
// System.Func`2<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0,Unity.LiveCapture.CompanionApp.TakeDescriptor>
struct Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1;
// System.Func`2<UnityEngine.Transform,System.String>
struct Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3;
// System.Func`2<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64>
struct Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct IEnumerable_1_tE0FEFEB1593B511518320091E6CA23FCE84D14EC;
// System.Collections.Generic.IEnumerable`1<System.Net.IPEndPoint>
struct IEnumerable_1_tC965655CB5E497C998F1BC5FA8C98B694FFAECAF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>
struct IEnumerable_1_t4FBAEED2FB2E5ED8857ABB78B2100FADDF70C3B4;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct IEnumerable_1_tA4323DF99312C9E2DE57541036D55452E5CA41EC;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t4980F9E076B96A4E697C2E09671204DD70B5573F;
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>
struct IEnumerable_1_t373B19994393C229F7AD7A7B0D4FC163512B5EAD;
// System.Collections.Generic.IEqualityComparer`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct IEqualityComparer_1_t0E31CFE1A6A0BBF89568E0A83D2067731E01FBE6;
// System.Collections.Generic.IEqualityComparer`1<Unity.LiveCapture.Networking.Remote>
struct IEqualityComparer_1_t03A996C935CE660A6920A7B282A42CA9FA619C06;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Linq.IOrderedEnumerable`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>
struct IOrderedEnumerable_1_t26970B3388A5DF0CC13446EE06E1CA70E2CA10C7;
// System.Collections.Generic.IReadOnlyList`1<System.Net.IPEndPoint>
struct IReadOnlyList_1_t7D8FA963814FB7B43A30E099D60AB5A346AC346B;
// Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<System.Object>
struct JsonReceiver_1_t75A2C5302A5E09C74CBF6774420396437E174EC5;
// Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct JsonReceiver_1_t3C3F74B6CA8D41290570E70A824D179C558C83C4;
// Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC;
// Unity.LiveCapture.Networking.Protocols.JsonSender`1<System.Object>
struct JsonSender_1_tCB82729F901A8BDFB6C9353DE01450838C7CCA1D;
// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD;
// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>
struct KeyCollection_tFF4F717F8D451B5E659B9492D2441F267B8E9BB7;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct KeyCollection_t839B222DC94AA6DA034C29684231D09B22AAC230;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>
struct KeyCollection_t8AFFA6F7F240CF1C2083BDC05E743BCCD216C73B;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>>
struct List_1_tE3446B821FA933AD7E01DD6B6A5B6533D7201C85;
// System.Collections.Generic.List`1<System.Action`1<System.Double>>
struct List_1_tE8DC132B9884C5D95887D4384BAC3676845BD0D9;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.FrameRate>>
struct List_1_t27BE25CEB57FDF560C9C3FA0388C247142B5F77A;
// System.Collections.Generic.List`1<System.Action`1<System.Int32>>
struct List_1_t1380C530A5D2929C738AA31853B9EA4A6757EA30;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.SerializableGuid>>
struct List_1_t9AEB7D7926D9DBE41E1601D55241F960CEE01F8F;
// System.Collections.Generic.List`1<System.Action`1<System.String>>
struct List_1_tBB25F7EA475FB5AB9F915049CB3BB346A234C92C;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>>
struct List_1_t66413F8B1B86F4974A03E3B69A59B31BB7877B4B;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>>
struct List_1_t2B82225332B363C757215E9341339610E51C0183;
// System.Collections.Generic.List`1<System.Action`1<Unity.LiveCapture.Networking.Protocols.TextureData>>
struct List_1_tBD6878EEC03A4F98E109EDE980837727BCDBF751;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t795244976F29D111A17237A89D0064EF85FBC5AC;
// System.Collections.Generic.List`1<Unity.LiveCapture.Networking.Protocols.MessageBase>
struct List_1_t4A2CB9A44AEAEEE8A66B8CBE5CB2416A5D81A054;
// System.Collections.Generic.List`1<Unity.LiveCapture.Networking.NetworkSocket>
struct List_1_tF31D86150BAED0B907D29F1B6EE8B90F5A448245;
// System.Collections.Generic.List`1<System.Net.Sockets.Socket>
struct List_1_tEDC97D1161B5E5686A9483E0CC69A6B948C50B33;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.LiveCapture.TrackBindingEntry>
struct List_1_t44AA3236C0F669D0499573C37DE0441044EC5AA1;
// System.Collections.Generic.List`1<Unity.LiveCapture.TrackMetadataEntry>
struct List_1_tB0E9C23F7A79C273036AF345EE1D95D4FBE41862;
// System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>
struct List_1_t83718033C4D4CFC2A086A3B546A15F32B5769550;
// System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>
struct List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3;
// Unity.LiveCapture.SerializableDictionary`2<System.Object,System.Object>
struct SerializableDictionary_2_tD4A7BE599E026458AE20E07E418A1FEA0079E404;
// Unity.LiveCapture.SerializableDictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping>
struct SerializableDictionary_2_tBAAF5B13EB49D07D13BCDD3962E80127336FBA25;
// Unity.LiveCapture.SerializableDictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>
struct SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>
struct ValueCollection_t7B10741391A47F52584B87430863E0797A16D441;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct ValueCollection_t9608944866B1724C8F695D39833C048BDA3C1570;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>
struct ValueCollection_t835452FAAE5CBABD8D16D78F084CBBAEA0C9DE73;
// System.Collections.Generic.Dictionary`2/Entry<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>[]
struct EntryU5BU5D_t81801DD8C111C6735FC13E3FD0FA012C4618EA3A;
// System.Collections.Generic.Dictionary`2/Entry<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>[]
struct EntryU5BU5D_tF5579AB5E554C5E9CABAB50ED80CFACE2F705704;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>[]
struct EntryU5BU5D_t9DE739CD23994F06FAD992038C07EC9DD545079A;
// System.ValueTuple`2<System.Type,Unity.LiveCapture.CompanionApp.ClientAttribute[]>[]
struct ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872;
// System.ValueTuple`2<System.Type,System.Object[]>[]
struct ValueTuple_2U5BU5D_tC5DF4F1A8A3C5488A47FBA412E2408C8DE54F438;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Unity.LiveCapture.Networking.ChannelType[]
struct ChannelTypeU5BU5D_tA4EF648E5AEC3D84F8871629E71A997C434C1E54;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Unity.LiveCapture.CompanionApp.ClientAttribute[]
struct ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Net.IPEndPoint[]
struct IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.LiveCapture.CompanionApp.TakeDescriptor[]
struct TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD;
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0[]
struct TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler[]
struct ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.LiveCapture.Networking.Protocols.BoolReceiver
struct BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A;
// Unity.LiveCapture.Networking.Protocols.BoolSender
struct BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E;
// Unity.LiveCapture.CompanionApp.ClientAttribute
struct ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316;
// Unity.LiveCapture.CompanionApp.ClientInitialization
struct ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF;
// Unity.LiveCapture.CompanionApp.ClientMappingDatabase
struct ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Unity.LiveCapture.CompanionApp.CompanionAppClient
struct CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997;
// Unity.LiveCapture.CompanionApp.CompanionAppHost
struct CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1;
// Unity.LiveCapture.CompanionApp.CompanionAppServer
struct CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE;
// Unity.LiveCapture.Connection
struct Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.LiveCapture.Networking.Discovery.DiscoveryBase
struct DiscoveryBase_t3F903B3322A4F8D1965E865A52AF8A1A5E938F83;
// Unity.LiveCapture.Networking.Discovery.DiscoveryServer
struct DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10;
// Unity.LiveCapture.CompanionApp.EditorAssetPreview
struct EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// Unity.LiveCapture.Networking.Protocols.EventReceiver
struct EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944;
// Unity.LiveCapture.Networking.Protocols.EventSender
struct EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Unity.LiveCapture.CompanionApp.IAssetPreview
struct IAssetPreview_t4F04D22BA5DE20B906FC8B955A04872C6D576712;
// Unity.LiveCapture.CompanionApp.ICompanionAppClient
struct ICompanionAppClient_t82276BEC4F681A03C398D6303D3FBFB720014D89;
// Unity.LiveCapture.CompanionApp.ICompanionAppDevice
struct ICompanionAppDevice_tDABF9F17CB324EEC44A191D8891A5105C8ADC802;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// Unity.LiveCapture.ISlate
struct ISlate_t4383D256133E174EA1D313036B95039D70C05A63;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Unity.LiveCapture.Networking.Message
struct Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.LiveCapture.Networking.NetworkBase
struct NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A;
// Unity.LiveCapture.Networking.NetworkServer
struct NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.LiveCapture.Networking.Protocols.Protocol
struct Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB;
// Microsoft.IO.RecyclableMemoryStreamManager
struct RecyclableMemoryStreamManager_t14A7AAF04724E9601720F043F6A3ABC589731AED;
// Unity.LiveCapture.Networking.Remote
struct Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Unity.LiveCapture.CompanionApp.SlateChangeTracker
struct SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93;
// Unity.LiveCapture.CompanionApp.SlateDescriptor
struct SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.LiveCapture.Networking.Protocols.StringReceiver
struct StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1;
// Unity.LiveCapture.Networking.Protocols.StringSender
struct StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20;
// Unity.LiveCapture.Take
struct Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B;
// Unity.LiveCapture.CompanionApp.TakeDescriptor
struct TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695;
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0
struct TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2;
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0
struct TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2;
// Unity.LiveCapture.CompanionApp.TakeManager
struct TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Unity.LiveCapture.Networking.Protocols.TextureReceiver
struct TextureReceiver_tD197B90DF20D8020CDDA1B4AB68A27A6331CF9C0;
// Unity.LiveCapture.Networking.Protocols.TextureSender
struct TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c
struct U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F;
// Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings
struct SceneMappings_tC98041AAD1558086A0733408C31105DD3A4F6BB9;
// Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c
struct U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c
struct U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t12104754636C0471D01E9321801E298E3DDC9869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompanionAppClient_t82276BEC4F681A03C398D6303D3FBFB720014D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t373B19994393C229F7AD7A7B0D4FC163512B5EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDFAF807935030EBD71F81F17B31C03B0C8425941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkUtilities_t4F1246C4B5E160BEB590DF3A0B6A9E4550D24605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0083343509FCB493264CB50A2BB0FB7832AAC078;
IL2CPP_EXTERN_C String_t* _stringLiteral0245EA650AFA9056C60B129AB7014B7524D1863F;
IL2CPP_EXTERN_C String_t* _stringLiteral0526FA32EC6A55B65FA503C3BCD04620CF45342C;
IL2CPP_EXTERN_C String_t* _stringLiteral08BC4AB60D0A85B8D81E0A9DABB1F283D867D0AE;
IL2CPP_EXTERN_C String_t* _stringLiteral15DBE3556C1A8F5E208FC2E32B6B4FC0D32F6650;
IL2CPP_EXTERN_C String_t* _stringLiteral1875B485B755FBA61E7ABF457B275ACF497F2E39;
IL2CPP_EXTERN_C String_t* _stringLiteral22BE61F44561497403DCAB7A58CB3E0EF47FCBE2;
IL2CPP_EXTERN_C String_t* _stringLiteral237C8DED8E931E1E58A77122E18C00103A714E22;
IL2CPP_EXTERN_C String_t* _stringLiteral26E26EC9B4DA3B4035470653D9EFA290A74AFD5B;
IL2CPP_EXTERN_C String_t* _stringLiteral2F73AC823161FAF192F6037E985A89B7CDFF726D;
IL2CPP_EXTERN_C String_t* _stringLiteral37EEAECFB716382D269CA422585E550C4787915B;
IL2CPP_EXTERN_C String_t* _stringLiteral445F06CE7500E685D076CE0E505E8C5F10F6A388;
IL2CPP_EXTERN_C String_t* _stringLiteral45350A82A134AF266A49134E432361B7D6442E02;
IL2CPP_EXTERN_C String_t* _stringLiteral51792F9CEC1282AEB1DDD1DF8401873E423EA7F5;
IL2CPP_EXTERN_C String_t* _stringLiteral594E2474C4D984FD86B8979A431D63C0B0233A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADE860937252335521794D668CFED8852D1AAFC;
IL2CPP_EXTERN_C String_t* _stringLiteral5C3BF9232C39E79E01887478903C86E4B5CAD26C;
IL2CPP_EXTERN_C String_t* _stringLiteral64DA51306566EE2066E22E4F919B243890C79E45;
IL2CPP_EXTERN_C String_t* _stringLiteral6B83118158D2E86CC508C8E135AF115188FD8755;
IL2CPP_EXTERN_C String_t* _stringLiteral6E56E1518F49C55B29B3F73C61AE1A172165C28D;
IL2CPP_EXTERN_C String_t* _stringLiteral72B108199D3E79CD84F842EE8AF518651E9B5FE9;
IL2CPP_EXTERN_C String_t* _stringLiteral744FBD83E35F16127A5D62BFB9F2614DC4E19A7E;
IL2CPP_EXTERN_C String_t* _stringLiteral75991A285E654AA7FF9B2214D93E674A19AF4F65;
IL2CPP_EXTERN_C String_t* _stringLiteral805DAD5A6CF7FED94AA2E1C303503BDE48D35001;
IL2CPP_EXTERN_C String_t* _stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A69F955AE6BE7746E1790067893EA357BE6631B;
IL2CPP_EXTERN_C String_t* _stringLiteral8BC17ECE3AA16D4B5CD02F66FEA8CD741788D2B2;
IL2CPP_EXTERN_C String_t* _stringLiteral8E2396D1BE20B3A923D07CC4A931E7921AEFB17F;
IL2CPP_EXTERN_C String_t* _stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A;
IL2CPP_EXTERN_C String_t* _stringLiteral9713486D3B74C188FE1A52C3029D65DFF7AD81E0;
IL2CPP_EXTERN_C String_t* _stringLiteral9E8A2C2B367D55750BE0540FDA5F91660DB242AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3268F1625AE0A452A8803BE8A961F0F0C2851A7;
IL2CPP_EXTERN_C String_t* _stringLiteralB38F3DEE2D7F00A2A44FD6079A1150E1F49728C6;
IL2CPP_EXTERN_C String_t* _stringLiteralB512C54EF056C79985F1D9B2C577BF9F7DB51065;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094;
IL2CPP_EXTERN_C String_t* _stringLiteralCC52603396B43F3DDC05601980EC08B270CAE74E;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF5A13498FF13E6ACC284E5B8D273E803AE9F67;
IL2CPP_EXTERN_C String_t* _stringLiteralD142BDA678779E4CD15BAB96874C23A898F7855A;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE67F7FEA3C3C0A6F9A933C63BB792E8A7DA2AE16;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE26E319F926492765D0DC457F196AA39479BEB;
IL2CPP_EXTERN_C String_t* _stringLiteralEECA52872FBB0CBCCE8B09E573C7C466E9F20462;
IL2CPP_EXTERN_C String_t* _stringLiteralF410E724A50895999C5EC621080B17146F097356;
IL2CPP_EXTERN_C String_t* _stringLiteralFFC5905B34D89697E0BA01C3BEB242A7E7347B4A;
IL2CPP_EXTERN_C const RuntimeMethod* AttributeUtility_GetAllTypes_TisClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316_m994B3DE4CFE768B9771DD27C3DBB555375D4A8AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1_TryGet_mCD0BE79798C957503DB3E5EF35A5F143A41224EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1__ctor_m3BF7EF530067C7E35BE2AECA75999FFA487214CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1_TryGet_mC2DC115BCD1FB6F7F7550D1DE65E9C9A8081E84E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1__ctor_m39217DE5B2E71B7DC7FCA77A494FA0029A76DC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientMappingDatabase_TryGetDevice_m237F03CE8D09FE9918543D52E705C665DB3DE32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_0_m3B66AA165420D1467C2CA093BAB7912D6B4327DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_10_m23B583283A7938BEBEA4422091A8F1B41BD17C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_11_m8D6568A131632C260BE97694679C1DC68E39C29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_12_mB831C5B0DFD9FF38B7CDB7B59224B1DE81BF67BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_1_m4849E5D8EDA38F355BC7BD797CD3CA118AC1A149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_2_m62F71594608CB745FA3DF037422EC34CB64A8F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_3_m154A36DC81ABF92E3F12061AFCD318CDB0C29379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_4_m6D9CBDB79581CED4D81B051263282009843C4697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_5_m4AC6462C9BEE4E4B343F5CCF3FAD1D834BD85AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_6_m6CAAFE1C4974634BF0CE91FA3C70F2D1FB40985A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_7_m77258CDFB8AADAE87575E550AB20751A4226F3BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_8_mAB0C3BE049B73383EF8721A1AAD5120248E39975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppClient_U3C_ctorU3Eb__68_9_mDF998E5C959F7C87E95DD87FAF4879FAC0CCBCE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_0_mC21374387B6130577EF217F4B34B96B11687D578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_10_mAA932FA67C4B3A64E1789B22FD2B596B225F809A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_11_m324AD342C883F627D58401FA467A2E4A93FA2DDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_12_mC7D5F442D717A8E6793DB45D20C204870066A10C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_13_m83D106C7E4337DF3A55D87754802D0FAF9A415E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_14_m6C8A593EF88BB0C30DD0964B0D3C077E584D5ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_15_m84369F89080257C17202FED5D27F30100A29BED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_16_mDF2AB3002567BDF533E531641C4C0F0D810353C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_1_mEB03DBF8667A32DCF6BC67142E83E98D93D2BB40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_2_mFA429509B76DFCBBFDB3662221212B8193DA70FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_3_m34DAB0388B69C1300E76B3481F9FC2B05AAEC6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_4_m343D265D9E0A49A08C2F201ADCB75E3781352F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_5_m4339945099E4924168DCE1D40E66E696779719E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_6_m8DCB869B3E96B8B4208FA76FAFAD5C2A98674A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_7_m32BF11931DA2605C9390CA30E6E9AE1300844E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_8_m0D61831E804CAE9D76512C931F312CC92AAEA50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppHost_U3C_ctorU3Eb__65_9_mEFF45CA751716EA7A7A294D7E4C448E26B013D4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppServer_DeregisterClientConnectHandler_m50D4658AD140C436F29D7735C633C803FD0AE469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppServer_InitializeClient_m9A0CDB82F06056E4588317F3ABAE419768F63DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppServer_OnClientConnected_mCE0FDE26CEDEAE3398F9757282CE728E6E88AE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppServer_OnClientDisconnected_mBAA89A9BC44F98D69FFAF5B9B59963987F9139ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompanionAppServer_RegisterClientConnectHandler_m4A60FAEFA856D141089234D23BD2C1D99D03F4ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m2EF3D3A27F3FE2089BC8C454429683B0C61A82DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m62F8F681E951E947C9A7789500CA42389E9131AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m10CC8EA80A59101B9BCE4E39386227A29C24EE9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataSender_1_Send_mFF382B14711792FDDCE790F93C72F7E7D720473C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m59C097829F877055F44981241DCB20C72DFECB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7A2AE5424A6EC51E36DA64369D4587CD0751B114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8C34690D9E763A8C6A8DC3CDBC29F2CAED993EEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDCEC6BDBDBC2C5F410C2237D1C4B1DD25707FE6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m74A1D6CBBBF09A6DDF9EA0707A52F443CF966811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE5C21F1E5D11F8506AE92B645A45799D25C5CF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mD1557E9AE30A128FF03CE3C46765F4451AD34A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m9EF5E57CCA53EA92E3A0BC9CE434D13866C36001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5B7E66BF697B1321AD2FE46A5B4196D955294C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_mA97B09D9F98FA31E0ADBF9DA31CF83CDC6BF389C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisString_t_mB2FC0AB2C61DA4BA99E6153A9163030EA6E43DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_mD9F9DBA7229CE368C3D9718A30F6A8A117B5846B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_m60960D0E4E6D9A748FE8C9AC1269A009677806CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5C78114FC4FAB81FC7D4A7FF85183A8C9E744DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mC318ED896B6A62418F2F34C8F470BDB0D10DF44C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReceiver_1_TryGet_m40EF2B8DCB729BC00FDDD6B0B6FC0F7DFD1DAC96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReceiver_1__ctor_m8A939E609A545844D7F93242D9B5E510527FC42C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSender_1_TryGet_m1B56D48D0437C46CE9C29095485C11B484E3BC4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSender_1__ctor_m684B1A3EDC04A8BFAFB0FFEF5D89E32D63597774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF_m1350C72A53C3593BAECE0747B347D8F8B7406A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_mEB91965A0E023F6CC3C79CFA83EDBAFAF50B8863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_m61C829932C8390720F40A3E531B4597BC1D96564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_m3C056A7A45C25B602F561649EC08706D357F87FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_m95C7DE3559988D67335DC9962BA1210CAE913C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisJsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_m6D47FF8623D198E4A19FBF4B3773391856039B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisJsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_m76CDD3871405F201506F1878AE6330D73E774BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Protocol_Add_TisTextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_m87FFD15AA3DF3E82E1B8C3B692608CDE1440700B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_mDC7851A51A806B14A7AC6C48D04DFF2F4F8DBBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_m212F1303C962010474B3ACC1B4D10A8CFF9911ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TakeManager_ClearIterationBase_m9950295DE51F03BA903A0BC4BAAF895D52F82B60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TakeManager_SelectTake_m02B7A793DFB2C9F079414380A60D2AD8B2CB631C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TakeManager_SetIterationBase_m8A8F858CFEB8B63FCF05C1B8D6546D6A71B5E9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAssignOwnerU3Eb__38_0_mD5D0B4A4E18D96E0A0709B08DC38179FEA46DE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetGameObjectPathU3Eb__15_0_mF063090099A29A0771F99F83513E3A521E4B41A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__12_0_m15860E01BEA5A33A26DF177100B719718DD752D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__12_1_m06CD19031F07CD4027BBD770BA833FD8DA154B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_m14DC0424FAD395BAD2B9C5FCABCBCA8C35C2D17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m45AFDC1EC351E3E71136C0EE1EAF6E9BA16CC9B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872;
struct ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089;
struct IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD;
struct TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t476F730E79DF8D2134F0478FB469D8F5A46A8A58 
{
};

// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>
struct Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t81801DD8C111C6735FC13E3FD0FA012C4618EA3A* ____entries_1;
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
	KeyCollection_tFF4F717F8D451B5E659B9492D2441F267B8E9BB7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7B10741391A47F52584B87430863E0797A16D441* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF5579AB5E554C5E9CABAB50ED80CFACE2F705704* ____entries_1;
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
	KeyCollection_t839B222DC94AA6DA034C29684231D09B22AAC230* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9608944866B1724C8F695D39833C048BDA3C1570* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
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
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>
struct Dictionary_2_tEE0134AA606B7AE72745A9006AF2F3C804C32908  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9DE739CD23994F06FAD992038C07EC9DD545079A* ____entries_1;
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
	KeyCollection_t8AFFA6F7F240CF1C2083BDC05E743BCCD216C73B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t835452FAAE5CBABD8D16D78F084CBBAEA0C9DE73* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Net.IPEndPoint>
struct List_1_t795244976F29D111A17237A89D0064EF85FBC5AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t795244976F29D111A17237A89D0064EF85FBC5AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>
struct List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct ValueCollection_t9608944866B1724C8F695D39833C048BDA3C1570  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
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

// Unity.LiveCapture.CompanionApp.CompanionAppMessages
struct CompanionAppMessages_t5D7EB7AFED0F0759C3080181DE10E5629AE72CCB  : public RuntimeObject
{
};

// Unity.LiveCapture.Networking.Discovery.DiscoveryBase
struct DiscoveryBase_t3F903B3322A4F8D1965E865A52AF8A1A5E938F83  : public RuntimeObject
{
	// System.Net.Sockets.Socket Unity.LiveCapture.Networking.Discovery.DiscoveryBase::m_RecieveSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_RecieveSocket_2;
	// System.Collections.Generic.List`1<System.Net.Sockets.Socket> Unity.LiveCapture.Networking.Discovery.DiscoveryBase::m_SendSockets
	List_1_tEDC97D1161B5E5686A9483E0CC69A6B948C50B33* ___m_SendSockets_3;
	// System.Net.EndPoint Unity.LiveCapture.Networking.Discovery.DiscoveryBase::m_BroadcastEndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___m_BroadcastEndPoint_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Unity.LiveCapture.Networking.Discovery.DiscoveryBase::m_RecreateSendSockets
	bool ___m_RecreateSendSockets_5;
	// System.Boolean Unity.LiveCapture.Networking.Discovery.DiscoveryBase::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_6;
	// System.Int32 Unity.LiveCapture.Networking.Discovery.DiscoveryBase::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_7;
};

struct DiscoveryBase_t3F903B3322A4F8D1965E865A52AF8A1A5E938F83_StaticFields
{
	// System.Collections.Concurrent.ConcurrentBag`1<System.Net.Sockets.SocketAsyncEventArgs> Unity.LiveCapture.Networking.Discovery.DiscoveryBase::s_SendArgsPool
	ConcurrentBag_1_t17FD0CBDEA9A7E619DF5AA9C5152CF91933523FC* ___s_SendArgsPool_1;
};

// Unity.LiveCapture.CompanionApp.EditorAssetPreview
struct EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
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

// Unity.LiveCapture.Networking.Message
struct Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621  : public RuntimeObject
{
	// Unity.LiveCapture.Networking.Remote Unity.LiveCapture.Networking.Message::m_Remote
	Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___m_Remote_3;
	// Unity.LiveCapture.Networking.ChannelType Unity.LiveCapture.Networking.Message::m_ChannelType
	uint8_t ___m_ChannelType_4;
	// System.IO.MemoryStream Unity.LiveCapture.Networking.Message::m_Data
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___m_Data_5;
	// System.Boolean Unity.LiveCapture.Networking.Message::m_Disposed
	bool ___m_Disposed_6;
};

struct Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621_StaticFields
{
	// System.Collections.Concurrent.ConcurrentBag`1<Unity.LiveCapture.Networking.Message> Unity.LiveCapture.Networking.Message::s_Pool
	ConcurrentBag_1_t19879B91FF05E26BAE7DA4ABF67A81B13B2977BC* ___s_Pool_1;
	// Microsoft.IO.RecyclableMemoryStreamManager Unity.LiveCapture.Networking.Message::s_Memory
	RecyclableMemoryStreamManager_t14A7AAF04724E9601720F043F6A3ABC589731AED* ___s_Memory_2;
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

// Unity.LiveCapture.CompanionApp.SlateChangeTracker
struct SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93  : public RuntimeObject
{
	// Unity.LiveCapture.ISlate Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_Slate
	RuntimeObject* ___m_Slate_0;
	// System.Int32 Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_SceneNumber
	int32_t ___m_SceneNumber_1;
	// System.String Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_ShotName
	String_t* ___m_ShotName_2;
	// System.Int32 Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_TakeNumber
	int32_t ___m_TakeNumber_3;
	// System.String Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_Description
	String_t* ___m_Description_4;
	// Unity.LiveCapture.Take Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_Take
	Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* ___m_Take_5;
	// Unity.LiveCapture.Take Unity.LiveCapture.CompanionApp.SlateChangeTracker::m_IterationBase
	Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* ___m_IterationBase_6;
};

// Unity.LiveCapture.CompanionApp.SlateDescriptor
struct SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415  : public RuntimeObject
{
	// System.Int32 Unity.LiveCapture.CompanionApp.SlateDescriptor::SceneNumber
	int32_t ___SceneNumber_0;
	// System.String Unity.LiveCapture.CompanionApp.SlateDescriptor::ShotName
	String_t* ___ShotName_1;
	// System.Int32 Unity.LiveCapture.CompanionApp.SlateDescriptor::TakeNumber
	int32_t ___TakeNumber_2;
	// System.String Unity.LiveCapture.CompanionApp.SlateDescriptor::Description
	String_t* ___Description_3;
	// System.Double Unity.LiveCapture.CompanionApp.SlateDescriptor::Duration
	double ___Duration_4;
	// System.Int32 Unity.LiveCapture.CompanionApp.SlateDescriptor::SelectedTake
	int32_t ___SelectedTake_5;
	// System.Int32 Unity.LiveCapture.CompanionApp.SlateDescriptor::IterationBase
	int32_t ___IterationBase_6;
	// Unity.LiveCapture.CompanionApp.TakeDescriptor[] Unity.LiveCapture.CompanionApp.SlateDescriptor::Takes
	TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* ___Takes_7;
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

// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0
struct TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2  : public RuntimeObject
{
	// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0[] Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::m_Takes
	TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* ___m_Takes_0;
};

// Unity.LiveCapture.CompanionApp.TakeManager
struct TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA  : public RuntimeObject
{
	// Unity.LiveCapture.CompanionApp.IAssetPreview Unity.LiveCapture.CompanionApp.TakeManager::m_AssetPreview
	RuntimeObject* ___m_AssetPreview_1;
};

struct TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_StaticFields
{
	// Unity.LiveCapture.CompanionApp.TakeManager Unity.LiveCapture.CompanionApp.TakeManager::<Default>k__BackingField
	TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* ___U3CDefaultU3Ek__BackingField_0;
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

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c
struct U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F  : public RuntimeObject
{
};

struct U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields
{
	// Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c::<>9
	U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Transform,System.String> Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c::<>9__15_0
	Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* ___U3CU3E9__15_0_1;
};

// Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings
struct SceneMappings_tC98041AAD1558086A0733408C31105DD3A4F6BB9  : public RuntimeObject
{
	// Unity.LiveCapture.SerializableDictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping> Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings::DevicePathToMapping
	SerializableDictionary_2_tBAAF5B13EB49D07D13BCDD3962E80127336FBA25* ___DevicePathToMapping_0;
};

// Unity.LiveCapture.CompanionApp.CompanionAppMessages/ToClient
struct ToClient_t9E6EB5CAC126E2D3DD3BF69F3D83D26335C96E06  : public RuntimeObject
{
};

// Unity.LiveCapture.CompanionApp.CompanionAppMessages/ToServer
struct ToServer_t5435FD3DEE5C423F51938B35D973EDF7BEF10AF6  : public RuntimeObject
{
};

// Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c
struct U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1  : public RuntimeObject
{
};

struct U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields
{
	// Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::<>9
	U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* ___U3CU3E9_0;
	// System.Func`2<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64> Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::<>9__38_0
	Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* ___U3CU3E9__38_0_1;
};

// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c
struct U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060  : public RuntimeObject
{
};

struct U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields
{
	// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::<>9
	U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* ___U3CU3E9_0;
	// System.Func`2<Unity.LiveCapture.CompanionApp.TakeDescriptor,Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0> Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::<>9__1_0
	Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* ___U3CU3E9__1_0_1;
	// System.Func`2<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0,Unity.LiveCapture.CompanionApp.TakeDescriptor> Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::<>9__2_0
	Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* ___U3CU3E9__2_0_2;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Boolean>
struct DataReceiver_1_tB8B18BADCF319191B855D301BBD1D4310019B1FE  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct DataReceiver_1_t5B3A315122A3A3F344920A37CA66FE26BFF286B3  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_tE3446B821FA933AD7E01DD6B6A5B6533D7201C85* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Double>
struct DataReceiver_1_tD8BB3E6FBCAD718F690B2DBED17FBE3F75F54988  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_tE8DC132B9884C5D95887D4384BAC3676845BD0D9* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.FrameRate>
struct DataReceiver_1_t75F47CC44D3CEAE38FA3CCE0955EE3344496DD67  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_t27BE25CEB57FDF560C9C3FA0388C247142B5F77A* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Int32>
struct DataReceiver_1_t1AC851C1799071A9F92BA704086A92969E2EE598  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_t1380C530A5D2929C738AA31853B9EA4A6757EA30* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.SerializableGuid>
struct DataReceiver_1_t0417E786457DDE68F17374FE6D4F9F6C761D1801  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_t9AEB7D7926D9DBE41E1601D55241F960CEE01F8F* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.String>
struct DataReceiver_1_t9C49F5C5995704CBB73774C8BA88E2C8C2002770  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_tBB25F7EA475FB5AB9F915049CB3BB346A234C92C* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct DataReceiver_1_t55F1160F156BE3FB3182B55F446D7A7B4F3C9F53  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_t66413F8B1B86F4974A03E3B69A59B31BB7877B4B* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct DataReceiver_1_t51ACA31A0B1260CFBF1715476FDC23DD5DE79FF9  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_t2B82225332B363C757215E9341339610E51C0183* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.Networking.Protocols.TextureData>
struct DataReceiver_1_tD50DFD14A81BB208FEB0D86FC8757AFAB4DF0EE0  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// Unity.LiveCapture.Networking.Protocols.DataOptions Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Options
	int32_t ___m_Options_6;
	// System.Int32 Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Version
	int32_t ___m_Version_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> Unity.LiveCapture.Networking.Protocols.DataReceiver`1::m_Handlers
	List_1_tBD6878EEC03A4F98E109EDE980837727BCDBF751* ___m_Handlers_8;
};

// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Boolean>
struct DataSender_1_tB28173AF33AF21D33414B8B9E2FCCB041C0665AA  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double>
struct DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.FrameRate>
struct DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Int32>
struct DataSender_1_tA72D3C4D52A23C5A10A6CA707A2333878527064A  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.SerializableGuid>
struct DataSender_1_tC56BD0EB4BC5579BF3722E894ACDF8CB4FB9549C  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<System.String>
struct DataSender_1_t67BCF359AF76BB460F669D191A5DCFA01E02A161  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct DataSender_1_tAB89CFD5EBC29C057349F67BFE926460D6593C89  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct DataSender_1_t86DC27CD2A94194F9E137479CACA8FFC7FCDF678  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.Networking.Protocols.TextureData>
struct DataSender_1_t229782187C22021F33EECCD18B4C19FBE543F3EF  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
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

// UnityEngine.LazyLoadReference`1<UnityEngine.Texture2D>
struct LazyLoadReference_1_t783F0D973503162B1EF9347CB6DB00B78873A33D 
{
	// System.Int32 UnityEngine.LazyLoadReference`1::m_InstanceID
	int32_t ___m_InstanceID_1;
};

// UnityEngine.LazyLoadReference`1<UnityEngine.Timeline.TimelineAsset>
struct LazyLoadReference_1_t1DAA23F7C878CF1C2EC60410D63298606B8F582C 
{
	// System.Int32 UnityEngine.LazyLoadReference`1::m_InstanceID
	int32_t ___m_InstanceID_1;
};

// Unity.LiveCapture.SerializableDictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>
struct SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3  : public Dictionary_2_tEE0134AA606B7AE72745A9006AF2F3C804C32908
{
	// System.Collections.Generic.List`1<TKey> Unity.LiveCapture.SerializableDictionary`2::m_Keys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Keys_14;
	// System.Collections.Generic.List`1<TValue> Unity.LiveCapture.SerializableDictionary`2::m_Values
	List_1_t83718033C4D4CFC2A086A3B546A15F32B5769550* ___m_Values_15;
};

// System.ValueTuple`2<System.Type,Unity.LiveCapture.CompanionApp.ClientAttribute[]>
struct ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D 
{
	// T1 System.ValueTuple`2::Item1
	Type_t* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* ___Item2_1;
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

// Unity.LiveCapture.CompanionApp.ClientAttribute
struct ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Unity.LiveCapture.CompanionApp.ClientAttribute::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.LiveCapture.Networking.Protocols.EventReceiver
struct EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
	// System.Collections.Generic.List`1<System.Action> Unity.LiveCapture.Networking.Protocols.EventReceiver::m_Handlers
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___m_Handlers_6;
};

// Unity.LiveCapture.Networking.Protocols.EventSender
struct EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A  : public MessageBase_tC63461932AA58BA4B4523A456FA077AD9E10C968
{
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

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// Unity.LiveCapture.Networking.Protocols.TextureData
struct TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443 
{
	// UnityEngine.Texture2D Unity.LiveCapture.Networking.Protocols.TextureData::<texture>k__BackingField
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField_0;
	// System.String Unity.LiveCapture.Networking.Protocols.TextureData::<metadata>k__BackingField
	String_t* ___U3CmetadataU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.Networking.Protocols.TextureData
struct TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField_0;
	char* ___U3CmetadataU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.LiveCapture.Networking.Protocols.TextureData
struct TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3Ek__BackingField_0;
	Il2CppChar* ___U3CmetadataU3Ek__BackingField_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// Unity.LiveCapture.Networking.VersionData
#pragma pack(push, tp, 1)
struct VersionData_t5D59A050CE3893C36FE6C1E66424766E255466D4 
{
	// System.UInt16 Unity.LiveCapture.Networking.VersionData::m_Major
	uint16_t ___m_Major_0;
	// System.UInt16 Unity.LiveCapture.Networking.VersionData::m_Minor
	uint16_t ___m_Minor_1;
	// System.UInt16 Unity.LiveCapture.Networking.VersionData::m_Build
	uint16_t ___m_Build_2;
	// System.UInt16 Unity.LiveCapture.Networking.VersionData::m_Revision
	uint16_t ___m_Revision_3;
};
#pragma pack(pop, tp)

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

// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609  : public DataReceiver_1_t5B3A315122A3A3F344920A37CA66FE26BFF286B3
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>
struct BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A  : public DataReceiver_1_tD8BB3E6FBCAD718F690B2DBED17FBE3F75F54988
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.FrameRate>
struct BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5  : public DataReceiver_1_t75F47CC44D3CEAE38FA3CCE0955EE3344496DD67
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Int32>
struct BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3  : public DataReceiver_1_t1AC851C1799071A9F92BA704086A92969E2EE598
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.SerializableGuid>
struct BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246  : public DataReceiver_1_t0417E786457DDE68F17374FE6D4F9F6C761D1801
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB  : public DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>
struct BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8  : public DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.FrameRate>
struct BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F  : public DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32>
struct BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249  : public DataSender_1_tA72D3C4D52A23C5A10A6CA707A2333878527064A
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid>
struct BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0  : public DataSender_1_tC56BD0EB4BC5579BF3722E894ACDF8CB4FB9549C
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BinarySender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct JsonReceiver_1_t3C3F74B6CA8D41290570E70A824D179C558C83C4  : public DataReceiver_1_t55F1160F156BE3FB3182B55F446D7A7B4F3C9F53
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.JsonReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC  : public DataReceiver_1_t51ACA31A0B1260CFBF1715476FDC23DD5DE79FF9
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.JsonReceiver`1::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD  : public DataSender_1_tAB89CFD5EBC29C057349F67BFE926460D6593C89
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.JsonSender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B  : public DataSender_1_t86DC27CD2A94194F9E137479CACA8FFC7FCDF678
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.JsonSender`1::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.BoolReceiver
struct BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A  : public DataReceiver_1_tB8B18BADCF319191B855D301BBD1D4310019B1FE
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BoolReceiver::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.BoolSender
struct BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E  : public DataSender_1_tB28173AF33AF21D33414B8B9E2FCCB041C0665AA
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.BoolSender::m_Version
	int32_t ___m_Version_13;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// Unity.LiveCapture.SerializableGuid
struct SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Guid Unity.LiveCapture.SerializableGuid::m_Guid
			Guid_t ___m_Guid_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t ___m_Guid_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.LiveCapture.SerializableGuid::m_Part0
			int64_t ___m_Part0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___m_Part0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_Part1_2_OffsetPadding[8];
			// System.Int64 Unity.LiveCapture.SerializableGuid::m_Part1
			int64_t ___m_Part1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_Part1_2_OffsetPadding_forAlignmentOnly[8];
			int64_t ___m_Part1_2_forAlignmentOnly;
		};
	};
};

// Unity.LiveCapture.Networking.Discovery.ServerData
struct ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656 
{
	// System.String Unity.LiveCapture.Networking.Discovery.ServerData::m_ProductName
	String_t* ___m_ProductName_0;
	// System.String Unity.LiveCapture.Networking.Discovery.ServerData::m_InstanceName
	String_t* ___m_InstanceName_1;
	// System.Guid Unity.LiveCapture.Networking.Discovery.ServerData::m_Id
	Guid_t ___m_Id_2;
	// Unity.LiveCapture.Networking.VersionData Unity.LiveCapture.Networking.Discovery.ServerData::m_Version
	VersionData_t5D59A050CE3893C36FE6C1E66424766E255466D4 ___m_Version_3;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.Networking.Discovery.ServerData
#pragma pack(push, tp, 1)
struct ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656_marshaled_pinvoke
{
	Il2CppChar ___m_ProductName_0[33];
	Il2CppChar ___m_InstanceName_1[33];
	Guid_t ___m_Id_2;
	VersionData_t5D59A050CE3893C36FE6C1E66424766E255466D4 ___m_Version_3;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Unity.LiveCapture.Networking.Discovery.ServerData
#pragma pack(push, tp, 1)
struct ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656_marshaled_com
{
	Il2CppChar ___m_ProductName_0[33];
	Il2CppChar ___m_InstanceName_1[33];
	Guid_t ___m_Id_2;
	VersionData_t5D59A050CE3893C36FE6C1E66424766E255466D4 ___m_Version_3;
};
#pragma pack(pop, tp)

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// Unity.LiveCapture.Networking.Protocols.StringReceiver
struct StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1  : public DataReceiver_1_t9C49F5C5995704CBB73774C8BA88E2C8C2002770
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.StringReceiver::m_Version
	int32_t ___m_Version_9;
};

// Unity.LiveCapture.Networking.Protocols.StringSender
struct StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20  : public DataSender_1_t67BCF359AF76BB460F669D191A5DCFA01E02A161
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.StringSender::m_Version
	int32_t ___m_Version_13;
};

// Unity.LiveCapture.Networking.Protocols.TextureReceiver
struct TextureReceiver_tD197B90DF20D8020CDDA1B4AB68A27A6331CF9C0  : public DataReceiver_1_tD50DFD14A81BB208FEB0D86FC8757AFAB4DF0EE0
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.TextureReceiver::m_Version
	int32_t ___m_Version_9;
	// Unity.LiveCapture.Networking.Protocols.TextureCompression Unity.LiveCapture.Networking.Protocols.TextureReceiver::m_Compression
	int32_t ___m_Compression_10;
};

// Unity.LiveCapture.Networking.Protocols.TextureSender
struct TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79  : public DataSender_1_t229782187C22021F33EECCD18B4C19FBE543F3EF
{
	// System.Int32 Unity.LiveCapture.Networking.Protocols.TextureSender::m_Version
	int32_t ___m_Version_13;
	// Unity.LiveCapture.Networking.Protocols.TextureCompression Unity.LiveCapture.Networking.Protocols.TextureSender::m_Compression
	int32_t ___m_Compression_14;
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

// Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
struct Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB 
{
	// System.String Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::ClientName
	String_t* ___ClientName_0;
	// System.DateTime Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::LastConnectTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastConnectTime_1;
	// System.Int64 Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::m_LastConnectTime
	int64_t ___m_LastConnectTime_2;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
struct Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_pinvoke
{
	char* ___ClientName_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastConnectTime_1;
	int64_t ___m_LastConnectTime_2;
};
// Native definition for COM marshalling of Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
struct Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_com
{
	Il2CppChar* ___ClientName_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___LastConnectTime_1;
	int64_t ___m_LastConnectTime_2;
};

// Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
struct ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C 
{
	// System.String Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler::Name
	String_t* ___Name_0;
	// System.DateTime Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler::Time
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time_1;
	// System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean> Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler::Handler
	Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* ___Handler_2;
};
// Native definition for P/Invoke marshalling of Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
struct ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_pinvoke
{
	char* ___Name_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time_1;
	Il2CppMethodPointer ___Handler_2;
};
// Native definition for COM marshalling of Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
struct ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_com
{
	Il2CppChar* ___Name_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Time_1;
	Il2CppMethodPointer ___Handler_2;
};

// System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>
struct Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Unity.LiveCapture.Networking.Discovery.DiscoveryServer
struct DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10  : public DiscoveryBase_t3F903B3322A4F8D1965E865A52AF8A1A5E938F83
{
	// System.Byte[] Unity.LiveCapture.Networking.Discovery.DiscoveryServer::m_DiscoveryPacket
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_DiscoveryPacket_9;
	// Unity.LiveCapture.Networking.Discovery.ServerData Unity.LiveCapture.Networking.Discovery.DiscoveryServer::m_ServerConfiguration
	ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656 ___m_ServerConfiguration_10;
	// System.DateTime Unity.LiveCapture.Networking.Discovery.DiscoveryServer::m_LastSendTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_LastSendTime_11;
	// System.Net.IPAddress[] Unity.LiveCapture.Networking.Discovery.DiscoveryServer::m_SendAddresses
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___m_SendAddresses_12;
};

struct DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10_StaticFields
{
	// System.TimeSpan Unity.LiveCapture.Networking.Discovery.DiscoveryServer::k_SendPeriod
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___k_SendPeriod_8;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Unity.LiveCapture.Networking.NetworkServer
struct NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E  : public NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A
{
	// System.Collections.Generic.List`1<System.Net.Sockets.Socket> Unity.LiveCapture.Networking.NetworkServer::m_Listeners
	List_1_tEDC97D1161B5E5686A9483E0CC69A6B948C50B33* ___m_Listeners_13;
	// System.Collections.Generic.List`1<Unity.LiveCapture.Networking.NetworkSocket> Unity.LiveCapture.Networking.NetworkServer::m_UdpSockets
	List_1_tF31D86150BAED0B907D29F1B6EE8B90F5A448245* ___m_UdpSockets_14;
	// System.Collections.Generic.List`1<System.Net.IPEndPoint> Unity.LiveCapture.Networking.NetworkServer::m_EndPoints
	List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* ___m_EndPoints_15;
	// System.Int32 Unity.LiveCapture.Networking.NetworkServer::m_Port
	int32_t ___m_Port_16;
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

// Unity.LiveCapture.CompanionApp.TakeDescriptor
struct TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695  : public RuntimeObject
{
	// Unity.LiveCapture.SerializableGuid Unity.LiveCapture.CompanionApp.TakeDescriptor::m_Guid
	SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___m_Guid_0;
	// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::m_Name
	String_t* ___m_Name_1;
	// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::m_SceneNumber
	int32_t ___m_SceneNumber_2;
	// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::m_ShotName
	String_t* ___m_ShotName_3;
	// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::m_TakeNumber
	int32_t ___m_TakeNumber_4;
	// System.Int64 Unity.LiveCapture.CompanionApp.TakeDescriptor::m_CreationTime
	int64_t ___m_CreationTime_5;
	// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::m_Description
	String_t* ___m_Description_6;
	// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::m_Rating
	int32_t ___m_Rating_7;
	// Unity.LiveCapture.FrameRate Unity.LiveCapture.CompanionApp.TakeDescriptor::m_FrameRate
	FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___m_FrameRate_8;
	// Unity.LiveCapture.SerializableGuid Unity.LiveCapture.CompanionApp.TakeDescriptor::m_Screenshot
	SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___m_Screenshot_9;
	// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::m_TimelineName
	String_t* ___m_TimelineName_10;
	// System.Double Unity.LiveCapture.CompanionApp.TakeDescriptor::m_TimelineDuration
	double ___m_TimelineDuration_11;
};

// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0
struct TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2  : public RuntimeObject
{
	// Unity.LiveCapture.SerializableGuid Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_Guid
	SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___m_Guid_0;
	// System.String Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_Name
	String_t* ___m_Name_1;
	// System.Int32 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_SceneNumber
	int32_t ___m_SceneNumber_2;
	// System.String Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_ShotName
	String_t* ___m_ShotName_3;
	// System.Int32 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_TakeNumber
	int32_t ___m_TakeNumber_4;
	// System.Int64 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_CreationTime
	int64_t ___m_CreationTime_5;
	// System.String Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_Description
	String_t* ___m_Description_6;
	// System.Int32 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_Rating
	int32_t ___m_Rating_7;
	// Unity.LiveCapture.FrameRate Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_FrameRate
	FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___m_FrameRate_8;
	// Unity.LiveCapture.SerializableGuid Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_Screenshot
	SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___m_Screenshot_9;
	// System.String Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_TimelineName
	String_t* ___m_TimelineName_10;
	// System.Double Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::m_TimelineDuration
	double ___m_TimelineDuration_11;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]>
struct Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<System.ByteEnum>
struct Action_1_tCDE2BF37CF96F24FC76DF7BC259C4F887BD38E12  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>
struct Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F  : public MulticastDelegate_t
{
};

// System.Action`1<System.Double>
struct Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.FrameRate>
struct Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A  : public MulticastDelegate_t
{
};

// System.Action`1<System.Guid>
struct Action_1_t33413EDB36E6D5980F6CA903E76E505099813427  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>
struct Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.Networking.Message>
struct Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.Networking.Remote>
struct Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.SerializableGuid>
struct Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>
struct Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>
struct Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.LiveCapture.Networking.Protocols.TextureData>
struct Action_1_t12104754636C0471D01E9321801E298E3DDC9869  : public MulticastDelegate_t
{
};

// System.Action`2<System.Guid,System.Object>
struct Action_2_t9B2E784F9E1BF1BA770316E3E717CEDFB48F86AE  : public MulticastDelegate_t
{
};

// System.Action`2<System.Guid,UnityEngine.Texture2D>
struct Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus>
struct Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean>
struct Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.CompanionApp.TakeDescriptor,Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>
struct Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0,Unity.LiveCapture.CompanionApp.TakeDescriptor>
struct Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Transform,System.String>
struct Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64>
struct Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Unity.LiveCapture.CompanionApp.ClientMappingDatabase
struct ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Unity.LiveCapture.SerializableDictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings> Unity.LiveCapture.CompanionApp.ClientMappingDatabase::m_ScenePathToMappings
	SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3* ___m_ScenePathToMappings_7;
};

struct ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields
{
	// Unity.LiveCapture.CompanionApp.ClientMappingDatabase Unity.LiveCapture.CompanionApp.ClientMappingDatabase::s_Instance
	ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* ___s_Instance_5;
	// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice> Unity.LiveCapture.CompanionApp.ClientMappingDatabase::s_ClientToDevice
	Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838* ___s_ClientToDevice_6;
};

// Unity.LiveCapture.Connection
struct Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// Unity.LiveCapture.Take
struct Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 Unity.LiveCapture.Take::m_SceneNumber
	int32_t ___m_SceneNumber_4;
	// System.String Unity.LiveCapture.Take::m_ShotName
	String_t* ___m_ShotName_5;
	// System.Int32 Unity.LiveCapture.Take::m_TakeNumber
	int32_t ___m_TakeNumber_6;
	// System.Int64 Unity.LiveCapture.Take::m_CreationTime
	int64_t ___m_CreationTime_7;
	// System.String Unity.LiveCapture.Take::m_Description
	String_t* ___m_Description_8;
	// System.Int32 Unity.LiveCapture.Take::m_Rating
	int32_t ___m_Rating_9;
	// Unity.LiveCapture.FrameRate Unity.LiveCapture.Take::m_FrameRate
	FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___m_FrameRate_10;
	// System.Double Unity.LiveCapture.Take::m_Duration
	double ___m_Duration_11;
	// Unity.LiveCapture.Timecode Unity.LiveCapture.Take::m_StartTimecode
	Timecode_tC6305561B7EE8D322AC35E87324A4839278EE982 ___m_StartTimecode_12;
	// UnityEngine.LazyLoadReference`1<UnityEngine.Texture2D> Unity.LiveCapture.Take::m_Screenshot
	LazyLoadReference_1_t783F0D973503162B1EF9347CB6DB00B78873A33D ___m_Screenshot_13;
	// UnityEngine.LazyLoadReference`1<UnityEngine.Timeline.TimelineAsset> Unity.LiveCapture.Take::m_Timeline
	LazyLoadReference_1_t1DAA23F7C878CF1C2EC60410D63298606B8F582C ___m_Timeline_14;
	// System.Collections.Generic.List`1<Unity.LiveCapture.TrackBindingEntry> Unity.LiveCapture.Take::m_Entries
	List_1_t44AA3236C0F669D0499573C37DE0441044EC5AA1* ___m_Entries_15;
	// System.Collections.Generic.List`1<Unity.LiveCapture.TrackMetadataEntry> Unity.LiveCapture.Take::m_MetadataEntries
	List_1_tB0E9C23F7A79C273036AF345EE1D95D4FBE41862* ___m_MetadataEntries_16;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Unity.LiveCapture.CompanionApp.CompanionAppServer
struct CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE  : public Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352
{
	// System.Int32 Unity.LiveCapture.CompanionApp.CompanionAppServer::m_Port
	int32_t ___m_Port_9;
	// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppServer::m_AutoStartOnPlay
	bool ___m_AutoStartOnPlay_10;
	// Unity.LiveCapture.Networking.Discovery.DiscoveryServer Unity.LiveCapture.CompanionApp.CompanionAppServer::m_Discovery
	DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* ___m_Discovery_11;
	// Unity.LiveCapture.Networking.NetworkServer Unity.LiveCapture.CompanionApp.CompanionAppServer::m_Server
	NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* ___m_Server_12;
	// System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient> Unity.LiveCapture.CompanionApp.CompanionAppServer::m_RemoteToClient
	Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* ___m_RemoteToClient_13;
};

struct CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields
{
	// System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient> Unity.LiveCapture.CompanionApp.CompanionAppServer::ClientConnected
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* ___ClientConnected_5;
	// System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient> Unity.LiveCapture.CompanionApp.CompanionAppServer::ClientDisconnected
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* ___ClientDisconnected_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Unity.LiveCapture.CompanionApp.CompanionAppServer::s_TypeToClientType
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___s_TypeToClientType_7;
	// System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler> Unity.LiveCapture.CompanionApp.CompanionAppServer::s_ClientConnectHandlers
	List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* ___s_ClientConnectHandlers_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// Unity.LiveCapture.CompanionApp.TakeDescriptor[]
struct TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD  : public RuntimeArray
{
	ALIGN_FIELD (8) TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* m_Items[1];

	inline TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ValueTuple`2<System.Type,Unity.LiveCapture.CompanionApp.ClientAttribute[]>[]
struct ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D m_Items[1];

	inline ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
		#endif
	}
};
// Unity.LiveCapture.CompanionApp.ClientAttribute[]
struct ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089  : public RuntimeArray
{
	ALIGN_FIELD (8) ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* m_Items[1];

	inline ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.IPEndPoint[]
struct IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A  : public RuntimeArray
{
	ALIGN_FIELD (8) IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* m_Items[1];

	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
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
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0[]
struct TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B  : public RuntimeArray
{
	ALIGN_FIELD (8) TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* m_Items[1];

	inline TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler[]
struct ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45  : public RuntimeArray
{
	ALIGN_FIELD (8) ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C m_Items[1];

	inline ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Handler_2), (void*)NULL);
		#endif
	}
	inline ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Handler_2), (void*)NULL);
		#endif
	}
};


// System.Void Unity.LiveCapture.SerializableDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_m5DA3E91110D25A7BDC69A3E69510BC56D2610937_gshared (SerializableDictionary_2_tD4A7BE599E026458AE20E07E418A1FEA0079E404* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInParent_TisRuntimeObject_mDEBA0826429C4C398C9CEDF9F5520707A897AE76_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.ByteEnum>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySender_1__ctor_m62346080BDE66D59E283F929F1978E2E1A98D2B2_gshared (BinarySender_1_tDC2D41DB2D4BE7083A343F8F9AC5060F460FA163* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.FrameRate>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602_gshared (BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40_gshared (BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_gshared (BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.JsonSender`1<System.Object>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSender_1__ctor_mCC4F25EB3E1E0B2CB9D1B39AF6F39D746431B225_gshared (JsonSender_1_tCB82729F901A8BDFB6C9353DE01450838C7CCA1D* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.ByteEnum>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReceiver_1__ctor_m8BC74F1086DF4DEBF7F32EA185B59DE9462DC17C_gshared (BinaryReceiver_1_tE0F8BC2CD90B293EE985DE3DB04216A94D1C43EE* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8F8CE01FBD82AF688BD5658AF6B061F2A7B962A5_gshared (Action_1_tCDE2BF37CF96F24FC76DF7BC259C4F887BD38E12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.ByteEnum>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_mF70732A479CD2BCB30AC7DDA73D707F1C909AB05_gshared (DataReceiver_1_tDEF9AC0E6994C09F6C5DA960BDCC76CE0A8F475F* __this, Action_1_tCDE2BF37CF96F24FC76DF7BC259C4F887BD38E12* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C_gshared (BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m676FAC53E13390D50082C985025C4F8EB8761FE5_gshared (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Double>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_gshared (DataReceiver_1_tD8BB3E6FBCAD718F690B2DBED17FBE3F75F54988* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.SerializableGuid>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_gshared (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.SerializableGuid>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19_gshared (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.SerializableGuid>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_gshared (DataReceiver_1_t0417E786457DDE68F17374FE6D4F9F6C761D1801* __this, Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<System.Object>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReceiver_1__ctor_m32C4D3523EA8B07BDD181E50C54D7F3FA9465509_gshared (JsonReceiver_1_t75A2C5302A5E09C74CBF6774420396437E174EC5* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Object>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_mDD84BBED61B276F4B28C036C16556937BB6D643B_gshared (DataReceiver_1_tC815D262E03B4349EDEFFE526D2A5ECBBF95DB66* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.ByteEnum>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_m4728DE5041E92D45E4A22BA1BC925EC51F9955EC_gshared (DataSender_1_tCD5B19F757112B02061B1C01A656E47C41CFCE4C* __this, uint8_t ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Boolean>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_gshared (DataSender_1_tB28173AF33AF21D33414B8B9E2FCCB041C0665AA* __this, bool ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.FrameRate>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52_gshared (DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_gshared (DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B* __this, double ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Object>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_mB128E266DBAC6F45A377098DF2C08E0E76EEC645_gshared (DataSender_1_t52CA7F06584EE6BA48A9C6CAFCD987319AD2177F* __this, RuntimeObject* ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Int32>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_gshared (DataSender_1_tA72D3C4D52A23C5A10A6CA707A2333878527064A* __this, int32_t ___data0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.Networking.Protocols.TextureData>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B_gshared (DataSender_1_t229782187C22021F33EECCD18B4C19FBE543F3EF* __this, TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443 ___data0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.ByteEnum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mB17B2145955C61848897CB96737BE6AFCC8597A4_gshared_inline (Action_1_tCDE2BF37CF96F24FC76DF7BC259C4F887BD38E12* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Double>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_gshared_inline (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* __this, double ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Guid>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_gshared_inline (Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* __this, Guid_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.ByteEnum>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinarySender_1_TryGet_mBE0FD6920E1BB6259092302FD898EBAD9451C824_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_tDC2D41DB2D4BE7083A343F8F9AC5060F460FA163** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.JsonSender`1<System.Object>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.JsonSender`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSender_1_TryGet_m14C2D067BA0649AF0BEBDE83F39A38B49E77C9C9_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, JsonSender_1_tCB82729F901A8BDFB6C9353DE01450838C7CCA1D** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Boolean>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_gshared (DataReceiver_1_tB8B18BADCF319191B855D301BBD1D4310019B1FE* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.ByteEnum>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryReceiver_1_TryGet_mEE23BD941E62292D5A8B620A0AB9C4B10BF21995_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_tE0F8BC2CD90B293EE985DE3DB04216A94D1C43EE** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.FrameRate>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.FrameRate>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m88499360F68E931DE1FFEBC3AA2F73CF20033538_gshared (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.FrameRate>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A_gshared (DataReceiver_1_t75F47CC44D3CEAE38FA3CCE0955EE3344496DD67* __this, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* ___callback0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Int32>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Int32>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_gshared (DataReceiver_1_t1AC851C1799071A9F92BA704086A92969E2EE598* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<System.Object>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReceiver_1_TryGet_mB8A21D0BC05AE4250B70FD87B9D7DD7E6F0609D5_gshared (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, JsonReceiver_1_t75A2C5302A5E09C74CBF6774420396437E174EC5** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.Networking.Protocols.TextureData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1AC7592839883435D5A4A4B67FBE6BA357E7F0A8_gshared (Action_1_t12104754636C0471D01E9321801E298E3DDC9869* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.Networking.Protocols.TextureData>::AddHandler(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD_gshared (DataReceiver_1_tD50DFD14A81BB208FEB0D86FC8757AFAB4DF0EE0* __this, Action_1_t12104754636C0471D01E9321801E298E3DDC9869* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.SerializableGuid>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_gshared (DataSender_1_tC56BD0EB4BC5579BF3722E894ACDF8CB4FB9549C* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___data0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.FrameRate>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m82AC1760F35FF82697FBDD1F74D4C26C25FB7BE5_gshared_inline (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Guid,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m13E1725DF0DF364D6646F21EB36012953FA9DA16_gshared_inline (Action_2_t9B2E784F9E1BF1BA770316E3E717CEDFB48F86AE* __this, Guid_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_gshared_inline (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C_gshared (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA_gshared (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_gshared_inline (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11_gshared (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Type,T[]>[] Unity.LiveCapture.AttributeUtility::GetAllTypes<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_tC5DF4F1A8A3C5488A47FBA412E2408C8DE54F438* AttributeUtility_GetAllTypes_TisRuntimeObject_m7882321A5A11AD1ECF9B38C3B334FF867D4BD67B_gshared (bool ___inherit0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m64249077687D4EDF03542B945D821FD98186B4A5_gshared (Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A_gshared (RuntimeObject* ___source0, Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* ___keySelector1, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15 List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351_gshared (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904_gshared (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_gshared_inline (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD_gshared (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase::CreateAndLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMappingDatabase_CreateAndLoad_mE2F975028C2034D947BB4A197CB9AF9E7BC8234D (const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.SerializableDictionary`2<System.String,Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings>::.ctor()
inline void SerializableDictionary_2__ctor_m212F1303C962010474B3ACC1B4D10A8CFF9911ED (SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3*, const RuntimeMethod*))SerializableDictionary_2__ctor_m5DA3E91110D25A7BDC69A3E69510BC56D2610937_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8C34690D9E763A8C6A8DC3CDBC29F2CAED993EEF (Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.ScriptableObject::CreateInstance<Unity.LiveCapture.CompanionApp.ClientMappingDatabase>()
inline ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* ScriptableObject_CreateInstance_TisClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_mDC7851A51A806B14A7AC6C48D04DFF2F4F8DBBBB (const RuntimeMethod* method)
{
	return ((  ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInParent<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* GameObject_GetComponentsInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mC318ED896B6A62418F2F34C8F470BDB0D10DF44C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInParent_TisRuntimeObject_mDEBA0826429C4C398C9CEDF9F5520707A897AE76_gshared)(__this, method);
}
// System.Void System.Func`2<UnityEngine.Transform,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4DF73E68DA3CADF55A2655DE7CE152520F5178E5 (Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Transform,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisString_t_mB2FC0AB2C61DA4BA99E6153A9163030EA6E43DF4 (RuntimeObject* ___source0, Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___source0, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice>::.ctor()
inline void Dictionary_2__ctor_m74A1D6CBBBF09A6DDF9EA0707A52F443CF966811 (Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mD1A40148BEDF99589989DDEB7AEC11EA3DD62501 (Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mFB757F2312138E9588843304C2F56BE3FBA5BEDC (Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94152899B99E56B6FB67BCB8E06D35B4AD3DDFD3 (U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Guid System.Guid::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_Parse_mC068B0047F86921D817F600C75C6EBFE15A461D0 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Version Unity.LiveCapture.PackageUtility::GetVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* PackageUtility_GetVersion_m5542364CD0580D27458C21010BC9BC87C20C0A5B (String_t* ___version0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.Protocol::.ctor(System.String,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol__ctor_m4F4A6D01F29DB968C419760947E68431B1FBFB39 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, String_t* ___name0, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.Protocol::SetNetwork(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_SetNetwork_mCCBA62E2422B2EDA541469659A786B7DB8565B39 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.EventSender::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSender__ctor_mABAEA3313F42296F80E146F0DD79DE86DA20D670 (EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* __this, String_t* ___id0, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.EventSender>(T)
inline EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* ___message0, const RuntimeMethod* method)
{
	return ((  EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BoolSender::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolSender__ctor_mA7864BCBC9C687344C19BCD8D64CD64FC8714DD4 (BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BoolSender>(T)
inline BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* ___message0, const RuntimeMethod* method)
{
	return ((  BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinarySender_1__ctor_m39217DE5B2E71B7DC7FCA77A494FA0029A76DC09 (BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinarySender_1__ctor_m62346080BDE66D59E283F929F1978E2E1A98D2B2_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode>>(T)
inline BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* Protocol_Add_TisBinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_m3C056A7A45C25B602F561649EC08706D357F87FB (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* ___message0, const RuntimeMethod* method)
{
	return ((  BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.FrameRate>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602 (BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.FrameRate>>(T)
inline BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* Protocol_Add_TisBinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_m95C7DE3559988D67335DC9962BA1210CAE913C0E (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* ___message0, const RuntimeMethod* method)
{
	return ((  BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40 (BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>>(T)
inline BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* ___message0, const RuntimeMethod* method)
{
	return ((  BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693 (BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Int32>>(T)
inline BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* ___message0, const RuntimeMethod* method)
{
	return ((  BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.StringSender::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSender__ctor_mB78DC1D7087198FFB69389E9C5C3E53A608D5E6A (StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.StringSender>(T)
inline StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* ___message0, const RuntimeMethod* method)
{
	return ((  StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void JsonSender_1__ctor_m684B1A3EDC04A8BFAFB0FFEF5D89E32D63597774 (JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD*, String_t*, uint8_t, int32_t, const RuntimeMethod*))JsonSender_1__ctor_mCC4F25EB3E1E0B2CB9D1B39AF6F39D746431B225_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>>(T)
inline JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* Protocol_Add_TisJsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_m76CDD3871405F201506F1878AE6330D73E774BDC (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* ___message0, const RuntimeMethod* method)
{
	return ((  JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.TextureSender::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions,Unity.LiveCapture.Networking.Protocols.TextureCompression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSender__ctor_m3A33B17DF5D59CC648D0FC8F1E949B483FDC41C0 (TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, int32_t ___compression3, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.TextureSender>(T)
inline TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* Protocol_Add_TisTextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_m87FFD15AA3DF3E82E1B8C3B692608CDE1440700B (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* ___message0, const RuntimeMethod* method)
{
	return ((  TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinaryReceiver_1__ctor_m3BF7EF530067C7E35BE2AECA75999FFA487214CD (BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinaryReceiver_1__ctor_m8BC74F1086DF4DEBF7F32EA185B59DE9462DC17C_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>>(T)
inline BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* Protocol_Add_TisBinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_mEB91965A0E023F6CC3C79CFA83EDBAFAF50B8863 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* ___message0, const RuntimeMethod* method)
{
	return ((  BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7048E12400BF3A4BF2DB9A636C2C37C20AA6F1A1 (Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8F8CE01FBD82AF688BD5658AF6B061F2A7B962A5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1 (DataReceiver_1_t5B3A315122A3A3F344920A37CA66FE26BFF286B3* __this, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t5B3A315122A3A3F344920A37CA66FE26BFF286B3*, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*, const RuntimeMethod*))DataReceiver_1_AddHandler_mF70732A479CD2BCB30AC7DDA73D707F1C909AB05_gshared)(__this, ___callback0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.EventReceiver::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9 (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* __this, String_t* ___id0, const RuntimeMethod* method) ;
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.EventReceiver>(T)
inline EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* ___message0, const RuntimeMethod* method)
{
	return ((  EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.EventReceiver::AddHandler(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C (BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>>(T)
inline BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* Protocol_Add_TisBinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_m61C829932C8390720F40A3E531B4597BC1D96564 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* ___message0, const RuntimeMethod* method)
{
	return ((  BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void System.Action`1<System.Double>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m676FAC53E13390D50082C985025C4F8EB8761FE5 (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m676FAC53E13390D50082C985025C4F8EB8761FE5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Double>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D (DataReceiver_1_tD8BB3E6FBCAD718F690B2DBED17FBE3F75F54988* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_tD8BB3E6FBCAD718F690B2DBED17FBE3F75F54988*, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*, const RuntimeMethod*))DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_gshared)(__this, ___callback0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.SerializableGuid>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705 (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246*, String_t*, uint8_t, int32_t, const RuntimeMethod*))BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.SerializableGuid>>(T)
inline BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* ___message0, const RuntimeMethod* method)
{
	return ((  BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void System.Action`1<Unity.LiveCapture.SerializableGuid>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19 (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.SerializableGuid>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0 (DataReceiver_1_t0417E786457DDE68F17374FE6D4F9F6C761D1801* __this, Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t0417E786457DDE68F17374FE6D4F9F6C761D1801*, Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285*, const RuntimeMethod*))DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_gshared)(__this, ___callback0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>::.ctor(System.String,Unity.LiveCapture.Networking.ChannelType,Unity.LiveCapture.Networking.Protocols.DataOptions)
inline void JsonReceiver_1__ctor_m8A939E609A545844D7F93242D9B5E510527FC42C (JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC* __this, String_t* ___id0, uint8_t ___channel1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC*, String_t*, uint8_t, int32_t, const RuntimeMethod*))JsonReceiver_1__ctor_m32C4D3523EA8B07BDD181E50C54D7F3FA9465509_gshared)(__this, ___id0, ___channel1, ___options2, method);
}
// T Unity.LiveCapture.Networking.Protocols.Protocol::Add<Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>>(T)
inline JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC* Protocol_Add_TisJsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_m6D47FF8623D198E4A19FBF4B3773391856039B5D (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC* ___message0, const RuntimeMethod* method)
{
	return ((  JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC* (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC*, const RuntimeMethod*))Protocol_Add_TisRuntimeObject_m450F53606EF73769F8197C91C5F54CA9C18EDEC4_gshared)(__this, ___message0, method);
}
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7E7D40F4DEB53F2A388D9A7A9DEBAF19112059F3 (Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m62F8F681E951E947C9A7789500CA42389E9131AF (DataReceiver_1_t51ACA31A0B1260CFBF1715476FDC23DD5DE79FF9* __this, Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t51ACA31A0B1260CFBF1715476FDC23DD5DE79FF9*, Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316*, const RuntimeMethod*))DataReceiver_1_AddHandler_mDD84BBED61B276F4B28C036C16556937BB6D643B_gshared)(__this, ___callback0, method);
}
// Unity.LiveCapture.Networking.Message Unity.LiveCapture.Networking.Message::Get(Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.ChannelType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* Message_Get_m332CD491CA748D43102E1FDCA2FA89CE198087D6 (Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote0, uint8_t ___channelType1, int32_t ___dataCapacity2, const RuntimeMethod* method) ;
// Unity.LiveCapture.Networking.Protocols.Protocol Unity.LiveCapture.Networking.Protocols.Protocol::CreateInverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* Protocol_CreateInverse_m9EFD1703EEF433A55B3BAE9F78B8F01AAF95C688 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, const RuntimeMethod* method) ;
// System.IO.MemoryStream Unity.LiveCapture.Networking.Message::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* Message_get_Data_m8FD969BC0E5B68E890E0CC8C0F5D8E3716A4004F (Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.Protocol::Serialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Serialize_m7D78D70870B2834BB9552B548BF27FAEE952424A (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.NetworkBase::SendMessage(Unity.LiveCapture.Networking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBase_SendMessage_m6F65B5CBFA1278BBE1BBF3C6A4D7E5EC9CEE7DEF (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.Protocol::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol_Reset_m0C73797914D854E220874E3E5A5DC88674A14761 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.EventSender::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB (EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.DeviceMode>::Send(T)
inline void DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431 (DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3* __this, uint8_t ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3*, uint8_t, const RuntimeMethod*))DataSender_1_Send_m4728DE5041E92D45E4A22BA1BC925EC51F9955EC_gshared)(__this, ___data0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Boolean>::Send(T)
inline void DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3 (DataSender_1_tB28173AF33AF21D33414B8B9E2FCCB041C0665AA* __this, bool ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_tB28173AF33AF21D33414B8B9E2FCCB041C0665AA*, bool, const RuntimeMethod*))DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_gshared)(__this, ___data0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.FrameRate>::Send(T)
inline void DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52 (DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90*, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621, const RuntimeMethod*))DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52_gshared)(__this, ___data0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Double>::Send(T)
inline void DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9 (DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B* __this, double ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B*, double, const RuntimeMethod*))DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_gshared)(__this, ___data0, method);
}
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::op_Explicit(Unity.LiveCapture.CompanionApp.TakeDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* TakeDescriptorArrayV0_op_Explicit_mA59B79586FE4A8816FB741126849D44B890F98B7 (TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* ___takes0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>::Send(T)
inline void DataSender_1_Send_mFF382B14711792FDDCE790F93C72F7E7D720473C (DataSender_1_tAB89CFD5EBC29C057349F67BFE926460D6593C89* __this, TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_tAB89CFD5EBC29C057349F67BFE926460D6593C89*, TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2*, const RuntimeMethod*))DataSender_1_Send_mB128E266DBAC6F45A377098DF2C08E0E76EEC645_gshared)(__this, ___data0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.Int32>::Send(T)
inline void DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF (DataSender_1_tA72D3C4D52A23C5A10A6CA707A2333878527064A* __this, int32_t ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_tA72D3C4D52A23C5A10A6CA707A2333878527064A*, int32_t, const RuntimeMethod*))DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_gshared)(__this, ___data0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<System.String>::Send(T)
inline void DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43 (DataSender_1_t67BCF359AF76BB460F669D191A5DCFA01E02A161* __this, String_t* ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t67BCF359AF76BB460F669D191A5DCFA01E02A161*, String_t*, const RuntimeMethod*))DataSender_1_Send_mB128E266DBAC6F45A377098DF2C08E0E76EEC645_gshared)(__this, ___data0, method);
}
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.TextureData::.ctor(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureData__ctor_m1D09EF2A2DB3BD27400C8919599911C9B6CBE455 (TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, String_t* ___metadata1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.Networking.Protocols.TextureData>::Send(T)
inline void DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B (DataSender_1_t229782187C22021F33EECCD18B4C19FBE543F3EF* __this, TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443 ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t229782187C22021F33EECCD18B4C19FBE543F3EF*, TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443, const RuntimeMethod*))DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B_gshared)(__this, ___data0, method);
}
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>::Invoke(T)
inline void Action_1_Invoke_m126F60BC3E16824C7D1278D4DF5E7BF4735BE0C3_inline (Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* __this, uint8_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*, uint8_t, const RuntimeMethod*))Action_1_Invoke_mB17B2145955C61848897CB96737BE6AFCC8597A4_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Double>::Invoke(T)
inline void Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_inline (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* __this, double ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*, double, const RuntimeMethod*))Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_gshared_inline)(__this, ___obj0, method);
}
// System.Guid Unity.LiveCapture.SerializableGuid::op_Implicit(Unity.LiveCapture.SerializableGuid)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline (SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Guid>::Invoke(T)
inline void Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_inline (Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* __this, Guid_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*, Guid_t, const RuntimeMethod*))Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_gshared_inline)(__this, ___obj0, method);
}
// Unity.LiveCapture.CompanionApp.TakeDescriptor Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::op_Explicit(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* TakeDescriptorV0_op_Explicit_mBD858E9E65D51EABD18AEDF7182F97906A0C5D10 (TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* ___take0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>::Invoke(T)
inline void Action_1_Invoke_m8F83BC1BB914770A4F3DAF768A929D92E2FAB128_inline (Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* __this, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.Protocol::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Protocol__ctor_mD1172D851C2E75AB93DFEC5843468227805CA513 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.CompanionApp.DeviceMode>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
inline bool BinarySender_1_TryGet_mC2DC115BCD1FB6F7F7550D1DE65E9C9A8081E84E (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB**, const RuntimeMethod*))BinarySender_1_TryGet_mBE0FD6920E1BB6259092302FD898EBAD9451C824_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.EventSender::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.EventSender&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<System.Double>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
inline bool BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8**, const RuntimeMethod*))BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinarySender`1<Unity.LiveCapture.SerializableGuid>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinarySender`1<T>&)
inline bool BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0**, const RuntimeMethod*))BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.JsonSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.JsonSender`1<T>&)
inline bool JsonSender_1_TryGet_m1B56D48D0437C46CE9C29095485C11B484E3BC4E (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B**, const RuntimeMethod*))JsonSender_1_TryGet_m14C2D067BA0649AF0BEBDE83F39A38B49E77C9C9_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.EventReceiver::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.EventReceiver&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventReceiver_TryGet_m3245A7EA39CCBE97AE0ED4C27CF3BC1C21BE1780 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944** ___message2, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.Protocols.BoolReceiver::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BoolReceiver&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolReceiver_TryGet_m4AD3381D432983DCB348F0164F4CF6927F5BEE56 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Boolean>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7 (DataReceiver_1_tB8B18BADCF319191B855D301BBD1D4310019B1FE* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_tB8B18BADCF319191B855D301BBD1D4310019B1FE*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_gshared)(__this, ___callback0, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.CompanionApp.DeviceMode>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
inline bool BinaryReceiver_1_TryGet_mCD0BE79798C957503DB3E5EF35A5F143A41224EE (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609**, const RuntimeMethod*))BinaryReceiver_1_TryGet_mEE23BD941E62292D5A8B620A0AB9C4B10BF21995_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<Unity.LiveCapture.FrameRate>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
inline bool BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5**, const RuntimeMethod*))BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Void System.Action`1<Unity.LiveCapture.FrameRate>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m88499360F68E931DE1FFEBC3AA2F73CF20033538 (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m88499360F68E931DE1FFEBC3AA2F73CF20033538_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.FrameRate>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A (DataReceiver_1_t75F47CC44D3CEAE38FA3CCE0955EE3344496DD67* __this, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t75F47CC44D3CEAE38FA3CCE0955EE3344496DD67*, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*, const RuntimeMethod*))DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A_gshared)(__this, ___callback0, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Double>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
inline bool BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A**, const RuntimeMethod*))BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<System.Int32>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.BinaryReceiver`1<T>&)
inline bool BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3**, const RuntimeMethod*))BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.Int32>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332 (DataReceiver_1_t1AC851C1799071A9F92BA704086A92969E2EE598* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t1AC851C1799071A9F92BA704086A92969E2EE598*, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, const RuntimeMethod*))DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_gshared)(__this, ___callback0, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.StringReceiver::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.StringReceiver&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringReceiver_TryGet_mFFC8B68528190DD3D0432CE61B42E989C2BA1B20 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<System.String>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C (DataReceiver_1_t9C49F5C5995704CBB73774C8BA88E2C8C2002770* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t9C49F5C5995704CBB73774C8BA88E2C8C2002770*, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, const RuntimeMethod*))DataReceiver_1_AddHandler_mDD84BBED61B276F4B28C036C16556937BB6D643B_gshared)(__this, ___callback0, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.JsonReceiver`1<T>&)
inline bool JsonReceiver_1_TryGet_m40EF2B8DCB729BC00FDDD6B0B6FC0F7DFD1DAC96 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, JsonReceiver_1_t3C3F74B6CA8D41290570E70A824D179C558C83C4** ___message2, const RuntimeMethod* method)
{
	return ((  bool (*) (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*, String_t*, JsonReceiver_1_t3C3F74B6CA8D41290570E70A824D179C558C83C4**, const RuntimeMethod*))JsonReceiver_1_TryGet_mB8A21D0BC05AE4250B70FD87B9D7DD7E6F0609D5_gshared)(___protocol0, ___id1, ___message2, method);
}
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD85E26F774733659D6097DACA8497CB640B38E70 (Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_m2EF3D3A27F3FE2089BC8C454429683B0C61A82DD (DataReceiver_1_t55F1160F156BE3FB3182B55F446D7A7B4F3C9F53* __this, Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_t55F1160F156BE3FB3182B55F446D7A7B4F3C9F53*, Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806*, const RuntimeMethod*))DataReceiver_1_AddHandler_mDD84BBED61B276F4B28C036C16556937BB6D643B_gshared)(__this, ___callback0, method);
}
// System.Boolean Unity.LiveCapture.Networking.Protocols.TextureReceiver::TryGet(Unity.LiveCapture.Networking.Protocols.Protocol,System.String,Unity.LiveCapture.Networking.Protocols.TextureReceiver&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureReceiver_TryGet_mCFCEE8BFEDF1444A1269D8332A629DFFC468B604 (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* ___protocol0, String_t* ___id1, TextureReceiver_tD197B90DF20D8020CDDA1B4AB68A27A6331CF9C0** ___message2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.Networking.Protocols.TextureData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1AC7592839883435D5A4A4B67FBE6BA357E7F0A8 (Action_1_t12104754636C0471D01E9321801E298E3DDC9869* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12104754636C0471D01E9321801E298E3DDC9869*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1AC7592839883435D5A4A4B67FBE6BA357E7F0A8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.Protocols.DataReceiver`1<Unity.LiveCapture.Networking.Protocols.TextureData>::AddHandler(System.Action`1<T>)
inline void DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD (DataReceiver_1_tD50DFD14A81BB208FEB0D86FC8757AFAB4DF0EE0* __this, Action_1_t12104754636C0471D01E9321801E298E3DDC9869* ___callback0, const RuntimeMethod* method)
{
	((  void (*) (DataReceiver_1_tD50DFD14A81BB208FEB0D86FC8757AFAB4DF0EE0*, Action_1_t12104754636C0471D01E9321801E298E3DDC9869*, const RuntimeMethod*))DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD_gshared)(__this, ___callback0, method);
}
// Unity.LiveCapture.SerializableGuid Unity.LiveCapture.SerializableGuid::op_Implicit(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4 (Guid_t ___guid0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.SerializableGuid>::Send(T)
inline void DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109 (DataSender_1_tC56BD0EB4BC5579BF3722E894ACDF8CB4FB9549C* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_tC56BD0EB4BC5579BF3722E894ACDF8CB4FB9549C*, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7, const RuntimeMethod*))DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_gshared)(__this, ___data0, method);
}
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::op_Explicit(Unity.LiveCapture.CompanionApp.TakeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* TakeDescriptorV0_op_Explicit_m05CF6D1932344427E82308BC8824EC4086CC1140 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___take0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Protocols.DataSender`1<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>::Send(T)
inline void DataSender_1_Send_m10CC8EA80A59101B9BCE4E39386227A29C24EE9C (DataSender_1_t86DC27CD2A94194F9E137479CACA8FFC7FCDF678* __this, TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* ___data0, const RuntimeMethod* method)
{
	((  void (*) (DataSender_1_t86DC27CD2A94194F9E137479CACA8FFC7FCDF678*, TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2*, const RuntimeMethod*))DataSender_1_Send_mB128E266DBAC6F45A377098DF2C08E0E76EEC645_gshared)(__this, ___data0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<Unity.LiveCapture.FrameRate>::Invoke(T)
inline void Action_1_Invoke_m82AC1760F35FF82697FBDD1F74D4C26C25FB7BE5_inline (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621, const RuntimeMethod*))Action_1_Invoke_m82AC1760F35FF82697FBDD1F74D4C26C25FB7BE5_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// Unity.LiveCapture.CompanionApp.TakeDescriptor[] Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::op_Explicit(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* TakeDescriptorArrayV0_op_Explicit_m2C6F9843BF9BCDC09DD52EB0A2E2D40318968475 (TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* ___takes0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]>::Invoke(T)
inline void Action_1_Invoke_mA5F6D8FC9A2FE5096F8D42D60DCBD3910437A72F_inline (Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* __this, TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*, TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String Unity.LiveCapture.Networking.Protocols.TextureData::get_metadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TextureData_get_metadata_mBFF6C67DC249BFD68F2BEF2E28EE21049907EA74_inline (TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Unity.LiveCapture.Networking.Protocols.TextureData::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureData_get_texture_mAF3B046704D0E7F628FC3898C9F33DE3E82AC951_inline (TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Guid,UnityEngine.Texture2D>::Invoke(T1,T2)
inline void Action_2_Invoke_m421FB4247A7741114104DF4C44EC29980E1FEE67_inline (Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* __this, Guid_t ___arg10, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*, Guid_t, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Action_2_Invoke_m13E1725DF0DF364D6646F21EB36012953FA9DA16_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::DeregisterClientConnectHandler(System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_DeregisterClientConnectHandler_m50D4658AD140C436F29D7735C633C803FD0AE469 (Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* ___handler0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::Add(T)
inline void List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_inline (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C, const RuntimeMethod*))List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Item(System.Int32)
inline ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C_gshared)(__this, ___index0, method);
}
// System.Boolean System.Delegate::op_Equality(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32 (Delegate_t* ___d10, Delegate_t* ___d21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Count()
inline int32_t List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_inline (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, const RuntimeMethod*))List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_gshared_inline)(__this, method);
}
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m22D9CC478E3D3B3F6BF559DB50A5A4725A7F290D (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::.ctor()
inline void List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11 (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, const RuntimeMethod*))List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11_gshared)(__this, method);
}
// System.ValueTuple`2<System.Type,T[]>[] Unity.LiveCapture.AttributeUtility::GetAllTypes<Unity.LiveCapture.CompanionApp.ClientAttribute>(System.Boolean)
inline ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872* AttributeUtility_GetAllTypes_TisClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316_m994B3DE4CFE768B9771DD27C3DBB555375D4A8AC (bool ___inherit0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872* (*) (bool, const RuntimeMethod*))AttributeUtility_GetAllTypes_TisRuntimeObject_m7882321A5A11AD1ECF9B38C3B334FF867D4BD67B_gshared)(___inherit0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String Unity.LiveCapture.CompanionApp.ClientAttribute::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAttribute_get_Type_mD19011116415F509DE63A5632E44D75414A5B147_inline (ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.LiveCapture.Connection::OnChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F (Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352* __this, bool ___save0, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.NetworkBase::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBase_get_IsRunning_mAA0E99E68A59DCF66F39AE4D15BC794A98C68AB7 (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>::get_Count()
inline int32_t Dictionary_2_get_Count_mD1557E9AE30A128FF03CE3C46765F4451AD34A05 (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void Unity.LiveCapture.Connection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Connection_OnEnable_m2762117F4E701711BDC1BA48F798D7A6DF365E16 (Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.Networking.Remote>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9292D959FA6C2ECBFBFF28E534F6149220A8762D (Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.NetworkBase::add_RemoteConnected(System.Action`1<Unity.LiveCapture.Networking.Remote>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBase_add_RemoteConnected_mDC7E830FD799F086719E5F24935517A08D05433C (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m05F937C6353C4D7C7CC98B159D163C7A3EA38AC5 (Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.LiveCapture.Networking.NetworkBase::add_RemoteDisconnected(System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBase_add_RemoteDisconnected_m5D52A085D80330F3703885ED6B6B26118029B90B (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Connection::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Connection_OnDisable_mC410B3C19C98ABD1A45B31ABC11B8E634B95895B (Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Discovery.DiscoveryBase::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoveryBase_Stop_mBB3E38811AC53A911383C289A8CFB23558BE47A1 (DiscoveryBase_t3F903B3322A4F8D1965E865A52AF8A1A5E938F83* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.NetworkBase::remove_RemoteConnected(System.Action`1<Unity.LiveCapture.Networking.Remote>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBase_remove_RemoteConnected_mF6DA2A383A2238A6DFC01BFAC4824E483735D785 (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.NetworkBase::remove_RemoteDisconnected(System.Action`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBase_remove_RemoteDisconnected_m7AD94243405222B93EE294BBD0ECD65FF4106710 (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>::get_Values()
inline ValueCollection_t9608944866B1724C8F695D39833C048BDA3C1570* Dictionary_2_get_Values_m9EF5E57CCA53EA92E3A0BC9CE434D13866C36001 (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t9608944866B1724C8F695D39833C048BDA3C1570* (*) (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Boolean Unity.LiveCapture.Networking.NetworkUtilities::IsPortAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkUtilities_IsPortAvailable_m8AB12DB48E34E9DA5294A7562A36158176B0A8B1 (int32_t ___port0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean Unity.LiveCapture.Networking.NetworkServer::StartServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkServer_StartServer_mCA45CBEA9CDB408FA0E1B0406DE362D50530C8BA (NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* __this, int32_t ___port0, const RuntimeMethod* method) ;
// System.String System.Environment::get_MachineName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_MachineName_m9DA8870A9A245AC7F13AC3EFE4E566A0CEFBA9A5 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Guid Unity.LiveCapture.Networking.NetworkBase::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t NetworkBase_get_ID_m3784E92568FA8A5EC7F0741F47D05EE40CE1E7A8_inline (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Discovery.ServerData::.ctor(System.String,System.String,System.Guid,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerData__ctor_mD63FECAE52B580420CF33226A81A5AC01BF71658 (ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656* __this, String_t* ___productName0, String_t* ___instanceName1, Guid_t ___id2, Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version3, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<System.Net.IPEndPoint> Unity.LiveCapture.Networking.NetworkServer::get_EndPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkServer_get_EndPoints_m2F2BF805ACD040E4E7CBEDACE9512C6DA57A0A65_inline (NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Net.IPEndPoint>(System.Collections.Generic.IEnumerable`1<TSource>)
inline IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* Enumerable_ToArray_TisIPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_mD9F9DBA7229CE368C3D9718A30F6A8A117B5846B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Boolean Unity.LiveCapture.Networking.Discovery.DiscoveryServer::Start(Unity.LiveCapture.Networking.Discovery.ServerData,System.Net.IPEndPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiscoveryServer_Start_mD40AC44F0D356431A84DE4A9416B164F61BAF702 (DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* __this, ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656 ___serverConfiguration0, IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* ___endPoints1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.NetworkBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBase_Update_mBE8B7EBA1282D24E1A318D8DCED24F52C7A19DC3 (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.Discovery.DiscoveryBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoveryBase_Update_m6F10BA78F8366350956A1F02E14C79C3D6F306E1 (DiscoveryBase_t3F903B3322A4F8D1965E865A52AF8A1A5E938F83* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.LiveCapture.Networking.Message>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBA60B3F3A61D6CFDBAFD5106A1E6F6CA587610BB (Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Unity.LiveCapture.Networking.NetworkBase::RegisterMessageHandler(Unity.LiveCapture.Networking.Remote,System.Action`1<Unity.LiveCapture.Networking.Message>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBase_RegisterMessageHandler_mCD15925C4F40FAB6410924FFC81717CDFC340F5E (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote0, Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B* ___messageHandler1, bool ___handleBufferedMessages2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDCEC6BDBDBC2C5F410C2237D1C4B1DD25707FE6A (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* __this, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>::Invoke(T)
inline void Action_1_Invoke_m3DAE0370D00930CBFA2BBF8C4B1CC2B919165521_inline (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>::Remove(TKey)
inline bool Dictionary_2_Remove_m7A2AE5424A6EC51E36DA64369D4587CD0751B114 (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* __this, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Unity.LiveCapture.Networking.Message::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_Dispose_mCAD58E44ECE584B33BF7A9C965B2ABC344B2AF8E (Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* __this, const RuntimeMethod* method) ;
// Unity.LiveCapture.Networking.ChannelType Unity.LiveCapture.Networking.Message::get_ChannelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Message_get_ChannelType_m28C6C51AE0C5AD60FAD3744E3B1FFB4A59E55586 (Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Unity.LiveCapture.CompanionApp.ClientInitialization>(System.String)
inline ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* JsonUtility_FromJson_TisClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF_m1350C72A53C3593BAECE0747B347D8F8B7406A50 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// Unity.LiveCapture.Networking.Remote Unity.LiveCapture.Networking.Message::get_Remote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* Message_get_Remote_m2B823C0BBE57700E54F97106C39F3F8897941D1A (Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendProtocol_m75F02B37045C734DC59732D8A562774CEECC3A18 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>::Add(TKey,TValue)
inline void Dictionary_2_Add_m59C097829F877055F44981241DCB20C72DFECB22 (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* __this, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::AssignOwner(Unity.LiveCapture.CompanionApp.ICompanionAppClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_AssignOwner_m64514CEF87369E5F01922E7FE7D74F5D27F33D92 (RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m64249077687D4EDF03542B945D821FD98186B4A5 (Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m64249077687D4EDF03542B945D821FD98186B4A5_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler,System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A (RuntimeObject* ___source0, Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A*, const RuntimeMethod*))Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A_gshared)(___source0, ___keySelector1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// TResult System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_mDE5D4E86377608BBCDFD2D1C071E9BE686D5A3C5_inline (Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___arg0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::GetEnumerator()
inline Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15 List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351 (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15 (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, const RuntimeMethod*))List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::Dispose()
inline void Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904 (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15*, const RuntimeMethod*))Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Current()
inline ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_inline (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method)
{
	return ((  ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C (*) (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15*, const RuntimeMethod*))Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::MoveNext()
inline bool Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15*, const RuntimeMethod*))Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD_gshared)(__this, method);
}
// System.Void Unity.LiveCapture.Networking.Discovery.DiscoveryServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiscoveryServer__ctor_m014959A7333400332611807F4AA59E9A827A1BEE (DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.Networking.NetworkServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer__ctor_m24F5F735DDA6BEC3F6D0D8EAFB7B2D36C5D12289 (NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ICompanionAppClient>::.ctor()
inline void Dictionary_2__ctor_mE5C21F1E5D11F8506AE92B645A45799D25C5CF6F (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.LiveCapture.Connection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Connection__ctor_m5D8F36A23471DC7730784D79F82A4E8040EEAE35 (Connection_tC1C0F4A942FCF4DAA70AE4D8F9A9DFACD44F5352* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCDA66CDECAB705D7E4AF2CB21C78FE5F7930B8DB (U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.SlateDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlateDescriptor__ctor_m177A3E4390FEC07A8A2EF6424C590AE0927712BB (SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* __this, const RuntimeMethod* method) ;
// System.Guid Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TakeDescriptor_get_Guid_m06D999DB5515F2B642A1C4DE08099F70E105B3C7 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Guid(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Guid_mF982A57F437E3C4D1A78614FB8F442F1B80116E2 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_Name_mEC4FE426A6C7FA04BACD2FE3B01E94C078375374_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_Name_m15B6CDB813AB9967EBE7FE86FE1D5DCDB2520371_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_SceneNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_SceneNumber_mD32C9EE95C0D32851011BCFB017027B49C2A35C9_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_SceneNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_SceneNumber_m8B3072D2E87995067E237963CD4AF73E564ED10D_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_ShotName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_ShotName_mE2227E7DA9A0227534E5C2332BA856D3F5A279D8_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_ShotName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_ShotName_m88E3D40E508ADD41D15C12C82F9AB8C2A47A1FEE_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_TakeNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_TakeNumber_m5F9E16BC3A98ACB8F3C901FC030729A84A7F65E1_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_TakeNumber(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_TakeNumber_mAC43C859C444266BFEE3E4179F0CAFDE6D31DFD5_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int64 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_CreationTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TakeDescriptor_get_CreationTime_m60977BCF6C82E036E3415663B01DE594F77D98F5_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_CreationTime(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_CreationTime_mEFD34D1F18CFCA4E147BC684FFD85ADDE490FE78_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_Description_mC24B6BD846858C94277D1DB58815CD85AF5B65B6_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_Description_m8296885557840A35979D3EA82CF0E4A970E4B9CF_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Rating()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_Rating_mDC84C096C1FA666E4AC27D14A2C7EDD40A46FDEC_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Rating(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_Rating_m1AB17C594C0ED03C25DF9B42E384D709F5F947BE_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Unity.LiveCapture.FrameRate Unity.LiveCapture.CompanionApp.TakeDescriptor::get_FrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 TakeDescriptor_get_FrameRate_mFE813AA5209006C3DA2B5071D877144DFF246990_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_FrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_FrameRate_m7959F676E74DAC75F92E082E823A19FF46C40DBF_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) ;
// System.Guid Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Screenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TakeDescriptor_get_Screenshot_m6CF8E47BAA0EAFC0FBC515A526F413A05162CB9B (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Screenshot(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Screenshot_m62448E238A553F6D95C29B48AB55F22C27F007F8 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_TimelineName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_TimelineName_mBD807CFF84435A0079CC116C74440E3F58796528_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_TimelineName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_TimelineName_m6DDAADF340A0967AE07B96578BF79DCDACF784BA_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Double Unity.LiveCapture.CompanionApp.TakeDescriptor::get_TimelineDuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TakeDescriptor_get_TimelineDuration_m047CD42E1EC46D5294F219D3B5BE4A1CC0ADFD25_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_TimelineDuration(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_TimelineDuration_m5E879D7889DB5451AFF19E95CA99316A17E19F65_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor__ctor_mFE5F68FBDCD44B12E7EE545AF93D565CC20E4139 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.EditorAssetPreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorAssetPreview__ctor_m1D73AFA2ACDDB0DA44D647036C9B6C2CF0E8911E (EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::.ctor(Unity.LiveCapture.CompanionApp.IAssetPreview)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager__ctor_mE77849C0649EF90427D7EFE0391E18E7F3327DF1 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, RuntimeObject* ___assetPreview0, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager__ctor_mA703D48D522756EA71D5AA0D35F8F008EA2D8B66 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, const RuntimeMethod* method) ;
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptorV0__ctor_mFFA2920447F5132F080A3859A416D6B45F3EAB3B (TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.LiveCapture.CompanionApp.TakeDescriptor,Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEA24D26651DB8EC26367F978C329B90D5DCF9FDA (Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Unity.LiveCapture.CompanionApp.TakeDescriptor,Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_mA97B09D9F98FA31E0ADBF9DA31CF83CDC6BF389C (RuntimeObject* ___source0, Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* Enumerable_ToArray_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_m60960D0E4E6D9A748FE8C9AC1269A009677806CF (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptorArrayV0__ctor_mA35B519AE5F1D7F67007507FDB61A8303BB88407 (TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0,Unity.LiveCapture.CompanionApp.TakeDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3AE89C9BAB63EA793230DD778D4F0BB6271D4C71 (Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0,Unity.LiveCapture.CompanionApp.TakeDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5B7E66BF697B1321AD2FE46A5B4196D955294C8F (RuntimeObject* ___source0, Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Unity.LiveCapture.CompanionApp.TakeDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* Enumerable_ToArray_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5C78114FC4FAB81FC7D4A7FF85183A8C9E744DC0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m37DD06007BAB610447A6040E57FF6AE778134049 (U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* __this, const RuntimeMethod* method) ;
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
// System.String Unity.LiveCapture.CompanionApp.ClientAttribute::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientAttribute_get_Type_mD19011116415F509DE63A5632E44D75414A5B147 (ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.ClientAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAttribute__ctor_mBF08D59E1CEA9D69E9BCB31404CEDA3437F56CB3 (ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* __this, String_t* ___type0, const RuntimeMethod* method) 
{
	{
		// public ClientAttribute(string type)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Type = type;
		String_t* L_0 = ___type0;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeU3Ek__BackingField_0), (void*)L_0);
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
// Unity.LiveCapture.CompanionApp.ClientMappingDatabase Unity.LiveCapture.CompanionApp.ClientMappingDatabase::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* ClientMappingDatabase_get_Instance_m4543049783A80D51983F675092CF06CE0E1FDF2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* L_0 = ((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// CreateAndLoad();
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		ClientMappingDatabase_CreateAndLoad_mE2F975028C2034D947BB4A197CB9AF9E7BC8234D(NULL);
	}

IL_0012:
	{
		// return s_Instance;
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* L_2 = ((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_Instance_5;
		return L_2;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMappingDatabase__ctor_mCA21BE77FBFAC2D59957B08CFB92C95DB27CAC67 (ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_m212F1303C962010474B3ACC1B4D10A8CFF9911ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC52603396B43F3DDC05601980EC08B270CAE74E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SerializableDictionary<string, SceneMappings> m_ScenePathToMappings = new SerializableDictionary<string, SceneMappings>();
		SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3* L_0 = (SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3*)il2cpp_codegen_object_new(SerializableDictionary_2_t28195B7A98B8B33E54A782B0C80EC203BF9BE1B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SerializableDictionary_2__ctor_m212F1303C962010474B3ACC1B4D10A8CFF9911ED(L_0, SerializableDictionary_2__ctor_m212F1303C962010474B3ACC1B4D10A8CFF9911ED_RuntimeMethod_var);
		__this->___m_ScenePathToMappings_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScenePathToMappings_7), (void*)L_0);
		// ClientMappingDatabase()
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		// if (s_Instance != null)
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* L_1 = ((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError($"{nameof(ClientMappingDatabase)} already exists. Did you query the singleton in a constructor?");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralCC52603396B43F3DDC05601980EC08B270CAE74E, NULL);
		return;
	}

IL_0029:
	{
		// s_Instance = this;
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_Instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.CompanionApp.ClientMappingDatabase::TryGetDevice(Unity.LiveCapture.CompanionApp.ICompanionAppClient,Unity.LiveCapture.CompanionApp.ICompanionAppDevice&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientMappingDatabase_TryGetDevice_m237F03CE8D09FE9918543D52E705C665DB3DE32C (RuntimeObject* ___client0, RuntimeObject** ___device1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8C34690D9E763A8C6A8DC3CDBC29F2CAED993EEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (client == null)
		RuntimeObject* L_0 = ___client0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(client));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8576BA38A6B54451F2DCD524CBE7A6AEAD448846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ClientMappingDatabase_TryGetDevice_m237F03CE8D09FE9918543D52E705C665DB3DE32C_RuntimeMethod_var)));
	}

IL_000e:
	{
		// return s_ClientToDevice.TryGetValue(client, out device);
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838* L_2 = ((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_ClientToDevice_6;
		RuntimeObject* L_3 = ___client0;
		RuntimeObject** L_4 = ___device1;
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m8C34690D9E763A8C6A8DC3CDBC29F2CAED993EEF(L_2, L_3, L_4, Dictionary_2_TryGetValue_m8C34690D9E763A8C6A8DC3CDBC29F2CAED993EEF_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase::CreateAndLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMappingDatabase_CreateAndLoad_mE2F975028C2034D947BB4A197CB9AF9E7BC8234D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_mDC7851A51A806B14A7AC6C48D04DFF2F4F8DBBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Instance == null)
		il2cpp_codegen_runtime_class_init_inline(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* L_0 = ((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_Instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// CreateInstance<ClientMappingDatabase>().hideFlags = HideFlags.HideAndDontSave;
		ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927* L_2;
		L_2 = ScriptableObject_CreateInstance_TisClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_mDC7851A51A806B14A7AC6C48D04DFF2F4F8DBBBB(ScriptableObject_CreateInstance_TisClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_mDC7851A51A806B14A7AC6C48D04DFF2F4F8DBBBB_RuntimeMethod_var);
		NullCheck(L_2);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_2, ((int32_t)61), NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMappingDatabase_Save_m4E34AD762CC27AF314190F509505BACC2F17F370 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String Unity.LiveCapture.CompanionApp.ClientMappingDatabase::GetGameObjectPath(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientMappingDatabase_GetGameObjectPath_mAB30D9E3513AD0FF4C833BD6EF113DDE728C8A78 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisString_t_mB2FC0AB2C61DA4BA99E6153A9163030EA6E43DF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mC318ED896B6A62418F2F34C8F470BDB0D10DF44C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetGameObjectPathU3Eb__15_0_mF063090099A29A0771F99F83513E3A521E4B41A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* G_B2_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* G_B1_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		// return string.Join("/", go.GetComponentsInParent<Transform>().Select(t => t.name).Reverse().ToArray());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1;
		L_1 = GameObject_GetComponentsInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mC318ED896B6A62418F2F34C8F470BDB0D10DF44C(L_0, GameObject_GetComponentsInParent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mC318ED896B6A62418F2F34C8F470BDB0D10DF44C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var);
		Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* L_2 = ((U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var);
		U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F* L_4 = ((U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* L_5 = (Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3*)il2cpp_codegen_object_new(Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m4DF73E68DA3CADF55A2655DE7CE152520F5178E5(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetGameObjectPathU3Eb__15_0_mF063090099A29A0771F99F83513E3A521E4B41A4_RuntimeMethod_var), NULL);
		Func_2_t08547C88D54ED0278DEA4E76DDF46198A05B8EA3* L_6 = L_5;
		((U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002a:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisString_t_mB2FC0AB2C61DA4BA99E6153A9163030EA6E43DF4((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_TisString_t_mB2FC0AB2C61DA4BA99E6153A9163030EA6E43DF4_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6(L_7, Enumerable_Reverse_TisString_t_m79D0DCB46163AF537E1588860EEACEB89E5C46D6_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_8, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_10;
		L_10 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B2_2, L_9, NULL);
		return L_10;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientMappingDatabase__cctor_m96127FFB3888935E094A0FF7FCF4650FF923499C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m74A1D6CBBBF09A6DDF9EA0707A52F443CF966811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Dictionary<ICompanionAppClient, ICompanionAppDevice> s_ClientToDevice = new Dictionary<ICompanionAppClient, ICompanionAppDevice>();
		Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838* L_0 = (Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838*)il2cpp_codegen_object_new(Dictionary_2_t689B72492E9C45C6F49652039D34642FAA4A2838_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m74A1D6CBBBF09A6DDF9EA0707A52F443CF966811(L_0, Dictionary_2__ctor_m74A1D6CBBBF09A6DDF9EA0707A52F443CF966811_RuntimeMethod_var);
		((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_ClientToDevice_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_StaticFields*)il2cpp_codegen_static_fields_for(ClientMappingDatabase_t557E4612D88FBE223D58D0C1026281753EC1B927_il2cpp_TypeInfo_var))->___s_ClientToDevice_6), (void*)L_0);
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
// Conversion methods for marshalling of: Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
IL2CPP_EXTERN_C void Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshal_pinvoke(const Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB& unmarshaled, Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___LastConnectTime_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LastConnectTime' of type 'Mapping'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LastConnectTime_1Exception, NULL);
}
IL2CPP_EXTERN_C void Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshal_pinvoke_back(const Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_pinvoke& marshaled, Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB& unmarshaled)
{
	Exception_t* ___LastConnectTime_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LastConnectTime' of type 'Mapping'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LastConnectTime_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
IL2CPP_EXTERN_C void Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshal_pinvoke_cleanup(Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
IL2CPP_EXTERN_C void Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshal_com(const Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB& unmarshaled, Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_com& marshaled)
{
	Exception_t* ___LastConnectTime_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LastConnectTime' of type 'Mapping'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LastConnectTime_1Exception, NULL);
}
IL2CPP_EXTERN_C void Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshal_com_back(const Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_com& marshaled, Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB& unmarshaled)
{
	Exception_t* ___LastConnectTime_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LastConnectTime' of type 'Mapping'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LastConnectTime_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping
IL2CPP_EXTERN_C void Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshal_com_cleanup(Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB_marshaled_com& marshaled)
{
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mD1A40148BEDF99589989DDEB7AEC11EA3DD62501 (Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB* __this, const RuntimeMethod* method) 
{
	{
		// m_LastConnectTime = LastConnectTime.Ticks;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___LastConnectTime_1);
		int64_t L_1;
		L_1 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6(L_0, NULL);
		__this->___m_LastConnectTime_2 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Mapping_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mD1A40148BEDF99589989DDEB7AEC11EA3DD62501_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB*>(__this + _offset);
	Mapping_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mD1A40148BEDF99589989DDEB7AEC11EA3DD62501(_thisAdjusted, method);
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/Mapping::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mapping_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mFB757F2312138E9588843304C2F56BE3FBA5BEDC (Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB* __this, const RuntimeMethod* method) 
{
	{
		// LastConnectTime = new DateTime(m_LastConnectTime);
		int64_t L_0 = __this->___m_LastConnectTime_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_m64AFCE84ABB24698256EB9F635EFD0A221823441((&L_1), L_0, /*hidden argument*/NULL);
		__this->___LastConnectTime_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Mapping_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mFB757F2312138E9588843304C2F56BE3FBA5BEDC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Mapping_t74BBAD1F6B031BCE86B13D21BF8A7310FAA2EDBB*>(__this + _offset);
	Mapping_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_mFB757F2312138E9588843304C2F56BE3FBA5BEDC(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/SceneMappings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMappings__ctor_m61290D9FD9F2E00ED828758BD9765B646875310F (SceneMappings_tC98041AAD1558086A0733408C31105DD3A4F6BB9* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5019F968A5543CD61645AAC2079139C7B5315944 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F* L_0 = (U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F*)il2cpp_codegen_object_new(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m94152899B99E56B6FB67BCB8E06D35B4AD3DDFD3(L_0, NULL);
		((U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94152899B99E56B6FB67BCB8E06D35B4AD3DDFD3 (U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.LiveCapture.CompanionApp.ClientMappingDatabase/<>c::<GetGameObjectPath>b__15_0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetGameObjectPathU3Eb__15_0_mF063090099A29A0771F99F83513E3A521E4B41A4 (U3CU3Ec_t4C032B664AE9C93CF6B585D047F6DF489943835F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, const RuntimeMethod* method) 
{
	{
		// return string.Join("/", go.GetComponentsInParent<Transform>().Select(t => t.name).Reverse().ToArray());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		return L_1;
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
// System.String Unity.LiveCapture.CompanionApp.CompanionAppClient::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CompanionAppClient_get_Name_m74B62A0934A3310ECC1BEAB501368FB9B07A2743 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Guid Unity.LiveCapture.CompanionApp.CompanionAppClient::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t CompanionAppClient_get_ID_mA7A2B2F0BF4A4EBA78BA76A2AA406B26E220406F (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	{
		// public Guid ID { get; }
		Guid_t L_0 = __this->___U3CIDU3Ek__BackingField_21;
		return L_0;
	}
}
// UnityEngine.Vector2Int Unity.LiveCapture.CompanionApp.CompanionAppClient::get_ScreenResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A CompanionAppClient_get_ScreenResolution_m07CDCF106D3FC6264BF73F871E0C2B2117FACF12 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int ScreenResolution { get; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CScreenResolutionU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_SetDeviceMode(System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_SetDeviceMode_mF6841AE63CB5086F96F5B8B9C7CFDBAAD8335B17 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_0 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_1 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_2 = NULL;
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_0 = __this->___SetDeviceMode_23;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_2 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)Castclass((RuntimeObject*)L_4, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var));
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F** L_5 = (&__this->___SetDeviceMode_23);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_6 = V_2;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_7 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_9 = V_0;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_9) == ((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_SetDeviceMode(System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_SetDeviceMode_mC518CE84B62F34401AD306B9C98026FC0BC330C4 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_0 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_1 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_2 = NULL;
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_0 = __this->___SetDeviceMode_23;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_2 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)Castclass((RuntimeObject*)L_4, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var));
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F** L_5 = (&__this->___SetDeviceMode_23);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_6 = V_2;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_7 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_9 = V_0;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_9) == ((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_StartRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_StartRecording_m4AC1CBB63C79109E51432B18747E7487F071F680 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StartRecording_24;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StartRecording_24);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_StartRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_StartRecording_m7DF7885C2534CF2E9AF7FCDE76B1B9153562068E (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StartRecording_24;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StartRecording_24);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_StopRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_StopRecording_mAC918E8381446190C723E31F5421BB7044E24CFA (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StopRecording_25;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StopRecording_25);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_StopRecording(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_StopRecording_m360DAF57E825FF622E805C58CC5B16CA9E4F6AEF (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StopRecording_25;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StopRecording_25);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_StartPlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_StartPlayer_mD1D7FA67A0560E4C80D45C915324AFC517A7E450 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StartPlayer_26;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StartPlayer_26);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_StartPlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_StartPlayer_m4EFBF7A7B6399750CF5357F3CF482EFF60A4BD09 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StartPlayer_26;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StartPlayer_26);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_StopPlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_StopPlayer_m0D4810B674DA2893DA21A1009A427DD225FD7AC4 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StopPlayer_27;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StopPlayer_27);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_StopPlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_StopPlayer_mCF84A0226E749FB5BFA470B5CD36B389F0C9BD53 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StopPlayer_27;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___StopPlayer_27);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_PausePlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_PausePlayer_mF5F314878A4B35D077E551D801658EB2360F470E (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___PausePlayer_28;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___PausePlayer_28);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_PausePlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_PausePlayer_m195E8DA337A4BE44CB8BB5DAA7D0A2F8D26ED4AA (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___PausePlayer_28;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___PausePlayer_28);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_SetPlayerTime(System.Action`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_SetPlayerTime_m8AA9815AAA1F5DEF8CC6FAA4E36B80E2D09FC462 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_1 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_2 = NULL;
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SetPlayerTime_29;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_2 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)Castclass((RuntimeObject*)L_4, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var));
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A** L_5 = (&__this->___SetPlayerTime_29);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_6 = V_2;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_7 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_9 = V_0;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_9) == ((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_SetPlayerTime(System.Action`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_SetPlayerTime_mBDB247115FCC444794A07D1620CB03AA10CF0443 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_1 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_2 = NULL;
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SetPlayerTime_29;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_2 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)Castclass((RuntimeObject*)L_4, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var));
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A** L_5 = (&__this->___SetPlayerTime_29);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_6 = V_2;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_7 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_9 = V_0;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_9) == ((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_SetSelectedTake(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_SetSelectedTake_m2CED9D59176AB7564DE43E5C8EDB4270F55B0C30 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___SetSelectedTake_30;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___SetSelectedTake_30);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_SetSelectedTake(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_SetSelectedTake_m9923D4DDB947F1655205BEA968933CEEBBC247B7 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___SetSelectedTake_30;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___SetSelectedTake_30);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_SetTakeData(System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_SetTakeData_m5278AFE52F5A20759D5D2A3429E44DDDCCE7D534 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* V_0 = NULL;
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* V_1 = NULL;
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* V_2 = NULL;
	{
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_0 = __this->___SetTakeData_31;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_1 = V_0;
		V_1 = L_1;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_2 = V_1;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*)Castclass((RuntimeObject*)L_4, Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D_il2cpp_TypeInfo_var));
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D** L_5 = (&__this->___SetTakeData_31);
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_6 = V_2;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_7 = V_1;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_9 = V_0;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*)L_9) == ((RuntimeObject*)(Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_SetTakeData(System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_SetTakeData_mDB0D3C329EC9CD7AC236278FE94F36B861892929 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* V_0 = NULL;
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* V_1 = NULL;
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* V_2 = NULL;
	{
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_0 = __this->___SetTakeData_31;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_1 = V_0;
		V_1 = L_1;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_2 = V_1;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*)Castclass((RuntimeObject*)L_4, Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D_il2cpp_TypeInfo_var));
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D** L_5 = (&__this->___SetTakeData_31);
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_6 = V_2;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_7 = V_1;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_9 = V_0;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*)L_9) == ((RuntimeObject*)(Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_DeleteTake(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_DeleteTake_m41D03DD9D2DE46B28C13A21470602C80C531326A (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___DeleteTake_32;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___DeleteTake_32);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_DeleteTake(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_DeleteTake_m2652D6BC9651117AAE7B12CC98EC17D32B3BE570 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___DeleteTake_32;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___DeleteTake_32);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_SetIterationBase(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_SetIterationBase_m498622042752553CD856F31875347538412E1A90 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___SetIterationBase_33;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___SetIterationBase_33);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_SetIterationBase(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_SetIterationBase_mCF934A46FAC28DEA8F60829D0AECCF97808697E1 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___SetIterationBase_33;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___SetIterationBase_33);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_ClearIterationBase(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_ClearIterationBase_m5D411A6379A7811CC20154CEB58CED67820E0870 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ClearIterationBase_34;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___ClearIterationBase_34);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_ClearIterationBase(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_ClearIterationBase_m2D7E7DB9430098B52F00B8DD59FF9C9AE71603B4 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ClearIterationBase_34;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___ClearIterationBase_34);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::add_TexturePreviewRequested(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_add_TexturePreviewRequested_m113856AEF13E7A60C05316392A15D656CD3F8BF6 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___TexturePreviewRequested_35;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___TexturePreviewRequested_35);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::remove_TexturePreviewRequested(System.Action`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_remove_TexturePreviewRequested_m4B54E40E65983C0F3719969CCEA161869042C663 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_1 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* V_2 = NULL;
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___TexturePreviewRequested_35;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = V_0;
		V_1 = L_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_2 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)Castclass((RuntimeObject*)L_4, Action_1_t33413EDB36E6D5980F6CA903E76E505099813427_il2cpp_TypeInfo_var));
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427** L_5 = (&__this->___TexturePreviewRequested_35);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_6 = V_2;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_7 = V_1;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_9 = V_0;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_9) == ((RuntimeObject*)(Action_1_t33413EDB36E6D5980F6CA903E76E505099813427*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ClientInitialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient__ctor_mC5554FF4D6631B382711C5ED7F2391E1344F0752 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1__ctor_m3BF7EF530067C7E35BE2AECA75999FFA487214CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1__ctor_m39217DE5B2E71B7DC7FCA77A494FA0029A76DC09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_0_m3B66AA165420D1467C2CA093BAB7912D6B4327DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_10_m23B583283A7938BEBEA4422091A8F1B41BD17C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_11_m8D6568A131632C260BE97694679C1DC68E39C29C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_12_mB831C5B0DFD9FF38B7CDB7B59224B1DE81BF67BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_1_m4849E5D8EDA38F355BC7BD797CD3CA118AC1A149_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_2_m62F71594608CB745FA3DF037422EC34CB64A8F43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_3_m154A36DC81ABF92E3F12061AFCD318CDB0C29379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_4_m6D9CBDB79581CED4D81B051263282009843C4697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_5_m4AC6462C9BEE4E4B343F5CCF3FAD1D834BD85AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_6_m6CAAFE1C4974634BF0CE91FA3C70F2D1FB40985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_7_m77258CDFB8AADAE87575E550AB20751A4226F3BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_8_mAB0C3BE049B73383EF8721A1AAD5120248E39975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_U3C_ctorU3Eb__68_9_mDF998E5C959F7C87E95DD87FAF4879FAC0CCBCE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m62F8F681E951E947C9A7789500CA42389E9131AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReceiver_1__ctor_m8A939E609A545844D7F93242D9B5E510527FC42C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSender_1__ctor_m684B1A3EDC04A8BFAFB0FFEF5D89E32D63597774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_mEB91965A0E023F6CC3C79CFA83EDBAFAF50B8863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_m61C829932C8390720F40A3E531B4597BC1D96564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_m3C056A7A45C25B602F561649EC08706D357F87FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_m95C7DE3559988D67335DC9962BA1210CAE913C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisJsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_m6D47FF8623D198E4A19FBF4B3773391856039B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisJsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_m76CDD3871405F201506F1878AE6330D73E774BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_Add_TisTextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_m87FFD15AA3DF3E82E1B8C3B692608CDE1440700B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0083343509FCB493264CB50A2BB0FB7832AAC078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0245EA650AFA9056C60B129AB7014B7524D1863F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0526FA32EC6A55B65FA503C3BCD04620CF45342C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08BC4AB60D0A85B8D81E0A9DABB1F283D867D0AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DBE3556C1A8F5E208FC2E32B6B4FC0D32F6650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1875B485B755FBA61E7ABF457B275ACF497F2E39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BE61F44561497403DCAB7A58CB3E0EF47FCBE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral237C8DED8E931E1E58A77122E18C00103A714E22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E26EC9B4DA3B4035470653D9EFA290A74AFD5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F73AC823161FAF192F6037E985A89B7CDFF726D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37EEAECFB716382D269CA422585E550C4787915B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45350A82A134AF266A49134E432361B7D6442E02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51792F9CEC1282AEB1DDD1DF8401873E423EA7F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594E2474C4D984FD86B8979A431D63C0B0233A5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ADE860937252335521794D668CFED8852D1AAFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C3BF9232C39E79E01887478903C86E4B5CAD26C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DA51306566EE2066E22E4F919B243890C79E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B83118158D2E86CC508C8E135AF115188FD8755);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E56E1518F49C55B29B3F73C61AE1A172165C28D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B108199D3E79CD84F842EE8AF518651E9B5FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744FBD83E35F16127A5D62BFB9F2614DC4E19A7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805DAD5A6CF7FED94AA2E1C303503BDE48D35001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A69F955AE6BE7746E1790067893EA357BE6631B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BC17ECE3AA16D4B5CD02F66FEA8CD741788D2B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB38F3DEE2D7F00A2A44FD6079A1150E1F49728C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF5A13498FF13E6ACC284E5B8D273E803AE9F67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD142BDA678779E4CD15BAB96874C23A898F7855A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67F7FEA3C3C0A6F9A933C63BB792E8A7DA2AE16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAE26E319F926492765D0DC457F196AA39479BEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF410E724A50895999C5EC621080B17146F097356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC5905B34D89697E0BA01C3BEB242A7E7347B4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected CompanionAppClient(NetworkBase network, Remote remote, ClientInitialization data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Network = network;
		NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* L_0 = ___network0;
		__this->___m_Network_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Network_0), (void*)L_0);
		// m_Remote = remote;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_1 = ___remote1;
		__this->___m_Remote_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Remote_1), (void*)L_1);
		// Name = data.Name;
		ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_2 = ___data2;
		NullCheck(L_2);
		String_t* L_3 = L_2->___Name_0;
		__this->___U3CNameU3Ek__BackingField_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_20), (void*)L_3);
		// ID = Guid.Parse(data.ID);
		ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_4 = ___data2;
		NullCheck(L_4);
		String_t* L_5 = L_4->___ID_1;
		Guid_t L_6;
		L_6 = Guid_Parse_mC068B0047F86921D817F600C75C6EBFE15A461D0(L_5, NULL);
		__this->___U3CIDU3Ek__BackingField_21 = L_6;
		// ScreenResolution = data.ScreenResolution;
		ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_7 = ___data2;
		NullCheck(L_7);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = L_7->___ScreenResolution_3;
		__this->___U3CScreenResolutionU3Ek__BackingField_22 = L_8;
		// m_Protocol = new Protocol($"{GetType().Name}Protocol", PackageUtility.GetVersion(LiveCaptureInfo.Version));
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteral0245EA650AFA9056C60B129AB7014B7524D1863F, NULL);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_12;
		L_12 = PackageUtility_GetVersion_m5542364CD0580D27458C21010BC9BC87C20C0A5B(_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A, NULL);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_13 = (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*)il2cpp_codegen_object_new(Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Protocol__ctor_m4F4A6D01F29DB968C419760947E68431B1FBFB39(L_13, L_11, L_12, NULL);
		__this->___m_Protocol_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Protocol_2), (void*)L_13);
		// m_Protocol.SetNetwork(network, remote);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_14 = __this->___m_Protocol_2;
		NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* L_15 = ___network0;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_16 = ___remote1;
		NullCheck(L_14);
		Protocol_SetNetwork_mCCBA62E2422B2EDA541469659A786B7DB8565B39(L_14, L_15, L_16, NULL);
		// m_InitializeSender = m_Protocol.Add(new EventSender(CompanionAppMessages.ToClient.Initialize));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_17 = __this->___m_Protocol_2;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_18 = (EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A*)il2cpp_codegen_object_new(EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EventSender__ctor_mABAEA3313F42296F80E146F0DD79DE86DA20D670(L_18, _stringLiteral51792F9CEC1282AEB1DDD1DF8401873E423EA7F5, NULL);
		NullCheck(L_17);
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_19;
		L_19 = Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024(L_17, L_18, Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024_RuntimeMethod_var);
		__this->___m_InitializeSender_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InitializeSender_3), (void*)L_19);
		// m_EndSessionSender = m_Protocol.Add(new EventSender(CompanionAppMessages.ToClient.EndSession));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_20 = __this->___m_Protocol_2;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_21 = (EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A*)il2cpp_codegen_object_new(EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventSender__ctor_mABAEA3313F42296F80E146F0DD79DE86DA20D670(L_21, _stringLiteral5ADE860937252335521794D668CFED8852D1AAFC, NULL);
		NullCheck(L_20);
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_22;
		L_22 = Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024(L_20, L_21, Protocol_Add_TisEventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A_m5F68489D954BCD3BEEDBEB91990285C576AAB024_RuntimeMethod_var);
		__this->___m_EndSessionSender_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EndSessionSender_4), (void*)L_22);
		// m_IsRecordingSender = m_Protocol.Add(new BoolSender(CompanionAppMessages.ToClient.IsRecordingChanged));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_23 = __this->___m_Protocol_2;
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_24 = (BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E*)il2cpp_codegen_object_new(BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		BoolSender__ctor_mA7864BCBC9C687344C19BCD8D64CD64FC8714DD4(L_24, _stringLiteral37EEAECFB716382D269CA422585E550C4787915B, 0, 1, NULL);
		NullCheck(L_23);
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_25;
		L_25 = Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A(L_23, L_24, Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A_RuntimeMethod_var);
		__this->___m_IsRecordingSender_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IsRecordingSender_5), (void*)L_25);
		// m_DeviceModeSender = m_Protocol.Add(new BinarySender<DeviceMode>(CompanionAppMessages.ToClient.DeviceModeChanged));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_26 = __this->___m_Protocol_2;
		BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* L_27 = (BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB*)il2cpp_codegen_object_new(BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BinarySender_1__ctor_m39217DE5B2E71B7DC7FCA77A494FA0029A76DC09(L_27, _stringLiteral8BC17ECE3AA16D4B5CD02F66FEA8CD741788D2B2, 0, 1, BinarySender_1__ctor_m39217DE5B2E71B7DC7FCA77A494FA0029A76DC09_RuntimeMethod_var);
		NullCheck(L_26);
		BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* L_28;
		L_28 = Protocol_Add_TisBinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_m3C056A7A45C25B602F561649EC08706D357F87FB(L_26, L_27, Protocol_Add_TisBinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB_m3C056A7A45C25B602F561649EC08706D357F87FB_RuntimeMethod_var);
		__this->___m_DeviceModeSender_6 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeviceModeSender_6), (void*)L_28);
		// m_FrameRateSender = m_Protocol.Add(new BinarySender<FrameRate>(CompanionAppMessages.ToClient.FrameRate));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_29 = __this->___m_Protocol_2;
		BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* L_30 = (BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F*)il2cpp_codegen_object_new(BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602(L_30, _stringLiteralEAE26E319F926492765D0DC457F196AA39479BEB, 0, 1, BinarySender_1__ctor_m277780AB55C81835E4699CFEAB966961BBED2602_RuntimeMethod_var);
		NullCheck(L_29);
		BinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F* L_31;
		L_31 = Protocol_Add_TisBinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_m95C7DE3559988D67335DC9962BA1210CAE913C0E(L_29, L_30, Protocol_Add_TisBinarySender_1_t6F90892674B478771C78E45CFD8B2900D0978E4F_m95C7DE3559988D67335DC9962BA1210CAE913C0E_RuntimeMethod_var);
		__this->___m_FrameRateSender_7 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FrameRateSender_7), (void*)L_31);
		// m_HasSlateSender = m_Protocol.Add(new BoolSender(CompanionAppMessages.ToClient.HasSlateChanged));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_32 = __this->___m_Protocol_2;
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_33 = (BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E*)il2cpp_codegen_object_new(BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		BoolSender__ctor_mA7864BCBC9C687344C19BCD8D64CD64FC8714DD4(L_33, _stringLiteral15DBE3556C1A8F5E208FC2E32B6B4FC0D32F6650, 0, 1, NULL);
		NullCheck(L_32);
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_34;
		L_34 = Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A(L_32, L_33, Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A_RuntimeMethod_var);
		__this->___m_HasSlateSender_8 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HasSlateSender_8), (void*)L_34);
		// m_SlateDurationSender = m_Protocol.Add(new BinarySender<double>(CompanionAppMessages.ToClient.SlateDurationChanged));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_35 = __this->___m_Protocol_2;
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* L_36 = (BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8*)il2cpp_codegen_object_new(BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40(L_36, _stringLiteral8A69F955AE6BE7746E1790067893EA357BE6631B, 0, 1, BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40_RuntimeMethod_var);
		NullCheck(L_35);
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* L_37;
		L_37 = Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E(L_35, L_36, Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E_RuntimeMethod_var);
		__this->___m_SlateDurationSender_9 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateDurationSender_9), (void*)L_37);
		// m_SlateIsPreviewingSender = m_Protocol.Add(new BoolSender(CompanionAppMessages.ToClient.SlateIsPreviewingChanged));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_38 = __this->___m_Protocol_2;
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_39 = (BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E*)il2cpp_codegen_object_new(BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		BoolSender__ctor_mA7864BCBC9C687344C19BCD8D64CD64FC8714DD4(L_39, _stringLiteral5C3BF9232C39E79E01887478903C86E4B5CAD26C, 0, 1, NULL);
		NullCheck(L_38);
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_40;
		L_40 = Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A(L_38, L_39, Protocol_Add_TisBoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E_m49546AF999B9FC09FA65B40788917B6FD3ED1E4A_RuntimeMethod_var);
		__this->___m_SlateIsPreviewingSender_11 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateIsPreviewingSender_11), (void*)L_40);
		// m_SlatePreviewTimeSender = m_Protocol.Add(new BinarySender<double>(CompanionAppMessages.ToClient.SlatePreviewTimeChanged));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_41 = __this->___m_Protocol_2;
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* L_42 = (BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8*)il2cpp_codegen_object_new(BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40(L_42, _stringLiteral594E2474C4D984FD86B8979A431D63C0B0233A5A, 0, 1, BinarySender_1__ctor_m64801589A873BA19E60EDE96B5E106AFD36A3D40_RuntimeMethod_var);
		NullCheck(L_41);
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* L_43;
		L_43 = Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E(L_41, L_42, Protocol_Add_TisBinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8_m6CF23E8AE4D1E37EF5E1769CC506CEB7859C1A7E_RuntimeMethod_var);
		__this->___m_SlatePreviewTimeSender_10 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlatePreviewTimeSender_10), (void*)L_43);
		// m_SlateSelectedTakeSender = m_Protocol.Add(new BinarySender<int>(CompanionAppMessages.ToClient.SlateSelectedTake, options: DataOptions.None));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_44 = __this->___m_Protocol_2;
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_45 = (BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249*)il2cpp_codegen_object_new(BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693(L_45, _stringLiteral1875B485B755FBA61E7ABF457B275ACF497F2E39, 0, 0, BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_RuntimeMethod_var);
		NullCheck(L_44);
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_46;
		L_46 = Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB(L_44, L_45, Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB_RuntimeMethod_var);
		__this->___m_SlateSelectedTakeSender_12 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateSelectedTakeSender_12), (void*)L_46);
		// m_SlateIterationBaseSender = m_Protocol.Add(new BinarySender<int>(CompanionAppMessages.ToClient.SlateIterationBase, options: DataOptions.None));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_47 = __this->___m_Protocol_2;
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_48 = (BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249*)il2cpp_codegen_object_new(BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693(L_48, _stringLiteral2F73AC823161FAF192F6037E985A89B7CDFF726D, 0, 0, BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_RuntimeMethod_var);
		NullCheck(L_47);
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_49;
		L_49 = Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB(L_47, L_48, Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB_RuntimeMethod_var);
		__this->___m_SlateIterationBaseSender_13 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateIterationBaseSender_13), (void*)L_49);
		// m_SlateTakeNumberSender = m_Protocol.Add(new BinarySender<int>(CompanionAppMessages.ToClient.SlateTakeNumber, options: DataOptions.None));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_50 = __this->___m_Protocol_2;
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_51 = (BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249*)il2cpp_codegen_object_new(BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693(L_51, _stringLiteralFFC5905B34D89697E0BA01C3BEB242A7E7347B4A, 0, 0, BinarySender_1__ctor_mAFDD752006A29621EB917608E70733D125F98693_RuntimeMethod_var);
		NullCheck(L_50);
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_52;
		L_52 = Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB(L_50, L_51, Protocol_Add_TisBinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249_m836F2A149601DEE2BE82B32DA069705DF7F5F6AB_RuntimeMethod_var);
		__this->___m_SlateTakeNumberSender_14 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateTakeNumberSender_14), (void*)L_52);
		// m_SlateShotNameSender = m_Protocol.Add(new StringSender(CompanionAppMessages.ToClient.SlateShotName, options: DataOptions.None));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_53 = __this->___m_Protocol_2;
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_54 = (StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20*)il2cpp_codegen_object_new(StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		StringSender__ctor_mB78DC1D7087198FFB69389E9C5C3E53A608D5E6A(L_54, _stringLiteral26E26EC9B4DA3B4035470653D9EFA290A74AFD5B, 0, 0, NULL);
		NullCheck(L_53);
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_55;
		L_55 = Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727(L_53, L_54, Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727_RuntimeMethod_var);
		__this->___m_SlateShotNameSender_15 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateShotNameSender_15), (void*)L_55);
		// m_SlateTakesSender = m_Protocol.Add(new JsonSender<TakeDescriptorArrayV0>(CompanionAppMessages.ToClient.SlateTakes_V0, options: DataOptions.None));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_56 = __this->___m_Protocol_2;
		JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* L_57 = (JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD*)il2cpp_codegen_object_new(JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		JsonSender_1__ctor_m684B1A3EDC04A8BFAFB0FFEF5D89E32D63597774(L_57, _stringLiteral22BE61F44561497403DCAB7A58CB3E0EF47FCBE2, 0, 0, JsonSender_1__ctor_m684B1A3EDC04A8BFAFB0FFEF5D89E32D63597774_RuntimeMethod_var);
		NullCheck(L_56);
		JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* L_58;
		L_58 = Protocol_Add_TisJsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_m76CDD3871405F201506F1878AE6330D73E774BDC(L_56, L_57, Protocol_Add_TisJsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD_m76CDD3871405F201506F1878AE6330D73E774BDC_RuntimeMethod_var);
		__this->___m_SlateTakesSender_16 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SlateTakesSender_16), (void*)L_58);
		// m_NextTakeNameSender = m_Protocol.Add(new StringSender(CompanionAppMessages.ToClient.NextTakeName));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_59 = __this->___m_Protocol_2;
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_60 = (StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20*)il2cpp_codegen_object_new(StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		StringSender__ctor_mB78DC1D7087198FFB69389E9C5C3E53A608D5E6A(L_60, _stringLiteral0083343509FCB493264CB50A2BB0FB7832AAC078, 0, 1, NULL);
		NullCheck(L_59);
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_61;
		L_61 = Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727(L_59, L_60, Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727_RuntimeMethod_var);
		__this->___m_NextTakeNameSender_17 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextTakeNameSender_17), (void*)L_61);
		// m_NextAssetNameSender = m_Protocol.Add(new StringSender(CompanionAppMessages.ToClient.NextAssetName));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_62 = __this->___m_Protocol_2;
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_63 = (StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20*)il2cpp_codegen_object_new(StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		StringSender__ctor_mB78DC1D7087198FFB69389E9C5C3E53A608D5E6A(L_63, _stringLiteral08BC4AB60D0A85B8D81E0A9DABB1F283D867D0AE, 0, 1, NULL);
		NullCheck(L_62);
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_64;
		L_64 = Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727(L_62, L_63, Protocol_Add_TisStringSender_t4C5915331A00DB3F9497A3516DF4987741868F20_m1DA26253FB83A67D8C5882DAE8E2A70B8C2BF727_RuntimeMethod_var);
		__this->___m_NextAssetNameSender_18 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NextAssetNameSender_18), (void*)L_64);
		// m_TexturePreviewSender = m_Protocol.Add(new TextureSender(CompanionAppMessages.ToClient.TexturePreview));
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_65 = __this->___m_Protocol_2;
		TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* L_66 = (TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79*)il2cpp_codegen_object_new(TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		TextureSender__ctor_m3A33B17DF5D59CC648D0FC8F1E949B483FDC41C0(L_66, _stringLiteral237C8DED8E931E1E58A77122E18C00103A714E22, 0, 0, 0, NULL);
		NullCheck(L_65);
		TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* L_67;
		L_67 = Protocol_Add_TisTextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_m87FFD15AA3DF3E82E1B8C3B692608CDE1440700B(L_65, L_66, Protocol_Add_TisTextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79_m87FFD15AA3DF3E82E1B8C3B692608CDE1440700B_RuntimeMethod_var);
		__this->___m_TexturePreviewSender_19 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TexturePreviewSender_19), (void*)L_67);
		// m_Protocol.Add(new BinaryReceiver<DeviceMode>(CompanionAppMessages.ToServer.SetDeviceMode,
		//     ChannelType.ReliableOrdered, DataOptions.None)).AddHandler(deviceMode =>
		//     {
		//         SetDeviceMode?.Invoke(deviceMode);
		//     });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_68 = __this->___m_Protocol_2;
		BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* L_69 = (BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609*)il2cpp_codegen_object_new(BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		BinaryReceiver_1__ctor_m3BF7EF530067C7E35BE2AECA75999FFA487214CD(L_69, _stringLiteral805DAD5A6CF7FED94AA2E1C303503BDE48D35001, 0, 0, BinaryReceiver_1__ctor_m3BF7EF530067C7E35BE2AECA75999FFA487214CD_RuntimeMethod_var);
		NullCheck(L_68);
		BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* L_70;
		L_70 = Protocol_Add_TisBinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_mEB91965A0E023F6CC3C79CFA83EDBAFAF50B8863(L_68, L_69, Protocol_Add_TisBinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609_mEB91965A0E023F6CC3C79CFA83EDBAFAF50B8863_RuntimeMethod_var);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_71 = (Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)il2cpp_codegen_object_new(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Action_1__ctor_m7048E12400BF3A4BF2DB9A636C2C37C20AA6F1A1(L_71, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_0_m3B66AA165420D1467C2CA093BAB7912D6B4327DC_RuntimeMethod_var), NULL);
		NullCheck(L_70);
		DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1(L_70, L_71, DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1_RuntimeMethod_var);
		// m_Protocol.Add(new EventReceiver(CompanionAppMessages.ToServer.StartRecording)).AddHandler(() =>
		// {
		//     StartRecording?.Invoke();
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_72 = __this->___m_Protocol_2;
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_73 = (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*)il2cpp_codegen_object_new(EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9(L_73, _stringLiteral6B83118158D2E86CC508C8E135AF115188FD8755, NULL);
		NullCheck(L_72);
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_74;
		L_74 = Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70(L_72, L_73, Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_75 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_75, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_1_m4849E5D8EDA38F355BC7BD797CD3CA118AC1A149_RuntimeMethod_var), NULL);
		NullCheck(L_74);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_74, L_75, NULL);
		// m_Protocol.Add(new EventReceiver(CompanionAppMessages.ToServer.StopRecording)).AddHandler(() =>
		// {
		//     StopRecording?.Invoke();
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_76 = __this->___m_Protocol_2;
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_77 = (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*)il2cpp_codegen_object_new(EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9(L_77, _stringLiteral72B108199D3E79CD84F842EE8AF518651E9B5FE9, NULL);
		NullCheck(L_76);
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_78;
		L_78 = Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70(L_76, L_77, Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_79 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_79, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_2_m62F71594608CB745FA3DF037422EC34CB64A8F43_RuntimeMethod_var), NULL);
		NullCheck(L_78);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_78, L_79, NULL);
		// m_Protocol.Add(new EventReceiver(CompanionAppMessages.ToServer.PlayerStart)).AddHandler(() =>
		// {
		//     StartPlayer?.Invoke();
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_80 = __this->___m_Protocol_2;
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_81 = (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*)il2cpp_codegen_object_new(EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9(L_81, _stringLiteralB38F3DEE2D7F00A2A44FD6079A1150E1F49728C6, NULL);
		NullCheck(L_80);
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_82;
		L_82 = Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70(L_80, L_81, Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_83 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_83, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_3_m154A36DC81ABF92E3F12061AFCD318CDB0C29379_RuntimeMethod_var), NULL);
		NullCheck(L_82);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_82, L_83, NULL);
		// m_Protocol.Add(new EventReceiver(CompanionAppMessages.ToServer.PlayerStop)).AddHandler(() =>
		// {
		//     StopPlayer?.Invoke();
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_84 = __this->___m_Protocol_2;
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_85 = (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*)il2cpp_codegen_object_new(EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9(L_85, _stringLiteralCEF5A13498FF13E6ACC284E5B8D273E803AE9F67, NULL);
		NullCheck(L_84);
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_86;
		L_86 = Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70(L_84, L_85, Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_87 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_87, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_4_m6D9CBDB79581CED4D81B051263282009843C4697_RuntimeMethod_var), NULL);
		NullCheck(L_86);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_86, L_87, NULL);
		// m_Protocol.Add(new EventReceiver(CompanionAppMessages.ToServer.PlayerPause)).AddHandler(() =>
		// {
		//     PausePlayer?.Invoke();
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_88 = __this->___m_Protocol_2;
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_89 = (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*)il2cpp_codegen_object_new(EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9(L_89, _stringLiteral0526FA32EC6A55B65FA503C3BCD04620CF45342C, NULL);
		NullCheck(L_88);
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_90;
		L_90 = Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70(L_88, L_89, Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_91 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_91, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_5_m4AC6462C9BEE4E4B343F5CCF3FAD1D834BD85AAE_RuntimeMethod_var), NULL);
		NullCheck(L_90);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_90, L_91, NULL);
		// m_Protocol.Add(new BinaryReceiver<double>(CompanionAppMessages.ToServer.PlayerSetTime)).AddHandler(time =>
		// {
		//     SetPlayerTime?.Invoke(time);
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_92 = __this->___m_Protocol_2;
		BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* L_93 = (BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A*)il2cpp_codegen_object_new(BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C(L_93, _stringLiteralE67F7FEA3C3C0A6F9A933C63BB792E8A7DA2AE16, 0, 1, BinaryReceiver_1__ctor_m5DC3F60C13ABF98384C444BC89ECC06CB6A09E8C_RuntimeMethod_var);
		NullCheck(L_92);
		BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* L_94;
		L_94 = Protocol_Add_TisBinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_m61C829932C8390720F40A3E531B4597BC1D96564(L_92, L_93, Protocol_Add_TisBinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A_m61C829932C8390720F40A3E531B4597BC1D96564_RuntimeMethod_var);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_95 = (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)il2cpp_codegen_object_new(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Action_1__ctor_m676FAC53E13390D50082C985025C4F8EB8761FE5(L_95, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_6_m6CAAFE1C4974634BF0CE91FA3C70F2D1FB40985A_RuntimeMethod_var), NULL);
		NullCheck(L_94);
		DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D(L_94, L_95, DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_RuntimeMethod_var);
		// m_Protocol.Add(new BinaryReceiver<SerializableGuid>(CompanionAppMessages.ToServer.SetSelectedTake,
		//     ChannelType.ReliableOrdered, DataOptions.None)).AddHandler(guid =>
		//     {
		//         SetSelectedTake?.Invoke(guid);
		//     });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_96 = __this->___m_Protocol_2;
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_97 = (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246*)il2cpp_codegen_object_new(BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705(L_97, _stringLiteral45350A82A134AF266A49134E432361B7D6442E02, 0, 0, BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_RuntimeMethod_var);
		NullCheck(L_96);
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_98;
		L_98 = Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96(L_96, L_97, Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96_RuntimeMethod_var);
		Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* L_99 = (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285*)il2cpp_codegen_object_new(Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19(L_99, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_7_m77258CDFB8AADAE87575E550AB20751A4226F3BE_RuntimeMethod_var), NULL);
		NullCheck(L_98);
		DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0(L_98, L_99, DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_RuntimeMethod_var);
		// m_Protocol.Add(new JsonReceiver<TakeDescriptorV0>(CompanionAppMessages.ToServer.SetTakeData_V0)).AddHandler(take =>
		// {
		//     SetTakeData?.Invoke((TakeDescriptor)take);
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_100 = __this->___m_Protocol_2;
		JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC* L_101 = (JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC*)il2cpp_codegen_object_new(JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		JsonReceiver_1__ctor_m8A939E609A545844D7F93242D9B5E510527FC42C(L_101, _stringLiteral64DA51306566EE2066E22E4F919B243890C79E45, 0, 1, JsonReceiver_1__ctor_m8A939E609A545844D7F93242D9B5E510527FC42C_RuntimeMethod_var);
		NullCheck(L_100);
		JsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC* L_102;
		L_102 = Protocol_Add_TisJsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_m6D47FF8623D198E4A19FBF4B3773391856039B5D(L_100, L_101, Protocol_Add_TisJsonReceiver_1_tC5B885D2FED96C14A8A132F44CCFAB8D82C23FBC_m6D47FF8623D198E4A19FBF4B3773391856039B5D_RuntimeMethod_var);
		Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316* L_103 = (Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316*)il2cpp_codegen_object_new(Action_1_t7865EEAA40A8ABADED99B8E0AE678E6130480316_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		Action_1__ctor_m7E7D40F4DEB53F2A388D9A7A9DEBAF19112059F3(L_103, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_8_mAB0C3BE049B73383EF8721A1AAD5120248E39975_RuntimeMethod_var), NULL);
		NullCheck(L_102);
		DataReceiver_1_AddHandler_m62F8F681E951E947C9A7789500CA42389E9131AF(L_102, L_103, DataReceiver_1_AddHandler_m62F8F681E951E947C9A7789500CA42389E9131AF_RuntimeMethod_var);
		// m_Protocol.Add(new BinaryReceiver<SerializableGuid>(CompanionAppMessages.ToServer.DeleteTake,
		//     ChannelType.ReliableOrdered, DataOptions.None)).AddHandler(guid =>
		//     {
		//         DeleteTake?.Invoke(guid);
		//     });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_104 = __this->___m_Protocol_2;
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_105 = (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246*)il2cpp_codegen_object_new(BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_il2cpp_TypeInfo_var);
		NullCheck(L_105);
		BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705(L_105, _stringLiteral744FBD83E35F16127A5D62BFB9F2614DC4E19A7E, 0, 0, BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_RuntimeMethod_var);
		NullCheck(L_104);
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_106;
		L_106 = Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96(L_104, L_105, Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96_RuntimeMethod_var);
		Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* L_107 = (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285*)il2cpp_codegen_object_new(Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285_il2cpp_TypeInfo_var);
		NullCheck(L_107);
		Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19(L_107, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_9_mDF998E5C959F7C87E95DD87FAF4879FAC0CCBCE4_RuntimeMethod_var), NULL);
		NullCheck(L_106);
		DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0(L_106, L_107, DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_RuntimeMethod_var);
		// m_Protocol.Add(new BinaryReceiver<SerializableGuid>(CompanionAppMessages.ToServer.SetIterationBase,
		//     ChannelType.ReliableOrdered, DataOptions.None)).AddHandler(guid =>
		//     {
		//         SetIterationBase?.Invoke(guid);
		//     });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_108 = __this->___m_Protocol_2;
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_109 = (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246*)il2cpp_codegen_object_new(BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_il2cpp_TypeInfo_var);
		NullCheck(L_109);
		BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705(L_109, _stringLiteral6E56E1518F49C55B29B3F73C61AE1A172165C28D, 0, 0, BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_RuntimeMethod_var);
		NullCheck(L_108);
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_110;
		L_110 = Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96(L_108, L_109, Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96_RuntimeMethod_var);
		Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* L_111 = (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285*)il2cpp_codegen_object_new(Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19(L_111, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_10_m23B583283A7938BEBEA4422091A8F1B41BD17C76_RuntimeMethod_var), NULL);
		NullCheck(L_110);
		DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0(L_110, L_111, DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_RuntimeMethod_var);
		// m_Protocol.Add(new EventReceiver(CompanionAppMessages.ToServer.ClearIterationBase)).AddHandler(() =>
		// {
		//     ClearIterationBase?.Invoke();
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_112 = __this->___m_Protocol_2;
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_113 = (EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944*)il2cpp_codegen_object_new(EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_il2cpp_TypeInfo_var);
		NullCheck(L_113);
		EventReceiver__ctor_m1DDD878703EF5AA2068546D7C474608EDEC604C9(L_113, _stringLiteralD142BDA678779E4CD15BAB96874C23A898F7855A, NULL);
		NullCheck(L_112);
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_114;
		L_114 = Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70(L_112, L_113, Protocol_Add_TisEventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944_m50C4E7F9B1BAD903991752C5B18313B02CE46B70_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_115 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_115, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_11_m8D6568A131632C260BE97694679C1DC68E39C29C_RuntimeMethod_var), NULL);
		NullCheck(L_114);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_114, L_115, NULL);
		// m_Protocol.Add(new BinaryReceiver<SerializableGuid>(CompanionAppMessages.ToServer.RequestTexturePreview,
		//     ChannelType.UnreliableUnordered, DataOptions.None)).AddHandler((guid) =>
		// {
		//     TexturePreviewRequested?.Invoke(guid);
		// });
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_116 = __this->___m_Protocol_2;
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_117 = (BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246*)il2cpp_codegen_object_new(BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705(L_117, _stringLiteralF410E724A50895999C5EC621080B17146F097356, ((int32_t)32), 0, BinaryReceiver_1__ctor_m573FD28ED4DC1DB928146A175FA03736AED95705_RuntimeMethod_var);
		NullCheck(L_116);
		BinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246* L_118;
		L_118 = Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96(L_116, L_117, Protocol_Add_TisBinaryReceiver_1_t34368E37415DD82DC940438CFC172220E288B246_m06EDE007C00ED193579C62FB6CF65C78E6E6EA96_RuntimeMethod_var);
		Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285* L_119 = (Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285*)il2cpp_codegen_object_new(Action_1_tDDB8EEE0020DC10CD497F31EE85B8EAFDC54F285_il2cpp_TypeInfo_var);
		NullCheck(L_119);
		Action_1__ctor_m5D4BFC70014D393182A35AFC32459F83C1A92C19(L_119, __this, (intptr_t)((void*)CompanionAppClient_U3C_ctorU3Eb__68_12_mB831C5B0DFD9FF38B7CDB7B59224B1DE81BF67BB_RuntimeMethod_var), NULL);
		NullCheck(L_118);
		DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0(L_118, L_119, DataReceiver_1_AddHandler_mCDFA6B07CB535245AD3AFA34A657642BA8196AC0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendProtocol_m75F02B37045C734DC59732D8A562774CEECC3A18 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* V_0 = NULL;
	{
		// var message = Message.Get(m_Remote, ChannelType.ReliableOrdered, 8192);
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_0 = __this->___m_Remote_1;
		il2cpp_codegen_runtime_class_init_inline(Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621_il2cpp_TypeInfo_var);
		Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_1;
		L_1 = Message_Get_m332CD491CA748D43102E1FDCA2FA89CE198087D6(L_0, 0, ((int32_t)8192), NULL);
		V_0 = L_1;
		// m_Protocol.CreateInverse().Serialize(message.Data);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_2 = __this->___m_Protocol_2;
		NullCheck(L_2);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_3;
		L_3 = Protocol_CreateInverse_m9EFD1703EEF433A55B3BAE9F78B8F01AAF95C688(L_2, NULL);
		Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_4 = V_0;
		NullCheck(L_4);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5;
		L_5 = Message_get_Data_m8FD969BC0E5B68E890E0CC8C0F5D8E3716A4004F(L_4, NULL);
		NullCheck(L_3);
		Protocol_Serialize_m7D78D70870B2834BB9552B548BF27FAEE952424A(L_3, L_5, NULL);
		// m_Network.SendMessage(message);
		NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* L_6 = __this->___m_Network_0;
		Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = NetworkBase_SendMessage_m6F65B5CBFA1278BBE1BBF3C6A4D7E5EC9CEE7DEF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendInitialize_mD100958FC93F3908FFD6D3773612AE45F30CA19A (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	{
		// m_Protocol.Reset();
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_0 = __this->___m_Protocol_2;
		NullCheck(L_0);
		Protocol_Reset_m0C73797914D854E220874E3E5A5DC88674A14761(L_0, NULL);
		// m_InitializeSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_InitializeSender_3;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendEndSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendEndSession_mDBDBCFD8AB49D2841B88DD24C8176868D1C10B01 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	{
		// m_EndSessionSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_EndSessionSender_4;
		NullCheck(L_0);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendDeviceMode(Unity.LiveCapture.CompanionApp.DeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendDeviceMode_m2B23538057ACCCFE8AA3119AC799841AF2CD5677 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, uint8_t ___deviceMode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DeviceModeSender.Send(deviceMode);
		DataSender_1_t96F03488AAE63BA964BFD8A4461C961F5F2A29B3* L_0 = __this->___m_DeviceModeSender_6;
		uint8_t L_1 = ___deviceMode0;
		NullCheck(L_0);
		DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431(L_0, L_1, DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendRecordingState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendRecordingState_mB08F44E1415DDC3CDFCDA122FE34C242F0F51CA1 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, bool ___isRecording0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_IsRecordingSender.Send(isRecording);
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_0 = __this->___m_IsRecordingSender_5;
		bool L_1 = ___isRecording0;
		NullCheck(L_0);
		DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3(L_0, L_1, DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendFrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendFrameRate_m808B22C9426671A1B3AA4DC99ED4585AE3D15D01 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___frameRate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_FrameRateSender.Send(frameRate);
		DataSender_1_t813F60317C2BD74824F06C808BC8BB69DA084D90* L_0 = __this->___m_FrameRateSender_7;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_1 = ___frameRate0;
		NullCheck(L_0);
		DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52(L_0, L_1, DataSender_1_Send_m419788A575223A7856CD492B79F01D2C73580C52_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendHasSlate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendHasSlate_mD7E83B92C150785FE4AE7B765B16C17DE9B52E0C (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, bool ___hasSlate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HasSlateSender.Send(hasSlate);
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_0 = __this->___m_HasSlateSender_8;
		bool L_1 = ___hasSlate0;
		NullCheck(L_0);
		DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3(L_0, L_1, DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendSlateDuration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendSlateDuration_m767FDB0A4B0AF717D586601BDDCFB16DAE0DB7EC (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, double ___duration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SlateDurationSender.Send(duration);
		DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B* L_0 = __this->___m_SlateDurationSender_9;
		double L_1 = ___duration0;
		NullCheck(L_0);
		DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9(L_0, L_1, DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendSlateIsPreviewing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendSlateIsPreviewing_m04792D229AAEF374638A0050EE667C7A454EFDA4 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, bool ___isPreviewing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SlateIsPreviewingSender.Send(isPreviewing);
		BoolSender_t56C746AD81F570D8C7C09E42B3F956C789EC6A8E* L_0 = __this->___m_SlateIsPreviewingSender_11;
		bool L_1 = ___isPreviewing0;
		NullCheck(L_0);
		DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3(L_0, L_1, DataSender_1_Send_m55B4FBE49B6D55835D6DA6C0FAE222A7ADBAA4F3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendSlatePreviewTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendSlatePreviewTime_mC2CBF45B838F1FCA11CF8F838215B12D1C55F9A3 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, double ___previewTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SlatePreviewTimeSender.Send(previewTime);
		DataSender_1_t225F1D69182E6AA878C89AB99BF7B4149AA65C3B* L_0 = __this->___m_SlatePreviewTimeSender_10;
		double L_1 = ___previewTime0;
		NullCheck(L_0);
		DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9(L_0, L_1, DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendSlateDescriptor(Unity.LiveCapture.CompanionApp.SlateDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendSlateDescriptor_m746E5681F1F87EBEC7FC6E0C5B5059C9AB2A5D87 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* ___descriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_mFF382B14711792FDDCE790F93C72F7E7D720473C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SlateTakesSender.Send((TakeDescriptorArrayV0)descriptor.Takes);
		JsonSender_1_t53D38D85DF9EEDBA76256317F3C504A9692797CD* L_0 = __this->___m_SlateTakesSender_16;
		SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* L_1 = ___descriptor0;
		NullCheck(L_1);
		TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* L_2 = L_1->___Takes_7;
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_3;
		L_3 = TakeDescriptorArrayV0_op_Explicit_mA59B79586FE4A8816FB741126849D44B890F98B7(L_2, NULL);
		NullCheck(L_0);
		DataSender_1_Send_mFF382B14711792FDDCE790F93C72F7E7D720473C(L_0, L_3, DataSender_1_Send_mFF382B14711792FDDCE790F93C72F7E7D720473C_RuntimeMethod_var);
		// m_SlateSelectedTakeSender.Send(descriptor.SelectedTake);
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_4 = __this->___m_SlateSelectedTakeSender_12;
		SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* L_5 = ___descriptor0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___SelectedTake_5;
		NullCheck(L_4);
		DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF(L_4, L_6, DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_RuntimeMethod_var);
		// m_SlateIterationBaseSender.Send(descriptor.IterationBase);
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_7 = __this->___m_SlateIterationBaseSender_13;
		SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* L_8 = ___descriptor0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___IterationBase_6;
		NullCheck(L_7);
		DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF(L_7, L_9, DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_RuntimeMethod_var);
		// m_SlateTakeNumberSender.Send(descriptor.TakeNumber);
		BinarySender_1_t93337DE1487B50F5715ABB2B8B1EC7C18ABEC249* L_10 = __this->___m_SlateTakeNumberSender_14;
		SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* L_11 = ___descriptor0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___TakeNumber_2;
		NullCheck(L_10);
		DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF(L_10, L_12, DataSender_1_Send_mEC101E6480A668F38441AF88B8EDD4EB2202C2FF_RuntimeMethod_var);
		// m_SlateShotNameSender.Send(descriptor.ShotName);
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_13 = __this->___m_SlateShotNameSender_15;
		SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* L_14 = ___descriptor0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___ShotName_1;
		NullCheck(L_13);
		DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43(L_13, L_15, DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendNextTakeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendNextTakeName_m95CBDCD62AB6761D792D717BD1EF54169DF597DE (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NextTakeNameSender.Send(name);
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_0 = __this->___m_NextTakeNameSender_17;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43(L_0, L_1, DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendNextAssetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendNextAssetName_m9EB3467523828C82F5B11A6A609D7CEECA9A8D04 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NextAssetNameSender.Send(name);
		StringSender_t4C5915331A00DB3F9497A3516DF4987741868F20* L_0 = __this->___m_NextAssetNameSender_18;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43(L_0, L_1, DataSender_1_Send_m3171F1C8C10A6FBE2A081BAC6D9E80D26226BC43_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::SendTexturePreview(System.Guid,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_SendTexturePreview_mC66FAC2161C784BDA51521F57F8982848FA706C9 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, Guid_t ___guid0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TexturePreviewSender.Send(new TextureData(texture, guid.ToString("N")));
		TextureSender_t91C44789284CFF17E4BAA451F5DD38938B5BFE79* L_0 = __this->___m_TexturePreviewSender_19;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___texture1;
		String_t* L_2;
		L_2 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&___guid0), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443 L_3;
		memset((&L_3), 0, sizeof(L_3));
		TextureData__ctor_m1D09EF2A2DB3BD27400C8919599911C9B6CBE455((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B(L_0, L_3, DataSender_1_Send_mCFFF0E76A9F08A4442FF09C348E9EA8D8DE9600B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_0(Unity.LiveCapture.CompanionApp.DeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_0_m3B66AA165420D1467C2CA093BAB7912D6B4327DC (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, uint8_t ___deviceMode0, const RuntimeMethod* method) 
{
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* G_B2_0 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* G_B1_0 = NULL;
	{
		// SetDeviceMode?.Invoke(deviceMode);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_0 = __this->___SetDeviceMode_23;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_1 = L_0;
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
		uint8_t L_2 = ___deviceMode0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m126F60BC3E16824C7D1278D4DF5E7BF4735BE0C3_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_1_m4849E5D8EDA38F355BC7BD797CD3CA118AC1A149 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// StartRecording?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StartRecording_24;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_2_m62F71594608CB745FA3DF037422EC34CB64A8F43 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// StopRecording?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StopRecording_25;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_3_m154A36DC81ABF92E3F12061AFCD318CDB0C29379 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// StartPlayer?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StartPlayer_26;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_4_m6D9CBDB79581CED4D81B051263282009843C4697 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// StopPlayer?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___StopPlayer_27;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_5_m4AC6462C9BEE4E4B343F5CCF3FAD1D834BD85AAE (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// PausePlayer?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___PausePlayer_28;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_6(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_6_m6CAAFE1C4974634BF0CE91FA3C70F2D1FB40985A (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, double ___time0, const RuntimeMethod* method) 
{
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* G_B2_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* G_B1_0 = NULL;
	{
		// SetPlayerTime?.Invoke(time);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SetPlayerTime_29;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = L_0;
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
		double L_2 = ___time0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_7(Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_7_m77258CDFB8AADAE87575E550AB20751A4226F3BE (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) 
{
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B2_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B1_0 = NULL;
	{
		// SetSelectedTake?.Invoke(guid);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___SetSelectedTake_30;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = L_0;
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
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_2 = ___guid0;
		Guid_t L_3;
		L_3 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_inline(G_B2_0, L_3, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_8(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_8_mAB0C3BE049B73383EF8721A1AAD5120248E39975 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* ___take0, const RuntimeMethod* method) 
{
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* G_B2_0 = NULL;
	Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* G_B1_0 = NULL;
	{
		// SetTakeData?.Invoke((TakeDescriptor)take);
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_0 = __this->___SetTakeData_31;
		Action_1_tF2137FC501C5C05576FDDB2E0CBC8C49DF36BD4D* L_1 = L_0;
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
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_2 = ___take0;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_3;
		L_3 = TakeDescriptorV0_op_Explicit_mBD858E9E65D51EABD18AEDF7182F97906A0C5D10(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m8F83BC1BB914770A4F3DAF768A929D92E2FAB128_inline(G_B2_0, L_3, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_9(Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_9_mDF998E5C959F7C87E95DD87FAF4879FAC0CCBCE4 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) 
{
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B2_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B1_0 = NULL;
	{
		// DeleteTake?.Invoke(guid);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___DeleteTake_32;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = L_0;
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
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_2 = ___guid0;
		Guid_t L_3;
		L_3 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_inline(G_B2_0, L_3, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_10(Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_10_m23B583283A7938BEBEA4422091A8F1B41BD17C76 (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) 
{
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B2_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B1_0 = NULL;
	{
		// SetIterationBase?.Invoke(guid);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___SetIterationBase_33;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = L_0;
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
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_2 = ___guid0;
		Guid_t L_3;
		L_3 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_inline(G_B2_0, L_3, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_11_m8D6568A131632C260BE97694679C1DC68E39C29C (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// ClearIterationBase?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___ClearIterationBase_34;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppClient::<.ctor>b__68_12(Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppClient_U3C_ctorU3Eb__68_12_mB831C5B0DFD9FF38B7CDB7B59224B1DE81BF67BB (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) 
{
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B2_0 = NULL;
	Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* G_B1_0 = NULL;
	{
		// TexturePreviewRequested?.Invoke(guid);
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_0 = __this->___TexturePreviewRequested_35;
		Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* L_1 = L_0;
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
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_2 = ___guid0;
		Guid_t L_3;
		L_3 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_inline(G_B2_0, L_3, NULL);
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
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_Initialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_Initialized_m7015A45294D75D0CE65B348E5E07D1CF9D2B1508 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Initialized_14;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Initialized_14);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_Initialized(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_Initialized_m5C63039FD2343D773FB8DBCF9C5F1B75074B4CDC (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Initialized_14;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Initialized_14);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SessionEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SessionEnded_m6139E4E42FCF13835D11DC9BC0C8D847510E22F7 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SessionEnded_15;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___SessionEnded_15);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SessionEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SessionEnded_m3DBFCD9FC666CC3559B2EDFAB1249D905E6ED822 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SessionEnded_15;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___SessionEnded_15);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_IsRecordingReceived(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_IsRecordingReceived_m831A6A92909ECCD3A85527A04C83E8111F6F35DB (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___IsRecordingReceived_16;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___IsRecordingReceived_16);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_IsRecordingReceived(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_IsRecordingReceived_mA5A9E8E2B76F83A2B1D193F4FB3D6DAE67EBC17D (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___IsRecordingReceived_16;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___IsRecordingReceived_16);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_ServerModeReceived(System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_ServerModeReceived_m5509B0F75C9AA95EB8C41A5AE0EBB451009F8550 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_0 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_1 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_2 = NULL;
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_0 = __this->___ServerModeReceived_17;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_2 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)Castclass((RuntimeObject*)L_4, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var));
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F** L_5 = (&__this->___ServerModeReceived_17);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_6 = V_2;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_7 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_9 = V_0;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_9) == ((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_ServerModeReceived(System.Action`1<Unity.LiveCapture.CompanionApp.DeviceMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_ServerModeReceived_mA0F0F30ADCE88D97105901AC1648930C483A76A8 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_0 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_1 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* V_2 = NULL;
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_0 = __this->___ServerModeReceived_17;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_2 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)Castclass((RuntimeObject*)L_4, Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var));
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F** L_5 = (&__this->___ServerModeReceived_17);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_6 = V_2;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_7 = V_1;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_9 = V_0;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_9) == ((RuntimeObject*)(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_FrameRateReceived(System.Action`1<Unity.LiveCapture.FrameRate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_FrameRateReceived_mD84CE682AEFD24A4EF988382305C1AF422668970 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* V_0 = NULL;
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* V_1 = NULL;
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* V_2 = NULL;
	{
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_0 = __this->___FrameRateReceived_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_2 = V_1;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)Castclass((RuntimeObject*)L_4, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var));
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A** L_5 = (&__this->___FrameRateReceived_18);
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_6 = V_2;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_7 = V_1;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_9 = V_0;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)L_9) == ((RuntimeObject*)(Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_FrameRateReceived(System.Action`1<Unity.LiveCapture.FrameRate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_FrameRateReceived_m2BD0F8797BB45BF1B0DAE7D7FF6D67CC90CDDBDA (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* V_0 = NULL;
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* V_1 = NULL;
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* V_2 = NULL;
	{
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_0 = __this->___FrameRateReceived_18;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_2 = V_1;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)Castclass((RuntimeObject*)L_4, Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var));
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A** L_5 = (&__this->___FrameRateReceived_18);
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_6 = V_2;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_7 = V_1;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_9 = V_0;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)L_9) == ((RuntimeObject*)(Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_HasSlateReceived(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_HasSlateReceived_m6133B4A58314CE907B1AD0C6282B975687A2ABA8 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___HasSlateReceived_19;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___HasSlateReceived_19);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_HasSlateReceived(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_HasSlateReceived_mE4C4A909FF05E7FF620FB1BAE658DE671A1D355A (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___HasSlateReceived_19;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___HasSlateReceived_19);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateDurationReceived(System.Action`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateDurationReceived_m62D9946E1EED4D85E98EF596A465F5A9ECDE2416 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_1 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_2 = NULL;
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SlateDurationReceived_20;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_2 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)Castclass((RuntimeObject*)L_4, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var));
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A** L_5 = (&__this->___SlateDurationReceived_20);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_6 = V_2;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_7 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_9 = V_0;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_9) == ((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateDurationReceived(System.Action`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateDurationReceived_mECC7976CE65481B679670C51F4F4E09F8A249419 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_1 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_2 = NULL;
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SlateDurationReceived_20;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_2 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)Castclass((RuntimeObject*)L_4, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var));
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A** L_5 = (&__this->___SlateDurationReceived_20);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_6 = V_2;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_7 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_9 = V_0;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_9) == ((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateIsPreviewingReceived(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateIsPreviewingReceived_m5F30ADAC0577529350BF0BC8F02265C4CBF50C52 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___SlateIsPreviewingReceived_21;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___SlateIsPreviewingReceived_21);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateIsPreviewingReceived(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateIsPreviewingReceived_m12F1BD68CD9E398A63D6E3B5F1BF2F4083B2AED8 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___SlateIsPreviewingReceived_21;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___SlateIsPreviewingReceived_21);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlatePreviewTimeReceived(System.Action`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlatePreviewTimeReceived_m59587A8AD4310CE1814F11AAF103DF13C948FFA3 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_1 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_2 = NULL;
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SlatePreviewTimeReceived_22;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_2 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)Castclass((RuntimeObject*)L_4, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var));
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A** L_5 = (&__this->___SlatePreviewTimeReceived_22);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_6 = V_2;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_7 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_9 = V_0;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_9) == ((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlatePreviewTimeReceived(System.Action`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlatePreviewTimeReceived_m261CF17C18FE3BBE034AF4F7E57ADE7685B6AF4F (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_1 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* V_2 = NULL;
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SlatePreviewTimeReceived_22;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_2 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)Castclass((RuntimeObject*)L_4, Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var));
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A** L_5 = (&__this->___SlatePreviewTimeReceived_22);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_6 = V_2;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_7 = V_1;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_9 = V_0;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_9) == ((RuntimeObject*)(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateSelectedTakeReceived(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateSelectedTakeReceived_mFFBDECB06AD5D7F5D975CC6A0D76985A70E5704D (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateSelectedTakeReceived_23;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SlateSelectedTakeReceived_23);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateSelectedTakeReceived(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateSelectedTakeReceived_mA5D730AA0C1551050DE27DF1D5D40D4B4123D618 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateSelectedTakeReceived_23;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SlateSelectedTakeReceived_23);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateIterationBaseReceived(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateIterationBaseReceived_mDD6D6A5A4869A7C0A7C82B0F420817315A1C313E (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateIterationBaseReceived_24;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SlateIterationBaseReceived_24);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateIterationBaseReceived(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateIterationBaseReceived_m367CC0B9CAF73D80A3197815F1D9C25469355EE0 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateIterationBaseReceived_24;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SlateIterationBaseReceived_24);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateTakeNumberReceived(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateTakeNumberReceived_mFFCEB3CC994D6A4367A43DF3351610703FF103E0 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateTakeNumberReceived_25;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SlateTakeNumberReceived_25);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateTakeNumberReceived(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateTakeNumberReceived_m308647E4343F0E1FC5422E87FC7BB82645FFCBAB (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateTakeNumberReceived_25;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (&__this->___SlateTakeNumberReceived_25);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateShotNameReceived(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateShotNameReceived_m01D49A2281EA55532188374262E070E0E1CDE958 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___SlateShotNameReceived_26;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___SlateShotNameReceived_26);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateShotNameReceived(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateShotNameReceived_mC6EBFF2F2D77747A157ED8D20D48145873E09C68 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___SlateShotNameReceived_26;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___SlateShotNameReceived_26);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_SlateTakesReceived(System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_SlateTakesReceived_m4B7DB6C72284B034D3D335D00BD1A04992A5BF93 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* V_0 = NULL;
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* V_1 = NULL;
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* V_2 = NULL;
	{
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_0 = __this->___SlateTakesReceived_27;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_2 = V_1;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*)Castclass((RuntimeObject*)L_4, Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E_il2cpp_TypeInfo_var));
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E** L_5 = (&__this->___SlateTakesReceived_27);
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_6 = V_2;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_7 = V_1;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_9 = V_0;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*)L_9) == ((RuntimeObject*)(Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_SlateTakesReceived(System.Action`1<Unity.LiveCapture.CompanionApp.TakeDescriptor[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_SlateTakesReceived_m5CDA2B941DC5FA4CCFC1819DC17828E53D6DE0A4 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* V_0 = NULL;
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* V_1 = NULL;
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* V_2 = NULL;
	{
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_0 = __this->___SlateTakesReceived_27;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_2 = V_1;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*)Castclass((RuntimeObject*)L_4, Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E_il2cpp_TypeInfo_var));
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E** L_5 = (&__this->___SlateTakesReceived_27);
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_6 = V_2;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_7 = V_1;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_9 = V_0;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*)L_9) == ((RuntimeObject*)(Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_NextTakeNameReceived(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_NextTakeNameReceived_m3FB6FD9D9F2B6DE7B8308E5041D456AA1C963557 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___NextTakeNameReceived_28;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___NextTakeNameReceived_28);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_NextTakeNameReceived(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_NextTakeNameReceived_mCA189D82F7FE927934AC84D0DEA5DFC477F8BB9A (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___NextTakeNameReceived_28;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___NextTakeNameReceived_28);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_NextAssetNameReceived(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_NextAssetNameReceived_m3A11868E26E2194B4985BFC5D24A59DD5C186D71 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___NextAssetNameReceived_29;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___NextAssetNameReceived_29);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_NextAssetNameReceived(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_NextAssetNameReceived_m014F252CD0D80FC2DCE36D6759CF54B68AE9E236 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___NextAssetNameReceived_29;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___NextAssetNameReceived_29);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::add_TexturePreviewReceived(System.Action`2<System.Guid,UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_add_TexturePreviewReceived_mE0B209316EB5B441048843432E9D6AA72737716E (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* V_0 = NULL;
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* V_1 = NULL;
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* V_2 = NULL;
	{
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_0 = __this->___TexturePreviewReceived_30;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_1 = V_0;
		V_1 = L_1;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_2 = V_1;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*)Castclass((RuntimeObject*)L_4, Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F_il2cpp_TypeInfo_var));
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F** L_5 = (&__this->___TexturePreviewReceived_30);
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_6 = V_2;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_7 = V_1;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_9 = V_0;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*)L_9) == ((RuntimeObject*)(Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::remove_TexturePreviewReceived(System.Action`2<System.Guid,UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_remove_TexturePreviewReceived_mD245C929E3ECEC4D771E3FE8FF5D09345563B557 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* V_0 = NULL;
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* V_1 = NULL;
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* V_2 = NULL;
	{
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_0 = __this->___TexturePreviewReceived_30;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_1 = V_0;
		V_1 = L_1;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_2 = V_1;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*)Castclass((RuntimeObject*)L_4, Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F_il2cpp_TypeInfo_var));
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F** L_5 = (&__this->___TexturePreviewReceived_30);
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_6 = V_2;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_7 = V_1;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_9 = V_0;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*)L_9) == ((RuntimeObject*)(Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost__ctor_m32953258ACED3B231876CA04DE699CA83E5E3049 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* ___network0, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote1, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t12104754636C0471D01E9321801E298E3DDC9869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReceiver_1_TryGet_mCD0BE79798C957503DB3E5EF35A5F143A41224EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_TryGet_mC2DC115BCD1FB6F7F7550D1DE65E9C9A8081E84E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_0_mC21374387B6130577EF217F4B34B96B11687D578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_10_mAA932FA67C4B3A64E1789B22FD2B596B225F809A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_11_m324AD342C883F627D58401FA467A2E4A93FA2DDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_12_mC7D5F442D717A8E6793DB45D20C204870066A10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_13_m83D106C7E4337DF3A55D87754802D0FAF9A415E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_14_m6C8A593EF88BB0C30DD0964B0D3C077E584D5ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_15_m84369F89080257C17202FED5D27F30100A29BED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_16_mDF2AB3002567BDF533E531641C4C0F0D810353C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_1_mEB03DBF8667A32DCF6BC67142E83E98D93D2BB40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_2_mFA429509B76DFCBBFDB3662221212B8193DA70FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_3_m34DAB0388B69C1300E76B3481F9FC2B05AAEC6D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_4_m343D265D9E0A49A08C2F201ADCB75E3781352F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_5_m4339945099E4924168DCE1D40E66E696779719E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_6_m8DCB869B3E96B8B4208FA76FAFAD5C2A98674A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_7_m32BF11931DA2605C9390CA30E6E9AE1300844E68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_8_m0D61831E804CAE9D76512C931F312CC92AAEA50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppHost_U3C_ctorU3Eb__65_9_mEFF45CA751716EA7A7A294D7E4C448E26B013D4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m2EF3D3A27F3FE2089BC8C454429683B0C61A82DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReceiver_1_TryGet_m40EF2B8DCB729BC00FDDD6B0B6FC0F7DFD1DAC96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSender_1_TryGet_m1B56D48D0437C46CE9C29095485C11B484E3BC4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0083343509FCB493264CB50A2BB0FB7832AAC078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0526FA32EC6A55B65FA503C3BCD04620CF45342C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08BC4AB60D0A85B8D81E0A9DABB1F283D867D0AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DBE3556C1A8F5E208FC2E32B6B4FC0D32F6650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1875B485B755FBA61E7ABF457B275ACF497F2E39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BE61F44561497403DCAB7A58CB3E0EF47FCBE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral237C8DED8E931E1E58A77122E18C00103A714E22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E26EC9B4DA3B4035470653D9EFA290A74AFD5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F73AC823161FAF192F6037E985A89B7CDFF726D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37EEAECFB716382D269CA422585E550C4787915B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45350A82A134AF266A49134E432361B7D6442E02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51792F9CEC1282AEB1DDD1DF8401873E423EA7F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594E2474C4D984FD86B8979A431D63C0B0233A5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ADE860937252335521794D668CFED8852D1AAFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C3BF9232C39E79E01887478903C86E4B5CAD26C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DA51306566EE2066E22E4F919B243890C79E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B83118158D2E86CC508C8E135AF115188FD8755);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E56E1518F49C55B29B3F73C61AE1A172165C28D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B108199D3E79CD84F842EE8AF518651E9B5FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744FBD83E35F16127A5D62BFB9F2614DC4E19A7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805DAD5A6CF7FED94AA2E1C303503BDE48D35001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A69F955AE6BE7746E1790067893EA357BE6631B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BC17ECE3AA16D4B5CD02F66FEA8CD741788D2B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB38F3DEE2D7F00A2A44FD6079A1150E1F49728C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF5A13498FF13E6ACC284E5B8D273E803AE9F67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD142BDA678779E4CD15BAB96874C23A898F7855A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67F7FEA3C3C0A6F9A933C63BB792E8A7DA2AE16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAE26E319F926492765D0DC457F196AA39479BEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF410E724A50895999C5EC621080B17146F097356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFC5905B34D89697E0BA01C3BEB242A7E7347B4A);
		s_Il2CppMethodInitialized = true;
	}
	EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* V_0 = NULL;
	EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* V_1 = NULL;
	BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A* V_2 = NULL;
	BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* V_3 = NULL;
	BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5* V_4 = NULL;
	BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A* V_5 = NULL;
	BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* V_6 = NULL;
	BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A* V_7 = NULL;
	BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* V_8 = NULL;
	BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3* V_9 = NULL;
	BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3* V_10 = NULL;
	BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3* V_11 = NULL;
	StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1* V_12 = NULL;
	JsonReceiver_1_t3C3F74B6CA8D41290570E70A824D179C558C83C4* V_13 = NULL;
	StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1* V_14 = NULL;
	StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1* V_15 = NULL;
	TextureReceiver_tD197B90DF20D8020CDDA1B4AB68A27A6331CF9C0* V_16 = NULL;
	{
		// protected CompanionAppHost(NetworkBase network, Remote remote, Stream stream)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Protocol = new Protocol(stream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream2;
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_1 = (Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB*)il2cpp_codegen_object_new(Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Protocol__ctor_mD1172D851C2E75AB93DFEC5843468227805CA513(L_1, L_0, NULL);
		__this->___m_Protocol_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Protocol_0), (void*)L_1);
		// m_Protocol.SetNetwork(network, remote);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_2 = __this->___m_Protocol_0;
		NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* L_3 = ___network0;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_4 = ___remote1;
		NullCheck(L_2);
		Protocol_SetNetwork_mCCBA62E2422B2EDA541469659A786B7DB8565B39(L_2, L_3, L_4, NULL);
		// BinarySender<DeviceMode>.TryGet(m_Protocol, CompanionAppMessages.ToServer.SetDeviceMode, out m_DeviceModeSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_5 = __this->___m_Protocol_0;
		BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB** L_6 = (&__this->___m_DeviceModeSender_1);
		bool L_7;
		L_7 = BinarySender_1_TryGet_mC2DC115BCD1FB6F7F7550D1DE65E9C9A8081E84E(L_5, _stringLiteral805DAD5A6CF7FED94AA2E1C303503BDE48D35001, L_6, BinarySender_1_TryGet_mC2DC115BCD1FB6F7F7550D1DE65E9C9A8081E84E_RuntimeMethod_var);
		// EventSender.TryGet(m_Protocol, CompanionAppMessages.ToServer.StartRecording, out m_StartRecordingSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_8 = __this->___m_Protocol_0;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** L_9 = (&__this->___m_StartRecordingSender_2);
		bool L_10;
		L_10 = EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17(L_8, _stringLiteral6B83118158D2E86CC508C8E135AF115188FD8755, L_9, NULL);
		// EventSender.TryGet(m_Protocol, CompanionAppMessages.ToServer.StopRecording, out m_StopRecordingSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_11 = __this->___m_Protocol_0;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** L_12 = (&__this->___m_StopRecordingSender_3);
		bool L_13;
		L_13 = EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17(L_11, _stringLiteral72B108199D3E79CD84F842EE8AF518651E9B5FE9, L_12, NULL);
		// EventSender.TryGet(m_Protocol, CompanionAppMessages.ToServer.PlayerStart, out m_StartPlayerSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_14 = __this->___m_Protocol_0;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** L_15 = (&__this->___m_StartPlayerSender_4);
		bool L_16;
		L_16 = EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17(L_14, _stringLiteralB38F3DEE2D7F00A2A44FD6079A1150E1F49728C6, L_15, NULL);
		// EventSender.TryGet(m_Protocol, CompanionAppMessages.ToServer.PlayerStop, out m_StopPlayerSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_17 = __this->___m_Protocol_0;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** L_18 = (&__this->___m_StopPlayerSender_5);
		bool L_19;
		L_19 = EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17(L_17, _stringLiteralCEF5A13498FF13E6ACC284E5B8D273E803AE9F67, L_18, NULL);
		// EventSender.TryGet(m_Protocol, CompanionAppMessages.ToServer.PlayerPause, out m_PausePlayerSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_20 = __this->___m_Protocol_0;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** L_21 = (&__this->___m_PausePlayerSender_6);
		bool L_22;
		L_22 = EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17(L_20, _stringLiteral0526FA32EC6A55B65FA503C3BCD04620CF45342C, L_21, NULL);
		// BinarySender<double>.TryGet(m_Protocol, CompanionAppMessages.ToServer.PlayerSetTime, out m_PlayerTimeSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_23 = __this->___m_Protocol_0;
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8** L_24 = (&__this->___m_PlayerTimeSender_7);
		bool L_25;
		L_25 = BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D(L_23, _stringLiteralE67F7FEA3C3C0A6F9A933C63BB792E8A7DA2AE16, L_24, BinarySender_1_TryGet_mEA1288E49AFBEAFDAE950C45287E4C2292EB8F5D_RuntimeMethod_var);
		// BinarySender<SerializableGuid>.TryGet(m_Protocol, CompanionAppMessages.ToServer.SetSelectedTake, out m_SetSelectedTakeSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_26 = __this->___m_Protocol_0;
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0** L_27 = (&__this->___m_SetSelectedTakeSender_8);
		bool L_28;
		L_28 = BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE(L_26, _stringLiteral45350A82A134AF266A49134E432361B7D6442E02, L_27, BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_RuntimeMethod_var);
		// JsonSender<TakeDescriptorV0>.TryGet(m_Protocol, CompanionAppMessages.ToServer.SetTakeData_V0, out m_SetTakeDataSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_29 = __this->___m_Protocol_0;
		JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B** L_30 = (&__this->___m_SetTakeDataSender_9);
		bool L_31;
		L_31 = JsonSender_1_TryGet_m1B56D48D0437C46CE9C29095485C11B484E3BC4E(L_29, _stringLiteral64DA51306566EE2066E22E4F919B243890C79E45, L_30, JsonSender_1_TryGet_m1B56D48D0437C46CE9C29095485C11B484E3BC4E_RuntimeMethod_var);
		// BinarySender<SerializableGuid>.TryGet(m_Protocol, CompanionAppMessages.ToServer.DeleteTake, out m_DeleteTakeSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_32 = __this->___m_Protocol_0;
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0** L_33 = (&__this->___m_DeleteTakeSender_10);
		bool L_34;
		L_34 = BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE(L_32, _stringLiteral744FBD83E35F16127A5D62BFB9F2614DC4E19A7E, L_33, BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_RuntimeMethod_var);
		// BinarySender<SerializableGuid>.TryGet(m_Protocol, CompanionAppMessages.ToServer.SetIterationBase, out m_SetIterationBaseSender);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_35 = __this->___m_Protocol_0;
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0** L_36 = (&__this->___m_SetIterationBaseSender_11);
		bool L_37;
		L_37 = BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE(L_35, _stringLiteral6E56E1518F49C55B29B3F73C61AE1A172165C28D, L_36, BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_RuntimeMethod_var);
		// EventSender.TryGet(m_Protocol, CompanionAppMessages.ToServer.ClearIterationBase, out m_ClearIterationBase);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_38 = __this->___m_Protocol_0;
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A** L_39 = (&__this->___m_ClearIterationBase_12);
		bool L_40;
		L_40 = EventSender_TryGet_m86D8F66F85536B10794A295C44EBFF63A7F30C17(L_38, _stringLiteralD142BDA678779E4CD15BAB96874C23A898F7855A, L_39, NULL);
		// BinarySender<SerializableGuid>.TryGet(m_Protocol, CompanionAppMessages.ToServer.RequestTexturePreview, out m_RequestTexturePreview);
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_41 = __this->___m_Protocol_0;
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0** L_42 = (&__this->___m_RequestTexturePreview_13);
		bool L_43;
		L_43 = BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE(L_41, _stringLiteralF410E724A50895999C5EC621080B17146F097356, L_42, BinarySender_1_TryGet_m732BD3AD6FAA66F80F3E665B9482E5FD2D4AE4FE_RuntimeMethod_var);
		// if (EventReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.Initialize, out var initialize))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_44 = __this->___m_Protocol_0;
		bool L_45;
		L_45 = EventReceiver_TryGet_m3245A7EA39CCBE97AE0ED4C27CF3BC1C21BE1780(L_44, _stringLiteral51792F9CEC1282AEB1DDD1DF8401873E423EA7F5, (&V_0), NULL);
		if (!L_45)
		{
			goto IL_0170;
		}
	}
	{
		// initialize.AddHandler(() =>
		// {
		//     m_Protocol.Reset();
		//     Initialized?.Invoke();
		// });
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_46 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_47 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_47, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_0_mC21374387B6130577EF217F4B34B96B11687D578_RuntimeMethod_var), NULL);
		NullCheck(L_46);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_46, L_47, NULL);
	}

IL_0170:
	{
		// if (EventReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.EndSession, out var endSession))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_48 = __this->___m_Protocol_0;
		bool L_49;
		L_49 = EventReceiver_TryGet_m3245A7EA39CCBE97AE0ED4C27CF3BC1C21BE1780(L_48, _stringLiteral5ADE860937252335521794D668CFED8852D1AAFC, (&V_1), NULL);
		if (!L_49)
		{
			goto IL_0196;
		}
	}
	{
		// endSession.AddHandler(() =>
		// {
		//     SessionEnded?.Invoke();
		// });
		EventReceiver_t851B9B247CAC0C0121586466B8EF958C1B2FC944* L_50 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_51 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_51, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_1_mEB03DBF8667A32DCF6BC67142E83E98D93D2BB40_RuntimeMethod_var), NULL);
		NullCheck(L_50);
		EventReceiver_AddHandler_mC0DB33A131F0AAEFB0A3DCF633A1A08F700341DA(L_50, L_51, NULL);
	}

IL_0196:
	{
		// if (BoolReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.IsRecordingChanged, out var isRecordingChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_52 = __this->___m_Protocol_0;
		bool L_53;
		L_53 = BoolReceiver_TryGet_m4AD3381D432983DCB348F0164F4CF6927F5BEE56(L_52, _stringLiteral37EEAECFB716382D269CA422585E550C4787915B, (&V_2), NULL);
		if (!L_53)
		{
			goto IL_01bc;
		}
	}
	{
		// isRecordingChanged.AddHandler(state =>
		// {
		//     IsRecordingReceived?.Invoke(state);
		// });
		BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A* L_54 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_55 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_55, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_2_mFA429509B76DFCBBFDB3662221212B8193DA70FE_RuntimeMethod_var), NULL);
		NullCheck(L_54);
		DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7(L_54, L_55, DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_RuntimeMethod_var);
	}

IL_01bc:
	{
		// if (BinaryReceiver<DeviceMode>.TryGet(m_Protocol, CompanionAppMessages.ToClient.DeviceModeChanged, out var serverModeChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_56 = __this->___m_Protocol_0;
		bool L_57;
		L_57 = BinaryReceiver_1_TryGet_mCD0BE79798C957503DB3E5EF35A5F143A41224EE(L_56, _stringLiteral8BC17ECE3AA16D4B5CD02F66FEA8CD741788D2B2, (&V_3), BinaryReceiver_1_TryGet_mCD0BE79798C957503DB3E5EF35A5F143A41224EE_RuntimeMethod_var);
		if (!L_57)
		{
			goto IL_01e2;
		}
	}
	{
		// serverModeChanged.AddHandler(mode =>
		// {
		//     ServerModeReceived?.Invoke(mode);
		// });
		BinaryReceiver_1_t20BE11E3DC3DEE8BE74DE638A21CEE8656044609* L_58 = V_3;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_59 = (Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F*)il2cpp_codegen_object_new(Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action_1__ctor_m7048E12400BF3A4BF2DB9A636C2C37C20AA6F1A1(L_59, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_3_m34DAB0388B69C1300E76B3481F9FC2B05AAEC6D3_RuntimeMethod_var), NULL);
		NullCheck(L_58);
		DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1(L_58, L_59, DataReceiver_1_AddHandler_m1EFBDD439555DC0683D5849F5803E895F2AD83A1_RuntimeMethod_var);
	}

IL_01e2:
	{
		// if (BinaryReceiver<FrameRate>.TryGet(m_Protocol, CompanionAppMessages.ToClient.FrameRate, out var frameRateChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_60 = __this->___m_Protocol_0;
		bool L_61;
		L_61 = BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2(L_60, _stringLiteralEAE26E319F926492765D0DC457F196AA39479BEB, (&V_4), BinaryReceiver_1_TryGet_m98860B5AE11CDA7743894C49D200F70A9BA473F2_RuntimeMethod_var);
		if (!L_61)
		{
			goto IL_0209;
		}
	}
	{
		// frameRateChanged.AddHandler(rate =>
		// {
		//     FrameRateReceived?.Invoke(rate);
		// });
		BinaryReceiver_1_tDC3803C4AAB81C6D3344E2A96DF2707FFB8175C5* L_62 = V_4;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_63 = (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A*)il2cpp_codegen_object_new(Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Action_1__ctor_m88499360F68E931DE1FFEBC3AA2F73CF20033538(L_63, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_4_m343D265D9E0A49A08C2F201ADCB75E3781352F69_RuntimeMethod_var), NULL);
		NullCheck(L_62);
		DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A(L_62, L_63, DataReceiver_1_AddHandler_m5E900E9494599748B11B8B9552AAABAF1F82792A_RuntimeMethod_var);
	}

IL_0209:
	{
		// if (BoolReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.HasSlateChanged, out var hasSlateChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_64 = __this->___m_Protocol_0;
		bool L_65;
		L_65 = BoolReceiver_TryGet_m4AD3381D432983DCB348F0164F4CF6927F5BEE56(L_64, _stringLiteral15DBE3556C1A8F5E208FC2E32B6B4FC0D32F6650, (&V_5), NULL);
		if (!L_65)
		{
			goto IL_0230;
		}
	}
	{
		// hasSlateChanged.AddHandler(hasSlate =>
		// {
		//     HasSlateReceived?.Invoke(hasSlate);
		// });
		BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A* L_66 = V_5;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_67 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_67, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_5_m4339945099E4924168DCE1D40E66E696779719E5_RuntimeMethod_var), NULL);
		NullCheck(L_66);
		DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7(L_66, L_67, DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_RuntimeMethod_var);
	}

IL_0230:
	{
		// if (BinaryReceiver<double>.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateDurationChanged, out var slateDurationChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_68 = __this->___m_Protocol_0;
		bool L_69;
		L_69 = BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443(L_68, _stringLiteral8A69F955AE6BE7746E1790067893EA357BE6631B, (&V_6), BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443_RuntimeMethod_var);
		if (!L_69)
		{
			goto IL_0257;
		}
	}
	{
		// slateDurationChanged.AddHandler(duration =>
		// {
		//     SlateDurationReceived?.Invoke(duration);
		// });
		BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* L_70 = V_6;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_71 = (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)il2cpp_codegen_object_new(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Action_1__ctor_m676FAC53E13390D50082C985025C4F8EB8761FE5(L_71, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_6_m8DCB869B3E96B8B4208FA76FAFAD5C2A98674A9C_RuntimeMethod_var), NULL);
		NullCheck(L_70);
		DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D(L_70, L_71, DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_RuntimeMethod_var);
	}

IL_0257:
	{
		// if (BoolReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateIsPreviewingChanged, out var slateIsPreviewingChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_72 = __this->___m_Protocol_0;
		bool L_73;
		L_73 = BoolReceiver_TryGet_m4AD3381D432983DCB348F0164F4CF6927F5BEE56(L_72, _stringLiteral5C3BF9232C39E79E01887478903C86E4B5CAD26C, (&V_7), NULL);
		if (!L_73)
		{
			goto IL_027e;
		}
	}
	{
		// slateIsPreviewingChanged.AddHandler(isPreviewing =>
		// {
		//     SlateIsPreviewingReceived?.Invoke(isPreviewing);
		// });
		BoolReceiver_tABE0E07DA971589A66F0952C019029A42A3F5C5A* L_74 = V_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_75 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_75, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_7_m32BF11931DA2605C9390CA30E6E9AE1300844E68_RuntimeMethod_var), NULL);
		NullCheck(L_74);
		DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7(L_74, L_75, DataReceiver_1_AddHandler_m9F3E5967330A0678CE68E92F20BAE89DB1844EC7_RuntimeMethod_var);
	}

IL_027e:
	{
		// if (BinaryReceiver<double>.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlatePreviewTimeChanged, out var slatePreviewTimeChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_76 = __this->___m_Protocol_0;
		bool L_77;
		L_77 = BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443(L_76, _stringLiteral594E2474C4D984FD86B8979A431D63C0B0233A5A, (&V_8), BinaryReceiver_1_TryGet_mB4D81BEB9839372819BCF4594938720A05990443_RuntimeMethod_var);
		if (!L_77)
		{
			goto IL_02a5;
		}
	}
	{
		// slatePreviewTimeChanged.AddHandler(duration =>
		// {
		//     SlatePreviewTimeReceived?.Invoke(duration);
		// });
		BinaryReceiver_1_t43E8D6BB589D51B5E6BCEADA0AEBEA1B97A8FF0A* L_78 = V_8;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_79 = (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A*)il2cpp_codegen_object_new(Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		Action_1__ctor_m676FAC53E13390D50082C985025C4F8EB8761FE5(L_79, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_8_m0D61831E804CAE9D76512C931F312CC92AAEA50C_RuntimeMethod_var), NULL);
		NullCheck(L_78);
		DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D(L_78, L_79, DataReceiver_1_AddHandler_m5993D35A1F086B0304ECC3A9D61A2DC6F8C6783D_RuntimeMethod_var);
	}

IL_02a5:
	{
		// if (BinaryReceiver<int>.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateSelectedTake, out var slateSelectedTakeChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_80 = __this->___m_Protocol_0;
		bool L_81;
		L_81 = BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721(L_80, _stringLiteral1875B485B755FBA61E7ABF457B275ACF497F2E39, (&V_9), BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_RuntimeMethod_var);
		if (!L_81)
		{
			goto IL_02cc;
		}
	}
	{
		// slateSelectedTakeChanged.AddHandler(selectedTake =>
		// {
		//     SlateSelectedTakeReceived?.Invoke(selectedTake);
		// });
		BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3* L_82 = V_9;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_83 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_83, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_9_mEFF45CA751716EA7A7A294D7E4C448E26B013D4D_RuntimeMethod_var), NULL);
		NullCheck(L_82);
		DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332(L_82, L_83, DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_RuntimeMethod_var);
	}

IL_02cc:
	{
		// if (BinaryReceiver<int>.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateIterationBase, out var slateIterationBaseChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_84 = __this->___m_Protocol_0;
		bool L_85;
		L_85 = BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721(L_84, _stringLiteral2F73AC823161FAF192F6037E985A89B7CDFF726D, (&V_10), BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_RuntimeMethod_var);
		if (!L_85)
		{
			goto IL_02f3;
		}
	}
	{
		// slateIterationBaseChanged.AddHandler(iterationBase =>
		// {
		//     SlateIterationBaseReceived?.Invoke(iterationBase);
		// });
		BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3* L_86 = V_10;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_87 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_87, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_10_mAA932FA67C4B3A64E1789B22FD2B596B225F809A_RuntimeMethod_var), NULL);
		NullCheck(L_86);
		DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332(L_86, L_87, DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_RuntimeMethod_var);
	}

IL_02f3:
	{
		// if (BinaryReceiver<int>.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateTakeNumber, out var slateTakeNumberChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_88 = __this->___m_Protocol_0;
		bool L_89;
		L_89 = BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721(L_88, _stringLiteralFFC5905B34D89697E0BA01C3BEB242A7E7347B4A, (&V_11), BinaryReceiver_1_TryGet_m444D160796B402859EFECBD904CDB5D83DCAD721_RuntimeMethod_var);
		if (!L_89)
		{
			goto IL_031a;
		}
	}
	{
		// slateTakeNumberChanged.AddHandler(takeNumber =>
		// {
		//     SlateTakeNumberReceived?.Invoke(takeNumber);
		// });
		BinaryReceiver_1_t64717FC298F768DD78351270F197A97487F57EC3* L_90 = V_11;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_91 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_91, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_11_m324AD342C883F627D58401FA467A2E4A93FA2DDD_RuntimeMethod_var), NULL);
		NullCheck(L_90);
		DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332(L_90, L_91, DataReceiver_1_AddHandler_mE76E25F9BBADB8F5669E577A07CF64749A6B7332_RuntimeMethod_var);
	}

IL_031a:
	{
		// if (StringReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateShotName, out var slateShotNameChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_92 = __this->___m_Protocol_0;
		bool L_93;
		L_93 = StringReceiver_TryGet_mFFC8B68528190DD3D0432CE61B42E989C2BA1B20(L_92, _stringLiteral26E26EC9B4DA3B4035470653D9EFA290A74AFD5B, (&V_12), NULL);
		if (!L_93)
		{
			goto IL_0341;
		}
	}
	{
		// slateShotNameChanged.AddHandler(shotName =>
		// {
		//     SlateShotNameReceived?.Invoke(shotName);
		// });
		StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1* L_94 = V_12;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_95 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_95, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_12_mC7D5F442D717A8E6793DB45D20C204870066A10C_RuntimeMethod_var), NULL);
		NullCheck(L_94);
		DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C(L_94, L_95, DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C_RuntimeMethod_var);
	}

IL_0341:
	{
		// if (JsonReceiver<TakeDescriptorArrayV0>.TryGet(m_Protocol, CompanionAppMessages.ToClient.SlateTakes_V0, out var slateTakesChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_96 = __this->___m_Protocol_0;
		bool L_97;
		L_97 = JsonReceiver_1_TryGet_m40EF2B8DCB729BC00FDDD6B0B6FC0F7DFD1DAC96(L_96, _stringLiteral22BE61F44561497403DCAB7A58CB3E0EF47FCBE2, (&V_13), JsonReceiver_1_TryGet_m40EF2B8DCB729BC00FDDD6B0B6FC0F7DFD1DAC96_RuntimeMethod_var);
		if (!L_97)
		{
			goto IL_0368;
		}
	}
	{
		// slateTakesChanged.AddHandler(takes =>
		// {
		//     SlateTakesReceived?.Invoke((TakeDescriptor[])takes);
		// });
		JsonReceiver_1_t3C3F74B6CA8D41290570E70A824D179C558C83C4* L_98 = V_13;
		Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806* L_99 = (Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806*)il2cpp_codegen_object_new(Action_1_tE5E419DCA36B4FD42026AAD53D3BBB20091FA806_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		Action_1__ctor_mD85E26F774733659D6097DACA8497CB640B38E70(L_99, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_13_m83D106C7E4337DF3A55D87754802D0FAF9A415E8_RuntimeMethod_var), NULL);
		NullCheck(L_98);
		DataReceiver_1_AddHandler_m2EF3D3A27F3FE2089BC8C454429683B0C61A82DD(L_98, L_99, DataReceiver_1_AddHandler_m2EF3D3A27F3FE2089BC8C454429683B0C61A82DD_RuntimeMethod_var);
	}

IL_0368:
	{
		// if (StringReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.NextTakeName, out var nextTakeNameChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_100 = __this->___m_Protocol_0;
		bool L_101;
		L_101 = StringReceiver_TryGet_mFFC8B68528190DD3D0432CE61B42E989C2BA1B20(L_100, _stringLiteral0083343509FCB493264CB50A2BB0FB7832AAC078, (&V_14), NULL);
		if (!L_101)
		{
			goto IL_038f;
		}
	}
	{
		// nextTakeNameChanged.AddHandler(name =>
		// {
		//     NextTakeNameReceived?.Invoke(name);
		// });
		StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1* L_102 = V_14;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_103 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_103, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_14_m6C8A593EF88BB0C30DD0964B0D3C077E584D5ED5_RuntimeMethod_var), NULL);
		NullCheck(L_102);
		DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C(L_102, L_103, DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C_RuntimeMethod_var);
	}

IL_038f:
	{
		// if (StringReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.NextAssetName, out var nextAssetNameChanged))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_104 = __this->___m_Protocol_0;
		bool L_105;
		L_105 = StringReceiver_TryGet_mFFC8B68528190DD3D0432CE61B42E989C2BA1B20(L_104, _stringLiteral08BC4AB60D0A85B8D81E0A9DABB1F283D867D0AE, (&V_15), NULL);
		if (!L_105)
		{
			goto IL_03b6;
		}
	}
	{
		// nextAssetNameChanged.AddHandler(name =>
		// {
		//     NextAssetNameReceived?.Invoke(name);
		// });
		StringReceiver_t3844273B5823FFD36D2B8E771D68C82402445EB1* L_106 = V_15;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_107 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_107);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_107, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_15_m84369F89080257C17202FED5D27F30100A29BED9_RuntimeMethod_var), NULL);
		NullCheck(L_106);
		DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C(L_106, L_107, DataReceiver_1_AddHandler_m5EE4F5FF09CD1DEA0B3F54F9BBADE0BD8BDD765C_RuntimeMethod_var);
	}

IL_03b6:
	{
		// if (TextureReceiver.TryGet(m_Protocol, CompanionAppMessages.ToClient.TexturePreview, out var texturePreviewReceived))
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_108 = __this->___m_Protocol_0;
		bool L_109;
		L_109 = TextureReceiver_TryGet_mCFCEE8BFEDF1444A1269D8332A629DFFC468B604(L_108, _stringLiteral237C8DED8E931E1E58A77122E18C00103A714E22, (&V_16), NULL);
		if (!L_109)
		{
			goto IL_03dd;
		}
	}
	{
		// texturePreviewReceived.AddHandler((data) =>
		// {
		//     var guid = Guid.Parse(data.metadata);
		//     var texture = data.texture;
		// 
		//     TexturePreviewReceived?.Invoke(guid, texture);
		// });
		TextureReceiver_tD197B90DF20D8020CDDA1B4AB68A27A6331CF9C0* L_110 = V_16;
		Action_1_t12104754636C0471D01E9321801E298E3DDC9869* L_111 = (Action_1_t12104754636C0471D01E9321801E298E3DDC9869*)il2cpp_codegen_object_new(Action_1_t12104754636C0471D01E9321801E298E3DDC9869_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		Action_1__ctor_m1AC7592839883435D5A4A4B67FBE6BA357E7F0A8(L_111, __this, (intptr_t)((void*)CompanionAppHost_U3C_ctorU3Eb__65_16_mDF2AB3002567BDF533E531641C4C0F0D810353C5_RuntimeMethod_var), NULL);
		NullCheck(L_110);
		DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD(L_110, L_111, DataReceiver_1_AddHandler_mB8F1032C3C738D6C37264E5252C87422B3BA6EFD_RuntimeMethod_var);
	}

IL_03dd:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::SetServerMode(Unity.LiveCapture.CompanionApp.DeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_SetServerMode_m225366B016E3012CE8B273EB3DB6F21B7C288FB6 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, uint8_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DeviceModeSender != null)
		BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* L_0 = __this->___m_DeviceModeSender_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// m_DeviceModeSender.Send(mode);
		BinarySender_1_t528E4A8ED5B617B2CF91B680C44591A10F156BAB* L_1 = __this->___m_DeviceModeSender_1;
		uint8_t L_2 = ___mode0;
		NullCheck(L_1);
		DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431(L_1, L_2, DataSender_1_Send_m05C148482A3A90240943B271002513B1EF591431_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::StartRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_StartRecording_mACD33CE8427C42397818108246AAC7DEFECC658B (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_StartRecordingSender != null)
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_StartRecordingSender_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_StartRecordingSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_StartRecordingSender_2;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_StopRecording_m786D230CA4A745C3C1C5B19FC95D849A9FC50342 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_StopRecordingSender != null)
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_StopRecordingSender_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_StopRecordingSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_StopRecordingSender_3;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::StartPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_StartPlayer_m3043395C9A92D80EB256557104772BDB98A7BDF8 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_StartPlayerSender != null)
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_StartPlayerSender_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_StartPlayerSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_StartPlayerSender_4;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::StopPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_StopPlayer_mC16BF56B844E8E4E047EC5E643C7605784A6FB02 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_StopPlayerSender != null)
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_StopPlayerSender_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_StopPlayerSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_StopPlayerSender_5;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::PausePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_PausePlayer_m828ABF5071E7CB9D3542A8AD8CF72ECE19A58394 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_PausePlayerSender != null)
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_PausePlayerSender_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_PausePlayerSender.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_PausePlayerSender_6;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::SetPlayerTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_SetPlayerTime_mEED05F7281738A9341F20355906C86AB04FD3D83 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, double ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PlayerTimeSender != null)
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* L_0 = __this->___m_PlayerTimeSender_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// m_PlayerTimeSender.Send(time);
		BinarySender_1_tDA7AB624CBBD8E962255BBDE70E6E44736B055E8* L_1 = __this->___m_PlayerTimeSender_7;
		double L_2 = ___time0;
		NullCheck(L_1);
		DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9(L_1, L_2, DataSender_1_Send_m976A9462BCE8430F8421F3BFB5CA56ED34DEDEB9_RuntimeMethod_var);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::SetSelectedTake(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_SetSelectedTake_m071E7817EABB70EF013E43D48826B82D383A174B (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Guid_t ___guid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SetSelectedTakeSender != null)
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_0 = __this->___m_SetSelectedTakeSender_8;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_SetSelectedTakeSender.Send(guid);
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_1 = __this->___m_SetSelectedTakeSender_8;
		Guid_t L_2 = ___guid0;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_3;
		L_3 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_2, NULL);
		NullCheck(L_1);
		DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109(L_1, L_3, DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::SetTakeData(Unity.LiveCapture.CompanionApp.TakeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_SetTakeData_m1ED3015AC667DE9E9ADC23F84F0D6079633F5CCF (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___descriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m10CC8EA80A59101B9BCE4E39386227A29C24EE9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SetTakeDataSender != null)
		JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B* L_0 = __this->___m_SetTakeDataSender_9;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_SetTakeDataSender.Send((TakeDescriptorV0)descriptor);
		JsonSender_1_t76DF1AEB3800389E6553523F53E7BBF23246D22B* L_1 = __this->___m_SetTakeDataSender_9;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_2 = ___descriptor0;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_3;
		L_3 = TakeDescriptorV0_op_Explicit_m05CF6D1932344427E82308BC8824EC4086CC1140(L_2, NULL);
		NullCheck(L_1);
		DataSender_1_Send_m10CC8EA80A59101B9BCE4E39386227A29C24EE9C(L_1, L_3, DataSender_1_Send_m10CC8EA80A59101B9BCE4E39386227A29C24EE9C_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::DeleteTake(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_DeleteTake_m5789E2206D072134E6AEBBDA143A570BBEF17701 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Guid_t ___guid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DeleteTakeSender != null)
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_0 = __this->___m_DeleteTakeSender_10;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_DeleteTakeSender.Send(guid);
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_1 = __this->___m_DeleteTakeSender_10;
		Guid_t L_2 = ___guid0;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_3;
		L_3 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_2, NULL);
		NullCheck(L_1);
		DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109(L_1, L_3, DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::SetIterationBase(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_SetIterationBase_mF88D8EEC7EB6E97D5DD334BC8A8A6B834CA0D754 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Guid_t ___guid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SetIterationBaseSender != null)
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_0 = __this->___m_SetIterationBaseSender_11;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_SetIterationBaseSender.Send(guid);
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_1 = __this->___m_SetIterationBaseSender_11;
		Guid_t L_2 = ___guid0;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_3;
		L_3 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_2, NULL);
		NullCheck(L_1);
		DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109(L_1, L_3, DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::ClearIterationBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_ClearIterationBase_mA15352E23CD6141F98E8B571FD488D35DE0536E3 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_ClearIterationBase != null)
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_0 = __this->___m_ClearIterationBase_12;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_ClearIterationBase.Send();
		EventSender_tFF17FFC3848AB774D2E9594451C758AE3CD1138A* L_1 = __this->___m_ClearIterationBase_12;
		NullCheck(L_1);
		EventSender_Send_m4013C8F9DD313CBE48729BDE34BE2C206606D2EB(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::RequestTexturePreview(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_RequestTexturePreview_mB9642DA1F1074898FE6FAB6DE5FE3825ADAD179C (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, Guid_t ___guid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_RequestTexturePreview != null)
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_0 = __this->___m_RequestTexturePreview_13;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_RequestTexturePreview.Send(guid);
		BinarySender_1_t750AFD6F8936FE69DE970582D96057E035B0EFE0* L_1 = __this->___m_RequestTexturePreview_13;
		Guid_t L_2 = ___guid0;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_3;
		L_3 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_2, NULL);
		NullCheck(L_1);
		DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109(L_1, L_3, DataSender_1_Send_m7D27D5D6F4ADA9C25157B83C6DE19C633F2BD109_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_0_mC21374387B6130577EF217F4B34B96B11687D578 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// m_Protocol.Reset();
		Protocol_t43FA886BCE9A15919239B83D39E076A268518DEB* L_0 = __this->___m_Protocol_0;
		NullCheck(L_0);
		Protocol_Reset_m0C73797914D854E220874E3E5A5DC88674A14761(L_0, NULL);
		// Initialized?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___Initialized_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_1_mEB03DBF8667A32DCF6BC67142E83E98D93D2BB40 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// SessionEnded?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___SessionEnded_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
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
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_2(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_2_mFA429509B76DFCBBFDB3662221212B8193DA70FE (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, bool ___state0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// IsRecordingReceived?.Invoke(state);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___IsRecordingReceived_16;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
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
		bool L_2 = ___state0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_3(Unity.LiveCapture.CompanionApp.DeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_3_m34DAB0388B69C1300E76B3481F9FC2B05AAEC6D3 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, uint8_t ___mode0, const RuntimeMethod* method) 
{
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* G_B2_0 = NULL;
	Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* G_B1_0 = NULL;
	{
		// ServerModeReceived?.Invoke(mode);
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_0 = __this->___ServerModeReceived_17;
		Action_1_tE67D712C4455A4C4A871AF584A19B92AAF663B8F* L_1 = L_0;
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
		uint8_t L_2 = ___mode0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m126F60BC3E16824C7D1278D4DF5E7BF4735BE0C3_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_4(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_4_m343D265D9E0A49A08C2F201ADCB75E3781352F69 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___rate0, const RuntimeMethod* method) 
{
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* G_B2_0 = NULL;
	Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* G_B1_0 = NULL;
	{
		// FrameRateReceived?.Invoke(rate);
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_0 = __this->___FrameRateReceived_18;
		Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* L_1 = L_0;
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
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_2 = ___rate0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m82AC1760F35FF82697FBDD1F74D4C26C25FB7BE5_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_5(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_5_m4339945099E4924168DCE1D40E66E696779719E5 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, bool ___hasSlate0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// HasSlateReceived?.Invoke(hasSlate);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___HasSlateReceived_19;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
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
		bool L_2 = ___hasSlate0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_6(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_6_m8DCB869B3E96B8B4208FA76FAFAD5C2A98674A9C (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, double ___duration0, const RuntimeMethod* method) 
{
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* G_B2_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* G_B1_0 = NULL;
	{
		// SlateDurationReceived?.Invoke(duration);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SlateDurationReceived_20;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = L_0;
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
		double L_2 = ___duration0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_7(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_7_m32BF11931DA2605C9390CA30E6E9AE1300844E68 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, bool ___isPreviewing0, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// SlateIsPreviewingReceived?.Invoke(isPreviewing);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___SlateIsPreviewingReceived_21;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
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
		bool L_2 = ___isPreviewing0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_8(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_8_m0D61831E804CAE9D76512C931F312CC92AAEA50C (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, double ___duration0, const RuntimeMethod* method) 
{
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* G_B2_0 = NULL;
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* G_B1_0 = NULL;
	{
		// SlatePreviewTimeReceived?.Invoke(duration);
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_0 = __this->___SlatePreviewTimeReceived_22;
		Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* L_1 = L_0;
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
		double L_2 = ___duration0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_9(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_9_mEFF45CA751716EA7A7A294D7E4C448E26B013D4D (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, int32_t ___selectedTake0, const RuntimeMethod* method) 
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		// SlateSelectedTakeReceived?.Invoke(selectedTake);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateSelectedTakeReceived_23;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
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
		int32_t L_2 = ___selectedTake0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_10(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_10_mAA932FA67C4B3A64E1789B22FD2B596B225F809A (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, int32_t ___iterationBase0, const RuntimeMethod* method) 
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		// SlateIterationBaseReceived?.Invoke(iterationBase);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateIterationBaseReceived_24;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
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
		int32_t L_2 = ___iterationBase0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_11(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_11_m324AD342C883F627D58401FA467A2E4A93FA2DDD (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, int32_t ___takeNumber0, const RuntimeMethod* method) 
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		// SlateTakeNumberReceived?.Invoke(takeNumber);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___SlateTakeNumberReceived_25;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
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
		int32_t L_2 = ___takeNumber0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_12(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_12_mC7D5F442D717A8E6793DB45D20C204870066A10C (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, String_t* ___shotName0, const RuntimeMethod* method) 
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// SlateShotNameReceived?.Invoke(shotName);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___SlateShotNameReceived_26;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0;
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
		String_t* L_2 = ___shotName0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_13(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_13_m83D106C7E4337DF3A55D87754802D0FAF9A415E8 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* ___takes0, const RuntimeMethod* method) 
{
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* G_B2_0 = NULL;
	Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* G_B1_0 = NULL;
	{
		// SlateTakesReceived?.Invoke((TakeDescriptor[])takes);
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_0 = __this->___SlateTakesReceived_27;
		Action_1_t3D8827E939792294EA1632CE91D9C1E1CB3F196E* L_1 = L_0;
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
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_2 = ___takes0;
		TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* L_3;
		L_3 = TakeDescriptorArrayV0_op_Explicit_m2C6F9843BF9BCDC09DD52EB0A2E2D40318968475(L_2, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA5F6D8FC9A2FE5096F8D42D60DCBD3910437A72F_inline(G_B2_0, L_3, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_14(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_14_m6C8A593EF88BB0C30DD0964B0D3C077E584D5ED5 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// NextTakeNameReceived?.Invoke(name);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___NextTakeNameReceived_28;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0;
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
		String_t* L_2 = ___name0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_15(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_15_m84369F89080257C17202FED5D27F30100A29BED9 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// NextAssetNameReceived?.Invoke(name);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___NextAssetNameReceived_29;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0;
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
		String_t* L_2 = ___name0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_2, NULL);
		// });
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppHost::<.ctor>b__65_16(Unity.LiveCapture.Networking.Protocols.TextureData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppHost_U3C_ctorU3Eb__65_16_mDF2AB3002567BDF533E531641C4C0F0D810353C5 (CompanionAppHost_t856692274947DF82218D788A3CA9605DF96265E1* __this, TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443 ___data0, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* G_B2_0 = NULL;
	Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* G_B1_0 = NULL;
	{
		// var guid = Guid.Parse(data.metadata);
		String_t* L_0;
		L_0 = TextureData_get_metadata_mBFF6C67DC249BFD68F2BEF2E28EE21049907EA74_inline((&___data0), NULL);
		Guid_t L_1;
		L_1 = Guid_Parse_mC068B0047F86921D817F600C75C6EBFE15A461D0(L_0, NULL);
		V_0 = L_1;
		// var texture = data.texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = TextureData_get_texture_mAF3B046704D0E7F628FC3898C9F33DE3E82AC951_inline((&___data0), NULL);
		V_1 = L_2;
		// TexturePreviewReceived?.Invoke(guid, texture);
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_3 = __this->___TexturePreviewReceived_30;
		Action_2_t9BCAF3D03D31C0F3B934ECD5D134AFE399E6585F* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Guid_t L_5 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = V_1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m421FB4247A7741114104DF4C44EC29980E1FEE67_inline(G_B2_0, L_5, L_6, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::add_ClientConnected(System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_add_ClientConnected_m3F524995E4E23DC831F405C4137F647E06F36E1E (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_0 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_1 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_0 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_2 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)Castclass((RuntimeObject*)L_4, Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_5 = V_2;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_6 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*>((&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_8 = V_0;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_8) == ((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::remove_ClientConnected(System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_remove_ClientConnected_m11E15E873FD615CF4E2973FB4D3BDA277D7B0853 (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_0 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_1 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_0 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_2 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)Castclass((RuntimeObject*)L_4, Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_5 = V_2;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_6 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*>((&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_8 = V_0;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_8) == ((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::add_ClientDisconnected(System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_add_ClientDisconnected_m878B465DD4D282EB7250A981C866CAD942B87CCB (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_0 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_1 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_0 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_2 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)Castclass((RuntimeObject*)L_4, Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_5 = V_2;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_6 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*>((&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6), L_5, L_6);
		V_0 = L_7;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_8 = V_0;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_8) == ((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::remove_ClientDisconnected(System.Action`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_remove_ClientDisconnected_m80E322FA7DF770C4EBE66EB4F30C8E6A672C5A2C (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_0 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_1 = NULL;
	Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_0 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_2 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)Castclass((RuntimeObject*)L_4, Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_5 = V_2;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_6 = V_1;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*>((&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6), L_5, L_6);
		V_0 = L_7;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_8 = V_0;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_8) == ((RuntimeObject*)(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::RegisterClientConnectHandler(System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean>,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_RegisterClientConnectHandler_m4A60FAEFA856D141089234D23BD2C1D99D03F4ED (Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* ___handler0, String_t* ___name1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (handler == null)
		Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_0 = ___handler0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(handler));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompanionAppServer_RegisterClientConnectHandler_m4A60FAEFA856D141089234D23BD2C1D99D03F4ED_RuntimeMethod_var)));
	}

IL_000e:
	{
		// DeregisterClientConnectHandler(handler);
		Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_2 = ___handler0;
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		CompanionAppServer_DeregisterClientConnectHandler_m50D4658AD140C436F29D7735C633C803FD0AE469(L_2, NULL);
		// s_ClientConnectHandlers.Add(new ConnectHandler
		// {
		//     Name = name,
		//     Time = time,
		//     Handler = handler,
		// });
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_3 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8;
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C));
		String_t* L_4 = ___name1;
		(&V_0)->___Name_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Name_0), (void*)L_4);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___time2;
		(&V_0)->___Time_1 = L_5;
		Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_6 = ___handler0;
		(&V_0)->___Handler_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Handler_2), (void*)L_6);
		ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_7 = V_0;
		NullCheck(L_3);
		List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_inline(L_3, L_7, List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::DeregisterClientConnectHandler(System.Func`2<Unity.LiveCapture.CompanionApp.ICompanionAppClient,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_DeregisterClientConnectHandler_m50D4658AD140C436F29D7735C633C803FD0AE469 (Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (handler == null)
		Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_0 = ___handler0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(handler));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompanionAppServer_DeregisterClientConnectHandler_m50D4658AD140C436F29D7735C633C803FD0AE469_RuntimeMethod_var)));
	}

IL_000e:
	{
		// for (var i = 0; i < s_ClientConnectHandlers.Count; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0012:
	{
		// if (s_ClientConnectHandlers[i].Handler == handler)
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_2 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_4;
		L_4 = List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C(L_2, L_3, List_1_get_Item_m2758246380C7FB0616D8E26B29A5852B68B8895C_RuntimeMethod_var);
		Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_5 = L_4.___Handler_2;
		Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_6 = ___handler0;
		bool L_7;
		L_7 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// s_ClientConnectHandlers.RemoveAt(i);
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_8 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA(L_8, L_9, List_1_RemoveAt_mA702CAA153A145C00300BD515FA579BC1253A4CA_RuntimeMethod_var);
	}

IL_0035:
	{
		// for (var i = 0; i < s_ClientConnectHandlers.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0039:
	{
		// for (var i = 0; i < s_ClientConnectHandlers.Count; i++)
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_12 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_inline(L_12, List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer__cctor_m66A7729E64A5FB33819AB629508B27D5700D1296 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeUtility_GetAllTypes_TisClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316_m994B3DE4CFE768B9771DD27C3DBB555375D4A8AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__12_0_m15860E01BEA5A33A26DF177100B719718DD752D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__12_1_m06CD19031F07CD4027BBD770BA833FD8DA154B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3268F1625AE0A452A8803BE8A961F0F0C2851A7);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* V_3 = NULL;
	ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* V_4 = NULL;
	int32_t V_5 = 0;
	ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* V_6 = NULL;
	{
		// public static event Action<ICompanionAppClient> ClientConnected = delegate {};
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* L_0 = ((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_1 = (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)il2cpp_codegen_object_new(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m22D9CC478E3D3B3F6BF559DB50A5A4725A7F290D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__12_0_m15860E01BEA5A33A26DF177100B719718DD752D0_RuntimeMethod_var), NULL);
		((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5), (void*)L_1);
		// public static event Action<ICompanionAppClient> ClientDisconnected = delegate {};
		U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* L_2 = ((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_3 = (Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947*)il2cpp_codegen_object_new(Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m22D9CC478E3D3B3F6BF559DB50A5A4725A7F290D(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__12_1_m06CD19031F07CD4027BBD770BA833FD8DA154B96_RuntimeMethod_var), NULL);
		((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6), (void*)L_3);
		// static readonly Dictionary<string, Type> s_TypeToClientType = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_4 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_4, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_TypeToClientType_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_TypeToClientType_7), (void*)L_4);
		// static readonly List<ConnectHandler> s_ClientConnectHandlers = new List<ConnectHandler>();
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_5 = (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*)il2cpp_codegen_object_new(List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11(L_5, List_1__ctor_m0576BA82263FF5D67BB85D586CB7AF1FB39B6B11_RuntimeMethod_var);
		((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8), (void*)L_5);
		// foreach (var(type, attributes) in AttributeUtility.GetAllTypes<ClientAttribute>())
		ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872* L_6;
		L_6 = AttributeUtility_GetAllTypes_TisClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316_m994B3DE4CFE768B9771DD27C3DBB555375D4A8AC((bool)0, AttributeUtility_GetAllTypes_TisClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316_m994B3DE4CFE768B9771DD27C3DBB555375D4A8AC_RuntimeMethod_var);
		V_0 = L_6;
		V_1 = 0;
		goto IL_00b9;
	}

IL_0049:
	{
		// foreach (var(type, attributes) in AttributeUtility.GetAllTypes<ClientAttribute>())
		ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ValueTuple_2_t3209B2F4D135C34B7D60F17F4E32564CCF9CC44D L_11 = L_10;
		Type_t* L_12 = L_11.___Item1_0;
		V_2 = L_12;
		ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* L_13 = L_11.___Item2_1;
		V_3 = L_13;
		// if (!typeof(CompanionAppClient).IsAssignableFrom(type))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_2;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
		if (L_17)
		{
			goto IL_0086;
		}
	}
	{
		// Debug.LogError($"{type.FullName} must be assignable from {nameof(CompanionAppClient)} to use the {nameof(ClientAttribute)} attribute.");
		Type_t* L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteralA3268F1625AE0A452A8803BE8A961F0F0C2851A7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		// continue;
		goto IL_00b5;
	}

IL_0086:
	{
		// foreach (var attribute in attributes)
		ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* L_21 = V_3;
		V_4 = L_21;
		V_5 = 0;
		goto IL_00ad;
	}

IL_008e:
	{
		// foreach (var attribute in attributes)
		ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* L_22 = V_4;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_6 = L_25;
		// s_TypeToClientType[attribute.Type] = type;
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_26 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_TypeToClientType_7;
		ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* L_27 = V_6;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = ClientAttribute_get_Type_mD19011116415F509DE63A5632E44D75414A5B147_inline(L_27, NULL);
		Type_t* L_29 = V_2;
		NullCheck(L_26);
		Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_26, L_28, L_29, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00ad:
	{
		// foreach (var attribute in attributes)
		int32_t L_31 = V_5;
		ClientAttributeU5BU5D_tABA1B63817F16350D5A773FFC4C305BDB7F07089* L_32 = V_4;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_008e;
		}
	}

IL_00b5:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b9:
	{
		// foreach (var(type, attributes) in AttributeUtility.GetAllTypes<ClientAttribute>())
		int32_t L_34 = V_1;
		ValueTuple_2U5BU5D_tCF6CCB7C2CF47485930C2540DDA0A1BA2B89C872* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.LiveCapture.CompanionApp.CompanionAppServer::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompanionAppServer_get_Port_m4BDC705324D5ECBE7C1DE3247C17AB4AE800372B (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Port;
		int32_t L_0 = __this->___m_Port_9;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_set_Port_m36605B615E4710D5C4EC9492EA27E00EF1795782 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// if (m_Port != value)
		int32_t L_0 = __this->___m_Port_9;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// m_Port = value;
		int32_t L_2 = ___value0;
		__this->___m_Port_9 = L_2;
		// OnChanged(true);
		Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F(__this, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppServer::get_AutoStartOnPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompanionAppServer_get_AutoStartOnPlay_mD4558013C85766768CF6FEC560B90BBFD6D5C79C (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AutoStartOnPlay;
		bool L_0 = __this->___m_AutoStartOnPlay_10;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::set_AutoStartOnPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_set_AutoStartOnPlay_m70CFF1977093F401D5B1455CE1773C620643934C (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (m_AutoStartOnPlay != value)
		bool L_0 = __this->___m_AutoStartOnPlay_10;
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		// m_AutoStartOnPlay = value;
		bool L_2 = ___value0;
		__this->___m_AutoStartOnPlay_10 = L_2;
		// OnChanged(true);
		Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F(__this, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.CompanionApp.CompanionAppServer::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompanionAppServer_get_IsRunning_m01BD9A4DE42ACE19E6058C6CBE47B35FD9709068 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning => m_Server.IsRunning;
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_0 = __this->___m_Server_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkBase_get_IsRunning_mAA0E99E68A59DCF66F39AE4D15BC794A98C68AB7(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Unity.LiveCapture.CompanionApp.CompanionAppServer::get_ClientCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompanionAppServer_get_ClientCount_m75036BDDF6ABC2BE5E9C94A2BB9D7C494B9EDAF0 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mD1557E9AE30A128FF03CE3C46765F4451AD34A05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ClientCount => m_RemoteToClient.Count;
		Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* L_0 = __this->___m_RemoteToClient_13;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mD1557E9AE30A128FF03CE3C46765F4451AD34A05(L_0, Dictionary_2_get_Count_mD1557E9AE30A128FF03CE3C46765F4451AD34A05_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_OnEnable_m55F9DAB5A8DAEBAB1963C81642D45CEEA19D7FDF (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_OnClientConnected_mCE0FDE26CEDEAE3398F9757282CE728E6E88AE00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_OnClientDisconnected_mBAA89A9BC44F98D69FFAF5B9B59963987F9139ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Connection_OnEnable_m2762117F4E701711BDC1BA48F798D7A6DF365E16(__this, NULL);
		// m_Server.RemoteConnected += OnClientConnected;
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_0 = __this->___m_Server_12;
		Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6* L_1 = (Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6*)il2cpp_codegen_object_new(Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m9292D959FA6C2ECBFBFF28E534F6149220A8762D(L_1, __this, (intptr_t)((void*)CompanionAppServer_OnClientConnected_mCE0FDE26CEDEAE3398F9757282CE728E6E88AE00_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		NetworkBase_add_RemoteConnected_mDC7E830FD799F086719E5F24935517A08D05433C(L_0, L_1, NULL);
		// m_Server.RemoteDisconnected += OnClientDisconnected;
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_2 = __this->___m_Server_12;
		Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433* L_3 = (Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433*)il2cpp_codegen_object_new(Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m05F937C6353C4D7C7CC98B159D163C7A3EA38AC5(L_3, __this, (intptr_t)((void*)CompanionAppServer_OnClientDisconnected_mBAA89A9BC44F98D69FFAF5B9B59963987F9139ED_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		NetworkBase_add_RemoteDisconnected_m5D52A085D80330F3703885ED6B6B26118029B90B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_OnDisable_mF42AFF7FD162E1FE701F48DDBE69F48A0B7F36E9 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_OnClientConnected_mCE0FDE26CEDEAE3398F9757282CE728E6E88AE00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_OnClientDisconnected_mBAA89A9BC44F98D69FFAF5B9B59963987F9139ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		Connection_OnDisable_mC410B3C19C98ABD1A45B31ABC11B8E634B95895B(__this, NULL);
		// m_Discovery.Stop();
		DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* L_0 = __this->___m_Discovery_11;
		NullCheck(L_0);
		DiscoveryBase_Stop_mBB3E38811AC53A911383C289A8CFB23558BE47A1(L_0, NULL);
		// m_Server.Stop();
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_1 = __this->___m_Server_12;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(4 /* System.Void Unity.LiveCapture.Networking.NetworkBase::Stop(System.Boolean) */, L_1, (bool)1);
		// m_Server.RemoteConnected -= OnClientConnected;
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_2 = __this->___m_Server_12;
		Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6* L_3 = (Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6*)il2cpp_codegen_object_new(Action_1_t57C305B125AFD387571A2E0D7EB0C69D6237B0E6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m9292D959FA6C2ECBFBFF28E534F6149220A8762D(L_3, __this, (intptr_t)((void*)CompanionAppServer_OnClientConnected_mCE0FDE26CEDEAE3398F9757282CE728E6E88AE00_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		NetworkBase_remove_RemoteConnected_mF6DA2A383A2238A6DFC01BFAC4824E483735D785(L_2, L_3, NULL);
		// m_Server.RemoteDisconnected -= OnClientDisconnected;
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_4 = __this->___m_Server_12;
		Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433* L_5 = (Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433*)il2cpp_codegen_object_new(Action_2_t0234E2CAC5764A8E142C7BC3A232A57C4C943433_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m05F937C6353C4D7C7CC98B159D163C7A3EA38AC5(L_5, __this, (intptr_t)((void*)CompanionAppServer_OnClientDisconnected_mBAA89A9BC44F98D69FFAF5B9B59963987F9139ED_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		NetworkBase_remove_RemoteDisconnected_m7AD94243405222B93EE294BBD0ECD65FF4106710(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.CompanionApp.ICompanionAppClient> Unity.LiveCapture.CompanionApp.CompanionAppServer::GetClients()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompanionAppServer_GetClients_m03ABDFBA75A8A723D507AB730C64F3B104837034 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9EF5E57CCA53EA92E3A0BC9CE434D13866C36001_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_RemoteToClient.Values;
		Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* L_0 = __this->___m_RemoteToClient_13;
		NullCheck(L_0);
		ValueCollection_t9608944866B1724C8F695D39833C048BDA3C1570* L_1;
		L_1 = Dictionary_2_get_Values_m9EF5E57CCA53EA92E3A0BC9CE434D13866C36001(L_0, Dictionary_2_get_Values_m9EF5E57CCA53EA92E3A0BC9CE434D13866C36001_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Unity.LiveCapture.CompanionApp.CompanionAppServer::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CompanionAppServer_GetName_m5DC07E9B29988EDC5D616E2D196958C1F7C60D29 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9713486D3B74C188FE1A52C3029D65DFF7AD81E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string GetName() => "Companion App Server";
		return _stringLiteral9713486D3B74C188FE1A52C3029D65DFF7AD81E0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_StartServer_mFB697131B9856CC57F6A73CAACAE9697871851B1 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_mD9F9DBA7229CE368C3D9718A30F6A8A117B5846B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUtilities_t4F1246C4B5E160BEB590DF3A0B6A9E4550D24605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445F06CE7500E685D076CE0E505E8C5F10F6A388);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E2396D1BE20B3A923D07CC4A931E7921AEFB17F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* V_2 = NULL;
	{
		// if (!NetworkUtilities.IsPortAvailable(m_Port))
		int32_t L_0 = __this->___m_Port_9;
		il2cpp_codegen_runtime_class_init_inline(NetworkUtilities_t4F1246C4B5E160BEB590DF3A0B6A9E4550D24605_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = NetworkUtilities_IsPortAvailable_m8AB12DB48E34E9DA5294A7562A36158176B0A8B1(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.LogError($"Unable to start server: Port {m_Port} is in use by another program! Close the other program, or assign a free port using the Live Capture Window.");
		int32_t L_2 = __this->___m_Port_9;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral445F06CE7500E685D076CE0E505E8C5F10F6A388, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// if (m_Server.StartServer(m_Port))
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_6 = __this->___m_Server_12;
		int32_t L_7 = __this->___m_Port_9;
		NullCheck(L_6);
		bool L_8;
		L_8 = NetworkServer_StartServer_mCA45CBEA9CDB408FA0E1B0406DE362D50530C8BA(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		// var machineName = Environment.MachineName;
		String_t* L_9;
		L_9 = Environment_get_MachineName_m9DA8870A9A245AC7F13AC3EFE4E566A0CEFBA9A5(NULL);
		V_0 = L_9;
		// var config = new ServerData(
		//     "Live Capture",
		//     machineName.Substring(0, Math.Min(machineName.Length, 32)),
		//     m_Server.ID,
		//     PackageUtility.GetVersion(LiveCaptureInfo.Version)
		// );
		String_t* L_10 = V_0;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_12, ((int32_t)32), NULL);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_13, NULL);
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_15 = __this->___m_Server_12;
		NullCheck(L_15);
		Guid_t L_16;
		L_16 = NetworkBase_get_ID_m3784E92568FA8A5EC7F0741F47D05EE40CE1E7A8_inline(L_15, NULL);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_17;
		L_17 = PackageUtility_GetVersion_m5542364CD0580D27458C21010BC9BC87C20C0A5B(_stringLiteral96543F8F77145E5AC7E750ACB2170E74A8B3377A, NULL);
		ServerData__ctor_mD63FECAE52B580420CF33226A81A5AC01BF71658((&V_1), _stringLiteral8E2396D1BE20B3A923D07CC4A931E7921AEFB17F, L_14, L_16, L_17, NULL);
		// var endPoints = m_Server.EndPoints.ToArray();
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_18 = __this->___m_Server_12;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = NetworkServer_get_EndPoints_m2F2BF805ACD040E4E7CBEDACE9512C6DA57A0A65_inline(L_18, NULL);
		IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* L_20;
		L_20 = Enumerable_ToArray_TisIPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_mD9F9DBA7229CE368C3D9718A30F6A8A117B5846B(L_19, Enumerable_ToArray_TisIPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_mD9F9DBA7229CE368C3D9718A30F6A8A117B5846B_RuntimeMethod_var);
		V_2 = L_20;
		// m_Discovery.Start(config, endPoints);
		DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* L_21 = __this->___m_Discovery_11;
		ServerData_tF59FD197623BD9976E94034DCD4D51A0DB19E656 L_22 = V_1;
		IPEndPointU5BU5D_t5F829395240958ED4302122A038C59996CD0431A* L_23 = V_2;
		NullCheck(L_21);
		bool L_24;
		L_24 = DiscoveryServer_Start_mD40AC44F0D356431A84DE4A9416B164F61BAF702(L_21, L_22, L_23, NULL);
	}

IL_0095:
	{
		// OnChanged(false);
		Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_StopServer_mBAC5451323A0B0FD7DB7D7DE0BC56097062FC00C (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	{
		// m_Server.Stop();
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_0 = __this->___m_Server_12;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(4 /* System.Void Unity.LiveCapture.Networking.NetworkBase::Stop(System.Boolean) */, L_0, (bool)1);
		// m_Discovery.Stop();
		DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* L_1 = __this->___m_Discovery_11;
		NullCheck(L_1);
		DiscoveryBase_Stop_mBB3E38811AC53A911383C289A8CFB23558BE47A1(L_1, NULL);
		// OnChanged(false);
		Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_OnUpdate_m5AB54F7F85F4BBD64689B8CD7D79C86833B4642A (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	{
		// m_Server.Update();
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_0 = __this->___m_Server_12;
		NullCheck(L_0);
		NetworkBase_Update_mBE8B7EBA1282D24E1A318D8DCED24F52C7A19DC3(L_0, NULL);
		// m_Discovery.Update();
		DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* L_1 = __this->___m_Discovery_11;
		NullCheck(L_1);
		DiscoveryBase_Update_m6F10BA78F8366350956A1F02E14C79C3D6F306E1(L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::OnClientConnected(Unity.LiveCapture.Networking.Remote)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_OnClientConnected_mCE0FDE26CEDEAE3398F9757282CE728E6E88AE00 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_InitializeClient_m9A0CDB82F06056E4588317F3ABAE419768F63DE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Server.RegisterMessageHandler(remote, InitializeClient, false);
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_0 = __this->___m_Server_12;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_1 = ___remote0;
		Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B* L_2 = (Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B*)il2cpp_codegen_object_new(Action_1_t28195C80EC45CEA287F5861AF3D38955A14DB17B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mBA60B3F3A61D6CFDBAFD5106A1E6F6CA587610BB(L_2, __this, (intptr_t)((void*)CompanionAppServer_InitializeClient_m9A0CDB82F06056E4588317F3ABAE419768F63DE8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = NetworkBase_RegisterMessageHandler_mCD15925C4F40FAB6410924FFC81717CDFC340F5E(L_0, L_1, L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::OnClientDisconnected(Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.Networking.DisconnectStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_OnClientDisconnected_mBAA89A9BC44F98D69FFAF5B9B59963987F9139ED (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* ___remote0, int32_t ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7A2AE5424A6EC51E36DA64369D4587CD0751B114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDCEC6BDBDBC2C5F410C2237D1C4B1DD25707FE6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (m_RemoteToClient.TryGetValue(remote, out var client))
		Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* L_0 = __this->___m_RemoteToClient_13;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_1 = ___remote0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mDCEC6BDBDBC2C5F410C2237D1C4B1DD25707FE6A(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mDCEC6BDBDBC2C5F410C2237D1C4B1DD25707FE6A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	try
	{// begin try (depth: 1)
		// ClientDisconnected.Invoke(client);
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_3 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientDisconnected_6;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_3);
		Action_1_Invoke_m3DAE0370D00930CBFA2BBF8C4B1CC2B919165521_inline(L_3, L_4, NULL);
		// }
		goto IL_0024;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001d;
		}
		throw e;
	}

CATCH_001d:
	{// begin catch(System.Exception)
		// Debug.LogError(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0024;
	}// end catch (depth: 1)

IL_0024:
	{
		// m_RemoteToClient.Remove(remote);
		Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* L_5 = __this->___m_RemoteToClient_13;
		Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_6 = ___remote0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_Remove_m7A2AE5424A6EC51E36DA64369D4587CD0751B114(L_5, L_6, Dictionary_2_Remove_m7A2AE5424A6EC51E36DA64369D4587CD0751B114_RuntimeMethod_var);
		// OnChanged(false);
		Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F(__this, (bool)0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::InitializeClient(Unity.LiveCapture.Networking.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_InitializeClient_m9A0CDB82F06056E4588317F3ABAE419768F63DE8 (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59C097829F877055F44981241DCB20C72DFECB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF_m1350C72A53C3593BAECE0747B347D8F8B7406A50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75991A285E654AA7FF9B2214D93E674A19AF4F65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECA52872FBB0CBCCE8B09E573C7C466E9F20462);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* V_1 = NULL;
	Type_t* V_2 = NULL;
	Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* V_3 = NULL;
	CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d7:
			{// begin finally (depth: 1)
				// message.Dispose();
				Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_0 = ___message0;
				NullCheck(L_0);
				Message_Dispose_mCAD58E44ECE584B33BF7A9C965B2ABC344B2AF8E(L_0, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if (message.ChannelType != ChannelType.ReliableOrdered)
					Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_1 = ___message0;
					NullCheck(L_1);
					uint8_t L_2;
					L_2 = Message_get_ChannelType_m28C6C51AE0C5AD60FAD3744E3B1FFB4A59E55586(L_1, NULL);
					if (!L_2)
					{
						goto IL_000d_2;
					}
				}
				{
					// return;
					goto IL_00de;
				}

IL_000d_2:
				{
					// var streamReader = new StreamReader(message.Data, Encoding.UTF8);
					Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_3 = ___message0;
					NullCheck(L_3);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4;
					L_4 = Message_get_Data_m8FD969BC0E5B68E890E0CC8C0F5D8E3716A4004F(L_3, NULL);
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
					L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
					NullCheck(L_6);
					StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(L_6, L_4, L_5, NULL);
					// var json = streamReader.ReadToEnd();
					NullCheck(L_6);
					String_t* L_7;
					L_7 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
					V_0 = L_7;
					// var data = default(ClientInitialization);
					V_1 = (ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF*)NULL;
				}
				try
				{// begin try (depth: 3)
					// data = JsonUtility.FromJson<ClientInitialization>(json);
					String_t* L_8 = V_0;
					ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_9;
					L_9 = JsonUtility_FromJson_TisClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF_m1350C72A53C3593BAECE0747B347D8F8B7406A50(L_8, JsonUtility_FromJson_TisClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF_m1350C72A53C3593BAECE0747B347D8F8B7406A50_RuntimeMethod_var);
					V_1 = L_9;
					// }
					goto IL_0044_2;
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_002e_2;
					}
					throw e;
				}

CATCH_002e_2:
				{// begin catch(System.Exception)
					// catch (Exception)
					// Debug.LogError($"{nameof(CompanionAppServer)} failed to initialize client connection! Could not parse JSON: {json}");
					String_t* L_10 = V_0;
					String_t* L_11;
					L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB512C54EF056C79985F1D9B2C577BF9F7DB51065)), L_10, NULL);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
					// return;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00de;
				}// end catch (depth: 3)

IL_0044_2:
				{
					// if (!s_TypeToClientType.TryGetValue(data.Type, out var clientType))
					il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
					Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_12 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_TypeToClientType_7;
					ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_13 = V_1;
					NullCheck(L_13);
					String_t* L_14 = L_13->___Type_2;
					NullCheck(L_12);
					bool L_15;
					L_15 = Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402(L_12, L_14, (&V_2), Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var);
					if (L_15)
					{
						goto IL_0074_2;
					}
				}
				{
					// Debug.LogError($"Unknown client type \"{data.Type}\" connected to {nameof(CompanionAppServer)}!");
					ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_16 = V_1;
					NullCheck(L_16);
					String_t* L_17 = L_16->___Type_2;
					String_t* L_18;
					L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral75991A285E654AA7FF9B2214D93E674A19AF4F65, L_17, _stringLiteralEECA52872FBB0CBCCE8B09E573C7C466E9F20462, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
					// return;
					goto IL_00de;
				}

IL_0074_2:
				{
					// var remote = message.Remote;
					Message_tE607EF9692ADC7782C7F376375AB9C86BA3F5621* L_19 = ___message0;
					NullCheck(L_19);
					Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_20;
					L_20 = Message_get_Remote_m2B823C0BBE57700E54F97106C39F3F8897941D1A(L_19, NULL);
					V_3 = L_20;
					// var client = Activator.CreateInstance(clientType, m_Server, remote, data) as CompanionAppClient;
					Type_t* L_21 = V_2;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
					NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_24 = __this->___m_Server_12;
					NullCheck(L_23);
					ArrayElementTypeCheck (L_23, L_24);
					(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_23;
					Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_26 = V_3;
					NullCheck(L_25);
					ArrayElementTypeCheck (L_25, L_26);
					(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_25;
					ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* L_28 = V_1;
					NullCheck(L_27);
					ArrayElementTypeCheck (L_27, L_28);
					(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_28);
					RuntimeObject* L_29;
					L_29 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_21, L_27, NULL);
					V_4 = ((CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997*)IsInstClass((RuntimeObject*)L_29, CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997_il2cpp_TypeInfo_var));
					// client.SendProtocol();
					CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* L_30 = V_4;
					NullCheck(L_30);
					CompanionAppClient_SendProtocol_m75F02B37045C734DC59732D8A562774CEECC3A18(L_30, NULL);
					// m_RemoteToClient.Add(remote, client);
					Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* L_31 = __this->___m_RemoteToClient_13;
					Remote_tF38CE1700BD40033E157058052204CB4F26EFFFB* L_32 = V_3;
					CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* L_33 = V_4;
					NullCheck(L_31);
					Dictionary_2_Add_m59C097829F877055F44981241DCB20C72DFECB22(L_31, L_32, L_33, Dictionary_2_Add_m59C097829F877055F44981241DCB20C72DFECB22_RuntimeMethod_var);
					// AssignOwner(client);
					CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* L_34 = V_4;
					il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
					CompanionAppServer_AssignOwner_m64514CEF87369E5F01922E7FE7D74F5D27F33D92(L_34, NULL);
					// ClientConnected.Invoke(client);
					Action_1_t2F9921B51B4C3C84BC57BE7C1780CDA6A655C947* L_35 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___ClientConnected_5;
					CompanionAppClient_tA3CDA8555A294ADB32EE09383C063311A0D5B997* L_36 = V_4;
					NullCheck(L_35);
					Action_1_Invoke_m3DAE0370D00930CBFA2BBF8C4B1CC2B919165521_inline(L_35, L_36, NULL);
					// OnChanged(false);
					Connection_OnChanged_mA835227BDE7A3508D8B901042A904E236129024F(__this, (bool)0, NULL);
					// }
					goto IL_00de;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00d0_1;
				}
				throw e;
			}

CATCH_00d0_1:
			{// begin catch(System.Exception)
				// Debug.LogException(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00de;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::AssignOwner(Unity.LiveCapture.CompanionApp.ICompanionAppClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer_AssignOwner_m64514CEF87369E5F01922E7FE7D74F5D27F33D92 (RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompanionAppClient_t82276BEC4F681A03C398D6303D3FBFB720014D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t373B19994393C229F7AD7A7B0D4FC163512B5EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDFAF807935030EBD71F81F17B31C03B0C8425941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAssignOwnerU3Eb__38_0_mD5D0B4A4E18D96E0A0709B08DC38179FEA46DE77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* G_B2_0 = NULL;
	List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* G_B2_1 = NULL;
	Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* G_B1_0 = NULL;
	List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* G_B1_1 = NULL;
	{
		// foreach (var handler in s_ClientConnectHandlers.OrderByDescending(h => h.Time.Ticks))
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_0 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* L_1 = ((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_1;
		Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* L_3 = ((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* L_4 = (Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A*)il2cpp_codegen_object_new(Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m64249077687D4EDF03542B945D821FD98186B4A5(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CAssignOwnerU3Eb__38_0_mD5D0B4A4E18D96E0A0709B08DC38179FEA46DE77_RuntimeMethod_var), NULL);
		Func_2_tC8B6BE8813773415FC9D7AA2161F134B8B71029A* L_5 = L_4;
		((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9__38_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A(G_B2_1, G_B2_0, Enumerable_OrderByDescending_TisConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBEF568CC13CFF8BFFEF428F9C07A300A413E443A_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::GetEnumerator() */, IEnumerable_1_t373B19994393C229F7AD7A7B0D4FC163512B5EAD_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_0;
					if (!L_8)
					{
						goto IL_0077;
					}
				}
				{
					RuntimeObject* L_9 = V_0;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0077:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_0031_1:
			{
				// foreach (var handler in s_ClientConnectHandlers.OrderByDescending(h => h.Time.Ticks))
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_11;
				L_11 = InterfaceFuncInvoker0< ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler>::get_Current() */, IEnumerator_1_tDFAF807935030EBD71F81F17B31C03B0C8425941_il2cpp_TypeInfo_var, L_10);
				V_1 = L_11;
			}
			try
			{// begin try (depth: 2)
				{
					// if (handler.Name == client.Name)
					ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_12 = V_1;
					String_t* L_13 = L_12.___Name_0;
					RuntimeObject* L_14 = ___client0;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Unity.LiveCapture.CompanionApp.ICompanionAppClient::get_Name() */, ICompanionAppClient_t82276BEC4F681A03C398D6303D3FBFB720014D89_il2cpp_TypeInfo_var, L_14);
					bool L_16;
					L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, L_15, NULL);
					if (!L_16)
					{
						goto IL_005b_2;
					}
				}
				{
					// if (handler.Handler(client))
					ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_17 = V_1;
					Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_18 = L_17.___Handler_2;
					RuntimeObject* L_19 = ___client0;
					NullCheck(L_18);
					bool L_20;
					L_20 = Func_2_Invoke_mDE5D4E86377608BBCDFD2D1C071E9BE686D5A3C5_inline(L_18, L_19, NULL);
					if (!L_20)
					{
						goto IL_005b_2;
					}
				}
				{
					// return;
					goto IL_00bf;
				}

IL_005b_2:
				{
					// }
					goto IL_0064_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_005d_1;
				}
				throw e;
			}

CATCH_005d_1:
			{// begin catch(System.Exception)
				// Debug.LogException(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0064_1;
			}// end catch (depth: 2)

IL_0064_1:
			{
				// foreach (var handler in s_ClientConnectHandlers.OrderByDescending(h => h.Time.Ticks))
				RuntimeObject* L_21 = V_0;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		// foreach (var handler in s_ClientConnectHandlers)
		il2cpp_codegen_runtime_class_init_inline(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var);
		List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* L_23 = ((CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_StaticFields*)il2cpp_codegen_static_fields_for(CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE_il2cpp_TypeInfo_var))->___s_ClientConnectHandlers_8;
		NullCheck(L_23);
		Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15 L_24;
		L_24 = List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351(L_23, List_1_GetEnumerator_m74BFFF4B4DB16AC4B31A4AB40A23EF5AB9B24351_RuntimeMethod_var);
		V_2 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904((&V_2), Enumerator_Dispose_m7A0E9934242979896780C0AED46F274937780904_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a6_1;
			}

IL_0085_1:
			{
				// foreach (var handler in s_ClientConnectHandlers)
				ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_25;
				L_25 = Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_inline((&V_2), Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_RuntimeMethod_var);
				V_3 = L_25;
			}
			try
			{// begin try (depth: 2)
				{
					// if (handler.Handler(client))
					ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_26 = V_3;
					Func_2_tF2DB136FFE61F8E456C5D2667EC1113A538692A3* L_27 = L_26.___Handler_2;
					RuntimeObject* L_28 = ___client0;
					NullCheck(L_27);
					bool L_29;
					L_29 = Func_2_Invoke_mDE5D4E86377608BBCDFD2D1C071E9BE686D5A3C5_inline(L_27, L_28, NULL);
					if (!L_29)
					{
						goto IL_009d_2;
					}
				}
				{
					// return;
					goto IL_00bf;
				}

IL_009d_2:
				{
					// }
					goto IL_00a6_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_009f_1;
				}
				throw e;
			}

CATCH_009f_1:
			{// begin catch(System.Exception)
				// Debug.LogException(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00a6_1;
			}// end catch (depth: 2)

IL_00a6_1:
			{
				// foreach (var handler in s_ClientConnectHandlers)
				bool L_30;
				L_30 = Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD((&V_2), Enumerator_MoveNext_m8738028C18FEEF15C489B0845AA5352718820DBD_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0085_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompanionAppServer__ctor_m15EA4B99A96540D0DC94EC2C331236DCAD76DEBA (CompanionAppServer_tC723CA4A23A75FBD4B1E133F0742A154E0D881CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE5C21F1E5D11F8506AE92B645A45799D25C5CF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int m_Port = k_DefaultPort;
		__this->___m_Port_9 = ((int32_t)9000);
		// bool m_AutoStartOnPlay = true;
		__this->___m_AutoStartOnPlay_10 = (bool)1;
		// readonly DiscoveryServer m_Discovery = new DiscoveryServer();
		DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10* L_0 = (DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10*)il2cpp_codegen_object_new(DiscoveryServer_t5E85B4802022AA918F25AD1D8850481F8D215C10_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DiscoveryServer__ctor_m014959A7333400332611807F4AA59E9A827A1BEE(L_0, NULL);
		__this->___m_Discovery_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Discovery_11), (void*)L_0);
		// readonly NetworkServer m_Server = new NetworkServer();
		NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* L_1 = (NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E*)il2cpp_codegen_object_new(NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NetworkServer__ctor_m24F5F735DDA6BEC3F6D0D8EAFB7B2D36C5D12289(L_1, NULL);
		__this->___m_Server_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Server_12), (void*)L_1);
		// readonly Dictionary<Remote, ICompanionAppClient> m_RemoteToClient = new Dictionary<Remote, ICompanionAppClient>();
		Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943* L_2 = (Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943*)il2cpp_codegen_object_new(Dictionary_2_t9ACF528770095F31A3525A023BCC4E9C6617F943_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mE5C21F1E5D11F8506AE92B645A45799D25C5CF6F(L_2, Dictionary_2__ctor_mE5C21F1E5D11F8506AE92B645A45799D25C5CF6F_RuntimeMethod_var);
		__this->___m_RemoteToClient_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RemoteToClient_13), (void*)L_2);
		Connection__ctor_m5D8F36A23471DC7730784D79F82A4E8040EEAE35(__this, NULL);
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
// Conversion methods for marshalling of: Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
IL2CPP_EXTERN_C void ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshal_pinvoke(const ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C& unmarshaled, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Time_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Time' of type 'ConnectHandler'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Time_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshal_pinvoke_back(const ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_pinvoke& marshaled, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C& unmarshaled)
{
	Exception_t* ___Time_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Time' of type 'ConnectHandler'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Time_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
IL2CPP_EXTERN_C void ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshal_pinvoke_cleanup(ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
IL2CPP_EXTERN_C void ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshal_com(const ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C& unmarshaled, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_com& marshaled)
{
	Exception_t* ___Time_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Time' of type 'ConnectHandler'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Time_1Exception, NULL);
}
IL2CPP_EXTERN_C void ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshal_com_back(const ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_com& marshaled, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C& unmarshaled)
{
	Exception_t* ___Time_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Time' of type 'ConnectHandler'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Time_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler
IL2CPP_EXTERN_C void ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshal_com_cleanup(ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCB6A0B8F2F2744899C8F7289E17B4D9D67E2FC7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* L_0 = (U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1*)il2cpp_codegen_object_new(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCDA66CDECAB705D7E4AF2CB21C78FE5F7930B8DB(L_0, NULL);
		((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCDA66CDECAB705D7E4AF2CB21C78FE5F7930B8DB (U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::<.cctor>b__12_0(Unity.LiveCapture.CompanionApp.ICompanionAppClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__12_0_m15860E01BEA5A33A26DF177100B719718DD752D0 (U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public static event Action<ICompanionAppClient> ClientConnected = delegate {};
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::<.cctor>b__12_1(Unity.LiveCapture.CompanionApp.ICompanionAppClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__12_1_m06CD19031F07CD4027BBD770BA833FD8DA154B96 (U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* __this, RuntimeObject* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public static event Action<ICompanionAppClient> ClientDisconnected = delegate {};
		return;
	}
}
// System.Int64 Unity.LiveCapture.CompanionApp.CompanionAppServer/<>c::<AssignOwner>b__38_0(Unity.LiveCapture.CompanionApp.CompanionAppServer/ConnectHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CAssignOwnerU3Eb__38_0_mD5D0B4A4E18D96E0A0709B08DC38179FEA46DE77 (U3CU3Ec_t0706FC09BFDF3BBDD305C0524957A9B774DEEDD1* __this, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C ___h0, const RuntimeMethod* method) 
{
	{
		// foreach (var handler in s_ClientConnectHandlers.OrderByDescending(h => h.Time.Ticks))
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&(&___h0)->___Time_1);
		int64_t L_1;
		L_1 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6(L_0, NULL);
		return L_1;
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
// System.Void Unity.LiveCapture.CompanionApp.ClientInitialization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientInitialization__ctor_m8A7D45AFF2E5B8416D4DF72C0AEE7386C81FF118 (ClientInitialization_t0849DB03F625A61D9BBFAD52C09D53C40AA550CF* __this, const RuntimeMethod* method) 
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
// Unity.LiveCapture.CompanionApp.SlateDescriptor Unity.LiveCapture.CompanionApp.SlateDescriptor::Create(Unity.LiveCapture.ISlate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* SlateDescriptor_Create_mA8A63DB67EBD2DBE030B811301BC44D65576587E (RuntimeObject* ___slate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new SlateDescriptor();
		SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* L_0 = (SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415*)il2cpp_codegen_object_new(SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SlateDescriptor__ctor_m177A3E4390FEC07A8A2EF6424C590AE0927712BB(L_0, NULL);
		// return descriptor;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.SlateDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlateDescriptor__ctor_m177A3E4390FEC07A8A2EF6424C590AE0927712BB (SlateDescriptor_t48AF471E8A49DB9D62F6A9A0C2EE26E817383415* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ShotName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___ShotName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShotName_1), (void*)L_0);
		// public string Description = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___Description_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Description_3), (void*)L_1);
		// public int SelectedTake = -1;
		__this->___SelectedTake_5 = (-1);
		// public int IterationBase = -1;
		__this->___IterationBase_6 = (-1);
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
// System.Guid Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TakeDescriptor_get_Guid_m06D999DB5515F2B642A1C4DE08099F70E105B3C7 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Guid;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_0 = __this->___m_Guid_0;
		Guid_t L_1;
		L_1 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Guid(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Guid_mF982A57F437E3C4D1A78614FB8F442F1B80116E2 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Guid = value;
		Guid_t L_0 = ___value0;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_1;
		L_1 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_0, NULL);
		__this->___m_Guid_0 = L_1;
		return;
	}
}
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_Name_mEC4FE426A6C7FA04BACD2FE3B01E94C078375374 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Name;
		String_t* L_0 = __this->___m_Name_1;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Name_m15B6CDB813AB9967EBE7FE86FE1D5DCDB2520371 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Name = value;
		String_t* L_0 = ___value0;
		__this->___m_Name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_1), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_SceneNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_SceneNumber_mD32C9EE95C0D32851011BCFB017027B49C2A35C9 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SceneNumber;
		int32_t L_0 = __this->___m_SceneNumber_2;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_SceneNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_SceneNumber_m8B3072D2E87995067E237963CD4AF73E564ED10D (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SceneNumber = value;
		int32_t L_0 = ___value0;
		__this->___m_SceneNumber_2 = L_0;
		return;
	}
}
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_ShotName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_ShotName_mE2227E7DA9A0227534E5C2332BA856D3F5A279D8 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ShotName;
		String_t* L_0 = __this->___m_ShotName_3;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_ShotName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_ShotName_m88E3D40E508ADD41D15C12C82F9AB8C2A47A1FEE (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ShotName = value;
		String_t* L_0 = ___value0;
		__this->___m_ShotName_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ShotName_3), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_TakeNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_TakeNumber_m5F9E16BC3A98ACB8F3C901FC030729A84A7F65E1 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TakeNumber;
		int32_t L_0 = __this->___m_TakeNumber_4;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_TakeNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_TakeNumber_mAC43C859C444266BFEE3E4179F0CAFDE6D31DFD5 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TakeNumber = value;
		int32_t L_0 = ___value0;
		__this->___m_TakeNumber_4 = L_0;
		return;
	}
}
// System.Int64 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_CreationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TakeDescriptor_get_CreationTime_m60977BCF6C82E036E3415663B01DE594F77D98F5 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CreationTime;
		int64_t L_0 = __this->___m_CreationTime_5;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_CreationTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_CreationTime_mEFD34D1F18CFCA4E147BC684FFD85ADDE490FE78 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set => m_CreationTime = value;
		int64_t L_0 = ___value0;
		__this->___m_CreationTime_5 = L_0;
		return;
	}
}
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_Description_mC24B6BD846858C94277D1DB58815CD85AF5B65B6 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Description;
		String_t* L_0 = __this->___m_Description_6;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Description_m8296885557840A35979D3EA82CF0E4A970E4B9CF (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Description = value;
		String_t* L_0 = ___value0;
		__this->___m_Description_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Description_6), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Rating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_Rating_mDC84C096C1FA666E4AC27D14A2C7EDD40A46FDEC (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Rating;
		int32_t L_0 = __this->___m_Rating_7;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Rating(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Rating_m1AB17C594C0ED03C25DF9B42E384D709F5F947BE (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Rating = value;
		int32_t L_0 = ___value0;
		__this->___m_Rating_7 = L_0;
		return;
	}
}
// Unity.LiveCapture.FrameRate Unity.LiveCapture.CompanionApp.TakeDescriptor::get_FrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 TakeDescriptor_get_FrameRate_mFE813AA5209006C3DA2B5071D877144DFF246990 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FrameRate;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0 = __this->___m_FrameRate_8;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_FrameRate(Unity.LiveCapture.FrameRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_FrameRate_m7959F676E74DAC75F92E082E823A19FF46C40DBF (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FrameRate = value;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0 = ___value0;
		__this->___m_FrameRate_8 = L_0;
		return;
	}
}
// System.Guid Unity.LiveCapture.CompanionApp.TakeDescriptor::get_Screenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TakeDescriptor_get_Screenshot_m6CF8E47BAA0EAFC0FBC515A526F413A05162CB9B (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Screenshot;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_0 = __this->___m_Screenshot_9;
		Guid_t L_1;
		L_1 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_Screenshot(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_Screenshot_m62448E238A553F6D95C29B48AB55F22C27F007F8 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Screenshot = value;
		Guid_t L_0 = ___value0;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_1;
		L_1 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_0, NULL);
		__this->___m_Screenshot_9 = L_1;
		return;
	}
}
// System.String Unity.LiveCapture.CompanionApp.TakeDescriptor::get_TimelineName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_TimelineName_mBD807CFF84435A0079CC116C74440E3F58796528 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TimelineName;
		String_t* L_0 = __this->___m_TimelineName_10;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_TimelineName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_TimelineName_m6DDAADF340A0967AE07B96578BF79DCDACF784BA (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TimelineName = value;
		String_t* L_0 = ___value0;
		__this->___m_TimelineName_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TimelineName_10), (void*)L_0);
		return;
	}
}
// System.Double Unity.LiveCapture.CompanionApp.TakeDescriptor::get_TimelineDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TakeDescriptor_get_TimelineDuration_m047CD42E1EC46D5294F219D3B5BE4A1CC0ADFD25 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TimelineDuration;
		double L_0 = __this->___m_TimelineDuration_11;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::set_TimelineDuration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_set_TimelineDuration_m5E879D7889DB5451AFF19E95CA99316A17E19F65 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TimelineDuration = value;
		double L_0 = ___value0;
		__this->___m_TimelineDuration_11 = L_0;
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::CopyFrom(Unity.LiveCapture.CompanionApp.TakeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor_CopyFrom_m9A7060A36774BDBF7DC4E59F315E691FDCDF6E34 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___other0, const RuntimeMethod* method) 
{
	{
		// Guid = other.Guid;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_0 = ___other0;
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = TakeDescriptor_get_Guid_m06D999DB5515F2B642A1C4DE08099F70E105B3C7(L_0, NULL);
		TakeDescriptor_set_Guid_mF982A57F437E3C4D1A78614FB8F442F1B80116E2(__this, L_1, NULL);
		// Name = other.Name;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TakeDescriptor_get_Name_mEC4FE426A6C7FA04BACD2FE3B01E94C078375374_inline(L_2, NULL);
		TakeDescriptor_set_Name_m15B6CDB813AB9967EBE7FE86FE1D5DCDB2520371_inline(__this, L_3, NULL);
		// SceneNumber = other.SceneNumber;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TakeDescriptor_get_SceneNumber_mD32C9EE95C0D32851011BCFB017027B49C2A35C9_inline(L_4, NULL);
		TakeDescriptor_set_SceneNumber_m8B3072D2E87995067E237963CD4AF73E564ED10D_inline(__this, L_5, NULL);
		// ShotName = other.ShotName;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = TakeDescriptor_get_ShotName_mE2227E7DA9A0227534E5C2332BA856D3F5A279D8_inline(L_6, NULL);
		TakeDescriptor_set_ShotName_m88E3D40E508ADD41D15C12C82F9AB8C2A47A1FEE_inline(__this, L_7, NULL);
		// TakeNumber = other.TakeNumber;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_8 = ___other0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = TakeDescriptor_get_TakeNumber_m5F9E16BC3A98ACB8F3C901FC030729A84A7F65E1_inline(L_8, NULL);
		TakeDescriptor_set_TakeNumber_mAC43C859C444266BFEE3E4179F0CAFDE6D31DFD5_inline(__this, L_9, NULL);
		// CreationTime = other.CreationTime;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_10 = ___other0;
		NullCheck(L_10);
		int64_t L_11;
		L_11 = TakeDescriptor_get_CreationTime_m60977BCF6C82E036E3415663B01DE594F77D98F5_inline(L_10, NULL);
		TakeDescriptor_set_CreationTime_mEFD34D1F18CFCA4E147BC684FFD85ADDE490FE78_inline(__this, L_11, NULL);
		// Description = other.Description;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_12 = ___other0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = TakeDescriptor_get_Description_mC24B6BD846858C94277D1DB58815CD85AF5B65B6_inline(L_12, NULL);
		TakeDescriptor_set_Description_m8296885557840A35979D3EA82CF0E4A970E4B9CF_inline(__this, L_13, NULL);
		// Rating = other.Rating;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_14 = ___other0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = TakeDescriptor_get_Rating_mDC84C096C1FA666E4AC27D14A2C7EDD40A46FDEC_inline(L_14, NULL);
		TakeDescriptor_set_Rating_m1AB17C594C0ED03C25DF9B42E384D709F5F947BE_inline(__this, L_15, NULL);
		// FrameRate = other.FrameRate;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_16 = ___other0;
		NullCheck(L_16);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_17;
		L_17 = TakeDescriptor_get_FrameRate_mFE813AA5209006C3DA2B5071D877144DFF246990_inline(L_16, NULL);
		TakeDescriptor_set_FrameRate_m7959F676E74DAC75F92E082E823A19FF46C40DBF_inline(__this, L_17, NULL);
		// Screenshot = other.Screenshot;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_18 = ___other0;
		NullCheck(L_18);
		Guid_t L_19;
		L_19 = TakeDescriptor_get_Screenshot_m6CF8E47BAA0EAFC0FBC515A526F413A05162CB9B(L_18, NULL);
		TakeDescriptor_set_Screenshot_m62448E238A553F6D95C29B48AB55F22C27F007F8(__this, L_19, NULL);
		// TimelineName = other.TimelineName;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_20 = ___other0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = TakeDescriptor_get_TimelineName_mBD807CFF84435A0079CC116C74440E3F58796528_inline(L_20, NULL);
		TakeDescriptor_set_TimelineName_m6DDAADF340A0967AE07B96578BF79DCDACF784BA_inline(__this, L_21, NULL);
		// TimelineDuration = other.TimelineDuration;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_22 = ___other0;
		NullCheck(L_22);
		double L_23;
		L_23 = TakeDescriptor_get_TimelineDuration_m047CD42E1EC46D5294F219D3B5BE4A1CC0ADFD25_inline(L_22, NULL);
		TakeDescriptor_set_TimelineDuration_m5E879D7889DB5451AFF19E95CA99316A17E19F65_inline(__this, L_23, NULL);
		// }
		return;
	}
}
// Unity.LiveCapture.CompanionApp.TakeDescriptor Unity.LiveCapture.CompanionApp.TakeDescriptor::Create(Unity.LiveCapture.Take)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* TakeDescriptor_Create_mC7BA70803E9F3E4C92902BE18DCD613DF9A90418 (Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* ___take0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new TakeDescriptor();
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_0 = (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695*)il2cpp_codegen_object_new(TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TakeDescriptor__ctor_mFE5F68FBDCD44B12E7EE545AF93D565CC20E4139(L_0, NULL);
		// return descriptor;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptor__ctor_mFE5F68FBDCD44B12E7EE545AF93D565CC20E4139 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LiveCapture.CompanionApp.SlateChangeTracker::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlateChangeTracker_Reset_mC287E21CB3F282A92FF8674502AAE125785487BA (SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Slate = null;
		__this->___m_Slate_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Slate_0), (void*)(RuntimeObject*)NULL);
		// m_SceneNumber = 0;
		__this->___m_SceneNumber_1 = 0;
		// m_ShotName = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_ShotName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ShotName_2), (void*)L_0);
		// m_TakeNumber = 0;
		__this->___m_TakeNumber_3 = 0;
		// m_Description = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Description_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Description_4), (void*)L_1);
		// m_Take = null;
		__this->___m_Take_5 = (Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Take_5), (void*)(Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B*)NULL);
		// m_IterationBase = null;
		__this->___m_IterationBase_6 = (Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IterationBase_6), (void*)(Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B*)NULL);
		// }
		return;
	}
}
// System.Boolean Unity.LiveCapture.CompanionApp.SlateChangeTracker::Changed(Unity.LiveCapture.ISlate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlateChangeTracker_Changed_mC4C0B34EF3F8EE709117B1CCD14F86ADC2547AEA (SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93* __this, RuntimeObject* ___slate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var changed = m_Slate != slate;
		RuntimeObject* L_0 = __this->___m_Slate_0;
		RuntimeObject* L_1 = ___slate0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (slate != null)
		RuntimeObject* L_2 = ___slate0;
		if (!L_2)
		{
			goto IL_00da;
		}
	}
	{
		// changed |= m_SceneNumber != slate.SceneNumber;
		bool L_3 = V_0;
		int32_t L_4 = __this->___m_SceneNumber_1;
		RuntimeObject* L_5 = ___slate0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.LiveCapture.ISlate::get_SceneNumber() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_5);
		V_0 = (bool)((int32_t)((int32_t)L_3|((((int32_t)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		// changed |= m_ShotName != slate.ShotName;
		bool L_7 = V_0;
		String_t* L_8 = __this->___m_ShotName_2;
		RuntimeObject* L_9 = ___slate0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Unity.LiveCapture.ISlate::get_ShotName() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_9);
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_8, L_10, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_7|(int32_t)L_11));
		// changed |= m_TakeNumber != slate.TakeNumber;
		bool L_12 = V_0;
		int32_t L_13 = __this->___m_TakeNumber_3;
		RuntimeObject* L_14 = ___slate0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.LiveCapture.ISlate::get_TakeNumber() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_14);
		V_0 = (bool)((int32_t)((int32_t)L_12|((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		// changed |= m_Description != slate.Description;
		bool L_16 = V_0;
		String_t* L_17 = __this->___m_Description_4;
		RuntimeObject* L_18 = ___slate0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.LiveCapture.ISlate::get_Description() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_18);
		bool L_20;
		L_20 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_17, L_19, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_16|(int32_t)L_20));
		// changed |= m_Take != slate.Take;
		bool L_21 = V_0;
		Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* L_22 = __this->___m_Take_5;
		RuntimeObject* L_23 = ___slate0;
		NullCheck(L_23);
		Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* L_24;
		L_24 = InterfaceFuncInvoker0< Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* >::Invoke(11 /* Unity.LiveCapture.Take Unity.LiveCapture.ISlate::get_Take() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_23);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, L_24, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_21|(int32_t)L_25));
		// changed |= m_IterationBase != slate.IterationBase;
		bool L_26 = V_0;
		Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* L_27 = __this->___m_IterationBase_6;
		RuntimeObject* L_28 = ___slate0;
		NullCheck(L_28);
		Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* L_29;
		L_29 = InterfaceFuncInvoker0< Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* >::Invoke(13 /* Unity.LiveCapture.Take Unity.LiveCapture.ISlate::get_IterationBase() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_28);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, L_29, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_30));
		// m_Slate = null;
		__this->___m_Slate_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Slate_0), (void*)(RuntimeObject*)NULL);
		// m_SceneNumber = slate.SceneNumber;
		RuntimeObject* L_31 = ___slate0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Unity.LiveCapture.ISlate::get_SceneNumber() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_31);
		__this->___m_SceneNumber_1 = L_32;
		// m_ShotName = slate.ShotName;
		RuntimeObject* L_33 = ___slate0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Unity.LiveCapture.ISlate::get_ShotName() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_33);
		__this->___m_ShotName_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ShotName_2), (void*)L_34);
		// m_TakeNumber = slate.TakeNumber;
		RuntimeObject* L_35 = ___slate0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Unity.LiveCapture.ISlate::get_TakeNumber() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_35);
		__this->___m_TakeNumber_3 = L_36;
		// m_Description = slate.Description;
		RuntimeObject* L_37 = ___slate0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Unity.LiveCapture.ISlate::get_Description() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_37);
		__this->___m_Description_4 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Description_4), (void*)L_38);
		// m_Take = slate.Take;
		RuntimeObject* L_39 = ___slate0;
		NullCheck(L_39);
		Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* L_40;
		L_40 = InterfaceFuncInvoker0< Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* >::Invoke(11 /* Unity.LiveCapture.Take Unity.LiveCapture.ISlate::get_Take() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_39);
		__this->___m_Take_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Take_5), (void*)L_40);
		// m_IterationBase = slate.IterationBase;
		RuntimeObject* L_41 = ___slate0;
		NullCheck(L_41);
		Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* L_42;
		L_42 = InterfaceFuncInvoker0< Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* >::Invoke(13 /* Unity.LiveCapture.Take Unity.LiveCapture.ISlate::get_IterationBase() */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_41);
		__this->___m_IterationBase_6 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IterationBase_6), (void*)L_42);
	}

IL_00da:
	{
		// m_Slate = slate;
		RuntimeObject* L_43 = ___slate0;
		__this->___m_Slate_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Slate_0), (void*)L_43);
		// return changed;
		bool L_44 = V_0;
		return L_44;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.SlateChangeTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlateChangeTracker__ctor_m8E09156DBBD5424FF4A534865D0050859B7E21E6 (SlateChangeTracker_t6B94EFC7A2EB5CBC14C3577DE54803E456F2EC93* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LiveCapture.CompanionApp.EditorAssetPreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorAssetPreview__ctor_m1D73AFA2ACDDB0DA44D647036C9B6C2CF0E8911E (EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366* __this, const RuntimeMethod* method) 
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
// Unity.LiveCapture.CompanionApp.TakeManager Unity.LiveCapture.CompanionApp.TakeManager::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* TakeManager_get_Default_m011D7C508B499CE4D98BBEB1CECF917C838981C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TakeManager Default { get; } = new TakeManager();
		il2cpp_codegen_runtime_class_init_inline(TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var);
		TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* L_0 = ((TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_StaticFields*)il2cpp_codegen_static_fields_for(TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager__ctor_mA703D48D522756EA71D5AA0D35F8F008EA2D8B66 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TakeManager() : this(new EditorAssetPreview()) {}
		EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366* L_0 = (EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366*)il2cpp_codegen_object_new(EditorAssetPreview_t45F925A4E6C7D3CCF9694D0C1C3C1CEF7EB0E366_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EditorAssetPreview__ctor_m1D73AFA2ACDDB0DA44D647036C9B6C2CF0E8911E(L_0, NULL);
		TakeManager__ctor_mE77849C0649EF90427D7EFE0391E18E7F3327DF1(__this, L_0, NULL);
		// public TakeManager() : this(new EditorAssetPreview()) {}
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::.ctor(Unity.LiveCapture.CompanionApp.IAssetPreview)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager__ctor_mE77849C0649EF90427D7EFE0391E18E7F3327DF1 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, RuntimeObject* ___assetPreview0, const RuntimeMethod* method) 
{
	{
		// public TakeManager(IAssetPreview assetPreview)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_AssetPreview = assetPreview;
		RuntimeObject* L_0 = ___assetPreview0;
		__this->___m_AssetPreview_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AssetPreview_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::SelectTake(Unity.LiveCapture.ISlate,Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager_SelectTake_m02B7A793DFB2C9F079414380A60D2AD8B2CB631C (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, RuntimeObject* ___slate0, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid1, const RuntimeMethod* method) 
{
	{
		// if (slate == null)
		RuntimeObject* L_0 = ___slate0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(slate));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E8A2C2B367D55750BE0540FDA5F91660DB242AC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TakeManager_SelectTake_m02B7A793DFB2C9F079414380A60D2AD8B2CB631C_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::SetTakeData(Unity.LiveCapture.CompanionApp.TakeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager_SetTakeData_m49B1FC998285FEA4596B7C2697F4D872184E002E (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___descriptor0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::DeleteTake(Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager_DeleteTake_m0943A6DBFFC79331D038408CE110706AA23C0FC3 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::SetIterationBase(Unity.LiveCapture.ISlate,Unity.LiveCapture.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager_SetIterationBase_m8A8F858CFEB8B63FCF05C1B8D6546D6A71B5E9B8 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, RuntimeObject* ___slate0, SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid1, const RuntimeMethod* method) 
{
	{
		// if (slate == null)
		RuntimeObject* L_0 = ___slate0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(slate));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E8A2C2B367D55750BE0540FDA5F91660DB242AC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TakeManager_SetIterationBase_m8A8F858CFEB8B63FCF05C1B8D6546D6A71B5E9B8_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::ClearIterationBase(Unity.LiveCapture.ISlate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager_ClearIterationBase_m9950295DE51F03BA903A0BC4BAAF895D52F82B60 (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* __this, RuntimeObject* ___slate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (slate == null)
		RuntimeObject* L_0 = ___slate0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(slate));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E8A2C2B367D55750BE0540FDA5F91660DB242AC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TakeManager_ClearIterationBase_m9950295DE51F03BA903A0BC4BAAF895D52F82B60_RuntimeMethod_var)));
	}

IL_000e:
	{
		// slate.IterationBase = null;
		RuntimeObject* L_2 = ___slate0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B* >::Invoke(14 /* System.Void Unity.LiveCapture.ISlate::set_IterationBase(Unity.LiveCapture.Take) */, ISlate_t4383D256133E174EA1D313036B95039D70C05A63_il2cpp_TypeInfo_var, L_2, (Take_tD35A46961A86FBA6137FF53A57D0D72EE3A06D1B*)NULL);
		// }
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.TakeManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeManager__cctor_m9A9BC33260F37D1A905F8FD0C0DC343A60179C67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TakeManager Default { get; } = new TakeManager();
		TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA* L_0 = (TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA*)il2cpp_codegen_object_new(TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TakeManager__ctor_mA703D48D522756EA71D5AA0D35F8F008EA2D8B66(L_0, NULL);
		((TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_StaticFields*)il2cpp_codegen_static_fields_for(TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_StaticFields*)il2cpp_codegen_static_fields_for(TakeManager_t7691756F8B9DA12605994656BBF1E5A9EB933EDA_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_0), (void*)L_0);
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
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::op_Explicit(Unity.LiveCapture.CompanionApp.TakeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* TakeDescriptorV0_op_Explicit_m05CF6D1932344427E82308BC8824EC4086CC1140 (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___take0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new TakeDescriptorV0
		// {
		//     m_Guid = take.Guid,
		//     m_Name = take.Name,
		//     m_SceneNumber = take.SceneNumber,
		//     m_ShotName = take.ShotName,
		//     m_TakeNumber = take.TakeNumber,
		//     m_CreationTime = take.CreationTime,
		//     m_Description = take.Description,
		//     m_Rating = take.Rating,
		//     m_FrameRate = take.FrameRate,
		//     m_Screenshot = take.Screenshot,
		//     m_TimelineName = take.TimelineName,
		//     m_TimelineDuration = take.TimelineDuration
		// };
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_0 = (TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2*)il2cpp_codegen_object_new(TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TakeDescriptorV0__ctor_mFFA2920447F5132F080A3859A416D6B45F3EAB3B(L_0, NULL);
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_1 = L_0;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_2 = ___take0;
		NullCheck(L_2);
		Guid_t L_3;
		L_3 = TakeDescriptor_get_Guid_m06D999DB5515F2B642A1C4DE08099F70E105B3C7(L_2, NULL);
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_4;
		L_4 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_3, NULL);
		NullCheck(L_1);
		L_1->___m_Guid_0 = L_4;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_5 = L_1;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_6 = ___take0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = TakeDescriptor_get_Name_mEC4FE426A6C7FA04BACD2FE3B01E94C078375374_inline(L_6, NULL);
		NullCheck(L_5);
		L_5->___m_Name_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___m_Name_1), (void*)L_7);
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_8 = L_5;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_9 = ___take0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TakeDescriptor_get_SceneNumber_mD32C9EE95C0D32851011BCFB017027B49C2A35C9_inline(L_9, NULL);
		NullCheck(L_8);
		L_8->___m_SceneNumber_2 = L_10;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_11 = L_8;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_12 = ___take0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = TakeDescriptor_get_ShotName_mE2227E7DA9A0227534E5C2332BA856D3F5A279D8_inline(L_12, NULL);
		NullCheck(L_11);
		L_11->___m_ShotName_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___m_ShotName_3), (void*)L_13);
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_14 = L_11;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_15 = ___take0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TakeDescriptor_get_TakeNumber_m5F9E16BC3A98ACB8F3C901FC030729A84A7F65E1_inline(L_15, NULL);
		NullCheck(L_14);
		L_14->___m_TakeNumber_4 = L_16;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_17 = L_14;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_18 = ___take0;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = TakeDescriptor_get_CreationTime_m60977BCF6C82E036E3415663B01DE594F77D98F5_inline(L_18, NULL);
		NullCheck(L_17);
		L_17->___m_CreationTime_5 = L_19;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_20 = L_17;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_21 = ___take0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = TakeDescriptor_get_Description_mC24B6BD846858C94277D1DB58815CD85AF5B65B6_inline(L_21, NULL);
		NullCheck(L_20);
		L_20->___m_Description_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___m_Description_6), (void*)L_22);
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_23 = L_20;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_24 = ___take0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TakeDescriptor_get_Rating_mDC84C096C1FA666E4AC27D14A2C7EDD40A46FDEC_inline(L_24, NULL);
		NullCheck(L_23);
		L_23->___m_Rating_7 = L_25;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_26 = L_23;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_27 = ___take0;
		NullCheck(L_27);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_28;
		L_28 = TakeDescriptor_get_FrameRate_mFE813AA5209006C3DA2B5071D877144DFF246990_inline(L_27, NULL);
		NullCheck(L_26);
		L_26->___m_FrameRate_8 = L_28;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_29 = L_26;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_30 = ___take0;
		NullCheck(L_30);
		Guid_t L_31;
		L_31 = TakeDescriptor_get_Screenshot_m6CF8E47BAA0EAFC0FBC515A526F413A05162CB9B(L_30, NULL);
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_32;
		L_32 = SerializableGuid_op_Implicit_mF365D02C972AF58E8A2ACB9E57EC2A8566EEABB4(L_31, NULL);
		NullCheck(L_29);
		L_29->___m_Screenshot_9 = L_32;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_33 = L_29;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_34 = ___take0;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = TakeDescriptor_get_TimelineName_mBD807CFF84435A0079CC116C74440E3F58796528_inline(L_34, NULL);
		NullCheck(L_33);
		L_33->___m_TimelineName_10 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___m_TimelineName_10), (void*)L_35);
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_36 = L_33;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_37 = ___take0;
		NullCheck(L_37);
		double L_38;
		L_38 = TakeDescriptor_get_TimelineDuration_m047CD42E1EC46D5294F219D3B5BE4A1CC0ADFD25_inline(L_37, NULL);
		NullCheck(L_36);
		L_36->___m_TimelineDuration_11 = L_38;
		return L_36;
	}
}
// Unity.LiveCapture.CompanionApp.TakeDescriptor Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::op_Explicit(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* TakeDescriptorV0_op_Explicit_mBD858E9E65D51EABD18AEDF7182F97906A0C5D10 (TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* ___take0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new TakeDescriptor
		// {
		//     Guid = take.m_Guid,
		//     Name = take.m_Name,
		//     SceneNumber = take.m_SceneNumber,
		//     ShotName = take.m_ShotName,
		//     TakeNumber = take.m_TakeNumber,
		//     CreationTime = take.m_CreationTime,
		//     Description = take.m_Description,
		//     Rating = take.m_Rating,
		//     FrameRate = take.m_FrameRate,
		//     Screenshot = take.m_Screenshot,
		//     TimelineName = take.m_TimelineName,
		//     TimelineDuration = take.m_TimelineDuration
		// };
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_0 = (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695*)il2cpp_codegen_object_new(TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TakeDescriptor__ctor_mFE5F68FBDCD44B12E7EE545AF93D565CC20E4139(L_0, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_1 = L_0;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_2 = ___take0;
		NullCheck(L_2);
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_3 = L_2->___m_Guid_0;
		Guid_t L_4;
		L_4 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_3, NULL);
		NullCheck(L_1);
		TakeDescriptor_set_Guid_mF982A57F437E3C4D1A78614FB8F442F1B80116E2(L_1, L_4, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_5 = L_1;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_6 = ___take0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___m_Name_1;
		NullCheck(L_5);
		TakeDescriptor_set_Name_m15B6CDB813AB9967EBE7FE86FE1D5DCDB2520371_inline(L_5, L_7, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_8 = L_5;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_9 = ___take0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___m_SceneNumber_2;
		NullCheck(L_8);
		TakeDescriptor_set_SceneNumber_m8B3072D2E87995067E237963CD4AF73E564ED10D_inline(L_8, L_10, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_11 = L_8;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_12 = ___take0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___m_ShotName_3;
		NullCheck(L_11);
		TakeDescriptor_set_ShotName_m88E3D40E508ADD41D15C12C82F9AB8C2A47A1FEE_inline(L_11, L_13, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_14 = L_11;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_15 = ___take0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___m_TakeNumber_4;
		NullCheck(L_14);
		TakeDescriptor_set_TakeNumber_mAC43C859C444266BFEE3E4179F0CAFDE6D31DFD5_inline(L_14, L_16, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_17 = L_14;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_18 = ___take0;
		NullCheck(L_18);
		int64_t L_19 = L_18->___m_CreationTime_5;
		NullCheck(L_17);
		TakeDescriptor_set_CreationTime_mEFD34D1F18CFCA4E147BC684FFD85ADDE490FE78_inline(L_17, L_19, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_20 = L_17;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_21 = ___take0;
		NullCheck(L_21);
		String_t* L_22 = L_21->___m_Description_6;
		NullCheck(L_20);
		TakeDescriptor_set_Description_m8296885557840A35979D3EA82CF0E4A970E4B9CF_inline(L_20, L_22, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_23 = L_20;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_24 = ___take0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___m_Rating_7;
		NullCheck(L_23);
		TakeDescriptor_set_Rating_m1AB17C594C0ED03C25DF9B42E384D709F5F947BE_inline(L_23, L_25, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_26 = L_23;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_27 = ___take0;
		NullCheck(L_27);
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_28 = L_27->___m_FrameRate_8;
		NullCheck(L_26);
		TakeDescriptor_set_FrameRate_m7959F676E74DAC75F92E082E823A19FF46C40DBF_inline(L_26, L_28, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_29 = L_26;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_30 = ___take0;
		NullCheck(L_30);
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_31 = L_30->___m_Screenshot_9;
		Guid_t L_32;
		L_32 = SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline(L_31, NULL);
		NullCheck(L_29);
		TakeDescriptor_set_Screenshot_m62448E238A553F6D95C29B48AB55F22C27F007F8(L_29, L_32, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_33 = L_29;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_34 = ___take0;
		NullCheck(L_34);
		String_t* L_35 = L_34->___m_TimelineName_10;
		NullCheck(L_33);
		TakeDescriptor_set_TimelineName_m6DDAADF340A0967AE07B96578BF79DCDACF784BA_inline(L_33, L_35, NULL);
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_36 = L_33;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_37 = ___take0;
		NullCheck(L_37);
		double L_38 = L_37->___m_TimelineDuration_11;
		NullCheck(L_36);
		TakeDescriptor_set_TimelineDuration_m5E879D7889DB5451AFF19E95CA99316A17E19F65_inline(L_36, L_38, NULL);
		return L_36;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptorV0__ctor_mFFA2920447F5132F080A3859A416D6B45F3EAB3B (TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* __this, const RuntimeMethod* method) 
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
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::op_Explicit(Unity.LiveCapture.CompanionApp.TakeDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* TakeDescriptorArrayV0_op_Explicit_mA59B79586FE4A8816FB741126849D44B890F98B7 (TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* ___takes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_mA97B09D9F98FA31E0ADBF9DA31CF83CDC6BF389C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_m60960D0E4E6D9A748FE8C9AC1269A009677806CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_m14DC0424FAD395BAD2B9C5FCABCBCA8C35C2D17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* V_0 = NULL;
	Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* G_B4_0 = NULL;
	TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* G_B4_1 = NULL;
	Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* G_B3_0 = NULL;
	TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* G_B3_1 = NULL;
	{
		// if (takes == null)
		TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* L_0 = ___takes0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// result = new TakeDescriptorV0[0];
		TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* L_1 = (TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B*)(TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B*)SZArrayNew(TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_1;
		goto IL_0037;
	}

IL_000c:
	{
		// result = takes.Select(t => (TakeDescriptorV0)t).ToArray();
		TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* L_2 = ___takes0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* L_3 = ((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* L_5 = ((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* L_6 = (Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199*)il2cpp_codegen_object_new(Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mEA24D26651DB8EC26367F978C329B90D5DCF9FDA(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_m14DC0424FAD395BAD2B9C5FCABCBCA8C35C2D17D_RuntimeMethod_var), NULL);
		Func_2_t72338FEDD166DFE7588418F3FB4B254DEE12B199* L_7 = L_6;
		((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_002c:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_mA97B09D9F98FA31E0ADBF9DA31CF83CDC6BF389C((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Select_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_mA97B09D9F98FA31E0ADBF9DA31CF83CDC6BF389C_RuntimeMethod_var);
		TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* L_9;
		L_9 = Enumerable_ToArray_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_m60960D0E4E6D9A748FE8C9AC1269A009677806CF(L_8, Enumerable_ToArray_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_m60960D0E4E6D9A748FE8C9AC1269A009677806CF_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0037:
	{
		// return new TakeDescriptorArrayV0
		// {
		//     m_Takes = result,
		// };
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_10 = (TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2*)il2cpp_codegen_object_new(TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TakeDescriptorArrayV0__ctor_mA35B519AE5F1D7F67007507FDB61A8303BB88407(L_10, NULL);
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_11 = L_10;
		TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* L_12 = V_0;
		NullCheck(L_11);
		L_11->___m_Takes_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___m_Takes_0), (void*)L_12);
		return L_11;
	}
}
// Unity.LiveCapture.CompanionApp.TakeDescriptor[] Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::op_Explicit(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* TakeDescriptorArrayV0_op_Explicit_m2C6F9843BF9BCDC09DD52EB0A2E2D40318968475 (TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* ___takes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5B7E66BF697B1321AD2FE46A5B4196D955294C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5C78114FC4FAB81FC7D4A7FF85183A8C9E744DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m45AFDC1EC351E3E71136C0EE1EAF6E9BA16CC9B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* G_B5_0 = NULL;
	TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* G_B5_1 = NULL;
	Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* G_B4_0 = NULL;
	TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* G_B4_1 = NULL;
	{
		// if (takes == null || takes.m_Takes == null)
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_0 = ___takes0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_1 = ___takes0;
		NullCheck(L_1);
		TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* L_2 = L_1->___m_Takes_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_000b:
	{
		// return new TakeDescriptor[0];
		TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* L_3 = (TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD*)(TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD*)SZArrayNew(TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_3;
	}

IL_0012:
	{
		// return takes.m_Takes.Select(t => (TakeDescriptor)t).ToArray();
		TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* L_4 = ___takes0;
		NullCheck(L_4);
		TakeDescriptorV0U5BU5D_t26D8C432704ECF688C4EF84525B9D86A75D3273B* L_5 = L_4->___m_Takes_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* L_6 = ((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2;
		Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* L_8 = ((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* L_9 = (Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1*)il2cpp_codegen_object_new(Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m3AE89C9BAB63EA793230DD778D4F0BB6271D4C71(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m45AFDC1EC351E3E71136C0EE1EAF6E9BA16CC9B7_RuntimeMethod_var), NULL);
		Func_2_t20428E856113F973DF6FEDBCA92D40568AF930D1* L_10 = L_9;
		((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2), (void*)L_10);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
	}

IL_0037:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Select_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5B7E66BF697B1321AD2FE46A5B4196D955294C8F((RuntimeObject*)G_B5_1, G_B5_0, Enumerable_Select_TisTakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5B7E66BF697B1321AD2FE46A5B4196D955294C8F_RuntimeMethod_var);
		TakeDescriptorU5BU5D_tFD4779752C1EA24F387FB619298B33AA23A575FD* L_12;
		L_12 = Enumerable_ToArray_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5C78114FC4FAB81FC7D4A7FF85183A8C9E744DC0(L_11, Enumerable_ToArray_TisTakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695_m5C78114FC4FAB81FC7D4A7FF85183A8C9E744DC0_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeDescriptorArrayV0__ctor_mA35B519AE5F1D7F67007507FDB61A8303BB88407 (TakeDescriptorArrayV0_t5DE2109DBD2EE46FDAFA8E7BA66F750CFADDC5F2* __this, const RuntimeMethod* method) 
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
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6D716E8D03EAB7A2EE86E2747CEFD72A8C981E23 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* L_0 = (U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060*)il2cpp_codegen_object_new(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m37DD06007BAB610447A6040E57FF6AE778134049(L_0, NULL);
		((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m37DD06007BAB610447A6040E57FF6AE778134049 (U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0 Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::<op_Explicit>b__1_0(Unity.LiveCapture.CompanionApp.TakeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_m14DC0424FAD395BAD2B9C5FCABCBCA8C35C2D17D (U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* __this, TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* ___t0, const RuntimeMethod* method) 
{
	{
		// result = takes.Select(t => (TakeDescriptorV0)t).ToArray();
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_0 = ___t0;
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_1;
		L_1 = TakeDescriptorV0_op_Explicit_m05CF6D1932344427E82308BC8824EC4086CC1140(L_0, NULL);
		return L_1;
	}
}
// Unity.LiveCapture.CompanionApp.TakeDescriptor Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorArrayV0/<>c::<op_Explicit>b__2_0(Unity.LiveCapture.CompanionApp.Networking.TakeDescriptorV0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m45AFDC1EC351E3E71136C0EE1EAF6E9BA16CC9B7 (U3CU3Ec_t6439F7818F9524EEB0995952F36E2C73DA48D060* __this, TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* ___t0, const RuntimeMethod* method) 
{
	{
		// return takes.m_Takes.Select(t => (TakeDescriptor)t).ToArray();
		TakeDescriptorV0_t06848B954205CAF989320423B90F2369114FEAC2* L_0 = ___t0;
		TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* L_1;
		L_1 = TakeDescriptorV0_op_Explicit_mBD858E9E65D51EABD18AEDF7182F97906A0C5D10(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t SerializableGuid_op_Implicit_mA4860F11E6E018CBB3D1EE0B4B94372626007E69_inline (SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 ___guid0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Guid(SerializableGuid guid) => guid.m_Guid;
		SerializableGuid_t78B40215B1F7ADE381848006701CD62F014876A7 L_0 = ___guid0;
		Guid_t L_1 = L_0.___m_Guid_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TextureData_get_metadata_mBFF6C67DC249BFD68F2BEF2E28EE21049907EA74_inline (TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443* __this, const RuntimeMethod* method) 
{
	{
		// public string metadata { get; }
		String_t* L_0 = __this->___U3CmetadataU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureData_get_texture_mAF3B046704D0E7F628FC3898C9F33DE3E82AC951_inline (TextureData_t8FDEF560664475D53EECBA11FD7297FBE4708443* __this, const RuntimeMethod* method) 
{
	{
		// public Texture2D texture { get; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___U3CtextureU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientAttribute_get_Type_mD19011116415F509DE63A5632E44D75414A5B147_inline (ClientAttribute_tB0C9BB88DDD9AC06524F69BAB1BFB1615B484316* __this, const RuntimeMethod* method) 
{
	{
		// public string Type { get; }
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t NetworkBase_get_ID_m3784E92568FA8A5EC7F0741F47D05EE40CE1E7A8_inline (NetworkBase_t96A80D44712F0E6103EAAEDED9B22E673C270A6A* __this, const RuntimeMethod* method) 
{
	{
		// public Guid ID { get; } = Guid.NewGuid();
		Guid_t L_0 = __this->___U3CIDU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkServer_get_EndPoints_m2F2BF805ACD040E4E7CBEDACE9512C6DA57A0A65_inline (NetworkServer_t73A1604305D94942476F391904790D1DF1693E8E* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<IPEndPoint> EndPoints => m_EndPoints;
		List_1_t795244976F29D111A17237A89D0064EF85FBC5AC* L_0 = __this->___m_EndPoints_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_Name_mEC4FE426A6C7FA04BACD2FE3B01E94C078375374_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Name;
		String_t* L_0 = __this->___m_Name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_Name_m15B6CDB813AB9967EBE7FE86FE1D5DCDB2520371_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Name = value;
		String_t* L_0 = ___value0;
		__this->___m_Name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_SceneNumber_mD32C9EE95C0D32851011BCFB017027B49C2A35C9_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SceneNumber;
		int32_t L_0 = __this->___m_SceneNumber_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_SceneNumber_m8B3072D2E87995067E237963CD4AF73E564ED10D_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SceneNumber = value;
		int32_t L_0 = ___value0;
		__this->___m_SceneNumber_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_ShotName_mE2227E7DA9A0227534E5C2332BA856D3F5A279D8_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ShotName;
		String_t* L_0 = __this->___m_ShotName_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_ShotName_m88E3D40E508ADD41D15C12C82F9AB8C2A47A1FEE_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ShotName = value;
		String_t* L_0 = ___value0;
		__this->___m_ShotName_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ShotName_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_TakeNumber_m5F9E16BC3A98ACB8F3C901FC030729A84A7F65E1_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TakeNumber;
		int32_t L_0 = __this->___m_TakeNumber_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_TakeNumber_mAC43C859C444266BFEE3E4179F0CAFDE6D31DFD5_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TakeNumber = value;
		int32_t L_0 = ___value0;
		__this->___m_TakeNumber_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TakeDescriptor_get_CreationTime_m60977BCF6C82E036E3415663B01DE594F77D98F5_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CreationTime;
		int64_t L_0 = __this->___m_CreationTime_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_CreationTime_mEFD34D1F18CFCA4E147BC684FFD85ADDE490FE78_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set => m_CreationTime = value;
		int64_t L_0 = ___value0;
		__this->___m_CreationTime_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_Description_mC24B6BD846858C94277D1DB58815CD85AF5B65B6_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Description;
		String_t* L_0 = __this->___m_Description_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_Description_m8296885557840A35979D3EA82CF0E4A970E4B9CF_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Description = value;
		String_t* L_0 = ___value0;
		__this->___m_Description_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Description_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TakeDescriptor_get_Rating_mDC84C096C1FA666E4AC27D14A2C7EDD40A46FDEC_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Rating;
		int32_t L_0 = __this->___m_Rating_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_Rating_m1AB17C594C0ED03C25DF9B42E384D709F5F947BE_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Rating = value;
		int32_t L_0 = ___value0;
		__this->___m_Rating_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 TakeDescriptor_get_FrameRate_mFE813AA5209006C3DA2B5071D877144DFF246990_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FrameRate;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0 = __this->___m_FrameRate_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_FrameRate_m7959F676E74DAC75F92E082E823A19FF46C40DBF_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FrameRate = value;
		FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 L_0 = ___value0;
		__this->___m_FrameRate_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TakeDescriptor_get_TimelineName_mBD807CFF84435A0079CC116C74440E3F58796528_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TimelineName;
		String_t* L_0 = __this->___m_TimelineName_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_TimelineName_m6DDAADF340A0967AE07B96578BF79DCDACF784BA_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TimelineName = value;
		String_t* L_0 = ___value0;
		__this->___m_TimelineName_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TimelineName_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double TakeDescriptor_get_TimelineDuration_m047CD42E1EC46D5294F219D3B5BE4A1CC0ADFD25_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TimelineDuration;
		double L_0 = __this->___m_TimelineDuration_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TakeDescriptor_set_TimelineDuration_m5E879D7889DB5451AFF19E95CA99316A17E19F65_inline (TakeDescriptor_tB37ECCDD11B461E957A46E065F12958EBDC50695* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TimelineDuration = value;
		double L_0 = ___value0;
		__this->___m_TimelineDuration_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mB17B2145955C61848897CB96737BE6AFCC8597A4_gshared_inline (Action_1_tCDE2BF37CF96F24FC76DF7BC259C4F887BD38E12* __this, uint8_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m08431FD4B0BCAF1FBC20007E2A950F0259A0A59A_gshared_inline (Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* __this, double ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA21CC5EED3A12F94C95E0849EB66A11756D29FA2_gshared_inline (Action_1_t33413EDB36E6D5980F6CA903E76E505099813427* __this, Guid_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Guid_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m82AC1760F35FF82697FBDD1F74D4C26C25FB7BE5_gshared_inline (Action_1_t498087B8F9839BFBC1C029C1F7A2A2248CF4762A* __this, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FrameRate_t538A85F13DAFBF72960CCE300100049923F02621, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m13E1725DF0DF364D6646F21EB36012953FA9DA16_gshared_inline (Action_2_t9B2E784F9E1BF1BA770316E3E717CEDFB48F86AE* __this, Guid_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Guid_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m545CE73B5442527E021B4B3E2BDBF1B18E29A4B6_gshared_inline (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C ___item0, const RuntimeMethod* method) 
{
	ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45* L_1 = (ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ConnectHandlerU5BU5D_tDB305F3485BB9AF500F2D6A69859E31AC034FB45* L_6 = V_0;
		int32_t L_7 = V_1;
		ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C)L_8);
		return;
	}

IL_0034:
	{
		ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_9 = ___item0;
		((  void (*) (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3*, ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD742FF013755ED694BA5ABD59EA25C1E1E5F9A58_gshared_inline (List_1_t153B607B875B1290C5442D6DD98754C0ADCE40E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C Enumerator_get_Current_m7612418706705BEA7BD80922A298A5E117828AAE_gshared_inline (Enumerator_t59E0A4A8949D8B06B632427BBD4505BCE71B5F15* __this, const RuntimeMethod* method) 
{
	{
		ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C L_0 = (ConnectHandler_t81CA3FA7042C43BB83BE6FB522FFF0A585892A1C)__this->____current_3;
		return L_0;
	}
}
