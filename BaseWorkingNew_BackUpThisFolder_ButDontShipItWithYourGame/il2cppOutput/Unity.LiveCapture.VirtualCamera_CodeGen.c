#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ChannelFlagsReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags>)
// 0x00000002 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ChannelFlagsReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags>)
// 0x00000003 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_InputSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.InputSample>)
// 0x00000004 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_InputSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.InputSample>)
// 0x00000005 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocalLengthSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocalLengthSample>)
// 0x00000006 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocalLengthSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocalLengthSample>)
// 0x00000007 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocusDistanceSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusDistanceSample>)
// 0x00000008 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocusDistanceSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusDistanceSample>)
// 0x00000009 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ApertureSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.ApertureSample>)
// 0x0000000A System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ApertureSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.ApertureSample>)
// 0x0000000B System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_DampingEnabledReceived(System.Action`1<System.Boolean>)
// 0x0000000C System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_DampingEnabledReceived(System.Action`1<System.Boolean>)
// 0x0000000D System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_BodyDampingReceived(System.Action`1<UnityEngine.Vector3>)
// 0x0000000E System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_BodyDampingReceived(System.Action`1<UnityEngine.Vector3>)
// 0x0000000F System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_AimDampingReceived(System.Action`1<System.Single>)
// 0x00000010 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_AimDampingReceived(System.Action`1<System.Single>)
// 0x00000011 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocalLengthDampingReceived(System.Action`1<System.Single>)
// 0x00000012 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocalLengthDampingReceived(System.Action`1<System.Single>)
// 0x00000013 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocusDistanceDampingReceived(System.Action`1<System.Single>)
// 0x00000014 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocusDistanceDampingReceived(System.Action`1<System.Single>)
// 0x00000015 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ApertureDampingReceived(System.Action`1<System.Single>)
// 0x00000016 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ApertureDampingReceived(System.Action`1<System.Single>)
// 0x00000017 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_PositionLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.PositionAxis>)
// 0x00000018 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_PositionLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.PositionAxis>)
// 0x00000019 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_RotationLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.RotationAxis>)
// 0x0000001A System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_RotationLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.RotationAxis>)
// 0x0000001B System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_AutoHorizonReceived(System.Action`1<System.Boolean>)
// 0x0000001C System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_AutoHorizonReceived(System.Action`1<System.Boolean>)
// 0x0000001D System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ErgonomicTiltReceived(System.Action`1<System.Single>)
// 0x0000001E System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ErgonomicTiltReceived(System.Action`1<System.Single>)
// 0x0000001F System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_RebasingReceived(System.Action`1<System.Boolean>)
// 0x00000020 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_RebasingReceived(System.Action`1<System.Boolean>)
// 0x00000021 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_MotionScaleReceived(System.Action`1<UnityEngine.Vector3>)
// 0x00000022 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_MotionScaleReceived(System.Action`1<UnityEngine.Vector3>)
// 0x00000023 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_JoystickSensitivityReceived(System.Action`1<UnityEngine.Vector3>)
// 0x00000024 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_JoystickSensitivityReceived(System.Action`1<UnityEngine.Vector3>)
// 0x00000025 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_PedestalSpaceReceived(System.Action`1<UnityEngine.Space>)
// 0x00000026 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_PedestalSpaceReceived(System.Action`1<UnityEngine.Space>)
// 0x00000027 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_MotionSpaceReceived(System.Action`1<UnityEngine.Space>)
// 0x00000028 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_MotionSpaceReceived(System.Action`1<UnityEngine.Space>)
// 0x00000029 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocusModeReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusMode>)
// 0x0000002A System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocusModeReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusMode>)
// 0x0000002B System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocusReticlePositionReceived(System.Action`1<UnityEngine.Vector2>)
// 0x0000002C System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocusReticlePositionReceived(System.Action`1<UnityEngine.Vector2>)
// 0x0000002D System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_FocusDistanceOffsetReceived(System.Action`1<System.Single>)
// 0x0000002E System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_FocusDistanceOffsetReceived(System.Action`1<System.Single>)
// 0x0000002F System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_CropAspectReceived(System.Action`1<System.Single>)
// 0x00000030 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_CropAspectReceived(System.Action`1<System.Single>)
// 0x00000031 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_GateFitReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.GateFit>)
// 0x00000032 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_GateFitReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.GateFit>)
// 0x00000033 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ShowGateMaskReceived(System.Action`1<System.Boolean>)
// 0x00000034 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ShowGateMaskReceived(System.Action`1<System.Boolean>)
// 0x00000035 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ShowFrameLinesReceived(System.Action`1<System.Boolean>)
// 0x00000036 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ShowFrameLinesReceived(System.Action`1<System.Boolean>)
// 0x00000037 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ShowCenterMarkerReceived(System.Action`1<System.Boolean>)
// 0x00000038 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ShowCenterMarkerReceived(System.Action`1<System.Boolean>)
// 0x00000039 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_ShowFocusPlaneReceived(System.Action`1<System.Boolean>)
// 0x0000003A System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_ShowFocusPlaneReceived(System.Action`1<System.Boolean>)
// 0x0000003B System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_SetPoseToOrigin(System.Action)
// 0x0000003C System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_SetPoseToOrigin(System.Action)
// 0x0000003D System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_SetLensAsset(System.Action`1<Unity.LiveCapture.SerializableGuid>)
// 0x0000003E System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_SetLensAsset(System.Action`1<Unity.LiveCapture.SerializableGuid>)
// 0x0000003F System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_TakeSnapshot(System.Action)
// 0x00000040 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_TakeSnapshot(System.Action)
// 0x00000041 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_GoToSnapshot(System.Action`1<System.Int32>)
// 0x00000042 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_GoToSnapshot(System.Action`1<System.Int32>)
// 0x00000043 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_LoadSnapshot(System.Action`1<System.Int32>)
// 0x00000044 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_LoadSnapshot(System.Action`1<System.Int32>)
// 0x00000045 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::add_DeleteSnapshot(System.Action`1<System.Int32>)
// 0x00000046 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::remove_DeleteSnapshot(System.Action`1<System.Int32>)
// 0x00000047 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendChannelFlags(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
// 0x00000048 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendLens(Unity.LiveCapture.VirtualCamera.Lens)
// 0x00000049 System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendCameraBody(Unity.LiveCapture.VirtualCamera.CameraBody)
// 0x0000004A System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendSettings(Unity.LiveCapture.VirtualCamera.Settings)
// 0x0000004B System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendVideoStreamState(Unity.LiveCapture.VirtualCamera.VideoStreamState)
// 0x0000004C System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendLensKitDescriptor(Unity.LiveCapture.VirtualCamera.LensKitDescriptor)
// 0x0000004D System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendSnapshotListDescriptor(Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor)
// 0x0000004E System.Void Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal::SendVirtualCameraTrackMetadataListDescriptor(Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor)
// 0x0000004F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ChannelFlagsReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags>)
extern void VirtualCameraClient_add_ChannelFlagsReceived_m3EE5375DDFB0D1436F0AE2C608091881534D4EEA (void);
// 0x00000050 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ChannelFlagsReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags>)
extern void VirtualCameraClient_remove_ChannelFlagsReceived_mEE4EA12D2BC97574D47979B804E76C43E2F23FDD (void);
// 0x00000051 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocalLengthSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocalLengthSample>)
extern void VirtualCameraClient_add_FocalLengthSampleReceived_m7F62E053255CB5247AB62A1849ED2F9A63774D8C (void);
// 0x00000052 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocalLengthSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocalLengthSample>)
extern void VirtualCameraClient_remove_FocalLengthSampleReceived_m58A691624046648EF7FB44A7ED4F9B779EB029DD (void);
// 0x00000053 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocusDistanceSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusDistanceSample>)
extern void VirtualCameraClient_add_FocusDistanceSampleReceived_mFEC7531014E2F209959411C4E2FA1743E4A3FC0F (void);
// 0x00000054 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocusDistanceSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusDistanceSample>)
extern void VirtualCameraClient_remove_FocusDistanceSampleReceived_m1DC8B2FFBC27E79359B94EFF0AC2492E243FCA61 (void);
// 0x00000055 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ApertureSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.ApertureSample>)
extern void VirtualCameraClient_add_ApertureSampleReceived_m99E5DC71F936F50BD3FB7EE912A9B3EC86243296 (void);
// 0x00000056 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ApertureSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.ApertureSample>)
extern void VirtualCameraClient_remove_ApertureSampleReceived_m858DE78BFD5B0D34AD74E13C5A75C9C7B286E0F0 (void);
// 0x00000057 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_InputSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.InputSample>)
extern void VirtualCameraClient_add_InputSampleReceived_m06F7B4B5CA04E5C22B334F62D4DD6A2C54062082 (void);
// 0x00000058 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_InputSampleReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.InputSample>)
extern void VirtualCameraClient_remove_InputSampleReceived_m4EFDA0BB1EC3E78B667F550F9DF9BEEF9DAE3F63 (void);
// 0x00000059 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_DampingEnabledReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_DampingEnabledReceived_mD9EADAEDA8C6EA866BB5E6CFDB3BBB8597BE1F05 (void);
// 0x0000005A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_DampingEnabledReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_DampingEnabledReceived_m1B4BB346F2F9587290485BD3ABC4D140EF335E11 (void);
// 0x0000005B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_BodyDampingReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraClient_add_BodyDampingReceived_m98E56C2C3914E2D47553D84E1C16DC7672E93D33 (void);
// 0x0000005C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_BodyDampingReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraClient_remove_BodyDampingReceived_mC659ADC0E56D0354A4FA870ADDD03E460E8711C9 (void);
// 0x0000005D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_AimDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_AimDampingReceived_mC12EEDFE9176C635818ECF80F48DE4F5000C084D (void);
// 0x0000005E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_AimDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_AimDampingReceived_mC1032C7487FF54D7EC3B1606BB6F4653E94DB58C (void);
// 0x0000005F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocalLengthDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_FocalLengthDampingReceived_mB7D939692DAC11FA79B4BB792F05FED23230F914 (void);
// 0x00000060 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocalLengthDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_FocalLengthDampingReceived_mAA4510C818437986CCEC5BD7E13CDC61C53FF92D (void);
// 0x00000061 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocusDistanceDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_FocusDistanceDampingReceived_m2E1A9D0E614599C4E8B0033AB908872CE4262DC6 (void);
// 0x00000062 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocusDistanceDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_FocusDistanceDampingReceived_m2E1B539335E65F949B9709BAA693D338FA4154FA (void);
// 0x00000063 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ApertureDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_ApertureDampingReceived_mA8B0E541ABF7D2D57F85D0275F61BF580807423E (void);
// 0x00000064 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ApertureDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_ApertureDampingReceived_mFEC3626465DCC79128F5178AF9033626E097D383 (void);
// 0x00000065 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_PositionLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.PositionAxis>)
extern void VirtualCameraClient_add_PositionLockReceived_m0E3F0B9AD1EC80E6938B59CA38126DFDC1CE4428 (void);
// 0x00000066 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_PositionLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.PositionAxis>)
extern void VirtualCameraClient_remove_PositionLockReceived_mE14461FE6B68AD1EB020CA63C0274BE24FF0A7F6 (void);
// 0x00000067 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_RotationLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.RotationAxis>)
extern void VirtualCameraClient_add_RotationLockReceived_mA2FA850AA09B87771D2796FF18962ECE15D16681 (void);
// 0x00000068 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_RotationLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.RotationAxis>)
extern void VirtualCameraClient_remove_RotationLockReceived_mC7051B214167DF461741D22FEFA8953494D1F155 (void);
// 0x00000069 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_AutoHorizonReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_AutoHorizonReceived_m356966B524371552C8ED4EC8D948E4E9679B4C8D (void);
// 0x0000006A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_AutoHorizonReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_AutoHorizonReceived_m238AB7A7D081C7CE19D3AA1BF1FEC11277D998CF (void);
// 0x0000006B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ErgonomicTiltReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_ErgonomicTiltReceived_m9D354870C25EECCD4A071EDD13A38C82D2F7E4BA (void);
// 0x0000006C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ErgonomicTiltReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_ErgonomicTiltReceived_mFB55B389E113D6E31BE4FF3DA49B5723B24B7138 (void);
// 0x0000006D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_RebasingReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_RebasingReceived_m53844169CA07F6320F93551B71AC79A624895276 (void);
// 0x0000006E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_RebasingReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_RebasingReceived_m44A2285D781A4D6A0FD4F83DEF8941373BDE9521 (void);
// 0x0000006F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_MotionScaleReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraClient_add_MotionScaleReceived_mA49076529EA2A5B27038E5A4DA4E256FF7F07BA0 (void);
// 0x00000070 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_MotionScaleReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraClient_remove_MotionScaleReceived_m7059F3442D381B98B0BCCEA3E2B4DFC8E190BB82 (void);
// 0x00000071 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_JoystickSensitivityReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraClient_add_JoystickSensitivityReceived_mA6DA7D2E35628FD494BDCC1E81188D1A369BFF9E (void);
// 0x00000072 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_JoystickSensitivityReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraClient_remove_JoystickSensitivityReceived_mAEF7635BCDF555E9680F5359707FC5F8AEBD7DEA (void);
// 0x00000073 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_PedestalSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraClient_add_PedestalSpaceReceived_mA43B1823A0B8AA7C440BFA106311B53ABBD365DA (void);
// 0x00000074 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_PedestalSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraClient_remove_PedestalSpaceReceived_mA0FB6FA7AEB228FC295747D03423F1770CAEDC38 (void);
// 0x00000075 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_MotionSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraClient_add_MotionSpaceReceived_m4453116C56465A3C62E1E36FACA99BE62C05D0CB (void);
// 0x00000076 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_MotionSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraClient_remove_MotionSpaceReceived_m1B754286DF804F298EACCABED74A406AB6C1DD4B (void);
// 0x00000077 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocusModeReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusMode>)
extern void VirtualCameraClient_add_FocusModeReceived_mCB96D2CABA091282741C3BAF32E7CD1EB2E3E2F2 (void);
// 0x00000078 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocusModeReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusMode>)
extern void VirtualCameraClient_remove_FocusModeReceived_m64BB08FAE0289CD42E8EEE2AE9348AF77FCFC8E4 (void);
// 0x00000079 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocusReticlePositionReceived(System.Action`1<UnityEngine.Vector2>)
extern void VirtualCameraClient_add_FocusReticlePositionReceived_m5EA3BB5FFA24A07C194480296D6826CB1676112F (void);
// 0x0000007A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocusReticlePositionReceived(System.Action`1<UnityEngine.Vector2>)
extern void VirtualCameraClient_remove_FocusReticlePositionReceived_m2B06730D652590F2E9FED21C319C28570ADD03B0 (void);
// 0x0000007B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_FocusDistanceOffsetReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_FocusDistanceOffsetReceived_mB9F0A4AC5AF43667FF76A785E92915F9AF77BAFE (void);
// 0x0000007C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_FocusDistanceOffsetReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_FocusDistanceOffsetReceived_m81484812E36511C725167D2299369C73CB0C9C4C (void);
// 0x0000007D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_CropAspectReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_add_CropAspectReceived_m4F000FA79E0BAD1015D2DC86611FF126B8EEA293 (void);
// 0x0000007E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_CropAspectReceived(System.Action`1<System.Single>)
extern void VirtualCameraClient_remove_CropAspectReceived_mB4DDCB31BB4B068F1761D88FC18DD4B277C4BCC7 (void);
// 0x0000007F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_GateFitReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.GateFit>)
extern void VirtualCameraClient_add_GateFitReceived_mAB070CEBB1A0E2A8B9D2B526F1CB3692B1ECE600 (void);
// 0x00000080 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_GateFitReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.GateFit>)
extern void VirtualCameraClient_remove_GateFitReceived_m76E0653BEE30A757230FE9F76BF919F9F0C805DE (void);
// 0x00000081 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ShowGateMaskReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_ShowGateMaskReceived_mA8F7F2E4D57B879AFFB1D1CA34CAFB31DC55DEC2 (void);
// 0x00000082 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ShowGateMaskReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_ShowGateMaskReceived_mD3D76768B6FBB27D673FFC48DE7C6C104B65624A (void);
// 0x00000083 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ShowFrameLinesReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_ShowFrameLinesReceived_m797EE20C000E9F0C8D85F9C698764061B621B149 (void);
// 0x00000084 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ShowFrameLinesReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_ShowFrameLinesReceived_m4BF2140C18C5F425862A48C0E58CE540CB782484 (void);
// 0x00000085 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ShowCenterMarkerReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_ShowCenterMarkerReceived_mD6C4134E1C82FEA07831DFF0070D8CA1B43A44D8 (void);
// 0x00000086 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ShowCenterMarkerReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_ShowCenterMarkerReceived_m99AC6E5142F421FAF03323F28EE3B7ECA71D68B7 (void);
// 0x00000087 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_ShowFocusPlaneReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_add_ShowFocusPlaneReceived_mA7E0B87B4010F7CD8E003BD7FC5CE1943328A66D (void);
// 0x00000088 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_ShowFocusPlaneReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraClient_remove_ShowFocusPlaneReceived_m9E7E3E11F6CE0415F5638A38F4B8DFE2EA2C1DF3 (void);
// 0x00000089 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_SetPoseToOrigin(System.Action)
extern void VirtualCameraClient_add_SetPoseToOrigin_m8959B9A1990489CAFB613674DA9B65FFC0D6E091 (void);
// 0x0000008A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_SetPoseToOrigin(System.Action)
extern void VirtualCameraClient_remove_SetPoseToOrigin_mBA12076DF93C7AF42D69F8D644E97298B64B7378 (void);
// 0x0000008B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_SetLensAsset(System.Action`1<Unity.LiveCapture.SerializableGuid>)
extern void VirtualCameraClient_add_SetLensAsset_m193232699E3D8CB89176C74725F0E9CE7A3566D7 (void);
// 0x0000008C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_SetLensAsset(System.Action`1<Unity.LiveCapture.SerializableGuid>)
extern void VirtualCameraClient_remove_SetLensAsset_mDED9496FCF52D30165E9D2A0421483038FB6C1C0 (void);
// 0x0000008D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_TakeSnapshot(System.Action)
extern void VirtualCameraClient_add_TakeSnapshot_m2F541E649F1460A2EEA957FDAC1A0105B0E684CB (void);
// 0x0000008E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_TakeSnapshot(System.Action)
extern void VirtualCameraClient_remove_TakeSnapshot_m80A4EE5DD92F5AFF0CD67990EF9D0A01B83119FF (void);
// 0x0000008F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_GoToSnapshot(System.Action`1<System.Int32>)
extern void VirtualCameraClient_add_GoToSnapshot_m88AA6B4810EC55996D75627E5347D508901C91A2 (void);
// 0x00000090 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_GoToSnapshot(System.Action`1<System.Int32>)
extern void VirtualCameraClient_remove_GoToSnapshot_m35802D31E47E240E46DFCB08FA1A94613B72F21C (void);
// 0x00000091 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_LoadSnapshot(System.Action`1<System.Int32>)
extern void VirtualCameraClient_add_LoadSnapshot_m894296BCF85708553F377B20A5941A3E54A66264 (void);
// 0x00000092 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_LoadSnapshot(System.Action`1<System.Int32>)
extern void VirtualCameraClient_remove_LoadSnapshot_mA513B6D0B4FFC2AC97C2B377EA1148197A688D55 (void);
// 0x00000093 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::add_DeleteSnapshot(System.Action`1<System.Int32>)
extern void VirtualCameraClient_add_DeleteSnapshot_mC85D7A48A8A0DCE00F51B17907B94F7A868521F7 (void);
// 0x00000094 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::remove_DeleteSnapshot(System.Action`1<System.Int32>)
extern void VirtualCameraClient_remove_DeleteSnapshot_m3FECAF5D85D7D7899FEE006F5DA824336635F2A5 (void);
// 0x00000095 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,Unity.LiveCapture.CompanionApp.ClientInitialization)
extern void VirtualCameraClient__ctor_m533C9D1C7FC28FFC4F94A5F1BCEC1050F16B5EDF (void);
// 0x00000096 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendChannelFlags(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraClient_SendChannelFlags_m20412A5E1E68DA824FFBD9240F78BD80C2775190 (void);
// 0x00000097 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendLens(Unity.LiveCapture.VirtualCamera.Lens)
extern void VirtualCameraClient_SendLens_mC960FB238A10F3A3B62E38F3BDEB37CAE2EDA0F1 (void);
// 0x00000098 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendCameraBody(Unity.LiveCapture.VirtualCamera.CameraBody)
extern void VirtualCameraClient_SendCameraBody_m4341C3FDCE6D01BC3F396B351576C842FE5645D1 (void);
// 0x00000099 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendSettings(Unity.LiveCapture.VirtualCamera.Settings)
extern void VirtualCameraClient_SendSettings_m7EFC3B3F5C29813E011EB04E1F7E113941ADE38C (void);
// 0x0000009A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendVideoStreamState(Unity.LiveCapture.VirtualCamera.VideoStreamState)
extern void VirtualCameraClient_SendVideoStreamState_mCBAAD36EBDE4F4B544AFDC12781B391EDF70ACD7 (void);
// 0x0000009B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendLensKitDescriptor(Unity.LiveCapture.VirtualCamera.LensKitDescriptor)
extern void VirtualCameraClient_SendLensKitDescriptor_mEE755F2BA358359607207FB9CC37979B3FFDA597 (void);
// 0x0000009C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendSnapshotListDescriptor(Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor)
extern void VirtualCameraClient_SendSnapshotListDescriptor_mE06FC1CE676DCAE1B3B8581180A6978777D7026B (void);
// 0x0000009D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::SendVirtualCameraTrackMetadataListDescriptor(Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor)
extern void VirtualCameraClient_SendVirtualCameraTrackMetadataListDescriptor_m9CCDA79A97A4C99DC15CA7E5B74959F70D9DAC8D (void);
// 0x0000009E System.String Unity.LiveCapture.VirtualCamera.VirtualCameraClient::ToString()
extern void VirtualCameraClient_ToString_mE7E62BB2E6927E2020D19FBF04FE321C3B115038 (void);
// 0x0000009F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_0(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_0_m1728EF917F9D126D42B70D4691AF7BAE325E4E7E (void);
// 0x000000A0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_1(Unity.LiveCapture.VirtualCamera.Networking.InputSampleV0)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_1_mA04D184119FF7A9AE512378AB1276D8F2BF5C602 (void);
// 0x000000A1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_2(Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV1)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_2_mDBE23FAEEAEFBFEEB8F3CDEE491518E26A50A6CD (void);
// 0x000000A2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_3(Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV1)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_3_m29256A8CC5D2BD6405B8CD6EC749C2EC1D1A2186 (void);
// 0x000000A3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_4(Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV1)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_4_m36C9E0ADA6F9544D59DC0D4E6F822F3755BBA188 (void);
// 0x000000A4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_5(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_5_mB85D99CA13FF209C6938E2BCB86A34B94D0DB25A (void);
// 0x000000A5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_6(UnityEngine.Vector3)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_6_mFAF58CCE6491EB22098557C586921D750CE4E90D (void);
// 0x000000A6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_7(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_7_mDB568D036678C333C9DE5DE74BE7291CBE1A7376 (void);
// 0x000000A7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_8(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_8_m574CE3EEB4D029366A752C3E95FDC96FEDC0FB31 (void);
// 0x000000A8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_9(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_9_m4B1A0C807D95FAAB284278CA89E0B6A44FBE719D (void);
// 0x000000A9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_10(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_10_m8A264BDFA81D8A771FD01A44BA0F70980C72D3A3 (void);
// 0x000000AA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_11(Unity.LiveCapture.VirtualCamera.PositionAxis)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_11_m52DF6C0C0E0245904DA10806A7438A54C447CB81 (void);
// 0x000000AB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_12(Unity.LiveCapture.VirtualCamera.RotationAxis)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_12_m923F153F590879A5092CC130DC9F0BC8A28C2E5A (void);
// 0x000000AC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_13(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_13_mA50A1FC0B59EB4F6B44DB66F18684361E954D944 (void);
// 0x000000AD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_14(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_14_m670D94E617FC6A3F3AFE471148FB21432062BA79 (void);
// 0x000000AE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_15(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_15_m23166B7D062B6B53E76E7674D17CE4374A6284ED (void);
// 0x000000AF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_16(UnityEngine.Vector3)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_16_m7F47505FC0FCE5A6422C52AE7AEAF7B20221065C (void);
// 0x000000B0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_17(UnityEngine.Vector3)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_17_mC984846AE501510A6844E8CAA4E40E41C185353A (void);
// 0x000000B1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_18(UnityEngine.Space)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_18_m79D9069CA80ED8CAA61DAF9927A3FF227863E83E (void);
// 0x000000B2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_19(UnityEngine.Space)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_19_mBE207E25413E68E6BF05CF9F038D96EFE175077D (void);
// 0x000000B3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_20(Unity.LiveCapture.VirtualCamera.FocusMode)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_20_m9E5BC18EF9F391F7F4AC05D197C8DE5B37A48B2A (void);
// 0x000000B4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_21(UnityEngine.Vector2)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_21_m40B37D59B574FE81BAA2AD906C05B13B7EADB2FE (void);
// 0x000000B5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_22(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_22_mD83F04D38E58F7EFDA5FD970227F4C2E70F44F35 (void);
// 0x000000B6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_23(System.Single)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_23_m997F1739ED257FE150B2604C793170CD387C8D28 (void);
// 0x000000B7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_24(Unity.LiveCapture.VirtualCamera.GateFit)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_24_m7D9A67D40522CE362759218F97E0C9E752F9657E (void);
// 0x000000B8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_25(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_25_mDB096A4DE19ED31F6F21797799310420C61CE2ED (void);
// 0x000000B9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_26(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_26_m456B555D22E5C77CCFC672C6285FC7B74C15AFFD (void);
// 0x000000BA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_27(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_27_m270ED62B183374E1D93A918FCD84D64C558CFDDC (void);
// 0x000000BB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_28(System.Boolean)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_28_mCFFB7B92D0317D3DFCB0177ED960F882F73F5BFA (void);
// 0x000000BC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_29()
extern void VirtualCameraClient_U3C_ctorU3Eb__143_29_m4A1EB21B8D05B024FCFD94428A1B5517B47BBC48 (void);
// 0x000000BD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_30(Unity.LiveCapture.SerializableGuid)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_30_mC4C23B55247078F8CC64978B582A98C2DA5EE81A (void);
// 0x000000BE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_31()
extern void VirtualCameraClient_U3C_ctorU3Eb__143_31_m31B0584E6E0A81C3794322E882DD2E718FDD5ECE (void);
// 0x000000BF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_32(System.Int32)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_32_mAC26005FCD5A6249AF9FE872FCB6C5274B114182 (void);
// 0x000000C0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_33(System.Int32)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_33_m3B4059DFDEF3AD8B59D6BAAA41CB7502FAEA6FA1 (void);
// 0x000000C1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraClient::<.ctor>b__143_34(System.Int32)
extern void VirtualCameraClient_U3C_ctorU3Eb__143_34_m17E75A16DB235534BD728B3BB7BBDD51F4338F55 (void);
// 0x000000C2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ChannelFlagsReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags>)
extern void VirtualCameraHost_add_ChannelFlagsReceived_m159FBD87ED7CF0A8EBC56761053E245F8DE6B9C7 (void);
// 0x000000C3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ChannelFlagsReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags>)
extern void VirtualCameraHost_remove_ChannelFlagsReceived_m83221DC9CC8793106E8CF49AC334B39C16C96450 (void);
// 0x000000C4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocalLengthReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_FocalLengthReceived_mB393033CB600D614A707DB6760A16B700F4DDEE1 (void);
// 0x000000C5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocalLengthReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_FocalLengthReceived_m547DDF04E2094CF335E2B28A9B4E4EBABD7337D5 (void);
// 0x000000C6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocusDistanceReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_FocusDistanceReceived_m5C206EE3373266671D8907B29C0AAADA2D674ED9 (void);
// 0x000000C7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocusDistanceReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_FocusDistanceReceived_m38A96743B61FE158A41CFCFBEB7F8FB9CF738467 (void);
// 0x000000C8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ApertureReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_ApertureReceived_mCCC43315159821D808A62D92BE6D33846D6560A1 (void);
// 0x000000C9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ApertureReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_ApertureReceived_m663584F918BFB0C76F73823C819B0926C576BB72 (void);
// 0x000000CA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_SensorSizeReceived(System.Action`1<UnityEngine.Vector2>)
extern void VirtualCameraHost_add_SensorSizeReceived_m5BA8A25C1BB3F41D06933D2EFA58987B6726754C (void);
// 0x000000CB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_SensorSizeReceived(System.Action`1<UnityEngine.Vector2>)
extern void VirtualCameraHost_remove_SensorSizeReceived_m42CB537B3224338CC74E4E13DD95F7968C16A29E (void);
// 0x000000CC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_IsoReceived(System.Action`1<System.Int32>)
extern void VirtualCameraHost_add_IsoReceived_mA459DDD500D1825AD4161A5B7CBCA4CAF71858FD (void);
// 0x000000CD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_IsoReceived(System.Action`1<System.Int32>)
extern void VirtualCameraHost_remove_IsoReceived_m59EC6D2B29CD83D0D7878E27811C39CEFC51F055 (void);
// 0x000000CE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ShutterSpeedReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_ShutterSpeedReceived_mB33252AC6467BC3244789CE20859F6D59A148459 (void);
// 0x000000CF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ShutterSpeedReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_ShutterSpeedReceived_m2FDEC2DF89FA1A95B415C5B0ADC923528B1230B9 (void);
// 0x000000D0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_DampingEnabledReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_DampingEnabledReceived_m651912458972770CBD1C7FA58A7AB1B312AA9B85 (void);
// 0x000000D1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_DampingEnabledReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_DampingEnabledReceived_m64D103D36F4FB46F5A1C9C618B9C19B6460E919E (void);
// 0x000000D2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_BodyDampingReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraHost_add_BodyDampingReceived_m21F309E185CE06C58DD0D49FBC338346C5297E66 (void);
// 0x000000D3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_BodyDampingReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraHost_remove_BodyDampingReceived_m096E220D009782EDDDBC93E13F82E0D5B7A4B60D (void);
// 0x000000D4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_AimDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_AimDampingReceived_m17FBC379CCD6056C9EF317FD6F292F390978CD9A (void);
// 0x000000D5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_AimDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_AimDampingReceived_m0708195242F6C3C54F0E2B6D2DA14E9C0960702A (void);
// 0x000000D6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocalLengthDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_FocalLengthDampingReceived_mE3849B295BA74D04120C82763A8CB41661410F08 (void);
// 0x000000D7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocalLengthDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_FocalLengthDampingReceived_m2CDCAE926252F678A82FB400DEA69EC17A0FF796 (void);
// 0x000000D8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocusDistanceDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_FocusDistanceDampingReceived_mCCFB2D53A264433461661DC29A749EB81E62942E (void);
// 0x000000D9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocusDistanceDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_FocusDistanceDampingReceived_m465039CAB693C066124148376B4E9E06F9B18642 (void);
// 0x000000DA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ApertureDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_ApertureDampingReceived_m504723A52B2C75DE924417E5535C12AD5A75169C (void);
// 0x000000DB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ApertureDampingReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_ApertureDampingReceived_mCE05F0B46F1A33F7FF7C7E3C683F76BB64B736F3 (void);
// 0x000000DC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_PositionLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.PositionAxis>)
extern void VirtualCameraHost_add_PositionLockReceived_mA77D9D2D3E295781F7055D7784F5865FF64C0E4F (void);
// 0x000000DD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_PositionLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.PositionAxis>)
extern void VirtualCameraHost_remove_PositionLockReceived_m109093E83FDB3EFBCF16FDB0F2D4C47453148956 (void);
// 0x000000DE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_RotationLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.RotationAxis>)
extern void VirtualCameraHost_add_RotationLockReceived_mB5C50EA627D0A4461C9A92D968AEFB9599A496E1 (void);
// 0x000000DF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_RotationLockReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.RotationAxis>)
extern void VirtualCameraHost_remove_RotationLockReceived_m8F3EAEE4BB07CA627F48E8BE70842F2B1BF0F38C (void);
// 0x000000E0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_AutoHorizonReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_AutoHorizonReceived_mD6D3A456D9D0530FABDA74AE677C4BEF3FCD3ACE (void);
// 0x000000E1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_AutoHorizonReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_AutoHorizonReceived_m8509F1049DDE1321A1605C372208103723EFE71B (void);
// 0x000000E2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ErgonomicTiltReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_ErgonomicTiltReceived_m1013E6BC2B7348FA48D5D777BB1779FF8A66EDA4 (void);
// 0x000000E3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ErgonomicTiltReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_ErgonomicTiltReceived_m2C2BF2973ACE3B46E74C6139AB959AD1F5462171 (void);
// 0x000000E4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_RebasingReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_RebasingReceived_m0570040BC0C0A979CF06DCC739BC1A1B5285A20B (void);
// 0x000000E5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_RebasingReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_RebasingReceived_m32BC8160B840258BD737C66C63F4A46E66345A29 (void);
// 0x000000E6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_MotionScaleReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraHost_add_MotionScaleReceived_m1994B9D7F73AA9C2E34EA52B7EF3ABF437452941 (void);
// 0x000000E7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_MotionScaleReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraHost_remove_MotionScaleReceived_m6F4868876F6F3DC4D3AD862125C5C4311D9E2931 (void);
// 0x000000E8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_JoystickSensitivityReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraHost_add_JoystickSensitivityReceived_mDEEE4CB4FB42DD5449C6D8D3D5346BA2EC23B213 (void);
// 0x000000E9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_JoystickSensitivityReceived(System.Action`1<UnityEngine.Vector3>)
extern void VirtualCameraHost_remove_JoystickSensitivityReceived_mBD6CB1100803C659211CC55528B044A83806DFDA (void);
// 0x000000EA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_PedestalSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraHost_add_PedestalSpaceReceived_m84E6839F4961979BDC1B0B18C39D2B694DCD88B0 (void);
// 0x000000EB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_PedestalSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraHost_remove_PedestalSpaceReceived_m84EA632941F876D27193829060C8EFE7D70A5A4B (void);
// 0x000000EC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_MotionSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraHost_add_MotionSpaceReceived_m2D7CCDC8A712FB807A5F14CFE245A1FDFA722C79 (void);
// 0x000000ED System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_MotionSpaceReceived(System.Action`1<UnityEngine.Space>)
extern void VirtualCameraHost_remove_MotionSpaceReceived_m98EEFBF99B6C441EA081A27022F63641349DBEC7 (void);
// 0x000000EE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocusModeReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusMode>)
extern void VirtualCameraHost_add_FocusModeReceived_mCBCA8C069728C463E0A4073C95B4240D37B746A6 (void);
// 0x000000EF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocusModeReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.FocusMode>)
extern void VirtualCameraHost_remove_FocusModeReceived_m37BCBABC6108DA9E353539AC5FD30A44C34F102E (void);
// 0x000000F0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocusReticlePositionReceived(System.Action`1<UnityEngine.Vector2>)
extern void VirtualCameraHost_add_FocusReticlePositionReceived_mF6C3596D9A6A257F9F3C0FCD2F60D840C3B47864 (void);
// 0x000000F1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocusReticlePositionReceived(System.Action`1<UnityEngine.Vector2>)
extern void VirtualCameraHost_remove_FocusReticlePositionReceived_mE5630CC819A44C70B854FCF610C1012D3739620A (void);
// 0x000000F2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_FocusDistanceOffsetReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_FocusDistanceOffsetReceived_m44EE3C39FF0B0588AE1AAAC2820525295ED08E83 (void);
// 0x000000F3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_FocusDistanceOffsetReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_FocusDistanceOffsetReceived_mC2ED06A37436C6EFDA086378345EDD6B940EC606 (void);
// 0x000000F4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_CropAspectReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_add_CropAspectReceived_m862967CCF90CE42E2D23EC5EF0E8BC0785DF7B72 (void);
// 0x000000F5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_CropAspectReceived(System.Action`1<System.Single>)
extern void VirtualCameraHost_remove_CropAspectReceived_mBCD9A7599FC2254846718B8B462F19D9C1541A7A (void);
// 0x000000F6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ShowGateMaskReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_ShowGateMaskReceived_m66B10E39BD81B532C4E961E0E85159BC4C490B92 (void);
// 0x000000F7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ShowGateMaskReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_ShowGateMaskReceived_m58C606557423547F0114D7C04B9D2F2B7671A2D5 (void);
// 0x000000F8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ShowFrameLinesReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_ShowFrameLinesReceived_m017CA7D5C9D9146B014AE31D2F36BEBCE9E18261 (void);
// 0x000000F9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ShowFrameLinesReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_ShowFrameLinesReceived_m24F4706D1D3F04C030D09E2B04A101D28565EC4E (void);
// 0x000000FA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ShowCenterMarkerReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_ShowCenterMarkerReceived_m8402F5BB9322D3CE40579643D903CAB28417D973 (void);
// 0x000000FB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ShowCenterMarkerReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_ShowCenterMarkerReceived_m137070EA44BE28A5F2BABE6DBA89DCBBFD0A8267 (void);
// 0x000000FC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_ShowFocusPlaneReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_ShowFocusPlaneReceived_mAAE002D7C20AC071662B45B70F28D5C19C689A23 (void);
// 0x000000FD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_ShowFocusPlaneReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_ShowFocusPlaneReceived_m73EAB645D56A095AC9F0EE47982AE6B29264AC48 (void);
// 0x000000FE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_VideoStreamIsRunningReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_add_VideoStreamIsRunningReceived_mA7C475B79A5E558A7AFC8077FDE87EB76F16BFE9 (void);
// 0x000000FF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_VideoStreamIsRunningReceived(System.Action`1<System.Boolean>)
extern void VirtualCameraHost_remove_VideoStreamIsRunningReceived_mC3A59BDF86BA790E42E3176987B04C9DBE397392 (void);
// 0x00000100 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_VideoStreamPortReceived(System.Action`1<System.Int32>)
extern void VirtualCameraHost_add_VideoStreamPortReceived_m2D528DB78FF032DD8864BC3125C5180B3A87A611 (void);
// 0x00000101 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_VideoStreamPortReceived(System.Action`1<System.Int32>)
extern void VirtualCameraHost_remove_VideoStreamPortReceived_m9CCB5F1A97CE292E17C2C366712409EF21717ECC (void);
// 0x00000102 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_LensKitDescriptorReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.LensKitDescriptor>)
extern void VirtualCameraHost_add_LensKitDescriptorReceived_m749820AEBACC58A80D43D066DDDB7C2AD35C601D (void);
// 0x00000103 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_LensKitDescriptorReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.LensKitDescriptor>)
extern void VirtualCameraHost_remove_LensKitDescriptorReceived_m40E8B2A2086675BA949A827B901A070A5A653CA9 (void);
// 0x00000104 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_SelectedLensAssetReceived(System.Action`1<System.Int32>)
extern void VirtualCameraHost_add_SelectedLensAssetReceived_mDAAA96509EBA19CA06DCA44EADFD1E982ACAD683 (void);
// 0x00000105 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_SelectedLensAssetReceived(System.Action`1<System.Int32>)
extern void VirtualCameraHost_remove_SelectedLensAssetReceived_mBA2BF4A88285DBB70A59CB31F2E18A0894D69788 (void);
// 0x00000106 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_SnapshotListDescriptorReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor>)
extern void VirtualCameraHost_add_SnapshotListDescriptorReceived_m81D0D30B570F06F6EC27B84893BCE7C28D9FDB03 (void);
// 0x00000107 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_SnapshotListDescriptorReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor>)
extern void VirtualCameraHost_remove_SnapshotListDescriptorReceived_mA2D8BB432EADD09DF42CD3B2A9F7992EC7CDAD90 (void);
// 0x00000108 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::add_VcamTrackMetadataListDescriptorReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor>)
extern void VirtualCameraHost_add_VcamTrackMetadataListDescriptorReceived_mEBD6EE4DE786E1E8C5A8B9EA9DB2220E2D6FC342 (void);
// 0x00000109 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::remove_VcamTrackMetadataListDescriptorReceived(System.Action`1<Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor>)
extern void VirtualCameraHost_remove_VcamTrackMetadataListDescriptorReceived_m44EE5FD55C2A92B94DF2C83BBE41C7F60E19B545 (void);
// 0x0000010A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::.ctor(Unity.LiveCapture.Networking.NetworkBase,Unity.LiveCapture.Networking.Remote,System.IO.Stream)
extern void VirtualCameraHost__ctor_mCCC6F848E70BC48EF654D16AD6D132558C04F6A2 (void);
// 0x0000010B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendChannelFlags(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraHost_SendChannelFlags_m26C1A813C35E46F1CEE6193CDAF610F291E1B4CB (void);
// 0x0000010C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendInput(Unity.LiveCapture.VirtualCamera.InputSample)
extern void VirtualCameraHost_SendInput_m50F2056C5847E74468B6162C00FD81EEB2F72D27 (void);
// 0x0000010D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendJoysticks(Unity.LiveCapture.VirtualCamera.JoysticksSample)
extern void VirtualCameraHost_SendJoysticks_mF653638C90D03C2D4E62275D8AA16C17F18CA8A5 (void);
// 0x0000010E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendGamepad(Unity.LiveCapture.VirtualCamera.GamepadSample)
extern void VirtualCameraHost_SendGamepad_m8D043FC35189154583AE9C2947B50FA411B8909A (void);
// 0x0000010F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendPose(Unity.LiveCapture.VirtualCamera.PoseSample)
extern void VirtualCameraHost_SendPose_m6A122B3A2ECD5D184781EA355FA6C58223426CC3 (void);
// 0x00000110 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocalLength(Unity.LiveCapture.VirtualCamera.FocalLengthSample)
extern void VirtualCameraHost_SendFocalLength_m02886C33E47B94DFCD176FC88983E74C16E7938E (void);
// 0x00000111 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocusDistance(Unity.LiveCapture.VirtualCamera.FocusDistanceSample)
extern void VirtualCameraHost_SendFocusDistance_mBC0046682EC52E40D98D0277E6122E29F5EC5FC6 (void);
// 0x00000112 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendAperture(Unity.LiveCapture.VirtualCamera.ApertureSample)
extern void VirtualCameraHost_SendAperture_m6D0950B03CD4680E6556276C32D3523EAF6BE07D (void);
// 0x00000113 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendDampingEnabled(System.Boolean)
extern void VirtualCameraHost_SendDampingEnabled_m4A23352E5A432C6E5E3C8F81C8EBE2DF1F90397A (void);
// 0x00000114 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendBodyDamping(UnityEngine.Vector3)
extern void VirtualCameraHost_SendBodyDamping_m789DC8F93D15A2B922B3CC0A0CBACE63284F5077 (void);
// 0x00000115 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendAimDamping(System.Single)
extern void VirtualCameraHost_SendAimDamping_m8DC93BDA20035DCC1BC52933BDDB82FF1BE084DE (void);
// 0x00000116 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocalLengthDamping(System.Single)
extern void VirtualCameraHost_SendFocalLengthDamping_m37C39BF1ED02B5373F299BD63543ECAF10864FF0 (void);
// 0x00000117 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocusDistanceDamping(System.Single)
extern void VirtualCameraHost_SendFocusDistanceDamping_mFCD516855ACC1EB7533F55FB028E2DFDAF30AF90 (void);
// 0x00000118 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendApertureDamping(System.Single)
extern void VirtualCameraHost_SendApertureDamping_m53BB3D310B476A4A10A6E179F058253D1789252B (void);
// 0x00000119 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendPositionLock(Unity.LiveCapture.VirtualCamera.PositionAxis)
extern void VirtualCameraHost_SendPositionLock_m6D50BE394009D446CF227497A802ABBC65FF70D4 (void);
// 0x0000011A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendRotationLock(Unity.LiveCapture.VirtualCamera.RotationAxis)
extern void VirtualCameraHost_SendRotationLock_mD17E879098C12D57B73E0AB2A8041CFB22D1996D (void);
// 0x0000011B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendAutoHorizon(System.Boolean)
extern void VirtualCameraHost_SendAutoHorizon_m77D508B7D6E56F15466F0F7004890D235964394C (void);
// 0x0000011C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendErgonomicTilt(System.Single)
extern void VirtualCameraHost_SendErgonomicTilt_m89F33E7DDFA400EDCD6C56FF61F89898D532043D (void);
// 0x0000011D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendRebasing(System.Boolean)
extern void VirtualCameraHost_SendRebasing_mBA103DDC7FF528112F48C0B3D6FFC9DACE4FC636 (void);
// 0x0000011E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendMotionScale(UnityEngine.Vector3)
extern void VirtualCameraHost_SendMotionScale_mA803E511B0BE6694B9DB6BD121D2D7F66C802963 (void);
// 0x0000011F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendJoystickSensitivity(UnityEngine.Vector3)
extern void VirtualCameraHost_SendJoystickSensitivity_mA573D5BDE38104F4B37747EFABECE82F6BE897C4 (void);
// 0x00000120 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendPedestalSpace(UnityEngine.Space)
extern void VirtualCameraHost_SendPedestalSpace_m0A80B9BDE9CC577CC9EC56A1B94B621A6068D3B2 (void);
// 0x00000121 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendMotionSpace(UnityEngine.Space)
extern void VirtualCameraHost_SendMotionSpace_mF0145E85283E732BCC09A7CD81EBA0B7DBA1C37A (void);
// 0x00000122 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocusMode(Unity.LiveCapture.VirtualCamera.FocusMode)
extern void VirtualCameraHost_SendFocusMode_mAE55D63C45A7A1998DBF40DF471B22F7CDFDACBA (void);
// 0x00000123 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocusReticlePosition(UnityEngine.Vector2)
extern void VirtualCameraHost_SendFocusReticlePosition_m07480D867E11489D46FBE8EDF5D3CC7D97CED4DA (void);
// 0x00000124 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendFocusDistanceOffset(System.Single)
extern void VirtualCameraHost_SendFocusDistanceOffset_mA616674FA1E2DE44F812E611FDDE7577CB19C0D5 (void);
// 0x00000125 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendCropAspect(System.Single)
extern void VirtualCameraHost_SendCropAspect_m0F8E80225776C20BB747D1D301AAC459491AAFB1 (void);
// 0x00000126 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendShowGateMask(System.Boolean)
extern void VirtualCameraHost_SendShowGateMask_m292541BBBC13FCFAF63821963EC4471974BD13B9 (void);
// 0x00000127 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendShowFrameLines(System.Boolean)
extern void VirtualCameraHost_SendShowFrameLines_m37CA68770163DA7C287A9437FFD10D259484F7BB (void);
// 0x00000128 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendShowCenterMarker(System.Boolean)
extern void VirtualCameraHost_SendShowCenterMarker_m9E45D579047A6AB59DCDC6CDBDF6AA565DDD5223 (void);
// 0x00000129 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SendShowFocusPlane(System.Boolean)
extern void VirtualCameraHost_SendShowFocusPlane_m90F510DD18CB41D248CE72691C56706CFA9C35E6 (void);
// 0x0000012A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SetErgonomicTilt(System.Single)
extern void VirtualCameraHost_SetErgonomicTilt_m1228D9CEFDBDF0A91435C72E4AA61D20F1A661E7 (void);
// 0x0000012B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SetPoseToOrigin()
extern void VirtualCameraHost_SetPoseToOrigin_m37744FD883673B03978A7901A047DE49377799F7 (void);
// 0x0000012C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::SetLensAsset(System.Guid)
extern void VirtualCameraHost_SetLensAsset_m3AC9A2941CED947D0552E485FFD04C9536261B11 (void);
// 0x0000012D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::TakeSnapshot()
extern void VirtualCameraHost_TakeSnapshot_m2845A24F89D5633979AFADE8F7410FBB1E90CBC9 (void);
// 0x0000012E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::GoToSnapshot(System.Int32)
extern void VirtualCameraHost_GoToSnapshot_m919B77AC5341E25427B43B02C1469C336A8BD061 (void);
// 0x0000012F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::LoadSnapshot(System.Int32)
extern void VirtualCameraHost_LoadSnapshot_m38C19B24ED0ED5DA13B7E085AAAF989F1A7E582D (void);
// 0x00000130 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::DeleteSnapshot(System.Int32)
extern void VirtualCameraHost_DeleteSnapshot_mF0824D037A4DCB95FDF823F87EF643D80C2630A1 (void);
// 0x00000131 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_4(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_4_m99C1D929BBC6D886E46D67B85E73AC6B765D06BA (void);
// 0x00000132 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_5(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_5_m8F044D6427DA0A276AA28A83FC0328AC11AD2254 (void);
// 0x00000133 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_6(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_6_mD3EF70944AB86A3D2C5F00EEA686F2790628E57B (void);
// 0x00000134 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_7(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_7_mC69275DDA2330AB2743C1CC5D8F387E4C555BC08 (void);
// 0x00000135 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_8(UnityEngine.Vector2)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_8_mA78B46BC544084C20F058798EC1A74B11559FF2D (void);
// 0x00000136 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_9(System.Int32)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_9_mA2380A8CFA8DAFB08FAE1F12879FDCC86D4F9DA5 (void);
// 0x00000137 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_10(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_10_m613F5AED9250100A483ED57AC4DB96A3F7692D00 (void);
// 0x00000138 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_11(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_11_m711138E880E3CE22B7E51F88FAD9E08B89AD6767 (void);
// 0x00000139 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_12(UnityEngine.Vector3)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_12_mA851A5B5C65AA66BF93E4388B3061F8FFF681908 (void);
// 0x0000013A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_13(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_13_m205085F3A214996C4F6CF3D3EE95016BBD060172 (void);
// 0x0000013B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_14(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_14_m98038F40C647D78509F4E8963CAFDA2EF2030B2B (void);
// 0x0000013C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_15(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_15_mEEC60D26C7765075E097A1A049257A25B4BBC343 (void);
// 0x0000013D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_16(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_16_m6CB538053DA76F140E120616E6158D8EFF3AB0C3 (void);
// 0x0000013E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_17(Unity.LiveCapture.VirtualCamera.PositionAxis)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_17_mF7553C28C90EBCCD7CE9C59863A02A13511ACC3F (void);
// 0x0000013F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_18(Unity.LiveCapture.VirtualCamera.RotationAxis)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_18_m47692B57507A36C461BFDDC649931AEC7E4E0F17 (void);
// 0x00000140 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_19(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_19_m6E2DA6678D342FA3E50FA1654104974FB199C485 (void);
// 0x00000141 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_20(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_20_mAAD4C5AE724890605B9BD6586DD47016BFE76B79 (void);
// 0x00000142 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_21(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_21_mEE5061C461F3E7BFEA426572021FE947F1A483BF (void);
// 0x00000143 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_22(UnityEngine.Vector3)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_22_m6F4B734C67AE01373A764A5FD2BE4044949EEDC4 (void);
// 0x00000144 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_23(UnityEngine.Vector3)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_23_mDCE4586044A00D83C2C0E17017B6D13C62E5E376 (void);
// 0x00000145 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_24(UnityEngine.Space)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_24_m5F51103EB43AA56E9B44EB3D4E199E278AA4972A (void);
// 0x00000146 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_25(UnityEngine.Space)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_25_mD68B8A7B435760CDAC48D2850795981A1E302D24 (void);
// 0x00000147 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_26(Unity.LiveCapture.VirtualCamera.FocusMode)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_26_m0AFCCA2620C1857267787E2371375529BAA0D196 (void);
// 0x00000148 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_27(UnityEngine.Vector2)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_27_mDA363F6D604784207168C7743E9DC9B584F69693 (void);
// 0x00000149 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_28(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_28_m3A1945771687A98CD57A51CE3C057D6D534E6627 (void);
// 0x0000014A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_29(System.Single)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_29_m1BB1DA250ABC444E74D494F0EF886F5319EA205E (void);
// 0x0000014B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_30(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_30_mBD04331D6D2D764923DB967EC2B6979A9E675447 (void);
// 0x0000014C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_31(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_31_mD9BF519464E77F86B130E6C6BE8607FBF01705FD (void);
// 0x0000014D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_32(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_32_m56DC0A33D8D6D67946AB57979A922F7B8DB3A138 (void);
// 0x0000014E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_33(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_33_m6CA015774DFB0A5F781F0F884A8AE2D5A58B1966 (void);
// 0x0000014F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_34(System.Boolean)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_34_mDE09067DC2E229D45F8CF9121D48B57752AF23C0 (void);
// 0x00000150 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_35(System.Int32)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_35_m171B2A27C5E05385E4B98DA736DB31E9FDBD0D8B (void);
// 0x00000151 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_36(Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_36_m0227E48C81CCBA74DB7AE290E4BF06F2180F808E (void);
// 0x00000152 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_37(System.Int32)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_37_mA06060A3FE324645E29566CF46D9D5D1447CE637 (void);
// 0x00000153 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_38(Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_38_mD0E098AEBC54ACB62B17520C21E44341426258C0 (void);
// 0x00000154 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost::<.ctor>b__146_39(Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0)
extern void VirtualCameraHost_U3C_ctorU3Eb__146_39_m41536BF907892F07ED94F990DEA2CB077BB72FD8 (void);
// 0x00000155 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_0::.ctor()
extern void U3CU3Ec__DisplayClass146_0__ctor_mFE3D5E8845ECD2186E2438E0419FF4091A87BEBE (void);
// 0x00000156 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_0::<.ctor>b__0(Unity.LiveCapture.VirtualCamera.PoseSample)
extern void U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__0_mE84E4539C375B9494442E5517B4B0D5345094B5E (void);
// 0x00000157 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_0::<.ctor>b__1(Unity.LiveCapture.VirtualCamera.FocalLengthSample)
extern void U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__1_m976F6D235E78AAC0EE718831BF4EECB66BBA8666 (void);
// 0x00000158 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_0::<.ctor>b__2(Unity.LiveCapture.VirtualCamera.FocusDistanceSample)
extern void U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__2_m9B4E5657FE7D565F96D8190E8E64FB4DCC5F8706 (void);
// 0x00000159 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_0::<.ctor>b__3(Unity.LiveCapture.VirtualCamera.ApertureSample)
extern void U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__3_m838F48EC075A8702B679EA43F0C329C59E84C3E5 (void);
// 0x0000015A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_1::.ctor()
extern void U3CU3Ec__DisplayClass146_1__ctor_m0A78FD3CF427FE0406C0BC22708B46B5B8047778 (void);
// 0x0000015B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_1::<.ctor>b__40(Unity.LiveCapture.VirtualCamera.PoseSample)
extern void U3CU3Ec__DisplayClass146_1_U3C_ctorU3Eb__40_m13851CD0DE73BEDAD4D78A665E56DCBDB85A3703 (void);
// 0x0000015C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_2::.ctor()
extern void U3CU3Ec__DisplayClass146_2__ctor_m69424B8F13731E2313DB4358121C112A72F9DBB8 (void);
// 0x0000015D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_2::<.ctor>b__41(Unity.LiveCapture.VirtualCamera.FocalLengthSample)
extern void U3CU3Ec__DisplayClass146_2_U3C_ctorU3Eb__41_m39A0B7C0EBBEE8646B29FB7D8BCDBDD63D2A5E5E (void);
// 0x0000015E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_3::.ctor()
extern void U3CU3Ec__DisplayClass146_3__ctor_m06CB9CC0FF2F7EA3A3EE1B0DB829578B2BE54B71 (void);
// 0x0000015F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_3::<.ctor>b__42(Unity.LiveCapture.VirtualCamera.FocusDistanceSample)
extern void U3CU3Ec__DisplayClass146_3_U3C_ctorU3Eb__42_mD70D36C6A335B419DF51654B264F35BD968B4CCD (void);
// 0x00000160 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_4::.ctor()
extern void U3CU3Ec__DisplayClass146_4__ctor_mA75D61E1D046DF4D9C012CBA972903167292E0A4 (void);
// 0x00000161 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraHost/<>c__DisplayClass146_4::<.ctor>b__43(Unity.LiveCapture.VirtualCamera.ApertureSample)
extern void U3CU3Ec__DisplayClass146_4_U3C_ctorU3Eb__43_m4CAAE428CA1A4B75DDA5F5E9D5CA19C40944E146 (void);
// 0x00000162 System.Void Unity.LiveCapture.VirtualCamera.CameraBodyParameterLimits::.cctor()
extern void CameraBodyParameterLimits__cctor_m642FF5123FEB3B08ED769BBAA12EE6603DB46BD6 (void);
// 0x00000163 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.CameraBody::get_DefaultSensorSize()
extern void CameraBody_get_DefaultSensorSize_m21DC7C40BBFED30F351BA21B5415CDD64673D26A (void);
// 0x00000164 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.CameraBody::get_SensorSize()
extern void CameraBody_get_SensorSize_m57BD99794EB2B8FD6726BD4C7EFCCBDBCF239E19 (void);
// 0x00000165 System.Void Unity.LiveCapture.VirtualCamera.CameraBody::set_SensorSize(UnityEngine.Vector2)
extern void CameraBody_set_SensorSize_m538765E6BCE5EAC9303CB6D24E17451F2E2F4534 (void);
// 0x00000166 System.Int32 Unity.LiveCapture.VirtualCamera.CameraBody::get_Iso()
extern void CameraBody_get_Iso_mBD7E43DF43AB68AB691C3834EB837BE77DCC65F8 (void);
// 0x00000167 System.Void Unity.LiveCapture.VirtualCamera.CameraBody::set_Iso(System.Int32)
extern void CameraBody_set_Iso_m3D13402100F58A2DB9929C0444A18B210AEE8673 (void);
// 0x00000168 System.Single Unity.LiveCapture.VirtualCamera.CameraBody::get_ShutterSpeed()
extern void CameraBody_get_ShutterSpeed_m6488A7C82A70358E47079EEC1582980635DEAE16 (void);
// 0x00000169 System.Void Unity.LiveCapture.VirtualCamera.CameraBody::set_ShutterSpeed(System.Single)
extern void CameraBody_set_ShutterSpeed_mCDE51EAD272A5FBAC62475BA9B702FC30910C3B7 (void);
// 0x0000016A System.Boolean Unity.LiveCapture.VirtualCamera.CameraBody::Equals(Unity.LiveCapture.VirtualCamera.CameraBody)
extern void CameraBody_Equals_m8215DA58FF64F84F98278B7E32DA0CDFEA2663FA (void);
// 0x0000016B System.Boolean Unity.LiveCapture.VirtualCamera.CameraBody::Equals(System.Object)
extern void CameraBody_Equals_mDDCEFB8B12B2AC84FA7598B7668078CFB2E2E202 (void);
// 0x0000016C System.Int32 Unity.LiveCapture.VirtualCamera.CameraBody::GetHashCode()
extern void CameraBody_GetHashCode_m2A692D08A175E7CD17788FFA274420ED0F365FE0 (void);
// 0x0000016D System.Boolean Unity.LiveCapture.VirtualCamera.CameraBody::op_Equality(Unity.LiveCapture.VirtualCamera.CameraBody,Unity.LiveCapture.VirtualCamera.CameraBody)
extern void CameraBody_op_Equality_m1EF95F2668244FE37D5CBCD03938CE4DC35E8E82 (void);
// 0x0000016E System.Boolean Unity.LiveCapture.VirtualCamera.CameraBody::op_Inequality(Unity.LiveCapture.VirtualCamera.CameraBody,Unity.LiveCapture.VirtualCamera.CameraBody)
extern void CameraBody_op_Inequality_mED58063F2FD8603010087CC629ECB888A8E1791C (void);
// 0x0000016F System.Void Unity.LiveCapture.VirtualCamera.CameraBody::.cctor()
extern void CameraBody__cctor_mB4600871ED97BA3B1815678E5C283A71DBC10C5B (void);
// 0x00000170 System.Void Unity.LiveCapture.VirtualCamera.CameraBodyExtensions::Validate(Unity.LiveCapture.VirtualCamera.CameraBody&)
extern void CameraBodyExtensions_Validate_mEE381CE88F20B129884FAF6D13BBB4E11921E0AE (void);
// 0x00000171 System.Void Unity.LiveCapture.VirtualCamera.CameraBodyExtensions::ValidateSensorSize(Unity.LiveCapture.VirtualCamera.CameraBody&)
extern void CameraBodyExtensions_ValidateSensorSize_m65923A840EFE24475DF922A1785659BAEF9D5CDB (void);
// 0x00000172 System.Void Unity.LiveCapture.VirtualCamera.CameraBodyExtensions::ValidateIso(Unity.LiveCapture.VirtualCamera.CameraBody&)
extern void CameraBodyExtensions_ValidateIso_m4D4E647FFFA0B42C61F3B10C33368640F00C3C74 (void);
// 0x00000173 System.Void Unity.LiveCapture.VirtualCamera.CameraBodyExtensions::ValidateShutterSpeed(Unity.LiveCapture.VirtualCamera.CameraBody&)
extern void CameraBodyExtensions_ValidateShutterSpeed_m9474F79F431B62A15CA9C3EE481600D2F3A3F3A0 (void);
// 0x00000174 System.Boolean Unity.LiveCapture.VirtualCamera.Damping::op_Equality(Unity.LiveCapture.VirtualCamera.Damping,Unity.LiveCapture.VirtualCamera.Damping)
extern void Damping_op_Equality_mE0BF0B844EFA6F4A9AECECCD8CC89B40D0028E8D (void);
// 0x00000175 System.Boolean Unity.LiveCapture.VirtualCamera.Damping::op_Inequality(Unity.LiveCapture.VirtualCamera.Damping,Unity.LiveCapture.VirtualCamera.Damping)
extern void Damping_op_Inequality_m0A393DEF8DE85BAC610EC8DED3A836F9BBD9FCFF (void);
// 0x00000176 System.Boolean Unity.LiveCapture.VirtualCamera.Damping::Equals(System.Object)
extern void Damping_Equals_mAB5DA5F5581E0271980BF208BC9FE40009048D33 (void);
// 0x00000177 System.Boolean Unity.LiveCapture.VirtualCamera.Damping::Equals(Unity.LiveCapture.VirtualCamera.Damping)
extern void Damping_Equals_mC63B6C8C9E6EE517E46A5D0035E8F8CD2EC3CBB4 (void);
// 0x00000178 System.Int32 Unity.LiveCapture.VirtualCamera.Damping::GetHashCode()
extern void Damping_GetHashCode_m832DD9394B86353889C1A3EE90EA8D3547FB7B09 (void);
// 0x00000179 System.Void Unity.LiveCapture.VirtualCamera.Damping::.cctor()
extern void Damping__cctor_mD2A5C8EABF9A45FBB2C2F84AC9E8EB21A80CE2FC (void);
// 0x0000017A System.Single Unity.LiveCapture.VirtualCamera.Lens::get_FocalLength()
extern void Lens_get_FocalLength_mBE4A25CFE01DA0040A5BCCA43CB6C54AB264E973 (void);
// 0x0000017B System.Void Unity.LiveCapture.VirtualCamera.Lens::set_FocalLength(System.Single)
extern void Lens_set_FocalLength_m1CA608D42692D55DDA0AD6E1D9FE8309183AE85D (void);
// 0x0000017C System.Single Unity.LiveCapture.VirtualCamera.Lens::get_FocusDistance()
extern void Lens_get_FocusDistance_m00087F445C45AEAD6CC931F19127202F1064C1C0 (void);
// 0x0000017D System.Void Unity.LiveCapture.VirtualCamera.Lens::set_FocusDistance(System.Single)
extern void Lens_set_FocusDistance_m537518C8ECFA42957360C31730E3CBEDB7D42545 (void);
// 0x0000017E System.Single Unity.LiveCapture.VirtualCamera.Lens::get_Aperture()
extern void Lens_get_Aperture_mCB8A88845749E454FC6397D6F5AAE16A17F64AC6 (void);
// 0x0000017F System.Void Unity.LiveCapture.VirtualCamera.Lens::set_Aperture(System.Single)
extern void Lens_set_Aperture_mE793F3CFEBB9A6E9EB75CD4AF837A49CF8BE14C8 (void);
// 0x00000180 System.Boolean Unity.LiveCapture.VirtualCamera.Lens::Equals(Unity.LiveCapture.VirtualCamera.Lens)
extern void Lens_Equals_mE180110E0AC18C9F1B6A70F071A327329F6B8065 (void);
// 0x00000181 System.Boolean Unity.LiveCapture.VirtualCamera.Lens::Equals(System.Object)
extern void Lens_Equals_m10275F066902B301B1103088AA576BA31505015A (void);
// 0x00000182 System.Int32 Unity.LiveCapture.VirtualCamera.Lens::GetHashCode()
extern void Lens_GetHashCode_mCA26CA57BCB505F566D30E1C5A4AD33321BFF903 (void);
// 0x00000183 System.Boolean Unity.LiveCapture.VirtualCamera.Lens::op_Equality(Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.Lens)
extern void Lens_op_Equality_m645B02677BE270DD9F8E0DDE22A10FCFC63AB072 (void);
// 0x00000184 System.Boolean Unity.LiveCapture.VirtualCamera.Lens::op_Inequality(Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.Lens)
extern void Lens_op_Inequality_mF35C36617A635D0FC3E295A09E0FA3172CAE4A90 (void);
// 0x00000185 System.Void Unity.LiveCapture.VirtualCamera.Lens::.cctor()
extern void Lens__cctor_m9B09C433D8A51E86C4305167DC58B0E4BC191F85 (void);
// 0x00000186 System.Void Unity.LiveCapture.VirtualCamera.LensExtensions::Validate(Unity.LiveCapture.VirtualCamera.Lens&,Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void LensExtensions_Validate_mC2B2CFF9E7DA04BA4C59880E30CEDDFB825E59C8 (void);
// 0x00000187 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_FocalLengthRange()
extern void LensIntrinsics_get_FocalLengthRange_m025EC2905CDCC404164BABC592A0283BF2A5637C (void);
// 0x00000188 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_FocalLengthRange(UnityEngine.Vector2)
extern void LensIntrinsics_set_FocalLengthRange_m78490921319A48BC3E4DF149B886169E7C18C405 (void);
// 0x00000189 System.Single Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_CloseFocusDistance()
extern void LensIntrinsics_get_CloseFocusDistance_m9F5BDA5846E204157501009F6F8C6F6013F3F2C8 (void);
// 0x0000018A System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_CloseFocusDistance(System.Single)
extern void LensIntrinsics_set_CloseFocusDistance_m5414DB32227ABCB4F433A11010BA2B5B23126A0B (void);
// 0x0000018B UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_ApertureRange()
extern void LensIntrinsics_get_ApertureRange_mC5FC518909DBFF1016CB4E4248E7ABAD9AEFD722 (void);
// 0x0000018C System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_ApertureRange(UnityEngine.Vector2)
extern void LensIntrinsics_set_ApertureRange_mCA78AF2F423D4E2C7F82D0781FC7AB2D2699A485 (void);
// 0x0000018D UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_LensShift()
extern void LensIntrinsics_get_LensShift_m7F021A7722141AA459B1D2661A6BBB62ECAD6290 (void);
// 0x0000018E System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_LensShift(UnityEngine.Vector2)
extern void LensIntrinsics_set_LensShift_mD33CF32A4FC73468F6D7BF98162F4AD029B1F029 (void);
// 0x0000018F System.Int32 Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_BladeCount()
extern void LensIntrinsics_get_BladeCount_m7F7B5F11A88C4FD59A8DF83F7EADADCC6DC1640D (void);
// 0x00000190 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_BladeCount(System.Int32)
extern void LensIntrinsics_set_BladeCount_m0B9FFBBBED33594669D5F9635290D2BD452DF398 (void);
// 0x00000191 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_Curvature()
extern void LensIntrinsics_get_Curvature_m83E347CD0794843055DC31B4D9B778DCE64BD28B (void);
// 0x00000192 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_Curvature(UnityEngine.Vector2)
extern void LensIntrinsics_set_Curvature_mE4FED4B32EE41DFC81FC2EF05658E5FA40F83F7C (void);
// 0x00000193 System.Single Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_BarrelClipping()
extern void LensIntrinsics_get_BarrelClipping_m83BB383CA2F25AC82C01DE84F0A4DB0AE302CDC0 (void);
// 0x00000194 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_BarrelClipping(System.Single)
extern void LensIntrinsics_set_BarrelClipping_m0212EE07B4415D73DAE7B72BFD73F45CBCF7B505 (void);
// 0x00000195 System.Single Unity.LiveCapture.VirtualCamera.LensIntrinsics::get_Anamorphism()
extern void LensIntrinsics_get_Anamorphism_mB94AF73FFDA43DAD98225DE7749EEA43940465D0 (void);
// 0x00000196 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::set_Anamorphism(System.Single)
extern void LensIntrinsics_set_Anamorphism_mB4FF5E76652C835B4D64E6E999E5BA257152BBF9 (void);
// 0x00000197 System.Boolean Unity.LiveCapture.VirtualCamera.LensIntrinsics::Equals(Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void LensIntrinsics_Equals_m97CA0464C4F0006FD05200DB40E1EAD692B5AF33 (void);
// 0x00000198 System.Boolean Unity.LiveCapture.VirtualCamera.LensIntrinsics::Equals(System.Object)
extern void LensIntrinsics_Equals_m4D231AD6ECCBD39012303329EB6349D5DC868EF3 (void);
// 0x00000199 System.Int32 Unity.LiveCapture.VirtualCamera.LensIntrinsics::GetHashCode()
extern void LensIntrinsics_GetHashCode_m670B20275E6DE8BCB60E054AF1B4E57483D27F7B (void);
// 0x0000019A System.Boolean Unity.LiveCapture.VirtualCamera.LensIntrinsics::op_Equality(Unity.LiveCapture.VirtualCamera.LensIntrinsics,Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void LensIntrinsics_op_Equality_mD8D1973A81B3A576DE6AA0C1A80FEFCD4361C858 (void);
// 0x0000019B System.Boolean Unity.LiveCapture.VirtualCamera.LensIntrinsics::op_Inequality(Unity.LiveCapture.VirtualCamera.LensIntrinsics,Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void LensIntrinsics_op_Inequality_m335434B860DB00A18896EC987BBE96042229D35E (void);
// 0x0000019C System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsics::.cctor()
extern void LensIntrinsics__cctor_mBCC9C9F942FFF92C6A720831627CAAB9A55CAE1B (void);
// 0x0000019D System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::Validate(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_Validate_m932907FD04A9DF11E2AE0B377A1FF8A1439C882C (void);
// 0x0000019E System.Single Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateFocalLength(Unity.LiveCapture.VirtualCamera.LensIntrinsics,System.Single)
extern void LensIntrinsicsExtensions_ValidateFocalLength_mFF98A2C35AA92793117300AE99C35D528E117EC1 (void);
// 0x0000019F System.Single Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateFocusDistance(Unity.LiveCapture.VirtualCamera.LensIntrinsics,System.Single)
extern void LensIntrinsicsExtensions_ValidateFocusDistance_m492D52DCAEC384BA3DC43FFDE07DEB6CE6334112 (void);
// 0x000001A0 System.Single Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateAperture(Unity.LiveCapture.VirtualCamera.LensIntrinsics,System.Single)
extern void LensIntrinsicsExtensions_ValidateAperture_m8C2E21E59C9702233B9F29600514985D4558338E (void);
// 0x000001A1 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateFocalLengthRange(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateFocalLengthRange_mB3FFF8F0BDB6B43595E8B3B9D41471099D774446 (void);
// 0x000001A2 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateFocusDistanceRange(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateFocusDistanceRange_m729D7280FB9E6110D42A63D440C09D0EDD487125 (void);
// 0x000001A3 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateApertureRange(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateApertureRange_m332BF16E506FE8DC58387011C5935E25369721C5 (void);
// 0x000001A4 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateBladeCount(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateBladeCount_mE800F1A07A1D2799C87141B9CB3B98754921D896 (void);
// 0x000001A5 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateCurvature(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateCurvature_m238472FE90BA51E1EBE0487F5385BCAFAD29E9E2 (void);
// 0x000001A6 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateBarrelClipping(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateBarrelClipping_m46746A94D043C0C9D3BB7C70154CA998DE9FCDA9 (void);
// 0x000001A7 System.Void Unity.LiveCapture.VirtualCamera.LensIntrinsicsExtensions::ValidateAnamorphism(Unity.LiveCapture.VirtualCamera.LensIntrinsics&)
extern void LensIntrinsicsExtensions_ValidateAnamorphism_m048F0ED6529537F9FA3E2B5F1A6B2B433C5E7BDC (void);
// 0x000001A8 System.Void Unity.LiveCapture.VirtualCamera.LensLimits::.cctor()
extern void LensLimits__cctor_mDF45D94B9D2851D44C435AAC77A9B797F89C6F0F (void);
// 0x000001A9 System.Double Unity.LiveCapture.VirtualCamera.ApertureSample::get_Time()
extern void ApertureSample_get_Time_m5C25C8558B7AB86807E29B64750BFB8D98185A36 (void);
// 0x000001AA System.Void Unity.LiveCapture.VirtualCamera.ApertureSample::set_Time(System.Double)
extern void ApertureSample_set_Time_mE9B285AD9C04152A4C5FD3830CDBF37CA9C27221 (void);
// 0x000001AB System.Double Unity.LiveCapture.VirtualCamera.FocalLengthSample::get_Time()
extern void FocalLengthSample_get_Time_m59960FA4AD6CBF17A8692914D17FFFDA1A09C585 (void);
// 0x000001AC System.Void Unity.LiveCapture.VirtualCamera.FocalLengthSample::set_Time(System.Double)
extern void FocalLengthSample_set_Time_mB64A4381A5533F4C1695E6A3C949952F2A209DD6 (void);
// 0x000001AD System.Double Unity.LiveCapture.VirtualCamera.FocusDistanceSample::get_Time()
extern void FocusDistanceSample_get_Time_mC2163345A6F7217D25319887CA948971B1C07A80 (void);
// 0x000001AE System.Void Unity.LiveCapture.VirtualCamera.FocusDistanceSample::set_Time(System.Double)
extern void FocusDistanceSample_set_Time_m463DFB091517982F8E65F4EB698FD0D9D436656B (void);
// 0x000001AF System.Double Unity.LiveCapture.VirtualCamera.GamepadSample::get_Time()
extern void GamepadSample_get_Time_mBEFA677C035141023BA516D60BCCE31636EF9D91 (void);
// 0x000001B0 System.Void Unity.LiveCapture.VirtualCamera.GamepadSample::set_Time(System.Double)
extern void GamepadSample_set_Time_m9EFD433216AEB0639C8A4FDBE475949EC8AE61CA (void);
// 0x000001B1 System.Double Unity.LiveCapture.VirtualCamera.JoysticksSample::get_Time()
extern void JoysticksSample_get_Time_m9FEAA7B26309693B5FAE0A41987131BD3F05F759 (void);
// 0x000001B2 System.Void Unity.LiveCapture.VirtualCamera.JoysticksSample::set_Time(System.Double)
extern void JoysticksSample_set_Time_m05550D55269B7CB980D7A731B60CEB5981FBEF18 (void);
// 0x000001B3 System.Double Unity.LiveCapture.VirtualCamera.PoseSample::get_Time()
extern void PoseSample_get_Time_m1F3663D84E7DC90AE0D4238C4C77A063795D48F0 (void);
// 0x000001B4 System.Void Unity.LiveCapture.VirtualCamera.PoseSample::set_Time(System.Double)
extern void PoseSample_set_Time_mF51D44DC5C977DBF1F310150F27E60E741CC1D2F (void);
// 0x000001B5 System.String Unity.LiveCapture.VirtualCamera.Settings::ToString()
extern void Settings_ToString_m4DA28138C5829CA8DF1B047B48A05DD66E3A33FA (void);
// 0x000001B6 System.Void Unity.LiveCapture.VirtualCamera.Settings::Validate()
extern void Settings_Validate_m000CDEFC7FE09CE52E3C01A39B0B44AE506551A4 (void);
// 0x000001B7 System.Boolean Unity.LiveCapture.VirtualCamera.Settings::Equals(Unity.LiveCapture.VirtualCamera.Settings)
extern void Settings_Equals_mBE8B586D38FB27C2D11E585474947C39EAE20B33 (void);
// 0x000001B8 System.Boolean Unity.LiveCapture.VirtualCamera.Settings::Equals(System.Object)
extern void Settings_Equals_m937F379EB8B04E987858D8F8E7D8C83E05BD6C05 (void);
// 0x000001B9 System.Int32 Unity.LiveCapture.VirtualCamera.Settings::GetHashCode()
extern void Settings_GetHashCode_m17419316CD2BF1653CFC14E16C8D26D6FF91D5A9 (void);
// 0x000001BA System.Boolean Unity.LiveCapture.VirtualCamera.Settings::op_Equality(Unity.LiveCapture.VirtualCamera.Settings,Unity.LiveCapture.VirtualCamera.Settings)
extern void Settings_op_Equality_mD5F7CAB39BEE7267EEA49F55B0E6DCF127BD36A7 (void);
// 0x000001BB System.Boolean Unity.LiveCapture.VirtualCamera.Settings::op_Inequality(Unity.LiveCapture.VirtualCamera.Settings,Unity.LiveCapture.VirtualCamera.Settings)
extern void Settings_op_Inequality_m501DB7082DB23DC34067BA39917FB63FE15E08C5 (void);
// 0x000001BC System.Void Unity.LiveCapture.VirtualCamera.Settings::.cctor()
extern void Settings__cctor_mD1289FCD3820007FBDE1970C350F191DB4598FD3 (void);
// 0x000001BD System.Guid Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_TakeGuid()
extern void VcamTrackMetadataDescriptor_get_TakeGuid_m7C5AA9EA83D85202602E32468C6AF0156F92D768 (void);
// 0x000001BE System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_TakeGuid(System.Guid)
extern void VcamTrackMetadataDescriptor_set_TakeGuid_mA7F8756491DCA205292A7AA11B399A41E96A293B (void);
// 0x000001BF System.Single Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_FocalLength()
extern void VcamTrackMetadataDescriptor_get_FocalLength_m7E0D2BC58A1FD5E6DF15A198373C5B81A7EB89C2 (void);
// 0x000001C0 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_FocalLength(System.Single)
extern void VcamTrackMetadataDescriptor_set_FocalLength_mFB2D4ADBF2B5B467037B8872241668EC6D9A15AF (void);
// 0x000001C1 System.Single Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_FocusDistance()
extern void VcamTrackMetadataDescriptor_get_FocusDistance_m408BAF633B23AB0B933E13F68BD30EB8681DBC86 (void);
// 0x000001C2 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_FocusDistance(System.Single)
extern void VcamTrackMetadataDescriptor_set_FocusDistance_mA5482AE0CECFE58D8666AACED8A9E4BAEEC1B957 (void);
// 0x000001C3 System.Single Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_Aperture()
extern void VcamTrackMetadataDescriptor_get_Aperture_mA0A3E97D5050C22A6CEA834EF415B52063E7AD13 (void);
// 0x000001C4 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_Aperture(System.Single)
extern void VcamTrackMetadataDescriptor_set_Aperture_mF5031F7437AA545EB2D4E6C6FB24C7336C849EBE (void);
// 0x000001C5 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_SensorSize()
extern void VcamTrackMetadataDescriptor_get_SensorSize_m131EB8B9F8C50A07581B4AF45AEF463FA25AA659 (void);
// 0x000001C6 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_SensorSize(UnityEngine.Vector2)
extern void VcamTrackMetadataDescriptor_set_SensorSize_mA0C2370424BFF608873ED6CF6C8C705907F851C5 (void);
// 0x000001C7 System.String Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_SensorPresetName()
extern void VcamTrackMetadataDescriptor_get_SensorPresetName_m7C1230157CFFBFEC257BDD9439A0310DA5910F91 (void);
// 0x000001C8 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_SensorPresetName(System.String)
extern void VcamTrackMetadataDescriptor_set_SensorPresetName_m7B0153BA2B23240B979FD66A0E93C716B95C6EB3 (void);
// 0x000001C9 System.Single Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_Iso()
extern void VcamTrackMetadataDescriptor_get_Iso_m7FA908BC70647DCE6EC4193B2E132DED8AA6CC2C (void);
// 0x000001CA System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_Iso(System.Single)
extern void VcamTrackMetadataDescriptor_set_Iso_m7195988087570974797710B06D0C1789057047B7 (void);
// 0x000001CB System.Single Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_ShutterSpeed()
extern void VcamTrackMetadataDescriptor_get_ShutterSpeed_mF8BB9AB015D84AEBFDD89D64E178C815A0688E30 (void);
// 0x000001CC System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_ShutterSpeed(System.Single)
extern void VcamTrackMetadataDescriptor_set_ShutterSpeed_m96549D6D7B653EF5F5BE0A559AF4EB79F9C1E1A8 (void);
// 0x000001CD System.Single Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::get_AspectRatio()
extern void VcamTrackMetadataDescriptor_get_AspectRatio_m8CBCF97BD28BAED5365018C7C94636E72068A39C (void);
// 0x000001CE System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::set_AspectRatio(System.Single)
extern void VcamTrackMetadataDescriptor_set_AspectRatio_m788A5CB0D89067991E55006539E8E5C4453E6F5C (void);
// 0x000001CF Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::Create(Unity.LiveCapture.Take,Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata)
extern void VcamTrackMetadataDescriptor_Create_mCE13027D4CF358278D0948B46870109D59719298 (void);
// 0x000001D0 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor::.ctor()
extern void VcamTrackMetadataDescriptor__ctor_m43D7400AE5ACD0221176E9AD0B3BB7522FEC2A7A (void);
// 0x000001D1 System.Void Unity.LiveCapture.VirtualCamera.SensorPresetCacheProxy::.cctor()
extern void SensorPresetCacheProxy__cctor_mF64A711E5313D93677ADBB17B61C8F09D0B83221 (void);
// 0x000001D2 System.Void Unity.LiveCapture.VirtualCamera.SensorPresetCacheProxy/<>c::.cctor()
extern void U3CU3Ec__cctor_m2C78A2C19E652286763B6419777465B26D305AF6 (void);
// 0x000001D3 System.Void Unity.LiveCapture.VirtualCamera.SensorPresetCacheProxy/<>c::.ctor()
extern void U3CU3Ec__ctor_mC3278E95DE33BE574A7520848E2E8094098027FA (void);
// 0x000001D4 System.String Unity.LiveCapture.VirtualCamera.SensorPresetCacheProxy/<>c::<.cctor>b__1_0(UnityEngine.Vector2)
extern void U3CU3Ec_U3C_cctorU3Eb__1_0_m09CFCA3E0B21FFB40038DC351EA65EDA4BB69C9E (void);
// 0x000001D5 Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor[] Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor::get_Descriptors()
extern void VcamTrackMetadataListDescriptor_get_Descriptors_m694362F9D5AB134CFA8D8F70E2E31D0801F8E0F3 (void);
// 0x000001D6 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor::.ctor(System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor>)
extern void VcamTrackMetadataListDescriptor__ctor_m0CFA6A1F0E8C7D9E5B9ADB932C64EAEA2A46F14B (void);
// 0x000001D7 Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor::Create(Unity.LiveCapture.ISlate)
extern void VcamTrackMetadataListDescriptor_Create_mC55E98812A130F8E0030C84DB0908B1CF6DBBA5F (void);
// 0x000001D8 System.Void Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor::.cctor()
extern void VcamTrackMetadataListDescriptor__cctor_m41660B52C212F06F828D7923674F70C605BF0101 (void);
// 0x000001D9 System.Boolean Unity.LiveCapture.VirtualCamera.VideoStreamState::Equals(Unity.LiveCapture.VirtualCamera.VideoStreamState)
extern void VideoStreamState_Equals_m85A2F92F50CF20081E15E3C297FEF35D8E9FEA69 (void);
// 0x000001DA System.Boolean Unity.LiveCapture.VirtualCamera.VideoStreamState::Equals(System.Object)
extern void VideoStreamState_Equals_mC000E8A1FCCA986E01D6607C0908B6211D34AB62 (void);
// 0x000001DB System.Int32 Unity.LiveCapture.VirtualCamera.VideoStreamState::GetHashCode()
extern void VideoStreamState_GetHashCode_m7CA7043FD40E6F8CE14223C89541C0D72EF10DA6 (void);
// 0x000001DC System.String Unity.LiveCapture.VirtualCamera.VideoStreamState::ToString()
extern void VideoStreamState_ToString_m842FC14CE15430A73D02EADEC180B054C512E903 (void);
// 0x000001DD System.Boolean Unity.LiveCapture.VirtualCamera.VideoStreamState::op_Equality(Unity.LiveCapture.VirtualCamera.VideoStreamState,Unity.LiveCapture.VirtualCamera.VideoStreamState)
extern void VideoStreamState_op_Equality_mA86633D6C658160951E1C9C4D509A2EFE4185726 (void);
// 0x000001DE System.Boolean Unity.LiveCapture.VirtualCamera.VideoStreamState::op_Inequality(Unity.LiveCapture.VirtualCamera.VideoStreamState,Unity.LiveCapture.VirtualCamera.VideoStreamState)
extern void VideoStreamState_op_Inequality_mA91A444357BDEFC43036E5A497B7DA0EDE4BFE47 (void);
// 0x000001DF UnityEngine.Camera Unity.LiveCapture.VirtualCamera.BaseCameraDriver::GetCamera()
// 0x000001E0 Unity.LiveCapture.VirtualCamera.ICameraDriverImpl Unity.LiveCapture.VirtualCamera.BaseCameraDriver::GetImplementation()
// 0x000001E1 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::OnEnable()
extern void BaseCameraDriver_OnEnable_mE7CD7FBAE56B75A8849A9A3A2D9284ED6D887007 (void);
// 0x000001E2 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::OnDisable()
extern void BaseCameraDriver_OnDisable_m634904192CB55DAD58155EF44E0F5735029FC91F (void);
// 0x000001E3 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::Awake()
extern void BaseCameraDriver_Awake_mE765139853FE430A44DCCA4CDF5813D610F5AFD8 (void);
// 0x000001E4 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::OnDestroy()
extern void BaseCameraDriver_OnDestroy_m7ECE143CACDBD3BCB79FDF5CE63E9CD57F802E53 (void);
// 0x000001E5 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::OnValidate()
extern void BaseCameraDriver_OnValidate_mE94F9173513C85BF33E29E78B9255CEEE5ACE385 (void);
// 0x000001E6 System.Boolean Unity.LiveCapture.VirtualCamera.BaseCameraDriver::TryGetImplementation(Unity.LiveCapture.VirtualCamera.ICameraDriverImpl&)
extern void BaseCameraDriver_TryGetImplementation_m5B0837C80B3239428E3497F9339DD6570186A621 (void);
// 0x000001E7 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::Update()
extern void BaseCameraDriver_Update_m87A5711E88932306991AB1C4B37EDE8C49660BC7 (void);
// 0x000001E8 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::LateUpdate()
extern void BaseCameraDriver_LateUpdate_m1B9F330E10AD3241B2D417499853D2B49ED5B298 (void);
// 0x000001E9 System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::OnDrawGizmos()
extern void BaseCameraDriver_OnDrawGizmos_m23A849AA91B22260958FC66C5D7E79DB0E6BE76C (void);
// 0x000001EA System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::Register(Unity.LiveCapture.IPropertyPreviewer)
extern void BaseCameraDriver_Register_m9570010C4E1076BD17F752357C48873D43745FD6 (void);
// 0x000001EB System.Void Unity.LiveCapture.VirtualCamera.BaseCameraDriver::.ctor()
extern void BaseCameraDriver__ctor_m7E574833761857FAD1CF9B87B9B0912EB0631085 (void);
// 0x000001EC System.Void Unity.LiveCapture.VirtualCamera.CinemachineCameraDriver::OnEnable()
extern void CinemachineCameraDriver_OnEnable_mFE482A43C83D05BD7899C74D2E55263D134FD40C (void);
// 0x000001ED Unity.LiveCapture.VirtualCamera.ICameraDriverImpl Unity.LiveCapture.VirtualCamera.CinemachineCameraDriver::GetImplementation()
extern void CinemachineCameraDriver_GetImplementation_mE1B3931DC2152DAE5C28475E9289CF09F17F8D11 (void);
// 0x000001EE UnityEngine.Camera Unity.LiveCapture.VirtualCamera.CinemachineCameraDriver::GetCamera()
extern void CinemachineCameraDriver_GetCamera_m7C3971C561957023C8DD887D3BB554FDF3A71F39 (void);
// 0x000001EF System.Void Unity.LiveCapture.VirtualCamera.CinemachineCameraDriver::SetDamping(Unity.LiveCapture.VirtualCamera.Damping)
extern void CinemachineCameraDriver_SetDamping_mAF51C91B4C612891EBD1FFBF0F872B1D87CED2FC (void);
// 0x000001F0 System.Void Unity.LiveCapture.VirtualCamera.CinemachineCameraDriver::.ctor()
extern void CinemachineCameraDriver__ctor_m27E15C86CDD540442282407F0ACE6B616A843C9A (void);
// 0x000001F1 System.Void Unity.LiveCapture.VirtualCamera.CompositeCameraDriverImpl::.ctor(System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.VirtualCamera.ICameraDriverComponent>)
extern void CompositeCameraDriverImpl__ctor_m1273903E98782FD8F4CE53683C5B04BE9790331D (void);
// 0x000001F2 System.Void Unity.LiveCapture.VirtualCamera.CompositeCameraDriverImpl::Dispose()
extern void CompositeCameraDriverImpl_Dispose_m9545AD90AE4D091233EA92D3E5D695A40BD22371 (void);
// 0x000001F3 System.Void Unity.LiveCapture.VirtualCamera.CompositeCameraDriverImpl::EnableDepthOfField(System.Boolean)
extern void CompositeCameraDriverImpl_EnableDepthOfField_m182394555EE82B62BAE8D9EFB291BAF37F8E5E9E (void);
// 0x000001F4 System.Void Unity.LiveCapture.VirtualCamera.CompositeCameraDriverImpl::SetFocusDistance(System.Single)
extern void CompositeCameraDriverImpl_SetFocusDistance_mCE49D120C067B88789F9044526564E06C420F296 (void);
// 0x000001F5 System.Void Unity.LiveCapture.VirtualCamera.CompositeCameraDriverImpl::SetPhysicalCameraProperties(Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.LensIntrinsics,Unity.LiveCapture.VirtualCamera.CameraBody)
extern void CompositeCameraDriverImpl_SetPhysicalCameraProperties_m0511A1E91478F8753B3E8C40B17567BD789989C4 (void);
// 0x000001F6 UnityEngine.Camera Unity.LiveCapture.VirtualCamera.ICameraDriver::GetCamera()
// 0x000001F7 System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverComponent::EnableDepthOfField(System.Boolean)
// 0x000001F8 System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverComponent::SetDamping(Unity.LiveCapture.VirtualCamera.Damping)
// 0x000001F9 System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverComponent::SetFocusDistance(System.Single)
// 0x000001FA System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverComponent::SetPhysicalCameraProperties(Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.LensIntrinsics,Unity.LiveCapture.VirtualCamera.CameraBody)
// 0x000001FB System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverImpl::EnableDepthOfField(System.Boolean)
// 0x000001FC System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverImpl::SetFocusDistance(System.Single)
// 0x000001FD System.Void Unity.LiveCapture.VirtualCamera.ICameraDriverImpl::SetPhysicalCameraProperties(Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.LensIntrinsics,Unity.LiveCapture.VirtualCamera.CameraBody)
// 0x000001FE System.Void Unity.LiveCapture.VirtualCamera.PhysicalCameraDriver::OnEnable()
extern void PhysicalCameraDriver_OnEnable_m028259848C432C5949032CEBA2674C34FB771B17 (void);
// 0x000001FF System.Void Unity.LiveCapture.VirtualCamera.PhysicalCameraDriver::OnDestroy()
extern void PhysicalCameraDriver_OnDestroy_mF12F93087A6003AC7377E9D2B25035915077CA35 (void);
// 0x00000200 Unity.LiveCapture.VirtualCamera.ICameraDriverImpl Unity.LiveCapture.VirtualCamera.PhysicalCameraDriver::GetImplementation()
extern void PhysicalCameraDriver_GetImplementation_m211E4CDF4791972EEB0FF1B50159ED2011393246 (void);
// 0x00000201 UnityEngine.Camera Unity.LiveCapture.VirtualCamera.PhysicalCameraDriver::GetCamera()
extern void PhysicalCameraDriver_GetCamera_m0AA8B186224BE866DB20B25FAFA4619C9D183CAD (void);
// 0x00000202 System.Void Unity.LiveCapture.VirtualCamera.PhysicalCameraDriver::.ctor()
extern void PhysicalCameraDriver__ctor_mA50ECB521E6D6435351F8C782B26E35428190700 (void);
// 0x00000203 UnityEngine.Camera Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::get_Camera()
extern void VanillaCameraDriverComponent_get_Camera_m697FF84113CB3CE6DBFAF287FCE98EF26F799BBB (void);
// 0x00000204 System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::set_Camera(UnityEngine.Camera)
extern void VanillaCameraDriverComponent_set_Camera_mC03DD1AA6C6902AE0B6773D7F78928810F781C81 (void);
// 0x00000205 System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::Dispose()
extern void VanillaCameraDriverComponent_Dispose_m938FA27F3D5602CD393452A687D3C5293A1E34C0 (void);
// 0x00000206 System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::EnableDepthOfField(System.Boolean)
extern void VanillaCameraDriverComponent_EnableDepthOfField_m90216A916C263C9BFA947497448CF30580CDE612 (void);
// 0x00000207 System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::SetDamping(Unity.LiveCapture.VirtualCamera.Damping)
extern void VanillaCameraDriverComponent_SetDamping_m1AE8DFDEFC84311DEB1BAA495B411BBC3E0B8B3F (void);
// 0x00000208 System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::SetFocusDistance(System.Single)
extern void VanillaCameraDriverComponent_SetFocusDistance_m5FC4767078E2F9DF1748D206E207546CEE0B0F54 (void);
// 0x00000209 System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::SetPhysicalCameraProperties(Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.LensIntrinsics,Unity.LiveCapture.VirtualCamera.CameraBody)
extern void VanillaCameraDriverComponent_SetPhysicalCameraProperties_mD72123CE494D0C303A4F7306E4154980E6439106 (void);
// 0x0000020A System.Void Unity.LiveCapture.VirtualCamera.VanillaCameraDriverComponent::.ctor()
extern void VanillaCameraDriverComponent__ctor_mDF72D1DEABE5D35129BAF7AE94A4CA8DA6777751 (void);
// 0x0000020B Unity.LiveCapture.VirtualCamera.VolumeProfileTracker Unity.LiveCapture.VirtualCamera.VolumeProfileTracker::get_Instance()
extern void VolumeProfileTracker_get_Instance_mC365AF28DF295AA6EBEBAB4312D9B1417DFA852C (void);
// 0x0000020C System.Boolean Unity.LiveCapture.VirtualCamera.VolumeProfileTracker::TryRegisterProfileOwner(UnityEngine.ScriptableObject,UnityEngine.Object)
extern void VolumeProfileTracker_TryRegisterProfileOwner_m61DCD6ACFD2B47919DC103BBFB68F1AF205EBF34 (void);
// 0x0000020D System.Boolean Unity.LiveCapture.VirtualCamera.VolumeProfileTracker::UnregisterProfile(UnityEngine.ScriptableObject)
extern void VolumeProfileTracker_UnregisterProfile_m3FED91A6B6EDE1876F6038E83A1F4DEAF7197E95 (void);
// 0x0000020E System.Void Unity.LiveCapture.VirtualCamera.VolumeProfileTracker::.ctor()
extern void VolumeProfileTracker__ctor_mCBA85ADA6A6BD9B2E1E35E65160D7734DA850593 (void);
// 0x0000020F System.Void Unity.LiveCapture.VirtualCamera.VolumeProfileTracker::.cctor()
extern void VolumeProfileTracker__cctor_mA37906773DBEBB4D738F8D7C3C5D42F28349F5CF (void);
// 0x00000210 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneConsts::.cctor()
extern void FocusPlaneConsts__cctor_mB298253CD21F5D3610BDEEE3DA26AD258F399B8F (void);
// 0x00000211 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneMap::.ctor()
extern void FocusPlaneMap__ctor_mDC66E46E09A8E080996DEE71CD80D27D2C59AB0B (void);
// 0x00000212 UnityEngine.Material Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::get_RenderMaterial()
extern void FocusPlaneRenderer_get_RenderMaterial_m50AB3EB3BA967F7940F6AEAC76C9E95261A49926 (void);
// 0x00000213 UnityEngine.Material Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::get_ComposeMaterial()
extern void FocusPlaneRenderer_get_ComposeMaterial_mE77A0861F8933FB64B898E84E5E41610BAA64C62 (void);
// 0x00000214 System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::TryGetRenderTarget(T&)
// 0x00000215 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::SetCamera(UnityEngine.Camera)
extern void FocusPlaneRenderer_SetCamera_mDBF754A778EF10888100EC1AA90C0F94EF01C024 (void);
// 0x00000216 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::SetFocusDistance(System.Single)
extern void FocusPlaneRenderer_SetFocusDistance_m199456B83FCB82FF95F97EE9065ED81A8E05CECE (void);
// 0x00000217 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::Awake()
extern void FocusPlaneRenderer_Awake_m05F4FFAD0A0DEE57146AFB49254176C4D63578C1 (void);
// 0x00000218 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::OnDestroy()
extern void FocusPlaneRenderer_OnDestroy_m2C779FFFCACD4D2B040458C0BB0AEBAB28F25D6B (void);
// 0x00000219 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::OnEnable()
extern void FocusPlaneRenderer_OnEnable_m33FA9FA3CFF95089B6CE917D7BF7CD202731D1D5 (void);
// 0x0000021A System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::OnDisable()
extern void FocusPlaneRenderer_OnDisable_m4329696F45C4B48CF62D0FBFCE36508CF0DC863A (void);
// 0x0000021B System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::OnValidate()
extern void FocusPlaneRenderer_OnValidate_m61F062625DC548604B3E1F1D97308CA90B9AA883 (void);
// 0x0000021C System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::Update()
extern void FocusPlaneRenderer_Update_m24D7D81327C90D9DB1FC9724B9ADCA8722FA6D81 (void);
// 0x0000021D System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::Validate()
extern void FocusPlaneRenderer_Validate_mD68FA972FAEF6F01C2AD85A83852BAC5E5C394BD (void);
// 0x0000021E System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::AllocateTargetIfNeeded(System.Int32,System.Int32)
extern void FocusPlaneRenderer_AllocateTargetIfNeeded_m6F7D234CD82962754F7409EF690EBD8176EAA5DE (void);
// 0x0000021F System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer::.ctor()
extern void FocusPlaneRenderer__ctor_m76B08F91C278FF00C863E689BBF628B2AEFE47EC (void);
// 0x00000220 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::SetCamera(UnityEngine.Camera)
extern void NullImpl_SetCamera_m3C48858B288FA7C16D7810D8201BB8D2CAE4B7DD (void);
// 0x00000221 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::Initialize()
extern void NullImpl_Initialize_m1CE3E5FBC49A5E7EAAE29A3FF3F3F3EFED7F50F9 (void);
// 0x00000222 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::Dispose()
extern void NullImpl_Dispose_m5B3CB2F8CBEA38FA995E4A959139D0EA62CD7E94 (void);
// 0x00000223 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::Update()
extern void NullImpl_Update_m93BFC40FD55FBC783DD2893476BA3134537B222E (void);
// 0x00000224 System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::TryGetRenderTarget(T&)
// 0x00000225 System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::AllocateTargetIfNeeded(System.Int32,System.Int32)
extern void NullImpl_AllocateTargetIfNeeded_mF8DD6BA036359DF83681D659FEF2FBCAF5FD04AD (void);
// 0x00000226 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneRenderer/NullImpl::.ctor()
extern void NullImpl__ctor_m73335FB5FFFAA82646C415D2C61179A15FA0DAC9 (void);
// 0x00000227 System.Void Unity.LiveCapture.VirtualCamera.ShaderIDs::.cctor()
extern void ShaderIDs__cctor_m379D855156F6B23363AAC1B1A591581957916D53 (void);
// 0x00000228 System.Void Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::Apply(UnityEngine.Material)
extern void FocusPlaneSettings_Apply_m9EFB25FE66B6450C1B1E05AF82D2E88A8F01143E (void);
// 0x00000229 System.Int32 Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::GetHashCode()
extern void FocusPlaneSettings_GetHashCode_mD916DC27D3CDA9C782F362F38CF36188218516A9 (void);
// 0x0000022A System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::Equals(Unity.LiveCapture.VirtualCamera.FocusPlaneSettings)
extern void FocusPlaneSettings_Equals_mCBD3F6194F7BE175F1A5D8AB691CAD744F5A690E (void);
// 0x0000022B System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::Equals(System.Object)
extern void FocusPlaneSettings_Equals_m57EBF080D8902EA26975FC4073C77E74630B8279 (void);
// 0x0000022C System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::op_Equality(Unity.LiveCapture.VirtualCamera.FocusPlaneSettings,Unity.LiveCapture.VirtualCamera.FocusPlaneSettings)
extern void FocusPlaneSettings_op_Equality_mDC75E87E72A7DC0C82F878F609E03A61F2C99F1A (void);
// 0x0000022D System.Boolean Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::op_Inequality(Unity.LiveCapture.VirtualCamera.FocusPlaneSettings,Unity.LiveCapture.VirtualCamera.FocusPlaneSettings)
extern void FocusPlaneSettings_op_Inequality_mA330B3214F7A3115499ADE3FADB49E925C9B6E34 (void);
// 0x0000022E Unity.LiveCapture.VirtualCamera.FocusPlaneSettings Unity.LiveCapture.VirtualCamera.FocusPlaneSettings::GetDefault()
extern void FocusPlaneSettings_GetDefault_m2B3E659D39EEAB5E09D01812870CFC2ECCD0E062 (void);
// 0x0000022F System.Void Unity.LiveCapture.VirtualCamera.IFocusPlaneImpl::SetCamera(UnityEngine.Camera)
// 0x00000230 System.Void Unity.LiveCapture.VirtualCamera.IFocusPlaneImpl::Initialize()
// 0x00000231 System.Void Unity.LiveCapture.VirtualCamera.IFocusPlaneImpl::Dispose()
// 0x00000232 System.Void Unity.LiveCapture.VirtualCamera.IFocusPlaneImpl::Update()
// 0x00000233 System.Boolean Unity.LiveCapture.VirtualCamera.IFocusPlaneImpl::TryGetRenderTarget(T&)
// 0x00000234 System.Boolean Unity.LiveCapture.VirtualCamera.IFocusPlaneImpl::AllocateTargetIfNeeded(System.Int32,System.Int32)
// 0x00000235 System.Boolean Unity.LiveCapture.VirtualCamera.IRenderTargetProvider`1::TryGetRenderTarget(T&)
// 0x00000236 System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::.ctor(UnityEngine.Material,UnityEngine.Material)
extern void LegacyFocusPlaneImpl__ctor_mA6A35DC3508E7E47731F88C3C3FBE106A0C79ED6 (void);
// 0x00000237 System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::SetCamera(UnityEngine.Camera)
extern void LegacyFocusPlaneImpl_SetCamera_mFE2BB10A0867C9628391191536AA22A8B6259A58 (void);
// 0x00000238 System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::Initialize()
extern void LegacyFocusPlaneImpl_Initialize_m7FFB906DD7BE4A5DFBB3A22982090CDBB288A43A (void);
// 0x00000239 System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::Dispose()
extern void LegacyFocusPlaneImpl_Dispose_mB9DA2422199AA0F772E963B9EA08A69CE6B72732 (void);
// 0x0000023A System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::Update()
extern void LegacyFocusPlaneImpl_Update_m3E8E1225E6F435FF7CF545708A0DF38292EEA38C (void);
// 0x0000023B System.Boolean Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::TryGetRenderTarget(T&)
// 0x0000023C System.Boolean Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::Unity.LiveCapture.VirtualCamera.IRenderTargetProvider<UnityEngine.RenderTexture>.TryGetRenderTarget(UnityEngine.RenderTexture&)
extern void LegacyFocusPlaneImpl_Unity_LiveCapture_VirtualCamera_IRenderTargetProviderU3CUnityEngine_RenderTextureU3E_TryGetRenderTarget_mBB6EA93FAA0D0221CB16D7A8980481288FE52CFA (void);
// 0x0000023D System.Boolean Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::AllocateTargetIfNeeded(System.Int32,System.Int32)
extern void LegacyFocusPlaneImpl_AllocateTargetIfNeeded_m4D29A3779E96CC48A91774894A0FC14835D0FDD3 (void);
// 0x0000023E System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::AddCommandBufferIfNeeded()
extern void LegacyFocusPlaneImpl_AddCommandBufferIfNeeded_m294AF12D40A7814E8046DDCFD70FF214EDAE3D54 (void);
// 0x0000023F System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::RemoveCommandBufferIfNeeded(System.Boolean)
extern void LegacyFocusPlaneImpl_RemoveCommandBufferIfNeeded_mE8BBCB330FB15F76EDC0BF419BDF7363381503CB (void);
// 0x00000240 System.Void Unity.LiveCapture.VirtualCamera.LegacyFocusPlaneImpl::UpdateCommandBuffers()
extern void LegacyFocusPlaneImpl_UpdateCommandBuffers_mF9927BC8D776F966A9175BEAF2574C5586DC7D2D (void);
// 0x00000241 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::set_CoordinatesTransform(Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation/ICoordinatesTransform)
extern void BaseFocusReticleControllerImplementation_set_CoordinatesTransform_m6B2ADDBEF7D8DCE11D6F3B5DA47CD144B6C3EE32 (void);
// 0x00000242 Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation/ICoordinatesTransform Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::get_CoordinatesTransform()
extern void BaseFocusReticleControllerImplementation_get_CoordinatesTransform_mE5A5845F1727DB208D3FE0BCE02787C6AF8AC85B (void);
// 0x00000243 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::set_FocusReticle(Unity.LiveCapture.VirtualCamera.IFocusReticle)
extern void BaseFocusReticleControllerImplementation_set_FocusReticle_m475399303E827E177D85C9C181E288A713126D54 (void);
// 0x00000244 Unity.LiveCapture.VirtualCamera.IFocusReticle Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::get_FocusReticle()
extern void BaseFocusReticleControllerImplementation_get_FocusReticle_mE17B375ED2C5352E6D1161BB2D1A4AE2C983E1BA (void);
// 0x00000245 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::set_PendingTap(System.Boolean)
extern void BaseFocusReticleControllerImplementation_set_PendingTap_m5C3C4873067142FE0816E70570E67C5AB6A05316 (void);
// 0x00000246 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::set_PendingDrag(System.Boolean)
extern void BaseFocusReticleControllerImplementation_set_PendingDrag_mF25A3810C92B5F32AA56B4505BBA87440652D220 (void);
// 0x00000247 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::set_IsDragging(System.Boolean)
extern void BaseFocusReticleControllerImplementation_set_IsDragging_m106F6DD0F2F5D69BF783516F653675DBB6FB1E55 (void);
// 0x00000248 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::set_LastPointerPosition(UnityEngine.Vector2)
extern void BaseFocusReticleControllerImplementation_set_LastPointerPosition_m8BC2B0CD42950E3FD23BE6E942BEA268D62F3759 (void);
// 0x00000249 System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::Initialize()
extern void BaseFocusReticleControllerImplementation_Initialize_m3187408FF812BCF923355725B8F3144E822D0FFF (void);
// 0x0000024A System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::Dispose()
extern void BaseFocusReticleControllerImplementation_Dispose_mFA039EA57CD6ABCDF7421A1D741476908FECA3A1 (void);
// 0x0000024B System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::UpdateView(UnityEngine.Vector2,Unity.LiveCapture.VirtualCamera.FocusMode,System.Boolean)
extern void BaseFocusReticleControllerImplementation_UpdateView_m4BF5A76BE168C91B09A8581AF9B915B46EECACC1 (void);
// 0x0000024C System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::SetReticleActive(System.Boolean)
extern void BaseFocusReticleControllerImplementation_SetReticleActive_mE5DE95980638C172534D76E21004CD7554873C3D (void);
// 0x0000024D System.Boolean Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::ShouldSendPosition(UnityEngine.Vector2&)
extern void BaseFocusReticleControllerImplementation_ShouldSendPosition_m98774787FF28E9D22530756FEA37E3871AD02866 (void);
// 0x0000024E System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::OnAnimationComplete()
extern void BaseFocusReticleControllerImplementation_OnAnimationComplete_mA172C6DF4B5B0663CBE463F5BD72558E40723FC1 (void);
// 0x0000024F System.Void Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation::.ctor()
extern void BaseFocusReticleControllerImplementation__ctor_mB589AFBD26C59ABC187ADC01075CC549BECD3486 (void);
// 0x00000250 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation/ICoordinatesTransform::NormalizedToScreen(UnityEngine.Vector2)
// 0x00000251 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.BaseFocusReticleControllerImplementation/ICoordinatesTransform::NormalizeScreenPoint(UnityEngine.Vector2)
// 0x00000252 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::SetPosition(UnityEngine.Vector2)
// 0x00000253 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::SetActive(System.Boolean)
// 0x00000254 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::add_AnimationComplete(System.Action)
// 0x00000255 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::remove_AnimationComplete(System.Action)
// 0x00000256 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::ResetAnimation()
// 0x00000257 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::Animate(System.Boolean)
// 0x00000258 System.Void Unity.LiveCapture.VirtualCamera.IFocusReticle::StopAnimationIfNeeded()
// 0x00000259 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::add_AnimationComplete(System.Action)
extern void FocusReticle_add_AnimationComplete_m361F45822808CB0510DF6F9C19206C925E72A4D1 (void);
// 0x0000025A System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::remove_AnimationComplete(System.Action)
extern void FocusReticle_remove_AnimationComplete_mCAD439E36BF4E8F187F3A5440A7CE4CA123B9483 (void);
// 0x0000025B System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::Awake()
extern void FocusReticle_Awake_m15B9BA179277D5BAF419D979939519057B691354 (void);
// 0x0000025C System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::SetActive(System.Boolean)
extern void FocusReticle_SetActive_m2B96C18055C429DFF90C0AFE5CF47D0B2421A680 (void);
// 0x0000025D System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::SetPosition(UnityEngine.Vector2)
extern void FocusReticle_SetPosition_mCA06C2C0D7F29C8BB97604430FF08057D7AD0851 (void);
// 0x0000025E System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::ResetAnimation()
extern void FocusReticle_ResetAnimation_m4484B7FC2817CA997518E1D3E1CE16E5C4418509 (void);
// 0x0000025F System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::Animate(System.Boolean)
extern void FocusReticle_Animate_mB8E7713A68533BB511D6B2F3D6C30F410D7C70E6 (void);
// 0x00000260 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::StopAnimationIfNeeded()
extern void FocusReticle_StopAnimationIfNeeded_m4D54AC2E1E0E79E180FDC2F88221081CC74D5867 (void);
// 0x00000261 System.Collections.IEnumerator Unity.LiveCapture.VirtualCamera.FocusReticle::Animation(System.Boolean)
extern void FocusReticle_Animation_m402968B89A15D9A2913AA226A9C652E384C7B221 (void);
// 0x00000262 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle::.ctor()
extern void FocusReticle__ctor_m4C1276E826FCA3A421BD7A175091F0AACE1DD313 (void);
// 0x00000263 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle/<Animation>d__12::.ctor(System.Int32)
extern void U3CAnimationU3Ed__12__ctor_m180543D03DF8CFD3B9A3A9D079D5FB06FAF12F3F (void);
// 0x00000264 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle/<Animation>d__12::System.IDisposable.Dispose()
extern void U3CAnimationU3Ed__12_System_IDisposable_Dispose_m4B8BFDC5BD0E96C31863FEBAA2AC317341E6D76F (void);
// 0x00000265 System.Boolean Unity.LiveCapture.VirtualCamera.FocusReticle/<Animation>d__12::MoveNext()
extern void U3CAnimationU3Ed__12_MoveNext_m0D1AEE4B12E820BADD91E7C4929FFD36C7BC90F0 (void);
// 0x00000266 System.Object Unity.LiveCapture.VirtualCamera.FocusReticle/<Animation>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAnimationU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3B870B81E0509FAA7B860553306C51224A43D71A (void);
// 0x00000267 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle/<Animation>d__12::System.Collections.IEnumerator.Reset()
extern void U3CAnimationU3Ed__12_System_Collections_IEnumerator_Reset_mC5E16B217A60BBE1234497236EA4B8829503414E (void);
// 0x00000268 System.Object Unity.LiveCapture.VirtualCamera.FocusReticle/<Animation>d__12::System.Collections.IEnumerator.get_Current()
extern void U3CAnimationU3Ed__12_System_Collections_IEnumerator_get_Current_m5F8C0CBDFA82A5B198A14B781626DCC279BD04A0 (void);
// 0x00000269 System.Void Unity.LiveCapture.VirtualCamera.FocusReticle/<>c::.cctor()
extern void U3CU3Ec__cctor_m5C3C750FB4D091352764A65728112436823D4253 (void);
// 0x0000026A System.Void Unity.LiveCapture.VirtualCamera.FocusReticle/<>c::.ctor()
extern void U3CU3Ec__ctor_mF3ACF641B3CCAC6718DBF649E715F23E89B171EA (void);
// 0x0000026B System.Void Unity.LiveCapture.VirtualCamera.FocusReticle/<>c::<.ctor>b__13_0()
extern void U3CU3Ec_U3C_ctorU3Eb__13_0_mF42301809C8B8B1E293F81997AC1FBB91D7C5C07 (void);
// 0x0000026C System.Void Unity.LiveCapture.VirtualCamera.ReticleAttribute::.ctor()
extern void ReticleAttribute__ctor_m22B0D84F3598FA2572DC12ADE41174A514BF03B7 (void);
// 0x0000026D System.Void Unity.LiveCapture.VirtualCamera.FrameLinesMap::.ctor()
extern void FrameLinesMap__ctor_m87596C3FF172952BC057737F64A51ACAB31074BA (void);
// 0x0000026E Unity.LiveCapture.VirtualCamera.GateFit Unity.LiveCapture.VirtualCamera.FrameLines::get_GateFit()
extern void FrameLines_get_GateFit_m5E34A69D4F438DA82546E8FC69E1EE7825DB86FC (void);
// 0x0000026F System.Void Unity.LiveCapture.VirtualCamera.FrameLines::set_GateFit(Unity.LiveCapture.VirtualCamera.GateFit)
extern void FrameLines_set_GateFit_mB3FBC971FC0168648054A85ACCF47A4F76006F18 (void);
// 0x00000270 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLines::get_GateMaskEnabled()
extern void FrameLines_get_GateMaskEnabled_m3A10D79730DBF5E566C632049324DC5372A6095A (void);
// 0x00000271 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::set_GateMaskEnabled(System.Boolean)
extern void FrameLines_set_GateMaskEnabled_m8CCEB8523C7C70AF696498A988731E8CB5467F42 (void);
// 0x00000272 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLines::get_AspectRatioEnabled()
extern void FrameLines_get_AspectRatioEnabled_m7461D8D19BF1052371FC120522B4BDE506C72B82 (void);
// 0x00000273 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::set_AspectRatioEnabled(System.Boolean)
extern void FrameLines_set_AspectRatioEnabled_mBF7999ED75D43618A58CF01A18EC95000C36794B (void);
// 0x00000274 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLines::get_CenterMarkerEnabled()
extern void FrameLines_get_CenterMarkerEnabled_m6AF7DCC054E4312C1E4F5E51206021E1A1B812F4 (void);
// 0x00000275 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::set_CenterMarkerEnabled(System.Boolean)
extern void FrameLines_set_CenterMarkerEnabled_mCCCFB80D4C1D4679F2790F935B3E4CA2A83DDEFA (void);
// 0x00000276 System.Single Unity.LiveCapture.VirtualCamera.FrameLines::get_CropAspect()
extern void FrameLines_get_CropAspect_mE52C174319DE1BE8E1B436F98C221F88B3254935 (void);
// 0x00000277 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::set_CropAspect(System.Single)
extern void FrameLines_set_CropAspect_m24BAAD168D3C300216251BF2A6EF9923F8AB6BDE (void);
// 0x00000278 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLines::ShouldRender()
extern void FrameLines_ShouldRender_m1580C3FCB5199FFEE3A6EB747367A399F9108E65 (void);
// 0x00000279 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::Awake()
extern void FrameLines_Awake_m1CBEC3E22000D013A3CE414E359ADE0E905E2329 (void);
// 0x0000027A System.Void Unity.LiveCapture.VirtualCamera.FrameLines::Reset()
extern void FrameLines_Reset_m909C61E321C5E842D3C4C8C23921F7923C678465 (void);
// 0x0000027B System.Void Unity.LiveCapture.VirtualCamera.FrameLines::OnValidate()
extern void FrameLines_OnValidate_m49398F1C9D3BD92C05C1D359F538F5BEAF83AD83 (void);
// 0x0000027C System.Void Unity.LiveCapture.VirtualCamera.FrameLines::OnEnable()
extern void FrameLines_OnEnable_mE70A77228A5A37E9C450736991ADA3A1CC67ACCF (void);
// 0x0000027D System.Void Unity.LiveCapture.VirtualCamera.FrameLines::OnDisable()
extern void FrameLines_OnDisable_mBED69425B8F746A69112B9FB9D249B6EC70CED49 (void);
// 0x0000027E System.Void Unity.LiveCapture.VirtualCamera.FrameLines::OnDestroy()
extern void FrameLines_OnDestroy_m80EDD51D34D30D3B8B244AA07B54C874EBDD7215 (void);
// 0x0000027F System.Void Unity.LiveCapture.VirtualCamera.FrameLines::Validate()
extern void FrameLines_Validate_m2A35A33D3C00FF70CEE5AA0F6BFCFAB0BAD58651 (void);
// 0x00000280 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::AddLegacyCommandBufferIfNeeded()
extern void FrameLines_AddLegacyCommandBufferIfNeeded_m22C70DCBBB5B08A3D1F954E5E11759E641824F2C (void);
// 0x00000281 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::RemoveLegacyCommandBufferIfNeeded(System.Boolean)
extern void FrameLines_RemoveLegacyCommandBufferIfNeeded_m01D91BD495C924AC0FA035CAF0F22D1C89428BFE (void);
// 0x00000282 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::LateUpdate()
extern void FrameLines_LateUpdate_mC83CDFE1FB509409661C3D333F75EA580E6507C9 (void);
// 0x00000283 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::UpdateCamera()
extern void FrameLines_UpdateCamera_m90B33CDD4808B39E6696CF9B147EDD4D2CA96901 (void);
// 0x00000284 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::Render(UnityEngine.Rendering.CommandBuffer)
extern void FrameLines_Render_mAD51C7B2DD5B316AB9BFA12C51E026E0D0039BA9 (void);
// 0x00000285 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLines::UpdateGeometryIfNeeded(System.Single,System.Single)
extern void FrameLines_UpdateGeometryIfNeeded_m6F7339576D600FF5E9AACB5DD9F72BC5A5F17591 (void);
// 0x00000286 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::DrawLetterBox(UnityEngine.Vector2,UnityEngine.Vector2)
extern void FrameLines_DrawLetterBox_m3B8A8B9E8804AF01964F9BCD1AE909481DDD30C4 (void);
// 0x00000287 UnityEngine.Rect Unity.LiveCapture.VirtualCamera.FrameLines::NdcToPixels(UnityEngine.Rect)
extern void FrameLines_NdcToPixels_m79B2556A7458DC691B5DE104A0E3A1926DECA374 (void);
// 0x00000288 UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.FrameLines::ApplyAspectRatio(UnityEngine.Vector2,System.Single,System.Single)
extern void FrameLines_ApplyAspectRatio_mED7EB1D5DACFE7823B2F1B31085C9EDD44909A62 (void);
// 0x00000289 System.Void Unity.LiveCapture.VirtualCamera.FrameLines::.ctor()
extern void FrameLines__ctor_mE3765A0B80563835464E9CA7730E76FA26E385EF (void);
// 0x0000028A System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::Initialize()
extern void FrameLinesDrawer_Initialize_mA106BA4D8E23CA5232F319F0CAAF2DD9A04F734B (void);
// 0x0000028B System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::Dispose()
extern void FrameLinesDrawer_Dispose_m596B61CB2CF73AADB82AA5037DEC1E711D0FAB80 (void);
// 0x0000028C System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::Clear()
extern void FrameLinesDrawer_Clear_mAA6E1F56EEAF6C658B63B357F61998D7E4BD1A03 (void);
// 0x0000028D System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::UpdateGeometry()
extern void FrameLinesDrawer_UpdateGeometry_mF7EC863D17792B8A8ED124787A9D3FDF7DEB51A6 (void);
// 0x0000028E System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::Render(UnityEngine.Rendering.CommandBuffer)
extern void FrameLinesDrawer_Render_m92E0692ACD1A271EA0D746B8605544D4CE4E4606 (void);
// 0x0000028F System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::SetColor(UnityEngine.Color)
extern void FrameLinesDrawer_SetColor_m3F2787AFED2AB94F1EEAFFCB783CE6A7CFB50922 (void);
// 0x00000290 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::SetLineWidth(System.Single)
extern void FrameLinesDrawer_SetLineWidth_mBF0AE4EB176EF8DC8A328F16893D4954E2F4CE64 (void);
// 0x00000291 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::DrawCross(UnityEngine.Vector2,System.Single,System.Single)
extern void FrameLinesDrawer_DrawCross_mE36420E0DA57353923BD1E7F7BED0E221401082F (void);
// 0x00000292 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::DrawBox(UnityEngine.Rect)
extern void FrameLinesDrawer_DrawBox_m5966BDB4BE6E64482A32977C7CA0FE90063FEDA8 (void);
// 0x00000293 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::DrawCornerBox(UnityEngine.Rect,UnityEngine.Vector2)
extern void FrameLinesDrawer_DrawCornerBox_mC84FF28082882A748E0A84B612E6D1B94C41149F (void);
// 0x00000294 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::DrawRect(UnityEngine.Rect)
extern void FrameLinesDrawer_DrawRect_mEA3C668FF06F39EF220443FFA806272F2A853936 (void);
// 0x00000295 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesDrawer::.ctor()
extern void FrameLinesDrawer__ctor_mFF4CFDBA8870C904676B2E124EC9429A409EC25C (void);
// 0x00000296 Unity.LiveCapture.VirtualCamera.FrameLinesSettings Unity.LiveCapture.VirtualCamera.FrameLinesSettings::GetDefault()
extern void FrameLinesSettings_GetDefault_mF762BBDB42D275AED3A7065FC03E655F9409C17E (void);
// 0x00000297 System.Void Unity.LiveCapture.VirtualCamera.FrameLinesSettings::Validate()
extern void FrameLinesSettings_Validate_m1B77B42FE4DCCD1E00FB015B53789D2C69222D7E (void);
// 0x00000298 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLinesSettings::Equals(Unity.LiveCapture.VirtualCamera.FrameLinesSettings)
extern void FrameLinesSettings_Equals_m35858C73C99D2A7664A4BB2393A3F06CBAFA65FE (void);
// 0x00000299 System.Boolean Unity.LiveCapture.VirtualCamera.FrameLinesSettings::Equals(System.Object)
extern void FrameLinesSettings_Equals_mD516E59CB6C22CECFA95230C9DE5318DF39851D0 (void);
// 0x0000029A System.Int32 Unity.LiveCapture.VirtualCamera.FrameLinesSettings::GetHashCode()
extern void FrameLinesSettings_GetHashCode_m64DCE0359BB9FF3A35DA47C93DDF4AEDACB72156 (void);
// 0x0000029B System.Boolean Unity.LiveCapture.VirtualCamera.FrameLinesSettings::op_Equality(Unity.LiveCapture.VirtualCamera.FrameLinesSettings,Unity.LiveCapture.VirtualCamera.FrameLinesSettings)
extern void FrameLinesSettings_op_Equality_mADF081B8A0CB66AF06B81A13C97CEA1445491085 (void);
// 0x0000029C System.Boolean Unity.LiveCapture.VirtualCamera.FrameLinesSettings::op_Inequality(Unity.LiveCapture.VirtualCamera.FrameLinesSettings,Unity.LiveCapture.VirtualCamera.FrameLinesSettings)
extern void FrameLinesSettings_op_Inequality_m0E0A5B5B94FAAF74AD62812169875ADE5808F980 (void);
// 0x0000029D System.Void Unity.LiveCapture.VirtualCamera.ICustomDamping::SetDamping(Unity.LiveCapture.VirtualCamera.Damping)
// 0x0000029E System.String Unity.LiveCapture.VirtualCamera.LensAsset::get_Manufacturer()
extern void LensAsset_get_Manufacturer_m11073AFABC2D52244ADB62D85EBD69FDF3E93D84 (void);
// 0x0000029F System.Void Unity.LiveCapture.VirtualCamera.LensAsset::set_Manufacturer(System.String)
extern void LensAsset_set_Manufacturer_mD4D1AF526903E03270C727918B7E718E91DA2B2D (void);
// 0x000002A0 System.String Unity.LiveCapture.VirtualCamera.LensAsset::get_Model()
extern void LensAsset_get_Model_m0CC0F2C515EB0A3FA8AE1F915AFAEE4CAE660789 (void);
// 0x000002A1 System.Void Unity.LiveCapture.VirtualCamera.LensAsset::set_Model(System.String)
extern void LensAsset_set_Model_mC14964843A536D2C238442A921B720C9857F0C3E (void);
// 0x000002A2 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.LensAsset::get_DefaultValues()
extern void LensAsset_get_DefaultValues_m4F3C38A21DBB5D8AA87F9DA7A1BBEAAB6AA98075 (void);
// 0x000002A3 System.Void Unity.LiveCapture.VirtualCamera.LensAsset::set_DefaultValues(Unity.LiveCapture.VirtualCamera.Lens)
extern void LensAsset_set_DefaultValues_mBE3EC0FED0B28FEF1805B15BABE71448A98F6D0C (void);
// 0x000002A4 Unity.LiveCapture.VirtualCamera.LensIntrinsics Unity.LiveCapture.VirtualCamera.LensAsset::get_Intrinsics()
extern void LensAsset_get_Intrinsics_m59C410CB58ABA7ABCFE6A4F2C6039996AF2B3F2A (void);
// 0x000002A5 System.Void Unity.LiveCapture.VirtualCamera.LensAsset::set_Intrinsics(Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void LensAsset_set_Intrinsics_m64BE5C80D2D83C5DA67AB6E30783D9C0140E29DB (void);
// 0x000002A6 System.Void Unity.LiveCapture.VirtualCamera.LensAsset::Reset()
extern void LensAsset_Reset_m0D26E795E88F966F5ED5575ABFC5A051B4967D01 (void);
// 0x000002A7 System.Void Unity.LiveCapture.VirtualCamera.LensAsset::OnValidate()
extern void LensAsset_OnValidate_m038BDE72DFBEDCFDE3F4989E4E88175F661FCD45 (void);
// 0x000002A8 System.String Unity.LiveCapture.VirtualCamera.LensAsset::GenerateName(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void LensAsset_GenerateName_m5748974E797CFABF48B1A417D5D3A0A465458C14 (void);
// 0x000002A9 System.Void Unity.LiveCapture.VirtualCamera.LensAsset::.ctor()
extern void LensAsset__ctor_m93426F72FE67D6CC0D6F9F326BC12F301E9E9A04 (void);
// 0x000002AA System.Guid Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::get_Guid()
extern void LensAssetDescriptor_get_Guid_mCD1979C70458E658504D95045CBCEB198FE220A7 (void);
// 0x000002AB System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::set_Guid(System.Guid)
extern void LensAssetDescriptor_set_Guid_m13E2FE3FA626C0EC3795CD997D6701DAB4969CC5 (void);
// 0x000002AC System.String Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::get_Name()
extern void LensAssetDescriptor_get_Name_mBE7518DCA3D6254AB71ADF318D20E02D51D26FA3 (void);
// 0x000002AD System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::set_Name(System.String)
extern void LensAssetDescriptor_set_Name_mC5668A5EC826E8F65DE305489E553A44BC5E0441 (void);
// 0x000002AE System.String Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::get_Manufacturer()
extern void LensAssetDescriptor_get_Manufacturer_m8C1A504EC7F66EB5E7727AB944B3C0B56A867E28 (void);
// 0x000002AF System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::set_Manufacturer(System.String)
extern void LensAssetDescriptor_set_Manufacturer_mFD25755BDDA05E5D63320A0F06C044AA39E763FB (void);
// 0x000002B0 System.String Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::get_Model()
extern void LensAssetDescriptor_get_Model_m0898168639B35095DECB9B494F7FD6E061AD12F8 (void);
// 0x000002B1 System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::set_Model(System.String)
extern void LensAssetDescriptor_set_Model_mF8D14C4E3A7756631AC7FAEF67B55C3B23B7506F (void);
// 0x000002B2 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::get_DefaultValues()
extern void LensAssetDescriptor_get_DefaultValues_m3BF8B148349A9C77428747E1CA2F8FE2EEBD89C7 (void);
// 0x000002B3 System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::set_DefaultValues(Unity.LiveCapture.VirtualCamera.Lens)
extern void LensAssetDescriptor_set_DefaultValues_m29959DA1B34A6E4416640E4F8D024534152D401E (void);
// 0x000002B4 Unity.LiveCapture.VirtualCamera.LensIntrinsics Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::get_Intrinsics()
extern void LensAssetDescriptor_get_Intrinsics_mFCE8204751EC5269C0F36A56967B1BECEC4FEA5B (void);
// 0x000002B5 System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::set_Intrinsics(Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void LensAssetDescriptor_set_Intrinsics_m69632DBFEF003FD60369FA4FAF5AA16F4D68F088 (void);
// 0x000002B6 Unity.LiveCapture.VirtualCamera.LensAssetDescriptor Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::Create(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void LensAssetDescriptor_Create_mF4898C1AE1ED9A6E181CCB10971223810C00C019 (void);
// 0x000002B7 System.Void Unity.LiveCapture.VirtualCamera.LensAssetDescriptor::.ctor()
extern void LensAssetDescriptor__ctor_m1FBA96805BE3E5701C633AFCC65D8FB18458105D (void);
// 0x000002B8 Unity.LiveCapture.VirtualCamera.LensAsset[] Unity.LiveCapture.VirtualCamera.LensKit::get_Lenses()
extern void LensKit_get_Lenses_mD3C475F6B3C57E6DE62552A7C093D2007A1823A1 (void);
// 0x000002B9 System.Void Unity.LiveCapture.VirtualCamera.LensKit::.ctor()
extern void LensKit__ctor_mE10B954EEA19A6B43BBDAED8958D50774AF9C999 (void);
// 0x000002BA System.String Unity.LiveCapture.VirtualCamera.LensKitDescriptor::get_Name()
extern void LensKitDescriptor_get_Name_m551871CAC0A1E155078870E17993AC1511226351 (void);
// 0x000002BB System.Void Unity.LiveCapture.VirtualCamera.LensKitDescriptor::set_Name(System.String)
extern void LensKitDescriptor_set_Name_mC9298D66A0694548945EDCBDBAE6E04A396AB731 (void);
// 0x000002BC System.Int32 Unity.LiveCapture.VirtualCamera.LensKitDescriptor::get_SelectedLensAsset()
extern void LensKitDescriptor_get_SelectedLensAsset_m71F80504D1D5891FEBA495C29E811D0AD9BEA2F1 (void);
// 0x000002BD System.Void Unity.LiveCapture.VirtualCamera.LensKitDescriptor::set_SelectedLensAsset(System.Int32)
extern void LensKitDescriptor_set_SelectedLensAsset_m86702B7A0CEC20F7E7797B111ADEF51E97870110 (void);
// 0x000002BE Unity.LiveCapture.VirtualCamera.LensAssetDescriptor[] Unity.LiveCapture.VirtualCamera.LensKitDescriptor::get_Lenses()
extern void LensKitDescriptor_get_Lenses_m1DBD7DD6EA246DFB697F921D3F3B49E873BC81C7 (void);
// 0x000002BF System.Void Unity.LiveCapture.VirtualCamera.LensKitDescriptor::set_Lenses(Unity.LiveCapture.VirtualCamera.LensAssetDescriptor[])
extern void LensKitDescriptor_set_Lenses_m96B54F69129F83FD338734A9396087962D316D0C (void);
// 0x000002C0 Unity.LiveCapture.VirtualCamera.LensKitDescriptor Unity.LiveCapture.VirtualCamera.LensKitDescriptor::Create(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void LensKitDescriptor_Create_mBCD420C2780A844509D29D71F2D9948A31EFF55B (void);
// 0x000002C1 Unity.LiveCapture.VirtualCamera.LensKitDescriptor Unity.LiveCapture.VirtualCamera.LensKitDescriptor::Create(Unity.LiveCapture.VirtualCamera.LensKit,Unity.LiveCapture.VirtualCamera.LensAsset)
extern void LensKitDescriptor_Create_mAE5B3AEB559E7ED1833271D6B2CDC80D5A0DABAA (void);
// 0x000002C2 System.Void Unity.LiveCapture.VirtualCamera.LensKitDescriptor::.ctor()
extern void LensKitDescriptor__ctor_mA3664EA46CD8F98C44B8DE8F0AF0DA478EE780CF (void);
// 0x000002C3 System.Void Unity.LiveCapture.VirtualCamera.LensKitDescriptor/<>c::.cctor()
extern void U3CU3Ec__cctor_mD423169082AA817222A2575FE6D97BBE7769E7F1 (void);
// 0x000002C4 System.Void Unity.LiveCapture.VirtualCamera.LensKitDescriptor/<>c::.ctor()
extern void U3CU3Ec__ctor_m4232CEC8DC910E5235FC35ED466ABAE6131CD946 (void);
// 0x000002C5 Unity.LiveCapture.VirtualCamera.LensAssetDescriptor Unity.LiveCapture.VirtualCamera.LensKitDescriptor/<>c::<Create>b__13_0(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void U3CU3Ec_U3CCreateU3Eb__13_0_mA48CB816BE71F0604B649897BA29D2542CEB6D0F (void);
// 0x000002C6 System.Int32 Unity.LiveCapture.VirtualCamera.SampleProcessor::get_TimeShiftTolerance()
extern void SampleProcessor_get_TimeShiftTolerance_m081A61109FD1A50372879C6732573813B9CB2A33 (void);
// 0x000002C7 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_TimeShiftTolerance(System.Int32)
extern void SampleProcessor_set_TimeShiftTolerance_m9E871D750D3F9DF560DF054CEC63A724420793C5 (void);
// 0x000002C8 System.Int32 Unity.LiveCapture.VirtualCamera.SampleProcessor::get_MinBufferSize()
extern void SampleProcessor_get_MinBufferSize_m1F34BBFE65EE33367B248FDD67D4F7EFD64DDD70 (void);
// 0x000002C9 System.Int32 Unity.LiveCapture.VirtualCamera.SampleProcessor::get_BufferSize()
extern void SampleProcessor_get_BufferSize_mF2204E940C1E5749FA0932588172939A9FA9F2EA (void);
// 0x000002CA System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_BufferSize(System.Int32)
extern void SampleProcessor_set_BufferSize_m1E98F5141074B386E2C32F7957344404E6487581 (void);
// 0x000002CB System.Func`1<Unity.LiveCapture.VirtualCamera.Lens> Unity.LiveCapture.VirtualCamera.SampleProcessor::get_GetLensTarget()
extern void SampleProcessor_get_GetLensTarget_mF14349BA25AA7DC50798124817C68EB83257D766 (void);
// 0x000002CC System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_GetLensTarget(System.Func`1<Unity.LiveCapture.VirtualCamera.Lens>)
extern void SampleProcessor_set_GetLensTarget_m9B510B16D97C4CDAF225ECE4295239680E544B5F (void);
// 0x000002CD System.Func`1<Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState> Unity.LiveCapture.VirtualCamera.SampleProcessor::get_GetRig()
extern void SampleProcessor_get_GetRig_m6C32C01A38D8EED490BD5F5D2BEBF36CA3AB8534 (void);
// 0x000002CE System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_GetRig(System.Func`1<Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState>)
extern void SampleProcessor_set_GetRig_mB2C0ADDCD411A3F1A372AEA9401EDB4E78C25BBF (void);
// 0x000002CF System.Action`1<Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState> Unity.LiveCapture.VirtualCamera.SampleProcessor::get_SetRig()
extern void SampleProcessor_get_SetRig_mE3E52AF159FD3A1702A8DE8F06138675D12F29E1 (void);
// 0x000002D0 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_SetRig(System.Action`1<Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState>)
extern void SampleProcessor_set_SetRig_m2BA6D871A96A593E7AAD827BA53DAC20F14002E8 (void);
// 0x000002D1 System.Func`2<Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.Lens> Unity.LiveCapture.VirtualCamera.SampleProcessor::get_ValidateLens()
extern void SampleProcessor_get_ValidateLens_m73488B1C3628948ADCE5A1C4D6006064441B7644 (void);
// 0x000002D2 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_ValidateLens(System.Func`2<Unity.LiveCapture.VirtualCamera.Lens,Unity.LiveCapture.VirtualCamera.Lens>)
extern void SampleProcessor_set_ValidateLens_mB62F19E6388713A13BCA865267E4484A38610357 (void);
// 0x000002D3 System.Func`1<System.Boolean> Unity.LiveCapture.VirtualCamera.SampleProcessor::get_ApplyDamping()
extern void SampleProcessor_get_ApplyDamping_m3D2FE9F865A2EF2C7D3F0F2D6A23BC81AA1B8B82 (void);
// 0x000002D4 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_ApplyDamping(System.Func`1<System.Boolean>)
extern void SampleProcessor_set_ApplyDamping_m8BF958B318CF6EC0E9B17AF620C0FDACD8D30D01 (void);
// 0x000002D5 System.Func`1<Unity.LiveCapture.VirtualCamera.Settings> Unity.LiveCapture.VirtualCamera.SampleProcessor::get_GetSettings()
extern void SampleProcessor_get_GetSettings_m4AEB741702B3A78B19DA44CA96669CDD3C88E4C0 (void);
// 0x000002D6 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_GetSettings(System.Func`1<Unity.LiveCapture.VirtualCamera.Settings>)
extern void SampleProcessor_set_GetSettings_m514358841F0B3FD93491D0D5A765C24CE1119BE9 (void);
// 0x000002D7 Unity.LiveCapture.FrameTime Unity.LiveCapture.VirtualCamera.SampleProcessor::get_CurrentFrameTime()
extern void SampleProcessor_get_CurrentFrameTime_m4BBE47CDBFE1A152C1AF7F7297120512523A0832 (void);
// 0x000002D8 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::set_CurrentFrameTime(Unity.LiveCapture.FrameTime)
extern void SampleProcessor_set_CurrentFrameTime_m77196D1C9966B3463A500A1A0BD166B97A22DB7F (void);
// 0x000002D9 System.Double Unity.LiveCapture.VirtualCamera.SampleProcessor::get_CurrentTime()
extern void SampleProcessor_get_CurrentTime_m57EABFE95D971CF4F6E53B257F3C922A65BF5110 (void);
// 0x000002DA Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.SampleProcessor::get_CurrentLens()
extern void SampleProcessor_get_CurrentLens_mF0ABEF617B76245FE7C1BD58A716AF7EBA9576C6 (void);
// 0x000002DB System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::Validate()
extern void SampleProcessor_Validate_m4A2FB21BA80A62D6598CB8FC32FB315D2669E851 (void);
// 0x000002DC System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::MarkRigNeedsInitialize()
extern void SampleProcessor_MarkRigNeedsInitialize_m4DFDC1847B674ECE69F9CD44C5902CA7C90848BD (void);
// 0x000002DD System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::Reset(Unity.LiveCapture.FrameTime)
extern void SampleProcessor_Reset_m51D4C52EA51808063C5A9BFBC7E43E511BB07C5C (void);
// 0x000002DE System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::Reset()
extern void SampleProcessor_Reset_mA7CE934979930F06FFC0267878967B47A36D597A (void);
// 0x000002DF System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::AddInputKeyframe(Unity.LiveCapture.VirtualCamera.InputSample)
extern void SampleProcessor_AddInputKeyframe_m6F2BD8A34585B66C021CF2EF6BD068CDD86AF205 (void);
// 0x000002E0 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::AddFocusDistanceKeyframe(System.Double,System.Single)
extern void SampleProcessor_AddFocusDistanceKeyframe_m643269EA325388BAEA1D13B930AFDAE22905619F (void);
// 0x000002E1 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::AddFocalLengthKeyframe(System.Double,System.Single)
extern void SampleProcessor_AddFocalLengthKeyframe_m40ECA305C622620450EBA1D94652303CDE8A9D58 (void);
// 0x000002E2 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::AddApertureKeyframe(System.Double,System.Single)
extern void SampleProcessor_AddApertureKeyframe_m6E2A49BCC30AF7DFB5A5CBA016F9C941B7636A3D (void);
// 0x000002E3 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::AddLensKeyframe(System.Double,Unity.LiveCapture.VirtualCamera.Lens)
extern void SampleProcessor_AddLensKeyframe_m4DFCD530E1CC9F486E013AEB21AE9C94FAB1DAA6 (void);
// 0x000002E4 Unity.LiveCapture.FrameRate Unity.LiveCapture.VirtualCamera.SampleProcessor::GetBufferFrameRate()
extern void SampleProcessor_GetBufferFrameRate_mEAABF12386B27F243937490B2A0D8924638DD19F (void);
// 0x000002E5 System.Boolean Unity.LiveCapture.VirtualCamera.SampleProcessor::TryGetBufferRange(Unity.LiveCapture.FrameTime&,Unity.LiveCapture.FrameTime&)
extern void SampleProcessor_TryGetBufferRange_m39D7C15C7DD6513435A7DB8B3943613173DFA798 (void);
// 0x000002E6 Unity.LiveCapture.TimedSampleStatus Unity.LiveCapture.VirtualCamera.SampleProcessor::GetStatusAt(Unity.LiveCapture.FrameTime)
extern void SampleProcessor_GetStatusAt_mF80812AD05F82C1777F7BB5FE653E82EEBF27FAE (void);
// 0x000002E7 System.Collections.Generic.IEnumerable`1<System.ValueTuple`3<System.Double,System.Nullable`1<UnityEngine.Pose>,System.Nullable`1<Unity.LiveCapture.VirtualCamera.Lens>>> Unity.LiveCapture.VirtualCamera.SampleProcessor::ProcessTo(Unity.LiveCapture.FrameTime)
extern void SampleProcessor_ProcessTo_mDD9FEDCD7AD4A5B9A95C6BBFE78803CDA95178B7 (void);
// 0x000002E8 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::InitializeRigIfNeeded(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,UnityEngine.Pose&)
extern void SampleProcessor_InitializeRigIfNeeded_m61A17FF0EEEB5A04BF27BB52ADA5351B4B707F14 (void);
// 0x000002E9 Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings Unity.LiveCapture.VirtualCamera.SampleProcessor::GetRigSettings(Unity.LiveCapture.VirtualCamera.Settings&)
extern void SampleProcessor_GetRigSettings_m18CC4BC56133481BAC1E01AC92AD5A84C9DE2D4F (void);
// 0x000002EA System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::.ctor()
extern void SampleProcessor__ctor_m005EC93A8A0697FEC2DCDEF7DAFCAC54F4F9C32E (void);
// 0x000002EB System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor::.cctor()
extern void SampleProcessor__cctor_mC5D03B453327ED80004495E6A0ECD984DA7F2F6F (void);
// 0x000002EC System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::.ctor(System.Int32)
extern void U3CProcessToU3Ed__68__ctor_m81A160A01E7E5011E4491CE3109F4E2A930A84DE (void);
// 0x000002ED System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::System.IDisposable.Dispose()
extern void U3CProcessToU3Ed__68_System_IDisposable_Dispose_mD784A28AB426A6C9B3D816178766524E6948FA18 (void);
// 0x000002EE System.Boolean Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::MoveNext()
extern void U3CProcessToU3Ed__68_MoveNext_mF2A13CC361AB3F7F3D7F618D495F53EBD217F43E (void);
// 0x000002EF System.ValueTuple`3<System.Double,System.Nullable`1<UnityEngine.Pose>,System.Nullable`1<Unity.LiveCapture.VirtualCamera.Lens>> Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::System.Collections.Generic.IEnumerator<(System.Doubletime,UnityEngine.Pose?pose,Unity.LiveCapture.VirtualCamera.Lens?lens)>.get_Current()
extern void U3CProcessToU3Ed__68_System_Collections_Generic_IEnumeratorU3CU28System_DoubletimeU2CUnityEngine_PoseU3FposeU2CUnity_LiveCapture_VirtualCamera_LensU3FlensU29U3E_get_Current_mB8B6B1D9213763B1B85B547F5F02F2FD422DAA2E (void);
// 0x000002F0 System.Void Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::System.Collections.IEnumerator.Reset()
extern void U3CProcessToU3Ed__68_System_Collections_IEnumerator_Reset_m56044935F448E83B78009F0570B4A8185B61A60D (void);
// 0x000002F1 System.Object Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::System.Collections.IEnumerator.get_Current()
extern void U3CProcessToU3Ed__68_System_Collections_IEnumerator_get_Current_mF09DCF69F059D2CE7134C34D070EFB65CA6BACCF (void);
// 0x000002F2 System.Collections.Generic.IEnumerator`1<System.ValueTuple`3<System.Double,System.Nullable`1<UnityEngine.Pose>,System.Nullable`1<Unity.LiveCapture.VirtualCamera.Lens>>> Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::System.Collections.Generic.IEnumerable<(System.Doubletime,UnityEngine.Pose?pose,Unity.LiveCapture.VirtualCamera.Lens?lens)>.GetEnumerator()
extern void U3CProcessToU3Ed__68_System_Collections_Generic_IEnumerableU3CU28System_DoubletimeU2CUnityEngine_PoseU3FposeU2CUnity_LiveCapture_VirtualCamera_LensU3FlensU29U3E_GetEnumerator_m1058B477CAD5DE1935A7E167C88BF1905EA4CFA9 (void);
// 0x000002F3 System.Collections.IEnumerator Unity.LiveCapture.VirtualCamera.SampleProcessor/<ProcessTo>d__68::System.Collections.IEnumerable.GetEnumerator()
extern void U3CProcessToU3Ed__68_System_Collections_IEnumerable_GetEnumerator_mFE4310DE099C0900ED2A4EB4662DB998B82D00F5 (void);
// 0x000002F4 System.Void Unity.LiveCapture.VirtualCamera.AspectRatioAttribute::.ctor()
extern void AspectRatioAttribute__ctor_mC38379E322960559031CC7E9C48842E7AA201233 (void);
// 0x000002F5 System.String Unity.LiveCapture.VirtualCamera.AspectRatioPreset::get_Name()
extern void AspectRatioPreset_get_Name_mF1BDA9552D4BA1827F2298534172D154CD0B288A (void);
// 0x000002F6 System.Void Unity.LiveCapture.VirtualCamera.AspectRatioPreset::set_Name(System.String)
extern void AspectRatioPreset_set_Name_m6AD4EDB92ECEB8E1BF3291F39C0F3A2A8696D871 (void);
// 0x000002F7 System.Single Unity.LiveCapture.VirtualCamera.AspectRatioPreset::get_AspectRatio()
extern void AspectRatioPreset_get_AspectRatio_mFB78928968D413711E270F578F6E3294A3A172D3 (void);
// 0x000002F8 System.Void Unity.LiveCapture.VirtualCamera.AspectRatioPreset::set_AspectRatio(System.Single)
extern void AspectRatioPreset_set_AspectRatio_m3A46EB1054A402C9DEF10111BEBD27D017DDE0FF (void);
// 0x000002F9 Unity.LiveCapture.VirtualCamera.AspectRatioPreset[] Unity.LiveCapture.VirtualCamera.AspectRatioPresets::get_AspectRatios()
extern void AspectRatioPresets_get_AspectRatios_mDF1E822EB88365FB91189E53CDC0C1720A59AA7E (void);
// 0x000002FA System.Void Unity.LiveCapture.VirtualCamera.AspectRatioPresets::.ctor()
extern void AspectRatioPresets__ctor_mB63D49F556BFE7025CD6DF547B7EE3554253DDCF (void);
// 0x000002FB System.String Unity.LiveCapture.VirtualCamera.SensorPreset::get_Name()
extern void SensorPreset_get_Name_m430FD0857655BCBD6E772EE6E9837C405913378A (void);
// 0x000002FC System.Void Unity.LiveCapture.VirtualCamera.SensorPreset::set_Name(System.String)
extern void SensorPreset_set_Name_mBE6386447B4CCF3C22F5E5A954C0F978EDE53080 (void);
// 0x000002FD UnityEngine.Vector2 Unity.LiveCapture.VirtualCamera.SensorPreset::get_SensorSize()
extern void SensorPreset_get_SensorSize_mF974B0CC50D7322A16B7BC1AB1AB095AEBE9C663 (void);
// 0x000002FE System.Void Unity.LiveCapture.VirtualCamera.SensorPreset::set_SensorSize(UnityEngine.Vector2)
extern void SensorPreset_set_SensorSize_m1C3CABAEC30B1879A5A4B8DE27B2D6D4073C29C1 (void);
// 0x000002FF System.Boolean Unity.LiveCapture.VirtualCamera.SensorPreset::Equals(Unity.LiveCapture.VirtualCamera.SensorPreset)
extern void SensorPreset_Equals_mCC3BA15B2B6FF28580601A55E793D14D23A436A3 (void);
// 0x00000300 System.Boolean Unity.LiveCapture.VirtualCamera.SensorPreset::Equals(System.Object)
extern void SensorPreset_Equals_mA8D0C5B3171480C89FCAE142234CAC897322EB51 (void);
// 0x00000301 System.Int32 Unity.LiveCapture.VirtualCamera.SensorPreset::GetHashCode()
extern void SensorPreset_GetHashCode_mEA7B5F3E6671F1A8A92ABC548A5C816263250585 (void);
// 0x00000302 System.Boolean Unity.LiveCapture.VirtualCamera.SensorPreset::op_Equality(Unity.LiveCapture.VirtualCamera.SensorPreset,Unity.LiveCapture.VirtualCamera.SensorPreset)
extern void SensorPreset_op_Equality_m592D265B56AF78351EAE68C121526DB6A09DBBE5 (void);
// 0x00000303 System.Boolean Unity.LiveCapture.VirtualCamera.SensorPreset::op_Inequality(Unity.LiveCapture.VirtualCamera.SensorPreset,Unity.LiveCapture.VirtualCamera.SensorPreset)
extern void SensorPreset_op_Inequality_mF7918780F47B34555276B45DF18FA8D9C5E868DB (void);
// 0x00000304 Unity.LiveCapture.VirtualCamera.SensorPreset[] Unity.LiveCapture.VirtualCamera.SensorPresets::get_Sensors()
extern void SensorPresets_get_Sensors_mF8F733B67715AE4B6644A0DE963845260A3C1263 (void);
// 0x00000305 System.Void Unity.LiveCapture.VirtualCamera.SensorPresets::.ctor()
extern void SensorPresets__ctor_m22A6DC3E6FB2718785C872701C090A60BDD126D4 (void);
// 0x00000306 System.Void Unity.LiveCapture.VirtualCamera.SensorSizeAttribute::.ctor()
extern void SensorSizeAttribute__ctor_m84D90CBADBA419406A22876078C15E2BCA5347CE (void);
// 0x00000307 System.Void Unity.LiveCapture.VirtualCamera.DefaultRaycaster::.ctor(Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster)
extern void DefaultRaycaster__ctor_m79F37997FE5C88D85A3544BF6A70329083E6E043 (void);
// 0x00000308 System.Boolean Unity.LiveCapture.VirtualCamera.DefaultRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,System.Single&)
extern void DefaultRaycaster_Raycast_mA5EE3E653145D6C611C054028C369DD7AEB2BB68 (void);
// 0x00000309 System.Boolean Unity.LiveCapture.VirtualCamera.DefaultRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Ray&,UnityEngine.GameObject&,UnityEngine.RaycastHit&)
extern void DefaultRaycaster_Raycast_m25C7083927BE28CE1C992FF2B6A531F5F29A2BB1 (void);
// 0x0000030A System.Boolean Unity.LiveCapture.VirtualCamera.DefaultRaycaster::CanPerformRaycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Ray&)
extern void DefaultRaycaster_CanPerformRaycast_m6C59814F7009DF1056763AEB153C00C4BA967F1A (void);
// 0x0000030B System.Single Unity.LiveCapture.VirtualCamera.DefaultRaycaster::GetDistance(UnityEngine.Transform,UnityEngine.RaycastHit)
extern void DefaultRaycaster_GetDistance_m6D719F8A2F0FAEC562D0A6A98799E1CAED9079C0 (void);
// 0x0000030C System.Void Unity.LiveCapture.VirtualCamera.DefaultRaycaster::.cctor()
extern void DefaultRaycaster__cctor_m29885E7482ABEA0936FF72EF0876D647E469F072 (void);
// 0x0000030D Unity.LiveCapture.VirtualCamera.IRaycaster Unity.LiveCapture.VirtualCamera.DefaultRaycasterFactoryImpl::Create()
extern void DefaultRaycasterFactoryImpl_Create_m7D45A2C79F7952A1B7279F695E071DE94E842EC5 (void);
// 0x0000030E System.Void Unity.LiveCapture.VirtualCamera.DefaultRaycasterFactoryImpl::Dispose(Unity.LiveCapture.VirtualCamera.IRaycaster)
extern void DefaultRaycasterFactoryImpl_Dispose_m5E663D50DE82433BF88348E6A7A1D18484618711 (void);
// 0x0000030F System.Void Unity.LiveCapture.VirtualCamera.DefaultRaycasterFactoryImpl::.ctor()
extern void DefaultRaycasterFactoryImpl__ctor_m1B70A04B3B10D3621050E1510E75833A028CA05A (void);
// 0x00000310 System.Boolean Unity.LiveCapture.VirtualCamera.IRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,System.Single&)
// 0x00000311 System.Boolean Unity.LiveCapture.VirtualCamera.IRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.Ray&,UnityEngine.GameObject&,UnityEngine.RaycastHit&)
// 0x00000312 Unity.LiveCapture.VirtualCamera.IRaycaster Unity.LiveCapture.VirtualCamera.IRaycasterFactoryImpl::Create()
// 0x00000313 System.Void Unity.LiveCapture.VirtualCamera.IRaycasterFactoryImpl::Dispose(Unity.LiveCapture.VirtualCamera.IRaycaster)
// 0x00000314 Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker/Mode Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::get_CurrentMode()
extern void MeshIntersectionTracker_get_CurrentMode_mCE7224998135C9C9F9B3B230DA2E2B8D703DC56D (void);
// 0x00000315 System.Void Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::set_CurrentMode(Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker/Mode)
extern void MeshIntersectionTracker_set_CurrentMode_m0D5DB2823BAE3EB0A67AA9265A8859936187AC48 (void);
// 0x00000316 System.Void Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::Initialize()
extern void MeshIntersectionTracker_Initialize_mBFF50E8AAC96DFA89C2C3D9E3C722ED942CBD22D (void);
// 0x00000317 System.Void Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::Dispose()
extern void MeshIntersectionTracker_Dispose_m2BC81FE8F7B89FF40E7A50AA179D01C7D23A40F4 (void);
// 0x00000318 System.Void Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::Reset()
extern void MeshIntersectionTracker_Reset_m5C645E34D5DC7999043A553776375F0B092CA3C8 (void);
// 0x00000319 System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::TryUpdate(UnityEngine.Vector3&,System.Boolean)
extern void MeshIntersectionTracker_TryUpdate_m862519BCC370BEA5880D03996244B9A6CCA40F47 (void);
// 0x0000031A System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::TryTrack(UnityEngine.GameObject,UnityEngine.Ray,UnityEngine.Vector3,System.Boolean)
extern void MeshIntersectionTracker_TryTrack_mEB30B8CF561B18E97823DBACA58D5DB3B89CC941 (void);
// 0x0000031B System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::TryTrackMesh(UnityEngine.MeshRenderer,UnityEngine.Ray,UnityEngine.Vector3,System.Boolean)
extern void MeshIntersectionTracker_TryTrackMesh_m5135314AAAEA3B357AF57428FD505F0540F76350 (void);
// 0x0000031C System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::TryTrackSkinnedMesh(UnityEngine.SkinnedMeshRenderer,UnityEngine.Ray,UnityEngine.Vector3,System.Boolean)
extern void MeshIntersectionTracker_TryTrackSkinnedMesh_mB039E56E90EA1FE8FEDCF96E51DB01D5A9BCE072 (void);
// 0x0000031D UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::ReadbackVerticesAndReturnLocalPosition()
extern void MeshIntersectionTracker_ReadbackVerticesAndReturnLocalPosition_mB5FBE03DFA9DB0173CC3DCEA3C7F3693E12B2DB5 (void);
// 0x0000031E UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::BarycentricToCartesian(UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern void MeshIntersectionTracker_BarycentricToCartesian_mBD98F1C785646FF5CA98940C0C32F28600F10A54 (void);
// 0x0000031F UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::SkinVertex(UnityEngine.Vector3,System.Int32,System.Int32,System.Collections.Generic.List`1<UnityEngine.BoneWeight1>,System.Collections.Generic.List`1<UnityEngine.Matrix4x4>,UnityEngine.Transform[])
extern void MeshIntersectionTracker_SkinVertex_m896497DCA93B182910394CD3EA8E70CFAC7EF557 (void);
// 0x00000320 System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::RayMeshIntersection(UnityEngine.Mesh,UnityEngine.Transform,UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3Int&,UnityEngine.Vector2&)
extern void MeshIntersectionTracker_RayMeshIntersection_mD0DDF58E2AA5CD3E804FF4BC13EF650A3947ADE8 (void);
// 0x00000321 System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::RayMeshIntersection(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<System.Int32>,UnityEngine.Ray,UnityEngine.Vector3,System.Int32&,UnityEngine.Vector2&)
extern void MeshIntersectionTracker_RayMeshIntersection_m24016F713062AE69968470E39FFB585CD24A52AF (void);
// 0x00000322 System.Boolean Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::RayTriangleIntersection(UnityEngine.Ray,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single&,System.Single&,System.Single&)
extern void MeshIntersectionTracker_RayTriangleIntersection_m2C5177F46761A1F3019C083558115949010C4D9D (void);
// 0x00000323 System.Void Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::.ctor()
extern void MeshIntersectionTracker__ctor_mED899F28230E8A8A8036A82004EE332547B51B4E (void);
// 0x00000324 System.Void Unity.LiveCapture.VirtualCamera.MeshIntersectionTracker::.cctor()
extern void MeshIntersectionTracker__cctor_m788B0E3801F9B932B697E0A4B5951A6674D2FDF6 (void);
// 0x00000325 System.Void Unity.LiveCapture.VirtualCamera.RaycasterFactory::SetImplementation(Unity.LiveCapture.VirtualCamera.IRaycasterFactoryImpl)
extern void RaycasterFactory_SetImplementation_mD4FCBF4879CCB2E6B4E6D6B8FFB55BE61C1CD616 (void);
// 0x00000326 System.Void Unity.LiveCapture.VirtualCamera.RaycasterFactory::RestoreDefaultImplementation()
extern void RaycasterFactory_RestoreDefaultImplementation_mF43D9752A603DBEE9EA2BA149201DA9837E5987E (void);
// 0x00000327 Unity.LiveCapture.VirtualCamera.IRaycaster Unity.LiveCapture.VirtualCamera.RaycasterFactory::Create()
extern void RaycasterFactory_Create_m997716D2312553933B72AF1A9699CA237723824E (void);
// 0x00000328 System.Void Unity.LiveCapture.VirtualCamera.RaycasterFactory::Dispose(Unity.LiveCapture.VirtualCamera.IRaycaster)
extern void RaycasterFactory_Dispose_m39A508D812EC184483AA800DD66A55E2378E6F03 (void);
// 0x00000329 System.Void Unity.LiveCapture.VirtualCamera.RaycasterFactory::.cctor()
extern void RaycasterFactory__cctor_m595B424C4000642ED013206016B41C0AA6D3AEAB (void);
// 0x0000032A System.Int32 Unity.LiveCapture.VirtualCamera.CustomPassOrderAttribute::get_OrderHint()
extern void CustomPassOrderAttribute_get_OrderHint_mFCFDF3389AE2D67F72B1E9B3D2F03271C689A01C (void);
// 0x0000032B System.Void Unity.LiveCapture.VirtualCamera.CustomPassOrderAttribute::.ctor(System.Int32)
extern void CustomPassOrderAttribute__ctor_m940DB96EE263A7D0F0267FD43E26ABB35C3A3B4F (void);
// 0x0000032C UnityEngine.Texture2D Unity.LiveCapture.VirtualCamera.IScreenshotImpl::Take(UnityEngine.Camera,System.Int32,System.String,System.Double,Unity.LiveCapture.FrameRate)
// 0x0000032D UnityEngine.Texture2D Unity.LiveCapture.VirtualCamera.ScreenshotImpl::Take(UnityEngine.Camera,System.Int32,System.String,System.Double,Unity.LiveCapture.FrameRate)
extern void ScreenshotImpl_Take_m1D3564285AABEC2BF41F5B6E78B8CBBE16BDD230 (void);
// 0x0000032E System.Void Unity.LiveCapture.VirtualCamera.ScreenshotImpl::DestroyTexture(UnityEngine.Texture2D)
extern void ScreenshotImpl_DestroyTexture_m133075D9FBA29059D00B96CA8A3C587BE63E73B6 (void);
// 0x0000032F System.Void Unity.LiveCapture.VirtualCamera.ScreenshotImpl::.ctor()
extern void ScreenshotImpl__ctor_mC0F7BBEA12AA409E5ED55B0E85AA3248C84CB5E7 (void);
// 0x00000330 UnityEngine.Pose Unity.LiveCapture.VirtualCamera.Snapshot::get_Pose()
extern void Snapshot_get_Pose_m489A5AA45E8FAB71923A3D498E62CF87445674B2 (void);
// 0x00000331 System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_Pose(UnityEngine.Pose)
extern void Snapshot_set_Pose_mDC0A936D50C0BF0D0E57B3D15616F26361AD1545 (void);
// 0x00000332 Unity.LiveCapture.VirtualCamera.LensAsset Unity.LiveCapture.VirtualCamera.Snapshot::get_LensAsset()
extern void Snapshot_get_LensAsset_m6A9D85E7F781FB66F557CB1436568867EFB984F4 (void);
// 0x00000333 System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_LensAsset(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void Snapshot_set_LensAsset_mF285945C2E2B82BB832851DD5E06AF728E907744 (void);
// 0x00000334 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.Snapshot::get_Lens()
extern void Snapshot_get_Lens_m0363FA2E5A7A1C99397E22F157EC2C436E2CA7DB (void);
// 0x00000335 System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_Lens(Unity.LiveCapture.VirtualCamera.Lens)
extern void Snapshot_set_Lens_mF14DF34C7A68DD519BDF7BE9E3D96E68A06021FD (void);
// 0x00000336 Unity.LiveCapture.VirtualCamera.CameraBody Unity.LiveCapture.VirtualCamera.Snapshot::get_CameraBody()
extern void Snapshot_get_CameraBody_m9D155DF7BDCF127ECB330CB4589D8BBF98F0D876 (void);
// 0x00000337 System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_CameraBody(Unity.LiveCapture.VirtualCamera.CameraBody)
extern void Snapshot_set_CameraBody_m8E6ECD8383DD8BBB431D87733865D95CAE47C4A9 (void);
// 0x00000338 UnityEngine.Texture2D Unity.LiveCapture.VirtualCamera.Snapshot::get_Screenshot()
extern void Snapshot_get_Screenshot_m49DF0E72884B09C79F728BB3760F46BE55D3B723 (void);
// 0x00000339 System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_Screenshot(UnityEngine.Texture2D)
extern void Snapshot_set_Screenshot_m807CE5577D32929FFCE0335DD92B02FE896F47DC (void);
// 0x0000033A Unity.LiveCapture.ISlate Unity.LiveCapture.VirtualCamera.Snapshot::get_Slate()
extern void Snapshot_get_Slate_m521042D683C2AFF518D550993EFBBE6B99F439DA (void);
// 0x0000033B System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_Slate(Unity.LiveCapture.ISlate)
extern void Snapshot_set_Slate_m94536913F1AD5A3A8B20321CA95158E63C1B2631 (void);
// 0x0000033C Unity.LiveCapture.FrameRate Unity.LiveCapture.VirtualCamera.Snapshot::get_FrameRate()
extern void Snapshot_get_FrameRate_mDEDD98A69A502A173B8B682528BA386D4D500995 (void);
// 0x0000033D System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_FrameRate(Unity.LiveCapture.FrameRate)
extern void Snapshot_set_FrameRate_m3F712D39E3582A9059A2360B7FB13E709066EDC5 (void);
// 0x0000033E System.Double Unity.LiveCapture.VirtualCamera.Snapshot::get_Time()
extern void Snapshot_get_Time_m3BD5FB580A29251972B06B7F8344BA47655D86CB (void);
// 0x0000033F System.Void Unity.LiveCapture.VirtualCamera.Snapshot::set_Time(System.Double)
extern void Snapshot_set_Time_m52BDD5EC1E55BE93944574940E064594353644A4 (void);
// 0x00000340 System.Boolean Unity.LiveCapture.VirtualCamera.Snapshot::Equals(Unity.LiveCapture.VirtualCamera.Snapshot)
extern void Snapshot_Equals_m921133B9C9CCBB8D6618325A02352D0E14C331CB (void);
// 0x00000341 System.Boolean Unity.LiveCapture.VirtualCamera.Snapshot::Equals(System.Object)
extern void Snapshot_Equals_m8A8537A7259FCB22BB963212CF49607A94606E39 (void);
// 0x00000342 System.Int32 Unity.LiveCapture.VirtualCamera.Snapshot::GetHashCode()
extern void Snapshot_GetHashCode_mAF051CFD88485641B3D098C5396E933EFE6B207A (void);
// 0x00000343 System.Boolean Unity.LiveCapture.VirtualCamera.Snapshot::op_Equality(Unity.LiveCapture.VirtualCamera.Snapshot,Unity.LiveCapture.VirtualCamera.Snapshot)
extern void Snapshot_op_Equality_m03C1DE2461EB51D60562806C2D75EA3208A59957 (void);
// 0x00000344 System.Boolean Unity.LiveCapture.VirtualCamera.Snapshot::op_Inequality(Unity.LiveCapture.VirtualCamera.Snapshot,Unity.LiveCapture.VirtualCamera.Snapshot)
extern void Snapshot_op_Inequality_m2298DD3C90BF79A6534E918BBD14CC656D222FC4 (void);
// 0x00000345 System.Void Unity.LiveCapture.VirtualCamera.Snapshot::.ctor()
extern void Snapshot__ctor_m1BCA10E5B936326D884E04813101BC71974B951F (void);
// 0x00000346 UnityEngine.Pose Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_Pose()
extern void SnapshotDescriptor_get_Pose_mB1FE5994A04A3E8CD3414AE77E9B2B1CE057C722 (void);
// 0x00000347 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_Pose(UnityEngine.Pose)
extern void SnapshotDescriptor_set_Pose_mA93CA8A804F53AAA6F44D279D15C40E91E7BE969 (void);
// 0x00000348 Unity.LiveCapture.VirtualCamera.LensAssetDescriptor Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_LensAsset()
extern void SnapshotDescriptor_get_LensAsset_mDF8CD834659B2C8AE25FFC22E943729D53F87F92 (void);
// 0x00000349 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_LensAsset(Unity.LiveCapture.VirtualCamera.LensAssetDescriptor)
extern void SnapshotDescriptor_set_LensAsset_m0106C2529EE9EB5831D6DFD22D9823F8C1B1C75A (void);
// 0x0000034A Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_Lens()
extern void SnapshotDescriptor_get_Lens_m96C5743A2D6433AC60B5804B8C79811B75E0B09B (void);
// 0x0000034B System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_Lens(Unity.LiveCapture.VirtualCamera.Lens)
extern void SnapshotDescriptor_set_Lens_mA06223FB812F1F12F9823776C9D70F23BDF804B9 (void);
// 0x0000034C Unity.LiveCapture.VirtualCamera.CameraBody Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_CameraBody()
extern void SnapshotDescriptor_get_CameraBody_m941767CABE57ADDC6C9D9203B68BDA419978477F (void);
// 0x0000034D System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_CameraBody(Unity.LiveCapture.VirtualCamera.CameraBody)
extern void SnapshotDescriptor_set_CameraBody_mB13BDD106DBC224494DAC7DA6DAEDA0151F2FEAD (void);
// 0x0000034E System.Guid Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_Screenshot()
extern void SnapshotDescriptor_get_Screenshot_m9ECD141563B94FA2F81C0371982C3469EB366F5C (void);
// 0x0000034F System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_Screenshot(System.Guid)
extern void SnapshotDescriptor_set_Screenshot_mD53CA70B486A86C0D4F8AE0EAB32C1DB5F40639C (void);
// 0x00000350 System.Boolean Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_IsSlateValid()
extern void SnapshotDescriptor_get_IsSlateValid_mE3BB358597B94AF9AECF2868EDA6F8A0F2CAC98B (void);
// 0x00000351 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_IsSlateValid(System.Boolean)
extern void SnapshotDescriptor_set_IsSlateValid_m288EF277E2A1550B4A33D539C115354E17FC7A9F (void);
// 0x00000352 System.Int32 Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_SceneNumber()
extern void SnapshotDescriptor_get_SceneNumber_m53DC365A72826C00AE3335FE94CFD8E25C5783D8 (void);
// 0x00000353 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_SceneNumber(System.Int32)
extern void SnapshotDescriptor_set_SceneNumber_mCD550600A447F3109D7B05DCAFED54F8443C68E9 (void);
// 0x00000354 System.String Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_ShotName()
extern void SnapshotDescriptor_get_ShotName_mA69AE38FB56C2C2E7B75AE1B384C07983631BC56 (void);
// 0x00000355 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_ShotName(System.String)
extern void SnapshotDescriptor_set_ShotName_m3F773DF4E9FBCDBB4DE97232A376B7A0E54B9729 (void);
// 0x00000356 Unity.LiveCapture.FrameRate Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_FrameRate()
extern void SnapshotDescriptor_get_FrameRate_m5FB8E385145CB6E0FCBBB0F82BFBBEA037C15D4F (void);
// 0x00000357 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_FrameRate(Unity.LiveCapture.FrameRate)
extern void SnapshotDescriptor_set_FrameRate_mE320271C6DC95E99B7EDF8C1B4FDAC57DCBD81F5 (void);
// 0x00000358 System.Double Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::get_Time()
extern void SnapshotDescriptor_get_Time_mA2BB465F24C230203D74EB2A1EF85AE32E9D925D (void);
// 0x00000359 System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::set_Time(System.Double)
extern void SnapshotDescriptor_set_Time_m8A943AD17F1514C893E6820FB9D9E8420163F7B1 (void);
// 0x0000035A Unity.LiveCapture.VirtualCamera.SnapshotDescriptor Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::Create(Unity.LiveCapture.VirtualCamera.Snapshot)
extern void SnapshotDescriptor_Create_m9D90A1F6FB55DEDE750EC1E24966E414B2C5BEA0 (void);
// 0x0000035B System.Void Unity.LiveCapture.VirtualCamera.SnapshotDescriptor::.ctor()
extern void SnapshotDescriptor__ctor_m9B6AB3D3B6F7B1E005FE25F8EE8419A4A1BA16ED (void);
// 0x0000035C System.Int32 Unity.LiveCapture.VirtualCamera.SnapshotLibrary::get_Count()
extern void SnapshotLibrary_get_Count_m8C3233FD9A8FA502F26EFBAA5F14F5D3671943DE (void);
// 0x0000035D Unity.LiveCapture.VirtualCamera.Snapshot[] Unity.LiveCapture.VirtualCamera.SnapshotLibrary::get_Snapshots()
extern void SnapshotLibrary_get_Snapshots_m731986C0EEB13E3B0909BDDB37E9371A0D0FA4D3 (void);
// 0x0000035E System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibrary::Clear()
extern void SnapshotLibrary_Clear_mA617E9BCB7F6EE410A222BFF5B13A6B9885CA8BA (void);
// 0x0000035F System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibrary::Add(Unity.LiveCapture.VirtualCamera.Snapshot)
extern void SnapshotLibrary_Add_m323B4768909187D5000E17DB4F65DAE294756047 (void);
// 0x00000360 System.Boolean Unity.LiveCapture.VirtualCamera.SnapshotLibrary::RemoveAt(System.Int32)
extern void SnapshotLibrary_RemoveAt_m53C9A8528CA10A7C1C72393FE0CC8029927D5499 (void);
// 0x00000361 Unity.LiveCapture.VirtualCamera.Snapshot Unity.LiveCapture.VirtualCamera.SnapshotLibrary::Get(System.Int32)
extern void SnapshotLibrary_Get_m88531F591C97B6C9352EDE05B255D3F0A980391D (void);
// 0x00000362 System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibrary::Set(System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.VirtualCamera.Snapshot>)
extern void SnapshotLibrary_Set_m761AABAB10C1CF92D0616EF982556E1682ACE3F9 (void);
// 0x00000363 System.Collections.Generic.IEnumerator`1<Unity.LiveCapture.VirtualCamera.Snapshot> Unity.LiveCapture.VirtualCamera.SnapshotLibrary::GetEnumerator()
extern void SnapshotLibrary_GetEnumerator_m67E71EB7E5E926213B9A068AF3CE851A5E3717E0 (void);
// 0x00000364 System.Collections.IEnumerator Unity.LiveCapture.VirtualCamera.SnapshotLibrary::System.Collections.IEnumerable.GetEnumerator()
extern void SnapshotLibrary_System_Collections_IEnumerable_GetEnumerator_m9CDAEC656C8F366F93583E9DFEF49C13DE26A843 (void);
// 0x00000365 System.Boolean Unity.LiveCapture.VirtualCamera.SnapshotLibrary::IsIndexValid(System.Int32)
extern void SnapshotLibrary_IsIndexValid_mC7C5E3648154F42D5E5C489505AD118B50527885 (void);
// 0x00000366 System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibrary::.ctor()
extern void SnapshotLibrary__ctor_m5F83E97AC14C36EF2681A6956BCE6A12F0C06D8E (void);
// 0x00000367 Unity.LiveCapture.VirtualCamera.SnapshotLibrary Unity.LiveCapture.VirtualCamera.SnapshotLibraryUtility::CreateSnapshotLibrary(System.String)
extern void SnapshotLibraryUtility_CreateSnapshotLibrary_m495560CBB6E3C9A9B9B65463FA7C2DB845376B31 (void);
// 0x00000368 System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibraryUtility::AddSnapshot(Unity.LiveCapture.VirtualCamera.SnapshotLibrary,Unity.LiveCapture.VirtualCamera.Snapshot)
extern void SnapshotLibraryUtility_AddSnapshot_m3554A0852D1CC5D68A0BFB054F45D8F952999102 (void);
// 0x00000369 System.String Unity.LiveCapture.VirtualCamera.SnapshotLibraryUtility::GetSnapshotLibraryDefaultName(Unity.LiveCapture.VirtualCamera.VirtualCameraDevice)
extern void SnapshotLibraryUtility_GetSnapshotLibraryDefaultName_mC4476B7C10557D7E298CA20DD34F6969BC2AF92D (void);
// 0x0000036A System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibraryUtility::EnforceSnapshotLibrary(Unity.LiveCapture.VirtualCamera.VirtualCameraDevice)
extern void SnapshotLibraryUtility_EnforceSnapshotLibrary_mA4FEA03ABC597F74CB08135AB6A40227221770EC (void);
// 0x0000036B System.Void Unity.LiveCapture.VirtualCamera.SnapshotLibraryUtility::MigrateSnapshotsToSnapshotLibrary(Unity.LiveCapture.VirtualCamera.VirtualCameraDevice)
extern void SnapshotLibraryUtility_MigrateSnapshotsToSnapshotLibrary_mD16AF0C264495359268107CD6DFBBE6199254EDE (void);
// 0x0000036C Unity.LiveCapture.VirtualCamera.SnapshotDescriptor[] Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor::get_Snapshots()
extern void SnapshotListDescriptor_get_Snapshots_m581F92B3B82F546A907F4C4EC5C3198A4746A25D (void);
// 0x0000036D System.Void Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor::set_Snapshots(Unity.LiveCapture.VirtualCamera.SnapshotDescriptor[])
extern void SnapshotListDescriptor_set_Snapshots_mCDB8F1DCB52BA11D8AC196C721BBA6BEDF9874E1 (void);
// 0x0000036E Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor::Create(System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.VirtualCamera.Snapshot>)
extern void SnapshotListDescriptor_Create_mE99CDE9676D4AB61B98B5A3649AFECCDFCF502B6 (void);
// 0x0000036F System.Void Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor::.ctor()
extern void SnapshotListDescriptor__ctor_m8570E179E5A8B56FB54BBE2AE1E11DFC57EDD4DF (void);
// 0x00000370 System.String Unity.LiveCapture.VirtualCamera.SnapshotSettings::get_ScreenshotDirectory()
extern void SnapshotSettings_get_ScreenshotDirectory_m577CC71E6334B5E196FF62DE687E51F3B4883EB2 (void);
// 0x00000371 System.Void Unity.LiveCapture.VirtualCamera.SnapshotSettings::Reset()
extern void SnapshotSettings_Reset_m9ABCAB0FFB5BAA477C27595FE58D950603B5B9E1 (void);
// 0x00000372 System.Void Unity.LiveCapture.VirtualCamera.SnapshotSettings::.ctor()
extern void SnapshotSettings__ctor_mDA2DEFA54F04D0D772B81EC2F1D49E0E95319F5B (void);
// 0x00000373 System.Void Unity.LiveCapture.VirtualCamera.SnapshotSettings::.cctor()
extern void SnapshotSettings__cctor_m4EAEBD80348B0F37FBA183A5B71FF36C9B8CB441 (void);
// 0x00000374 System.Nullable`1<T> Unity.LiveCapture.VirtualCamera.TimedBufferExtensions::GetLatest(Unity.LiveCapture.TimedDataBuffer`1<T>,Unity.LiveCapture.FrameTime)
// 0x00000375 UnityEngine.GameObject Unity.LiveCapture.VirtualCamera.AdditionalCoreUtils::CreateEmptyGameObject()
extern void AdditionalCoreUtils_CreateEmptyGameObject_m310A90206101A49B701E2B94290C1153661E66FF (void);
// 0x00000376 UnityEngine.Material Unity.LiveCapture.VirtualCamera.AdditionalCoreUtils::CreateEngineMaterial(System.String)
extern void AdditionalCoreUtils_CreateEngineMaterial_m7980798DB5D29901564BFB71436C93C75B7B45BD (void);
// 0x00000377 T Unity.LiveCapture.VirtualCamera.AdditionalCoreUtils::GetOrAddComponent(UnityEngine.GameObject)
// 0x00000378 System.Void Unity.LiveCapture.VirtualCamera.AdditionalCoreUtils::DestroyIfNeeded(T&)
// 0x00000379 Unity.LiveCapture.VirtualCamera.ComponentMap`2<TKey,TValue> Unity.LiveCapture.VirtualCamera.ComponentMap`2::get_Instance()
// 0x0000037A System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::Add(TKey,TValue)
// 0x0000037B System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::Remove(TKey)
// 0x0000037C System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::Remove(TValue)
// 0x0000037D System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::UpdateMap(TKey,TValue)
// 0x0000037E System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::RemoveInstance(TValue)
// 0x0000037F System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::AddUniqueInstance(TKey,TValue)
// 0x00000380 System.Boolean Unity.LiveCapture.VirtualCamera.ComponentMap`2::TryGetInstance(TKey,TValue&)
// 0x00000381 System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::.ctor()
// 0x00000382 System.Void Unity.LiveCapture.VirtualCamera.ComponentMap`2::.cctor()
// 0x00000383 System.String Unity.LiveCapture.VirtualCamera.FocusDistanceUtility::AsString(System.Single,System.Single,System.Boolean&,System.String)
extern void FocusDistanceUtility_AsString_m32AEF4E34B906188C7A20933058D9BB17A5C4AC0 (void);
// 0x00000384 System.String Unity.LiveCapture.VirtualCamera.FocusDistanceUtility::AsString(System.Single,System.Single,System.String)
extern void FocusDistanceUtility_AsString_m3AE7ADC4B0F9BF34748250049D805B7B179C1097 (void);
// 0x00000385 System.Single Unity.LiveCapture.VirtualCamera.FocusDistanceUtility::Normalize(System.Single,System.Single,System.Single)
extern void FocusDistanceUtility_Normalize_mC99AB919D2658511A2ECCC0AD343E119CD8BFEDA (void);
// 0x00000386 System.Single Unity.LiveCapture.VirtualCamera.FocusDistanceUtility::Denormalize(System.Single,System.Single,System.Single)
extern void FocusDistanceUtility_Denormalize_m0C7ACD7625709D52F68C0C92CACE7F3B9C014C59 (void);
// 0x00000387 System.Void Unity.LiveCapture.VirtualCamera.ReadOnly::.ctor()
extern void ReadOnly__ctor_m32E1DE3C1EC30C774EE3DFF2BCB16CFFB826BDF2 (void);
// 0x00000388 System.Boolean Unity.LiveCapture.VirtualCamera.VideoServer::IsSupported()
extern void VideoServer_IsSupported_m9450FF8BA62824D4F2903B3AA33A0C82D6E9689E (void);
// 0x00000389 UnityEngine.Vector2Int Unity.LiveCapture.VirtualCamera.VideoServer::get_BaseResolution()
extern void VideoServer_get_BaseResolution_mD171903C925D40A82D3B1FA3B4F85AE3272DE3EC (void);
// 0x0000038A System.Void Unity.LiveCapture.VirtualCamera.VideoServer::set_BaseResolution(UnityEngine.Vector2Int)
extern void VideoServer_set_BaseResolution_m1356196746E357036CE817BDFB494703ADB9F3E1 (void);
// 0x0000038B UnityEngine.Camera Unity.LiveCapture.VirtualCamera.VideoServer::get_Camera()
extern void VideoServer_get_Camera_mD1E05CBCA559ABEAACB29219EACB34AEF11D201B (void);
// 0x0000038C System.Void Unity.LiveCapture.VirtualCamera.VideoServer::set_Camera(UnityEngine.Camera)
extern void VideoServer_set_Camera_m3C1349D7A8D2CE41C1E77FAE2661D97C21F558AF (void);
// 0x0000038D System.Boolean Unity.LiveCapture.VirtualCamera.VideoServer::get_IsRunning()
extern void VideoServer_get_IsRunning_mB0610564B7208073705EDCCDB3A22FCD074BA9D4 (void);
// 0x0000038E System.Int32 Unity.LiveCapture.VirtualCamera.VideoServer::get_Port()
extern void VideoServer_get_Port_mE9C823239804D1EE2506B502FFA48EAD7F54A786 (void);
// 0x0000038F System.Void Unity.LiveCapture.VirtualCamera.VideoServer::Update()
extern void VideoServer_Update_m4CDBCF734720F8689C83E5761144B8057344EA13 (void);
// 0x00000390 System.Void Unity.LiveCapture.VirtualCamera.VideoServer::StartServer()
extern void VideoServer_StartServer_mA2207FE492F1CCE482BA174B42564E57B321AC46 (void);
// 0x00000391 System.Void Unity.LiveCapture.VirtualCamera.VideoServer::StopServer()
extern void VideoServer_StopServer_m4F42CEEB30EB3D7DDF872AA4457CBF121834862A (void);
// 0x00000392 System.Int32 Unity.LiveCapture.VirtualCamera.VideoServer::GetBitRate()
extern void VideoServer_GetBitRate_mB509D4E66157D4D21A4FEBA54742EF6F50B490ED (void);
// 0x00000393 System.Int32 Unity.LiveCapture.VirtualCamera.VideoServer::GetFrameRate()
extern void VideoServer_GetFrameRate_m873316FA339511845FB6F55309D07248B8A80EAA (void);
// 0x00000394 UnityEngine.Vector2Int Unity.LiveCapture.VirtualCamera.VideoServer::GetResolution()
extern void VideoServer_GetResolution_m6181FE32847F9CCB50AFB034CC8D623CF46E68BE (void);
// 0x00000395 System.Boolean Unity.LiveCapture.VirtualCamera.VideoServer::Unity.LiveCapture.VideoStreaming.Server.IVideoStreamSink.ShouldPrioritizeLatency()
extern void VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_ShouldPrioritizeLatency_m21FF65207F470A832F820BF23E5722E1445108D0 (void);
// 0x00000396 System.Boolean Unity.LiveCapture.VirtualCamera.VideoServer::Unity.LiveCapture.VideoStreaming.Server.IVideoStreamSink.get_usesDirectAccess()
extern void VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_get_usesDirectAccess_m0D902F2ECD31190D042ED9843FDE9E4515AA593A (void);
// 0x00000397 Unity.LiveCapture.VideoStreaming.Server.EncoderFormat Unity.LiveCapture.VirtualCamera.VideoServer::Unity.LiveCapture.VideoStreaming.Server.IVideoStreamSink.get_frameFormat()
extern void VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_get_frameFormat_m215CA0292C2B52A88EECF0AD7FDBE75EA9851590 (void);
// 0x00000398 System.Void Unity.LiveCapture.VirtualCamera.VideoServer::Unity.LiveCapture.VideoStreaming.Server.IVideoStreamSink.ConsumeFrame(Unity.LiveCapture.VideoStreaming.Server.AsyncGPUVideoFrameRequest)
extern void VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_ConsumeFrame_m51FE5A011E489DE2B2D596C3DA6267AFB8791D86 (void);
// 0x00000399 System.Void Unity.LiveCapture.VirtualCamera.VideoServer::Unity.LiveCapture.VideoStreaming.Server.IVideoStreamSink.ConsumeFrame(Unity.LiveCapture.VideoStreaming.Server.DirectAccessVideoFrameRequest)
extern void VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_ConsumeFrame_mF458D8D8FD3A941B12A94B2516806CF07AA9BB2E (void);
// 0x0000039A System.Void Unity.LiveCapture.VirtualCamera.VideoServer::SetActiveCamera(UnityEngine.Camera)
extern void VideoServer_SetActiveCamera_m76EB02AF2EC44A6CBF9D736B518E8479B30AFF8B (void);
// 0x0000039B System.Void Unity.LiveCapture.VirtualCamera.VideoServer::RegisterSink()
extern void VideoServer_RegisterSink_mDA7099FE39DF21E8104BED4F105A0074F0702286 (void);
// 0x0000039C System.Void Unity.LiveCapture.VirtualCamera.VideoServer::UnregisterSink()
extern void VideoServer_UnregisterSink_mF0A20FD1825D12CCFD364B987FEC66F246FD3811 (void);
// 0x0000039D System.Void Unity.LiveCapture.VirtualCamera.VideoServer::.ctor()
extern void VideoServer__ctor_m5D07D56851C1E3B71496CF78AB49FB738331C3C9 (void);
// 0x0000039E Unity.LiveCapture.VideoStreaming.Server.VideoEncoder Unity.LiveCapture.VirtualCamera.VideoServerSettings::get_Encoder()
extern void VideoServerSettings_get_Encoder_mB1C81B6E1FD0D9D01F2BB4E6E5F8D10D3178F97E (void);
// 0x0000039F System.Single Unity.LiveCapture.VirtualCamera.VideoServerSettings::get_ResolutionScale()
extern void VideoServerSettings_get_ResolutionScale_mD6318D2C3A79E4CE50133A565F5A98ABD32AED27 (void);
// 0x000003A0 System.Int32 Unity.LiveCapture.VirtualCamera.VideoServerSettings::get_FrameRate()
extern void VideoServerSettings_get_FrameRate_mBFEE9FAB3A325F8A7F618E8AEE60E5F41726F7D2 (void);
// 0x000003A1 System.Single Unity.LiveCapture.VirtualCamera.VideoServerSettings::get_Quality()
extern void VideoServerSettings_get_Quality_m54EA7AB2E45E98B0B48509DF028BE546FE14B9CA (void);
// 0x000003A2 System.Boolean Unity.LiveCapture.VirtualCamera.VideoServerSettings::get_PrioritizeLatency()
extern void VideoServerSettings_get_PrioritizeLatency_m27F207E47A5BA353CFA5D889CF55A7E90F5884B2 (void);
// 0x000003A3 System.Void Unity.LiveCapture.VirtualCamera.VideoServerSettings::OnValidate()
extern void VideoServerSettings_OnValidate_mE868E236842FFC1C1EBBA357AFA19DCAF986CFCA (void);
// 0x000003A4 System.Void Unity.LiveCapture.VirtualCamera.VideoServerSettings::Reset()
extern void VideoServerSettings_Reset_m373871A220AE2F67EEF8E01446157D04668F61C3 (void);
// 0x000003A5 System.Void Unity.LiveCapture.VirtualCamera.VideoServerSettings::.ctor()
extern void VideoServerSettings__ctor_m79782BBDF2E11AAD12633FC2DA3594E21FAB2E4A (void);
// 0x000003A6 UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_LocalPosition()
extern void VirtualCameraActor_get_LocalPosition_m74509D75D5E904D0E18C09F21D369816E3856E7E (void);
// 0x000003A7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_LocalPosition(UnityEngine.Vector3)
extern void VirtualCameraActor_set_LocalPosition_mC634119CD3478696A277B958DCB1D5FD640F41E8 (void);
// 0x000003A8 UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_LocalEulerAngles()
extern void VirtualCameraActor_get_LocalEulerAngles_m8E0521F5D855A3AF3D2272BCB73C05644DDEC1D6 (void);
// 0x000003A9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_LocalEulerAngles(UnityEngine.Vector3)
extern void VirtualCameraActor_set_LocalEulerAngles_m28FA9EAB73A8F3312D56497B20D5F5715C4757F0 (void);
// 0x000003AA System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_LocalPositionEnabled()
extern void VirtualCameraActor_get_LocalPositionEnabled_mBF8B840B0E2BBCE31FC72039DD9F533988696B6C (void);
// 0x000003AB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_LocalPositionEnabled(System.Boolean)
extern void VirtualCameraActor_set_LocalPositionEnabled_mAB73520972D35AA949BF235EEBC377D65F6830E3 (void);
// 0x000003AC System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_LocalEulerAnglesEnabled()
extern void VirtualCameraActor_get_LocalEulerAnglesEnabled_mE684D0214B135989FBAEF27A2E9F5E2B9A93A4E0 (void);
// 0x000003AD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_LocalEulerAnglesEnabled(System.Boolean)
extern void VirtualCameraActor_set_LocalEulerAnglesEnabled_m2D5494A548DBFA290CCD2C9F9720BC524AECB003 (void);
// 0x000003AE UnityEngine.Animator Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_Animator()
extern void VirtualCameraActor_get_Animator_mD80839D32DE4D7864749093C7AE3B084E89E4966 (void);
// 0x000003AF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_Animator(UnityEngine.Animator)
extern void VirtualCameraActor_set_Animator_mE67D10E814E927D9A7E437466843B13A5FD6C876 (void);
// 0x000003B0 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_Lens()
extern void VirtualCameraActor_get_Lens_mE76CD046500726900EFEAD30535F8BF0F70D41BB (void);
// 0x000003B1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_Lens(Unity.LiveCapture.VirtualCamera.Lens)
extern void VirtualCameraActor_set_Lens_m8147AB37C86CBE07A310EDA329528AC57DBD0FEF (void);
// 0x000003B2 Unity.LiveCapture.VirtualCamera.LensIntrinsics Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_LensIntrinsics()
extern void VirtualCameraActor_get_LensIntrinsics_m6E75687A55D7C9E1F9740B6232DED5DB1954FC1F (void);
// 0x000003B3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_LensIntrinsics(Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void VirtualCameraActor_set_LensIntrinsics_m9C95E35B27909BF61023820D9CE50091FE1FFBA7 (void);
// 0x000003B4 Unity.LiveCapture.VirtualCamera.CameraBody Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_CameraBody()
extern void VirtualCameraActor_get_CameraBody_m7F139541C9485E773F35C1513643A0CA4E2E7FDF (void);
// 0x000003B5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_CameraBody(Unity.LiveCapture.VirtualCamera.CameraBody)
extern void VirtualCameraActor_set_CameraBody_mC6282D74200F265EA6DADA368FC60E792B16AE86 (void);
// 0x000003B6 System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_DepthOfFieldEnabled()
extern void VirtualCameraActor_get_DepthOfFieldEnabled_mD6ED7B3E43D58F7BF366EF49DC4046B504C5436B (void);
// 0x000003B7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_DepthOfFieldEnabled(System.Boolean)
extern void VirtualCameraActor_set_DepthOfFieldEnabled_m675EE057A28F35340C68EBE580E871A283A3C9C0 (void);
// 0x000003B8 System.Single Unity.LiveCapture.VirtualCamera.VirtualCameraActor::get_CropAspect()
extern void VirtualCameraActor_get_CropAspect_m9B8D3B1C0986AD7793F41A886B08AC003E695610 (void);
// 0x000003B9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::set_CropAspect(System.Single)
extern void VirtualCameraActor_set_CropAspect_mA16F96E3E97AD07AECE7757C030977EBB1CD92F6 (void);
// 0x000003BA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::Awake()
extern void VirtualCameraActor_Awake_m317694B8918D0B43CD92263AD18561136C896318 (void);
// 0x000003BB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::OnValidate()
extern void VirtualCameraActor_OnValidate_mB3FA0DB6173F7656C57450A6367A34C5E8FFBF9E (void);
// 0x000003BC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::Register(Unity.LiveCapture.IPropertyPreviewer)
extern void VirtualCameraActor_Register_mC174793D9BDDD2F3AE5A27D4586284756C533727 (void);
// 0x000003BD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraActor::.ctor()
extern void VirtualCameraActor__ctor_m3A581C3F39C25A013DA83E0918740EA68D0D4319 (void);
// 0x000003BE System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlagsExtensions::AreAllChannelsActive(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraChannelFlagsExtensions_AreAllChannelsActive_mF72DC3614DD110928A213980F3117B492E0310DE (void);
// 0x000003BF System.Collections.Generic.IEnumerable`1<Unity.LiveCapture.VirtualCamera.VirtualCameraDevice> Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_instances()
extern void VirtualCameraDevice_get_instances_mFCCD57D3FE1CE33498289F5BEE7154B27B5DD937 (void);
// 0x000003C0 Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Recorder()
extern void VirtualCameraDevice_get_Recorder_m686A3372BDABD398C3C4D20D8A4E73196D98DA94 (void);
// 0x000003C1 Unity.LiveCapture.VirtualCamera.SampleProcessor Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Processor()
extern void VirtualCameraDevice_get_Processor_m49B32DF6D592FFD7D4D80A0FC5ECCBFF2B2D5281 (void);
// 0x000003C2 Unity.LiveCapture.VirtualCamera.VirtualCameraActor Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Actor()
extern void VirtualCameraDevice_get_Actor_m9D46215F68F640D83FBEAD891EDC019657086A8A (void);
// 0x000003C3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_Actor(Unity.LiveCapture.VirtualCamera.VirtualCameraActor)
extern void VirtualCameraDevice_set_Actor_m5CE0CC77B99990B26A3B2211751FBF844445E448 (void);
// 0x000003C4 UnityEngine.Pose Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Pose()
extern void VirtualCameraDevice_get_Pose_mA05203083DED4627FAE527B12E6CFAA52D97EECF (void);
// 0x000003C5 UnityEngine.Pose Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Origin()
extern void VirtualCameraDevice_get_Origin_mB22E41A10ED2AA8933C17A176C5A47FDB62D859D (void);
// 0x000003C6 UnityEngine.Pose Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_LocalPose()
extern void VirtualCameraDevice_get_LocalPose_m923C85AD81625F904799D4BE52A8FD9D125AA5EB (void);
// 0x000003C7 Unity.LiveCapture.VirtualCamera.Settings Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Settings()
extern void VirtualCameraDevice_get_Settings_mC95ABB66503B9583405854FE18EC64CDF86D37A6 (void);
// 0x000003C8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_Settings(Unity.LiveCapture.VirtualCamera.Settings)
extern void VirtualCameraDevice_set_Settings_mF2519FF39DF29C00F735BDC1A74309EE6699E794 (void);
// 0x000003C9 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Lens()
extern void VirtualCameraDevice_get_Lens_m7942C25C0295728AF3185C68AD9BD65E3916B1B1 (void);
// 0x000003CA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_Lens(Unity.LiveCapture.VirtualCamera.Lens)
extern void VirtualCameraDevice_set_Lens_m74CD8FDD71624F687A8699AC2DC6E291D8024E89 (void);
// 0x000003CB Unity.LiveCapture.VirtualCamera.LensAsset Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_LensAsset()
extern void VirtualCameraDevice_get_LensAsset_mC0FD50AEE4590BFE0720088119EDB2BEA19D6CDE (void);
// 0x000003CC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_LensAsset(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void VirtualCameraDevice_set_LensAsset_m7A8C883EB41C0413606EAF77D1D52B181C35F508 (void);
// 0x000003CD Unity.LiveCapture.VirtualCamera.LensIntrinsics Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_LensIntrinsics()
extern void VirtualCameraDevice_get_LensIntrinsics_mCE087DD2FF0180918F4BA98C3D121238E2ED59A6 (void);
// 0x000003CE Unity.LiveCapture.VirtualCamera.CameraBody Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_CameraBody()
extern void VirtualCameraDevice_get_CameraBody_mAAF45782C04427B0F50BFB812CACD38316CC1DD6 (void);
// 0x000003CF Unity.LiveCapture.VirtualCamera.SnapshotLibrary Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_SnapshotLibrary()
extern void VirtualCameraDevice_get_SnapshotLibrary_m63ADE676D0FB9BB21D58483BDE68FA0182360ADB (void);
// 0x000003D0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_SnapshotLibrary(Unity.LiveCapture.VirtualCamera.SnapshotLibrary)
extern void VirtualCameraDevice_set_SnapshotLibrary_m83CE89487C24CE60841BF0BA044927554E335131 (void);
// 0x000003D1 System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::TryGetInternalClient(Unity.LiveCapture.VirtualCamera.IVirtualCameraClientInternal&)
extern void VirtualCameraDevice_TryGetInternalClient_m31262E1C89884190A24C01D8FD9B403455834AC0 (void);
// 0x000003D2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::InitializeDriver()
extern void VirtualCameraDevice_InitializeDriver_mB909BCD7A15178386B3766C93C96420ED4E105CD (void);
// 0x000003D3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SetupProcessor()
extern void VirtualCameraDevice_SetupProcessor_m8E143AB49BEBF52626310A68704215773536B071 (void);
// 0x000003D4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Reset()
extern void VirtualCameraDevice_Reset_m816E2C1BA4EFABE35E41FFADB9B07231E9954081 (void);
// 0x000003D5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnValidate()
extern void VirtualCameraDevice_OnValidate_mE50C384E3C90E66C268CF27B05EC8EF75072276D (void);
// 0x000003D6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::ValidateActor()
extern void VirtualCameraDevice_ValidateActor_mC60C89C2388FA867377E7AA0CD21C5DC91689CC9 (void);
// 0x000003D7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateOverlaysIfNeeded(Unity.LiveCapture.VirtualCamera.Settings)
extern void VirtualCameraDevice_UpdateOverlaysIfNeeded_m4DCA3C5B75FD90827A491EF11212D055317A8386 (void);
// 0x000003D8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::ValidateLensIntrinsics()
extern void VirtualCameraDevice_ValidateLensIntrinsics_mBB21FEA3B85471F4B8E4AA6732AE6E8A23F22DA2 (void);
// 0x000003D9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnSlateChanged(Unity.LiveCapture.ISlate)
extern void VirtualCameraDevice_OnSlateChanged_m7F35F86BB934BF853EAFBDDEDA74ECC89B112E1B (void);
// 0x000003DA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnRegisterLiveProperties(Unity.LiveCapture.IPropertyPreviewer)
extern void VirtualCameraDevice_OnRegisterLiveProperties_mB754790FB70DD3576C28505A333FAE8D8207BC40 (void);
// 0x000003DB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SetScreenshotImpl(Unity.LiveCapture.VirtualCamera.IScreenshotImpl)
extern void VirtualCameraDevice_SetScreenshotImpl_mBA7A0BBD98DAFF1AE30C5124E95A62FA9ABFC160 (void);
// 0x000003DC System.Int32 Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GetSnapshotCount()
extern void VirtualCameraDevice_GetSnapshotCount_m30CEDCD03AB3882972CF016FF722D750FF3C16CF (void);
// 0x000003DD Unity.LiveCapture.VirtualCamera.Snapshot Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GetSnapshot(System.Int32)
extern void VirtualCameraDevice_GetSnapshot_m6041F1F7D5314B10FA957F637682A0E808401373 (void);
// 0x000003DE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::TakeSnapshot()
extern void VirtualCameraDevice_TakeSnapshot_mCFBB1672FFAC650EE8AA3E5980188B47D568F0CC (void);
// 0x000003DF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GoToSnapshot(System.Int32)
extern void VirtualCameraDevice_GoToSnapshot_mBC7EB9DE42E517CF6A2E7DC751453B2A1814E940 (void);
// 0x000003E0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GoToSnapshot(Unity.LiveCapture.VirtualCamera.Snapshot)
extern void VirtualCameraDevice_GoToSnapshot_mF2F5C928F3ACECCB5D6E7B4DF2EA88EC50A257A2 (void);
// 0x000003E1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::LoadSnapshot(System.Int32)
extern void VirtualCameraDevice_LoadSnapshot_m15AC42F83D3BD466D6AC8B9DB9393786F9C15718 (void);
// 0x000003E2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::LoadSnapshot(Unity.LiveCapture.VirtualCamera.Snapshot)
extern void VirtualCameraDevice_LoadSnapshot_m1B0DEF5676CA0DC6F4B18AD362244B382FDB8C67 (void);
// 0x000003E3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::DeleteSnapshot(System.Int32)
extern void VirtualCameraDevice_DeleteSnapshot_m1DC89DCBF86BD64937813314668333DF02271E9C (void);
// 0x000003E4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Awake()
extern void VirtualCameraDevice_Awake_m5089B8ED8F32314D85653CA6B2CFC1EB23FCB40F (void);
// 0x000003E5 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnEnable()
extern void VirtualCameraDevice_OnEnable_mCFCCB558CE13DAB68F7F5987D2206497FEEB2D80 (void);
// 0x000003E6 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnDisable()
extern void VirtualCameraDevice_OnDisable_mB73DBDC3A40AA8C95B8F762D09220D4B77BD4259 (void);
// 0x000003E7 System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::IsReady()
extern void VirtualCameraDevice_IsReady_mA904264B0B82AFF5DF31BFDC96FC6970473CCF5B (void);
// 0x000003E8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Write(Unity.LiveCapture.ITakeBuilder)
extern void VirtualCameraDevice_Write_m1BAA0391357D4E7034C1A6F29AD512F7D9C50E0B (void);
// 0x000003E9 Unity.LiveCapture.VirtualCamera.VideoServer Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GetVideoServer()
extern void VirtualCameraDevice_GetVideoServer_m518E09AEF573B96C4A92BDD0D01E8E55B1DF8939 (void);
// 0x000003EA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::RequestAlignWithActor()
extern void VirtualCameraDevice_RequestAlignWithActor_m9C2303ECF780F249A43ED952763E45E3B32C8196 (void);
// 0x000003EB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SetOrigin(UnityEngine.Pose)
extern void VirtualCameraDevice_SetOrigin_m1646BB9EDCB1386A5A99A84FB2E0F2B513BBC21D (void);
// 0x000003EC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SetARPose(UnityEngine.Pose)
extern void VirtualCameraDevice_SetARPose_m50E887BDB92CD2FCB4F063AFDD3BAB385681E74E (void);
// 0x000003ED System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::RefreshRig()
extern void VirtualCameraDevice_RefreshRig_mB667F831C724A9B4ACBC1AA0A07D3CCC59EE4C51 (void);
// 0x000003EE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SetFocusMode(Unity.LiveCapture.VirtualCamera.FocusMode)
extern void VirtualCameraDevice_SetFocusMode_m5DD1DC1E57FFF767596830659A3EADC463030F0E (void);
// 0x000003EF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SetReticlePosition(UnityEngine.Vector2)
extern void VirtualCameraDevice_SetReticlePosition_mD8DBC0A8605144099F805C259B08610184D5021D (void);
// 0x000003F0 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateClient()
extern void VirtualCameraDevice_UpdateClient_mAAF8103BF088B17DF07EA9002BB40F973CD50F34 (void);
// 0x000003F1 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::MarkClientTime(System.Double)
extern void VirtualCameraDevice_MarkClientTime_m9144F9880967FA1EB15A93FBD2BC46AA5EB4A409 (void);
// 0x000003F2 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateDevice()
extern void VirtualCameraDevice_UpdateDevice_m41F6E852F783BCD4C7DE0745A7A9A2344DD493E4 (void);
// 0x000003F3 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::LiveUpdate()
extern void VirtualCameraDevice_LiveUpdate_m50FE9908AD7234858F0AF8E61D24864C8E0C643B (void);
// 0x000003F4 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateActor(UnityEngine.Pose,Unity.LiveCapture.VirtualCamera.Lens)
extern void VirtualCameraDevice_UpdateActor_m32ECCD7D55E039BE318D799852620B77131FB862 (void);
// 0x000003F5 UnityEngine.Camera Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GetCamera()
extern void VirtualCameraDevice_GetCamera_m69B04BBC2711DA54E5FD8A1BCB731C31BAE74999 (void);
// 0x000003F6 System.String Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::GetAssetName()
extern void VirtualCameraDevice_GetAssetName_m7E542F1B678840A8596177727F1ACDC3C4E30A0D (void);
// 0x000003F7 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnClientAssigned()
extern void VirtualCameraDevice_OnClientAssigned_m52363B4E6B8F248318FC2A037E2556D94A510643 (void);
// 0x000003F8 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnClientUnassigned()
extern void VirtualCameraDevice_OnClientUnassigned_m97F5FE27F21D389DB23B742EE5C253D68EAF3D24 (void);
// 0x000003F9 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Register()
extern void VirtualCameraDevice_Register_mE83627198CF85DB1E88A44A9EE1B4061F94E55A8 (void);
// 0x000003FA System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Unregister()
extern void VirtualCameraDevice_Unregister_mFFF368DB144FEE11E041A26B42D780A3A5DAC011 (void);
// 0x000003FB System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnRecordingChanged()
extern void VirtualCameraDevice_OnRecordingChanged_mFC2A02A13608081E5C620E75CEE7CFFFAC202B7F (void);
// 0x000003FC System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateRigOriginFromActor()
extern void VirtualCameraDevice_UpdateRigOriginFromActor_mA7CADE58F75E33F4A358542654E230E675D84277 (void);
// 0x000003FD System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnChannelFlagsReceived(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraDevice_OnChannelFlagsReceived_m522024D85C4364ADF1E5F1F454BF5B703723D78C (void);
// 0x000003FE System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnInputSampleReceived(Unity.LiveCapture.VirtualCamera.InputSample)
extern void VirtualCameraDevice_OnInputSampleReceived_mF31E54E1C5F83A3AF94CE80627972784BACC606E (void);
// 0x000003FF System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocalLengthSampleReceived(Unity.LiveCapture.VirtualCamera.FocalLengthSample)
extern void VirtualCameraDevice_OnFocalLengthSampleReceived_mD34177CB63C97A7C3BFF6DE953586F75C60D532C (void);
// 0x00000400 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocusDistanceSampleReceived(Unity.LiveCapture.VirtualCamera.FocusDistanceSample)
extern void VirtualCameraDevice_OnFocusDistanceSampleReceived_m17717FE47ABC49089EBDDA87057AB23B7FF8A649 (void);
// 0x00000401 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnApertureSampleReceived(Unity.LiveCapture.VirtualCamera.ApertureSample)
extern void VirtualCameraDevice_OnApertureSampleReceived_m12A28083724B6E2F83223CC1946443CF6E61C1A8 (void);
// 0x00000402 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnDampingEnabledReceived(System.Boolean)
extern void VirtualCameraDevice_OnDampingEnabledReceived_mA9B4BBBF244AD838642303A2B2ECBB6E4DA5D0BC (void);
// 0x00000403 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnBodyDampingReceived(UnityEngine.Vector3)
extern void VirtualCameraDevice_OnBodyDampingReceived_mB84C4ABE05355F6A37EA12F57747A7717BD7FCA9 (void);
// 0x00000404 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnAimDampingReceived(System.Single)
extern void VirtualCameraDevice_OnAimDampingReceived_m6A599B51127882831A77A88B13857C139B1D01C6 (void);
// 0x00000405 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocalLengthDampingReceived(System.Single)
extern void VirtualCameraDevice_OnFocalLengthDampingReceived_m585F4E4627DE56E50F8AA49DC457E84C4B50D889 (void);
// 0x00000406 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocusDistanceDampingReceived(System.Single)
extern void VirtualCameraDevice_OnFocusDistanceDampingReceived_mE9E0ED50FFB1845622C79BF9F8BBDC6F44F0FD18 (void);
// 0x00000407 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnApertureDampingReceived(System.Single)
extern void VirtualCameraDevice_OnApertureDampingReceived_m68FC9D7808D3C414BB572DF85A61F1692DA2C7E9 (void);
// 0x00000408 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnPositionLockReceived(Unity.LiveCapture.VirtualCamera.PositionAxis)
extern void VirtualCameraDevice_OnPositionLockReceived_mC08F5EAC68736E1F9E0F5CA28F6ADC250D7A4142 (void);
// 0x00000409 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnRotationLockReceived(Unity.LiveCapture.VirtualCamera.RotationAxis)
extern void VirtualCameraDevice_OnRotationLockReceived_m2F77121F0D4FB162FAF4ABED7639DF0E4C741B63 (void);
// 0x0000040A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnAutoHorizonReceived(System.Boolean)
extern void VirtualCameraDevice_OnAutoHorizonReceived_m789A4532BF11E05B73C38B6EDA493F78BB3192B2 (void);
// 0x0000040B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnErgonomicTiltReceived(System.Single)
extern void VirtualCameraDevice_OnErgonomicTiltReceived_m1A88584C081CD0904C667C69E6D9536BB672E60A (void);
// 0x0000040C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnRebasingReceived(System.Boolean)
extern void VirtualCameraDevice_OnRebasingReceived_mB64DA26554A9D0837DA8977F2B72C12FC61A76FD (void);
// 0x0000040D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnMotionScaleReceived(UnityEngine.Vector3)
extern void VirtualCameraDevice_OnMotionScaleReceived_m3ED094B3BB12DB0FB4A50C168FB96C29FCB70518 (void);
// 0x0000040E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnJoystickSensitivityReceived(UnityEngine.Vector3)
extern void VirtualCameraDevice_OnJoystickSensitivityReceived_m84FF718E85F61D831886C7BE6EDB02963B98C29B (void);
// 0x0000040F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnPedestalSpaceReceived(UnityEngine.Space)
extern void VirtualCameraDevice_OnPedestalSpaceReceived_m6F4DFB70D1ECCC8743F7D0D9672BB907F4893441 (void);
// 0x00000410 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnMotionSpaceReceived(UnityEngine.Space)
extern void VirtualCameraDevice_OnMotionSpaceReceived_m0F6F2EFC0B203824A302DDADFEF8B3BA5914DE12 (void);
// 0x00000411 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocusModeReceived(Unity.LiveCapture.VirtualCamera.FocusMode)
extern void VirtualCameraDevice_OnFocusModeReceived_m42C5A7A2F8FF4C91B7BD3D07DC4A8A0EBD7BF220 (void);
// 0x00000412 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocusReticlePositionReceived(UnityEngine.Vector2)
extern void VirtualCameraDevice_OnFocusReticlePositionReceived_m96302A05A68484C9AF2996283540BDE19EC430A6 (void);
// 0x00000413 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnFocusDistanceOffsetReceived(System.Single)
extern void VirtualCameraDevice_OnFocusDistanceOffsetReceived_m04D03C0AC4624A06030A2141B4E3D383373AFEC8 (void);
// 0x00000414 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnCropAspectReceived(System.Single)
extern void VirtualCameraDevice_OnCropAspectReceived_m13F346D5335C11BC2B8960ED242920B9ECF05656 (void);
// 0x00000415 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnGateFitReceived(Unity.LiveCapture.VirtualCamera.GateFit)
extern void VirtualCameraDevice_OnGateFitReceived_mB8605FD8384968D67073EB02640F24B72A1A67F9 (void);
// 0x00000416 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnShowGateMaskReceived(System.Boolean)
extern void VirtualCameraDevice_OnShowGateMaskReceived_mBAF1C645EC5EE961DBACE2EC6290504250ADA9CE (void);
// 0x00000417 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnShowFrameLinesReceived(System.Boolean)
extern void VirtualCameraDevice_OnShowFrameLinesReceived_m9A9684FFE523FC5565829FE6260E94E65E21B575 (void);
// 0x00000418 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnShowCenterMarkerReceived(System.Boolean)
extern void VirtualCameraDevice_OnShowCenterMarkerReceived_mF0159041280B87272E94D0E4CE88984E8F61568D (void);
// 0x00000419 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnShowFocusPlaneReceived(System.Boolean)
extern void VirtualCameraDevice_OnShowFocusPlaneReceived_m13B0AC06A70DE956852C0B65F65172452E3F300D (void);
// 0x0000041A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnSetPoseToOrigin()
extern void VirtualCameraDevice_OnSetPoseToOrigin_mAD5F73D98072F99DBC5164AA63F04417FDC48186 (void);
// 0x0000041B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnSetLensAsset(Unity.LiveCapture.SerializableGuid)
extern void VirtualCameraDevice_OnSetLensAsset_mF80EB7AE790250321ABF1E5D141C65350630F14E (void);
// 0x0000041C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnTakeSnapshot()
extern void VirtualCameraDevice_OnTakeSnapshot_mA5795C840CBA287694D6781E2FA31DF5C659D292 (void);
// 0x0000041D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnGoToSnapshot(System.Int32)
extern void VirtualCameraDevice_OnGoToSnapshot_m21E8B5BDCB1347B9F6E50E1A7BA981BD233FB45A (void);
// 0x0000041E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnLoadSnapshot(System.Int32)
extern void VirtualCameraDevice_OnLoadSnapshot_m02FAD8980D7B1F68A5D7AFC5FADCC181E4174C6E (void);
// 0x0000041F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::OnDeleteSnapshot(System.Int32)
extern void VirtualCameraDevice_OnDeleteSnapshot_mB4CF7FA25FF969EA1E237CFED6B560E9405F8613 (void);
// 0x00000420 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::RecordCurrentValues()
extern void VirtualCameraDevice_RecordCurrentValues_m9547314D2B6DE2D3236DCE8F5CC36A23ECD819A2 (void);
// 0x00000421 System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateAutoFocusDistance(System.Single&,System.Boolean)
extern void VirtualCameraDevice_UpdateAutoFocusDistance_m43BE488572AA94D851A21E2A3DC42CB3F63CF67F (void);
// 0x00000422 System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::IsDepthOfFieldEnabled()
extern void VirtualCameraDevice_IsDepthOfFieldEnabled_m166284A4EF3DB8ED367E585047900C28E1DD93B2 (void);
// 0x00000423 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::StartVideoServer()
extern void VirtualCameraDevice_StartVideoServer_mB23B0979BB924D0D51E7F681CEB2F70D09CC9B21 (void);
// 0x00000424 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::StopVideoServer()
extern void VirtualCameraDevice_StopVideoServer_mBC53F1806FE77C3A47D987E53A983973C03E2977 (void);
// 0x00000425 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::InitializeVideoResolution()
extern void VirtualCameraDevice_InitializeVideoResolution_m9A9507ECEF51F904E018DE3C3B1D28224F391009 (void);
// 0x00000426 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendChannelFlags()
extern void VirtualCameraDevice_SendChannelFlags_m72493E8A5FDD24F308CD3C9765C444F8EE5DF00D (void);
// 0x00000427 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendLens()
extern void VirtualCameraDevice_SendLens_mF8FBAC8772F5AC57252FF079F4E0D14A289DE878 (void);
// 0x00000428 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendLensKitIfNeeded()
extern void VirtualCameraDevice_SendLensKitIfNeeded_mDD7C25F660F44EE7487736F7880406A5EC1DEA78 (void);
// 0x00000429 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendSnapshotsIfNeeded()
extern void VirtualCameraDevice_SendSnapshotsIfNeeded_mB8E186220F280566FDA7E9AA901C52B8FC7A00D2 (void);
// 0x0000042A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendCameraBody()
extern void VirtualCameraDevice_SendCameraBody_m250BA7BEB744C30C58AD5EEE02B756D9264E2353 (void);
// 0x0000042B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendSettings()
extern void VirtualCameraDevice_SendSettings_m362E356799FBDE3791B5B5F90EE6E3388C323395 (void);
// 0x0000042C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::SendVideoStreamState()
extern void VirtualCameraDevice_SendVideoStreamState_m832B76CC27AEF2AEE49AE76D9A7DCA835084C3AC (void);
// 0x0000042D System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_IsSynchronized()
extern void VirtualCameraDevice_get_IsSynchronized_mE303AE9C31003C0065ED14887E7FA480312033B6 (void);
// 0x0000042E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_IsSynchronized(System.Boolean)
extern void VirtualCameraDevice_set_IsSynchronized_m73845E37B56F23B856909EA1FC59B332EDEFFA93 (void);
// 0x0000042F System.String Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Id()
extern void VirtualCameraDevice_get_Id_m80FA745417675658BD302EDB3BE2D3CBC618EC26 (void);
// 0x00000430 System.String Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Unity.LiveCapture.IRegistrable.get_FriendlyName()
extern void VirtualCameraDevice_Unity_LiveCapture_IRegistrable_get_FriendlyName_mB8E3E32F943C9C2734DB8B6923A9A2D89B0B6124 (void);
// 0x00000431 Unity.LiveCapture.ISynchronizer Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_Synchronizer()
extern void VirtualCameraDevice_get_Synchronizer_mBCF71C46EB33D038160AA51EFA949AF0FE21B2E5 (void);
// 0x00000432 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_Synchronizer(Unity.LiveCapture.ISynchronizer)
extern void VirtualCameraDevice_set_Synchronizer_m6EA56C23A7A2B0A23066A0FF5BBDD6E21C554782 (void);
// 0x00000433 Unity.LiveCapture.FrameRate Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_FrameRate()
extern void VirtualCameraDevice_get_FrameRate_m7D3A7EA16F659E129F6AD73E43CA0DEFE14E3ADC (void);
// 0x00000434 System.Int32 Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_BufferSize()
extern void VirtualCameraDevice_get_BufferSize_mCD6F80C0E37D2C7D66731279F0E7676F37CF842D (void);
// 0x00000435 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_BufferSize(System.Int32)
extern void VirtualCameraDevice_set_BufferSize_mBAF4765DF6AD05CF9CDD0D14DA0EFAA0E49E831F (void);
// 0x00000436 System.Nullable`1<System.Int32> Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_MaxBufferSize()
extern void VirtualCameraDevice_get_MaxBufferSize_m3002D8A825D3C185FBBE0244096528EA6987A287 (void);
// 0x00000437 System.Nullable`1<System.Int32> Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_MinBufferSize()
extern void VirtualCameraDevice_get_MinBufferSize_mBEC8161E23DB2E382336E83EE51306285318B8F2 (void);
// 0x00000438 Unity.LiveCapture.FrameTime Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::get_PresentationOffset()
extern void VirtualCameraDevice_get_PresentationOffset_m3E2DAA0E0ABC30CB58AD9BF602D616DD84D9A8F4 (void);
// 0x00000439 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::set_PresentationOffset(Unity.LiveCapture.FrameTime)
extern void VirtualCameraDevice_set_PresentationOffset_mF17C92DF13DBEA8655AD82E495611915FB9D8B52 (void);
// 0x0000043A System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::TryGetBufferRange(Unity.LiveCapture.FrameTime&,Unity.LiveCapture.FrameTime&)
extern void VirtualCameraDevice_TryGetBufferRange_mB859454FE0E80B37E31537A1230543F8A6060B95 (void);
// 0x0000043B Unity.LiveCapture.TimedSampleStatus Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::PresentAt(Unity.LiveCapture.Timecode,Unity.LiveCapture.FrameRate)
extern void VirtualCameraDevice_PresentAt_m7E0F4BFE68BD129CB9E0261DF95525777D39F85B (void);
// 0x0000043C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::Process()
extern void VirtualCameraDevice_Process_m0B1A15D13A82F99ABFC98018DEA0D1A7A040DC8E (void);
// 0x0000043D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::UpdateFocusRigIfNeeded()
extern void VirtualCameraDevice_UpdateFocusRigIfNeeded_mD06E13C7A4CE1D04910C2D027E8F3B389E54E33F (void);
// 0x0000043E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::.ctor()
extern void VirtualCameraDevice__ctor_m339FA2303B33AB8CC98E0E052EAFBC8355749CE4 (void);
// 0x0000043F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::.cctor()
extern void VirtualCameraDevice__cctor_m870E04667AFEBC79CF4D9660077183B0401FF387 (void);
// 0x00000440 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<SetupProcessor>b__67_0()
extern void VirtualCameraDevice_U3CSetupProcessorU3Eb__67_0_m35D791087EA6E52F457AA0DCBB5AA2700C71391F (void);
// 0x00000441 Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<SetupProcessor>b__67_1()
extern void VirtualCameraDevice_U3CSetupProcessorU3Eb__67_1_m45FA3645F003A49A292B7658B5E1F133678A1E6B (void);
// 0x00000442 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<SetupProcessor>b__67_2(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState)
extern void VirtualCameraDevice_U3CSetupProcessorU3Eb__67_2_mFBFBA98441746981E36509164A1766AB90331F78 (void);
// 0x00000443 System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<SetupProcessor>b__67_3()
extern void VirtualCameraDevice_U3CSetupProcessorU3Eb__67_3_m0162325BCFA8AFD385C33506F6230F39AEF8E217 (void);
// 0x00000444 Unity.LiveCapture.VirtualCamera.Settings Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<SetupProcessor>b__67_4()
extern void VirtualCameraDevice_U3CSetupProcessorU3Eb__67_4_mB74F6F58804EF74D0C74CAA65B989501922CF86C (void);
// 0x00000445 Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<SetupProcessor>b__67_5(Unity.LiveCapture.VirtualCamera.Lens)
extern void VirtualCameraDevice_U3CSetupProcessorU3Eb__67_5_m82B92E9FD273F9D156EBC532B82B5D5EDD4CB21A (void);
// 0x00000446 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraDevice::<OnRecordingChanged>b__107_0()
extern void VirtualCameraDevice_U3COnRecordingChangedU3Eb__107_0_m5690AEC447453DE97FD6DC701A2F7D604B4E5482 (void);
// 0x00000447 System.Nullable`1<System.Double> Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_InitialTime()
extern void VirtualCameraRecorder_get_InitialTime_m76444B16E7970E58DA20188B176AA3D07AF3348A (void);
// 0x00000448 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_InitialTime(System.Nullable`1<System.Double>)
extern void VirtualCameraRecorder_set_InitialTime_mA63B0CEB5A0ED6CBE352B970F45334959D9C3724 (void);
// 0x00000449 System.Double Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_Time()
extern void VirtualCameraRecorder_get_Time_m2689017891EB80B21249A71B7FCE3CF3986A2FD5 (void);
// 0x0000044A System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_Time(System.Double)
extern void VirtualCameraRecorder_set_Time_m314D06DBBDD68E20A48E18E290AC2FEE755D88B0 (void);
// 0x0000044B System.Double Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_ElapsedTime()
extern void VirtualCameraRecorder_get_ElapsedTime_m4BFED7D60F23010366BB67C401D66BE6E6BE4E39 (void);
// 0x0000044C System.Double Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_TimeOffset()
extern void VirtualCameraRecorder_get_TimeOffset_m70B04ADCE57A79D3DB84ABC491B1F25E9FFD275B (void);
// 0x0000044D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_TimeOffset(System.Double)
extern void VirtualCameraRecorder_set_TimeOffset_m890F118938156AF67953DAF6BEF3292D1E081EB4 (void);
// 0x0000044E System.Double Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_RecordingTime()
extern void VirtualCameraRecorder_get_RecordingTime_mAAF3C5127AB280ACE6DD5AB04E1371BA68994A54 (void);
// 0x0000044F System.Action Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_OnReset()
extern void VirtualCameraRecorder_get_OnReset_mF545B3728789921531C689CC9F36487D032F736F (void);
// 0x00000450 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_OnReset(System.Action)
extern void VirtualCameraRecorder_set_OnReset_m4FEA12899BB3FF4D157BF3050092F88B86258F99 (void);
// 0x00000451 System.Single Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_PositionError()
extern void VirtualCameraRecorder_get_PositionError_m0C010F45DE6D8D957E3FCC3D154A35D0B8E0D2FB (void);
// 0x00000452 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_PositionError(System.Single)
extern void VirtualCameraRecorder_set_PositionError_mED26ABC5EE84B6831B4166A5E69873E1831A9050 (void);
// 0x00000453 System.Single Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_RotationError()
extern void VirtualCameraRecorder_get_RotationError_m5B6728A451B9F63EAEC13E6A41E9123BB1AC1D15 (void);
// 0x00000454 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_RotationError(System.Single)
extern void VirtualCameraRecorder_set_RotationError_m6BBBFB58A228899EC65759C8AF4A691BBFB2C2FA (void);
// 0x00000455 System.Single Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_LensError()
extern void VirtualCameraRecorder_get_LensError_mE95575281AB062F711803CBF8E1C83E4C4567EF1 (void);
// 0x00000456 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_LensError(System.Single)
extern void VirtualCameraRecorder_set_LensError_mF8A0C3C95C3B3008EA2502966B0D7D28366CFEDC (void);
// 0x00000457 Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::get_Channels()
extern void VirtualCameraRecorder_get_Channels_m1C9EB8CECF1236235EE00CBC7D02510981CA0CF0 (void);
// 0x00000458 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::set_Channels(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraRecorder_set_Channels_mABADA918699AA918AD70581C7D86B3E32E0C3C6E (void);
// 0x00000459 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::Validate()
extern void VirtualCameraRecorder_Validate_m54B1AFCD6D033AD77126DD1D3E7382225F70CE8D (void);
// 0x0000045A System.Boolean Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::IsEmpty()
extern void VirtualCameraRecorder_IsEmpty_m7A13271CA1A6CC40A40E5742C7579BB42FD82DFA (void);
// 0x0000045B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::Update(System.Double)
extern void VirtualCameraRecorder_Update_m1593B26A254F39C10E0217789082BA68F4E47415 (void);
// 0x0000045C System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::Prepare(System.Double,Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags,Unity.LiveCapture.FrameRate)
extern void VirtualCameraRecorder_Prepare_m4F66DC66E13ADC65BB6688AADC82D02B54B874B6 (void);
// 0x0000045D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::Reset()
extern void VirtualCameraRecorder_Reset_m8FD584A035D714E60B4F145BBDEFA4EBB232A859 (void);
// 0x0000045E System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordPosition(UnityEngine.Vector3)
extern void VirtualCameraRecorder_RecordPosition_mB1360C99BA7BAFB9960053C0749FD3FF02CE5DAC (void);
// 0x0000045F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordRotation(UnityEngine.Quaternion)
extern void VirtualCameraRecorder_RecordRotation_m04A6562E23446CF56533B56C3060DD44022CC362 (void);
// 0x00000460 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordFocalLength(System.Single)
extern void VirtualCameraRecorder_RecordFocalLength_m5187A14615A0672075CF23DFECF6FE7A1DBBEC15 (void);
// 0x00000461 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordFocusDistance(System.Single)
extern void VirtualCameraRecorder_RecordFocusDistance_m9CDAE497B53FA99E0C288306C57307447355629D (void);
// 0x00000462 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordAperture(System.Single)
extern void VirtualCameraRecorder_RecordAperture_mC9DFE10FF9E6D8DF4EE4D973707CDCFAE95B6AB9 (void);
// 0x00000463 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordEnableDepthOfField(System.Boolean)
extern void VirtualCameraRecorder_RecordEnableDepthOfField_mC7B97C6EC9102A017B2D951FF11F20AC283A0127 (void);
// 0x00000464 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordCropAspect(System.Single)
extern void VirtualCameraRecorder_RecordCropAspect_m49000604D52F267ABC3267A92AF04928EBA70D0E (void);
// 0x00000465 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordLocalPositionEnabled(System.Boolean)
extern void VirtualCameraRecorder_RecordLocalPositionEnabled_m015C02BBA038E65524AE52680335C24B63B2A0AC (void);
// 0x00000466 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordLocalEulerAnglesEnabled(System.Boolean)
extern void VirtualCameraRecorder_RecordLocalEulerAnglesEnabled_m8DA490563720CFDCB89DEF4FDC0BD95055363950 (void);
// 0x00000467 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::RecordLensIntrinsics(Unity.LiveCapture.VirtualCamera.LensIntrinsics)
extern void VirtualCameraRecorder_RecordLensIntrinsics_m6C15EE9EC3259D282D6D5A2F8A70680628956F7D (void);
// 0x00000468 UnityEngine.AnimationClip Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::Bake()
extern void VirtualCameraRecorder_Bake_m4CD61FC4F803FEF071A3DA2BA61904F9A7C9A733 (void);
// 0x00000469 Unity.LiveCapture.ICurve`1<T> Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::GetCurve(System.Int32)
// 0x0000046A Unity.LiveCapture.IReduceableCurve Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::GetReduceable(System.Int32)
extern void VirtualCameraRecorder_GetReduceable_m904397A1EADB45E30F842E040DE06712DAB4D286 (void);
// 0x0000046B System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraRecorder::.ctor()
extern void VirtualCameraRecorder__ctor_mEC363E1EA20C4C50855967A943671B3D5B72891A (void);
// 0x0000046C Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::get_Channels()
extern void VirtualCameraTrackMetadata_get_Channels_mDC27A44C4ECCDF57468E0ABE5CE6832D68BADEB0 (void);
// 0x0000046D System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::set_Channels(Unity.LiveCapture.VirtualCamera.VirtualCameraChannelFlags)
extern void VirtualCameraTrackMetadata_set_Channels_m5DF8B8104E9356D78AD63BA5F10FEE219AC05AE7 (void);
// 0x0000046E Unity.LiveCapture.VirtualCamera.Lens Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::get_Lens()
extern void VirtualCameraTrackMetadata_get_Lens_m4A471F02C1BA3D01E5B051AA0FA22904A7A0B27C (void);
// 0x0000046F System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::set_Lens(Unity.LiveCapture.VirtualCamera.Lens)
extern void VirtualCameraTrackMetadata_set_Lens_mAF1B78952DDD0CD1A1EC19DA0458050F2CF2AF24 (void);
// 0x00000470 Unity.LiveCapture.VirtualCamera.CameraBody Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::get_CameraBody()
extern void VirtualCameraTrackMetadata_get_CameraBody_mD20B760931C14C89ACA775B89B06D3CA01ED463B (void);
// 0x00000471 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::set_CameraBody(Unity.LiveCapture.VirtualCamera.CameraBody)
extern void VirtualCameraTrackMetadata_set_CameraBody_m85210EA0D6626B7EA20F3BCA302C5487912A1555 (void);
// 0x00000472 Unity.LiveCapture.VirtualCamera.LensAsset Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::get_LensAsset()
extern void VirtualCameraTrackMetadata_get_LensAsset_m0A909833DF0464D9A73CB94E8B833C14AD254012 (void);
// 0x00000473 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::set_LensAsset(Unity.LiveCapture.VirtualCamera.LensAsset)
extern void VirtualCameraTrackMetadata_set_LensAsset_m3EA638D9E89F2E9A2A0DA621FFFA112476549E85 (void);
// 0x00000474 System.Single Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::get_CropAspect()
extern void VirtualCameraTrackMetadata_get_CropAspect_mC42609F83FDF5BF0EC4EAFF650B6558D28EF30DB (void);
// 0x00000475 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::set_CropAspect(System.Single)
extern void VirtualCameraTrackMetadata_set_CropAspect_m6C8532F4CF33A0D3B2E0DC8F356C40C95F0A48F6 (void);
// 0x00000476 System.Void Unity.LiveCapture.VirtualCamera.VirtualCameraTrackMetadata::.ctor()
extern void VirtualCameraTrackMetadata__ctor_mC0FE4A066FAAA8119A872733422BDA2ACAFC9FE6 (void);
// 0x00000477 UnityEngine.Pose Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraDamping::Calculate(UnityEngine.Pose,UnityEngine.Pose,Unity.LiveCapture.VirtualCamera.Damping,System.Single)
extern void VirtualCameraDamping_Calculate_m3C40D8D2B81A42BA97C9758541C7168182A7820C (void);
// 0x00000478 UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraDamping::Damp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern void VirtualCameraDamping_Damp_m91ECF7AE3024A7B9415D98992F2E459820A0F591 (void);
// 0x00000479 System.Single Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraDamping::Damp(System.Single,System.Single,System.Single)
extern void VirtualCameraDamping_Damp_m2A966F08B3E69C18F4EB202045E518733F05B54C (void);
// 0x0000047A Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings::get_Identity()
extern void VirtualCameraRigSettings_get_Identity_m5E2540EBD5395AEECC61A9A2A22153137D2CD360 (void);
// 0x0000047B Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState::get_Identity()
extern void VirtualCameraRigState_get_Identity_m3E747B7DECFFB95EAD8970D62C120F8C987CFB76 (void);
// 0x0000047C System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Update(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,UnityEngine.Pose,Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings)
extern void VirtualCameraRig_Update_mF795DEBB219C9A1AC2E69F2B9EA545FFF54AC9EC (void);
// 0x0000047D System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Rebase(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,UnityEngine.Pose)
extern void VirtualCameraRig_Rebase_m768F52ABE40F7BC48F5310512278A40C265CAD2E (void);
// 0x0000047E System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Refresh(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings)
extern void VirtualCameraRig_Refresh_m4F2D4DE4ECB53288A89F525C8DBA1C76A6550363 (void);
// 0x0000047F System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::WorldToLocal(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,UnityEngine.Pose)
extern void VirtualCameraRig_WorldToLocal_m6A6E6C2E79235461E1E1C30BF0196C7B8B07EB85 (void);
// 0x00000480 System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Reset(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&)
extern void VirtualCameraRig_Reset_m5F94CCA029FC32DB1EFB5B91FC3304E19560D024 (void);
// 0x00000481 System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Translate(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.Space,UnityEngine.Space,Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings)
extern void VirtualCameraRig_Translate_m3543EE0FD850762D5307FDDECA31DF9FA01D6B8B (void);
// 0x00000482 System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Rotate(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings)
extern void VirtualCameraRig_Rotate_mF2E14060BBE7D00E351C3FE95AB6B93AA12661F8 (void);
// 0x00000483 System.Void Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::ComputePose(Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigState&,Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRigSettings)
extern void VirtualCameraRig_ComputePose_mCBAAD835691E518FF411A9989EF912452CCBAAA5 (void);
// 0x00000484 UnityEngine.Vector3 Unity.LiveCapture.VirtualCamera.Rigs.VirtualCameraRig::Mask(UnityEngine.Vector3,System.Boolean,System.Boolean,System.Boolean)
extern void VirtualCameraRig_Mask_m38EDF6F881CCEAD60502B7DBEEE24912443378C8 (void);
// 0x00000485 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::Initialize()
extern void BaseRaycasterImpl_Initialize_mA767FBF0A7173CFE19785C8EE4D88567F62669EB (void);
// 0x00000486 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::Dispose()
extern void BaseRaycasterImpl_Dispose_m1E179FB735AF786D094D350E1EA6CD3D82564172 (void);
// 0x00000487 UnityEngine.Shader Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::GetPickingShader()
extern void BaseRaycasterImpl_GetPickingShader_mC136F1901B02D2F88B049FA5418AB58991474865 (void);
// 0x00000488 UnityEngine.Material Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::GetPickingMaterial()
extern void BaseRaycasterImpl_GetPickingMaterial_m38520C0C34C739B16826960C0C6E69F104C027BA (void);
// 0x00000489 System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Single,System.Int32)
extern void BaseRaycasterImpl_Raycast_mF0C4EAE32DA7C766928F6B02B0AFA460D925EA35 (void);
// 0x0000048A System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.GameObject&,System.Single,System.Single,System.Int32)
extern void BaseRaycasterImpl_Raycast_mAC358FBC2CEE4399D4FDBA9DCE525588178D15E7 (void);
// 0x0000048B System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::Render()
// 0x0000048C System.Single Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::ReadDepthSample()
extern void BaseRaycasterImpl_ReadDepthSample_m50390A7B72375B275A75C1ABAB1CFFBB82CC2A4D (void);
// 0x0000048D UnityEngine.Color32 Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::ReadColorSample()
extern void BaseRaycasterImpl_ReadColorSample_mC6A7CA0409AE9DA3FA628EB3C4499F7EF32664DD (void);
// 0x0000048E UnityEngine.Vector4 Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::EncodeId(System.Int32)
extern void BaseRaycasterImpl_EncodeId_mA7F63A46C00EC93699B717ACC29F74FB38A09122 (void);
// 0x0000048F System.Int32 Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::DecodeId(UnityEngine.Color32)
extern void BaseRaycasterImpl_DecodeId_mE0D6ADCB43018936DC00123768BE52ADF09D0044 (void);
// 0x00000490 System.Single Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::LinearEyeDepth(System.Single,System.Single,System.Single)
extern void BaseRaycasterImpl_LinearEyeDepth_mDEB37E43613B1CE74AAB3D62A2060291C417E313 (void);
// 0x00000491 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl::.ctor()
extern void BaseRaycasterImpl__ctor_m76756F8D7826CD231A6C3AC68BE751BE16EC3556 (void);
// 0x00000492 System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl/PickingScope::IsActive(System.Object)
extern void PickingScope_IsActive_mBB780560528D2464EDC05A5BF921318DE71915BE (void);
// 0x00000493 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl/PickingScope::.ctor(System.Object)
extern void PickingScope__ctor_mEBCAB84D22F6C04A22780FC32C6990539C799220 (void);
// 0x00000494 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl/PickingScope::Dispose()
extern void PickingScope_Dispose_mACF5C3AAAB83F5E5FB2E2E807F0498F2CE711CD6 (void);
// 0x00000495 System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl/PickingScope::TryGetObject(System.Int32,UnityEngine.GameObject&)
extern void PickingScope_TryGetObject_mEA564C8484FEA66939A5749DB9785746E2DEF30B (void);
// 0x00000496 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl/PickingScope::UpdateObjectIds()
extern void PickingScope_UpdateObjectIds_m7B9212908D5496F9BB3B4BA0D8070F36FBBD2149 (void);
// 0x00000497 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.BaseRaycasterImpl/PickingScope::.cctor()
extern void PickingScope__cctor_mFFA25C75BA9F25B2BBE8DDFBB2D677199A59B13B (void);
// 0x00000498 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::.ctor()
extern void GraphicsRaycaster__ctor_m111632A5461AD317BB1CCB54B33A694F75EBB7C5 (void);
// 0x00000499 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::Dispose()
extern void GraphicsRaycaster_Dispose_mB85AD5BA45D6B3BAAB8F739BBCFF279B92B9BE60 (void);
// 0x0000049A System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.RaycastHit&,System.Int32)
extern void GraphicsRaycaster_Raycast_mDF48CEC5FFE4D8566EBC14681FEE03D97FAAD48F (void);
// 0x0000049B System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Single,System.Int32)
extern void GraphicsRaycaster_Raycast_m052689B6AAD1A16A130869FC68DAA0E5927ABBC0 (void);
// 0x0000049C System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.RaycastHit&,UnityEngine.GameObject&,System.Int32)
extern void GraphicsRaycaster_Raycast_mA7A63A69EE42BA1B88B1F808837D217DB86D8D2E (void);
// 0x0000049D System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.GameObject&,System.Single,System.Single,System.Int32)
extern void GraphicsRaycaster_Raycast_m963E99759C289D520A4F978252DB6439C98BAC14 (void);
// 0x0000049E System.Void Unity.LiveCapture.VirtualCamera.Raycasting.GraphicsRaycaster::Validate(System.Single,System.Single)
extern void GraphicsRaycaster_Validate_m95CD80683A768BE9F33AF48FAD7B0D4C4471EBE1 (void);
// 0x0000049F System.Void Unity.LiveCapture.VirtualCamera.Raycasting.IRaycasterImpl::Initialize()
// 0x000004A0 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.IRaycasterImpl::Dispose()
// 0x000004A1 System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.IRaycasterImpl::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Single,System.Int32)
// 0x000004A2 System.Boolean Unity.LiveCapture.VirtualCamera.Raycasting.IRaycasterImpl::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,UnityEngine.GameObject&,System.Single,System.Single,System.Int32)
// 0x000004A3 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.LegacyRaycasterImpl::Initialize()
extern void LegacyRaycasterImpl_Initialize_m68B0B9CAA6414909DAA565E7B4D82594F699801B (void);
// 0x000004A4 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.LegacyRaycasterImpl::Dispose()
extern void LegacyRaycasterImpl_Dispose_m9671E3BB17BB4663C411B3111FB5402C22E4DFFE (void);
// 0x000004A5 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.LegacyRaycasterImpl::Render()
extern void LegacyRaycasterImpl_Render_m3BAF0A682137BD44A45D4EE0626E533977647B45 (void);
// 0x000004A6 System.Void Unity.LiveCapture.VirtualCamera.Raycasting.LegacyRaycasterImpl::.ctor()
extern void LegacyRaycasterImpl__ctor_m87691EF240F72C3E55F2EBCC8236D5E4F4C10CC1 (void);
// 0x000004A7 Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.LensAssetDescriptor)
extern void LensAssetDescriptorV0_op_Explicit_mFDB400878DCB7EC52EE4F34587C1A85039591DF8 (void);
// 0x000004A8 Unity.LiveCapture.VirtualCamera.LensAssetDescriptor Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0)
extern void LensAssetDescriptorV0_op_Explicit_mEA83689723A3D2EECBF981D0BDDD7AD7057ED6EF (void);
// 0x000004A9 System.Void Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0::.ctor()
extern void LensAssetDescriptorV0__ctor_m30CD7B566CA8C4DC8600BE593678B415F3959194 (void);
// 0x000004AA Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.LensKitDescriptor)
extern void LensKitDescriptorV0_op_Explicit_m32C9F5846451A30CBA2F8338F80B1B8F6C2C6C3B (void);
// 0x000004AB Unity.LiveCapture.VirtualCamera.LensKitDescriptor Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0)
extern void LensKitDescriptorV0_op_Explicit_m93804BD98418BE83CFB8D1A95BCCFE4C26262AA8 (void);
// 0x000004AC System.Void Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0::.ctor()
extern void LensKitDescriptorV0__ctor_m6186E504DEAEACEBE4FDDC26E61486DDC526CA36 (void);
// 0x000004AD System.Void Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0/<>c::.cctor()
extern void U3CU3Ec__cctor_m7432C504ACCAEC5BEA668F676A6ADFE022546BCE (void);
// 0x000004AE System.Void Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0/<>c::.ctor()
extern void U3CU3Ec__ctor_mCA8C6D4AC13E5316BBF14D0997420881A68CD546 (void);
// 0x000004AF Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0/<>c::<op_Explicit>b__2_0(Unity.LiveCapture.VirtualCamera.LensAssetDescriptor)
extern void U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m096B447D589D9AC8A02C51CA5946B00083099F19 (void);
// 0x000004B0 Unity.LiveCapture.VirtualCamera.LensAssetDescriptor Unity.LiveCapture.VirtualCamera.Networking.LensKitDescriptorV0/<>c::<op_Explicit>b__3_0(Unity.LiveCapture.VirtualCamera.Networking.LensAssetDescriptorV0)
extern void U3CU3Ec_U3Cop_ExplicitU3Eb__3_0_mC8B298FB61DD67F233659CB21C6C42CB9CF8116B (void);
// 0x000004B1 Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV0 Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.ApertureSample)
extern void ApertureSampleV0_op_Explicit_m81E02C422BAAF8EF6D6EA311B5EEDE3173E8456B (void);
// 0x000004B2 Unity.LiveCapture.VirtualCamera.ApertureSample Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV0)
extern void ApertureSampleV0_op_Explicit_m917B2E1B4D18BCBD4FADE049138D8BE2CF412F76 (void);
// 0x000004B3 Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV1 Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.ApertureSample)
extern void ApertureSampleV1_op_Explicit_mB142C00D24D5797270BF9B492AED23F540C5FF91 (void);
// 0x000004B4 Unity.LiveCapture.VirtualCamera.ApertureSample Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.ApertureSampleV1)
extern void ApertureSampleV1_op_Explicit_mEA1CF1F621D6B95792A6D876AC17DB3509F3ABB5 (void);
// 0x000004B5 Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV0 Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.FocalLengthSample)
extern void FocalLengthSampleV0_op_Explicit_mA36729993193323C13B8AE44946A806485631097 (void);
// 0x000004B6 Unity.LiveCapture.VirtualCamera.FocalLengthSample Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV0)
extern void FocalLengthSampleV0_op_Explicit_m1C543FBF8F34D4F1FAC27A052210D9494358F38A (void);
// 0x000004B7 Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV1 Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.FocalLengthSample)
extern void FocalLengthSampleV1_op_Explicit_m78A9441C17CAF68030B19FF51CFD3613F0550818 (void);
// 0x000004B8 Unity.LiveCapture.VirtualCamera.FocalLengthSample Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.FocalLengthSampleV1)
extern void FocalLengthSampleV1_op_Explicit_mFD782A20968CBB0AFA63A953535A8BE2FCD146A9 (void);
// 0x000004B9 Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV0 Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.FocusDistanceSample)
extern void FocusDistanceSampleV0_op_Explicit_mDFFFDDD9834EDE097AE6575EE3ADE0248809DDC0 (void);
// 0x000004BA Unity.LiveCapture.VirtualCamera.FocusDistanceSample Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV0)
extern void FocusDistanceSampleV0_op_Explicit_mA2A43C79C2CDA3F137EBF299C8ED346B58C6A881 (void);
// 0x000004BB Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV1 Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.FocusDistanceSample)
extern void FocusDistanceSampleV1_op_Explicit_m026A30D01801C4D5D09FE42B6BE4ED9EED638653 (void);
// 0x000004BC Unity.LiveCapture.VirtualCamera.FocusDistanceSample Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.FocusDistanceSampleV1)
extern void FocusDistanceSampleV1_op_Explicit_m443554D544AD6DDBF6FD8509B7A15016D166A439 (void);
// 0x000004BD Unity.LiveCapture.VirtualCamera.Networking.GamepadSampleV0 Unity.LiveCapture.VirtualCamera.Networking.GamepadSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.GamepadSample)
extern void GamepadSampleV0_op_Explicit_m24FEE9FA82C9C3DB7CBFAB45B887CAAF97316BB2 (void);
// 0x000004BE Unity.LiveCapture.VirtualCamera.GamepadSample Unity.LiveCapture.VirtualCamera.Networking.GamepadSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.GamepadSampleV0)
extern void GamepadSampleV0_op_Explicit_mDF048704531B41E8D1338A39B8A68DFE1C53EDE4 (void);
// 0x000004BF Unity.LiveCapture.VirtualCamera.Networking.InputSampleV0 Unity.LiveCapture.VirtualCamera.Networking.InputSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.InputSample)
extern void InputSampleV0_op_Explicit_m7D824315E8D45976E862C13D92128323832EA52E (void);
// 0x000004C0 Unity.LiveCapture.VirtualCamera.InputSample Unity.LiveCapture.VirtualCamera.Networking.InputSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.InputSampleV0)
extern void InputSampleV0_op_Explicit_mD9B3D63B59A3E8DC8DA6612B2184E143CEEB88CE (void);
// 0x000004C1 Unity.LiveCapture.VirtualCamera.Networking.JoysticksSampleV0 Unity.LiveCapture.VirtualCamera.Networking.JoysticksSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.JoysticksSample)
extern void JoysticksSampleV0_op_Explicit_mC31CFD290FAF9804CB39E34DFEE22F30CE50C4F3 (void);
// 0x000004C2 Unity.LiveCapture.VirtualCamera.JoysticksSample Unity.LiveCapture.VirtualCamera.Networking.JoysticksSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.JoysticksSampleV0)
extern void JoysticksSampleV0_op_Explicit_m4880073A4F424D78E5F22D496F7B96A9F38F746F (void);
// 0x000004C3 Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV0 Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.PoseSample)
extern void PoseSampleV0_op_Explicit_mF4923B318359F925FF9A23D5593A465284CEABE1 (void);
// 0x000004C4 Unity.LiveCapture.VirtualCamera.PoseSample Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV0)
extern void PoseSampleV0_op_Explicit_mD34060DFB8123E7AE9106C018251122B437BFB32 (void);
// 0x000004C5 Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV1 Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.PoseSample)
extern void PoseSampleV1_op_Explicit_m61EDD46CD427FDD54E43056012BF07BC9A7BA5B9 (void);
// 0x000004C6 Unity.LiveCapture.VirtualCamera.PoseSample Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV1::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.PoseSampleV1)
extern void PoseSampleV1_op_Explicit_mC721B2CA5077EF2C426F5CB9ACD8C1B31D753927 (void);
// 0x000004C7 Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.SnapshotDescriptor)
extern void SnapshotDescriptorV0_op_Explicit_m09F4D2D5B7E9A2428A76C39D31F6E7B94D964915 (void);
// 0x000004C8 Unity.LiveCapture.VirtualCamera.SnapshotDescriptor Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0)
extern void SnapshotDescriptorV0_op_Explicit_mFDBFBAB8598FECA11EEEA18E3AFD85B11DE4A24F (void);
// 0x000004C9 System.Void Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0::.ctor()
extern void SnapshotDescriptorV0__ctor_m3FA544279213A088132228746238808AC623FDBB (void);
// 0x000004CA Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor)
extern void SnapshotListDescriptorV0_op_Explicit_m168DBCAC86177B0603C6F76AD11FC97B5AACF481 (void);
// 0x000004CB Unity.LiveCapture.VirtualCamera.SnapshotListDescriptor Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0)
extern void SnapshotListDescriptorV0_op_Explicit_m3FFF441DF6C7A855EBC92406EF41E33D029D945D (void);
// 0x000004CC System.Void Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0::.ctor()
extern void SnapshotListDescriptorV0__ctor_mD08434DA481C7328D2D54FCA810988188DA083DB (void);
// 0x000004CD System.Void Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0/<>c::.cctor()
extern void U3CU3Ec__cctor_mEBA1D6932DD46E23E611727E3AC34230D1496E23 (void);
// 0x000004CE System.Void Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0/<>c::.ctor()
extern void U3CU3Ec__ctor_m0F4E84133BCD78D928C554895561DC7422839CF7 (void);
// 0x000004CF Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0/<>c::<op_Explicit>b__1_0(Unity.LiveCapture.VirtualCamera.SnapshotDescriptor)
extern void U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_mF8867F098F1F6827FE71F86382E1926897087594 (void);
// 0x000004D0 Unity.LiveCapture.VirtualCamera.SnapshotDescriptor Unity.LiveCapture.VirtualCamera.Networking.SnapshotListDescriptorV0/<>c::<op_Explicit>b__2_0(Unity.LiveCapture.VirtualCamera.Networking.SnapshotDescriptorV0)
extern void U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_mE905168B1DF0A91DACF4BB71E046EAB8D88D7E59 (void);
// 0x000004D1 Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor)
extern void VcamTrackMetadataDescriptorV0_op_Explicit_m029DEAAD164D045997FECDC094389BB6109A7847 (void);
// 0x000004D2 Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0)
extern void VcamTrackMetadataDescriptorV0_op_Explicit_m1DECD1F959809A35188B987A98922E68449B8A60 (void);
// 0x000004D3 System.Void Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0::.ctor()
extern void VcamTrackMetadataDescriptorV0__ctor_mC1C86C1A5495EE7F4F2D99DEE149349A24DFEA7B (void);
// 0x000004D4 Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor)
extern void VcamTrackMetadataListDescriptorV0_op_Explicit_m08437A2A9903416B43FB6CC1498921A8A96988A8 (void);
// 0x000004D5 Unity.LiveCapture.VirtualCamera.VcamTrackMetadataListDescriptor Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0::op_Explicit(Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0)
extern void VcamTrackMetadataListDescriptorV0_op_Explicit_m4845A808722FFDF97F814BCF9F0C77AFE00A0D44 (void);
// 0x000004D6 System.Void Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0::.ctor()
extern void VcamTrackMetadataListDescriptorV0__ctor_mAC1023181CA0DE19366D11E955474DC85B198528 (void);
// 0x000004D7 System.Void Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0/<>c::.cctor()
extern void U3CU3Ec__cctor_m6BD455B473288FC6D9D9ED3B7E0A56ECB49E80BF (void);
// 0x000004D8 System.Void Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0/<>c::.ctor()
extern void U3CU3Ec__ctor_m767B956925C838B7F84903A6F8970E7D626B5796 (void);
// 0x000004D9 Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0 Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0/<>c::<op_Explicit>b__1_0(Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor)
extern void U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_m80FFE1EE9D05F287484713CA83C37A28C27FDDD0 (void);
// 0x000004DA Unity.LiveCapture.VirtualCamera.VcamTrackMetadataDescriptor Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataListDescriptorV0/<>c::<op_Explicit>b__2_0(Unity.LiveCapture.VirtualCamera.Networking.VcamTrackMetadataDescriptorV0)
extern void U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m2A9CEF6FCEAD72AFFED0F22733D1F2C5AA919557 (void);
static Il2CppMethodPointer s_methodPointers[1242] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VirtualCameraClient_add_ChannelFlagsReceived_m3EE5375DDFB0D1436F0AE2C608091881534D4EEA,
	VirtualCameraClient_remove_ChannelFlagsReceived_mEE4EA12D2BC97574D47979B804E76C43E2F23FDD,
	VirtualCameraClient_add_FocalLengthSampleReceived_m7F62E053255CB5247AB62A1849ED2F9A63774D8C,
	VirtualCameraClient_remove_FocalLengthSampleReceived_m58A691624046648EF7FB44A7ED4F9B779EB029DD,
	VirtualCameraClient_add_FocusDistanceSampleReceived_mFEC7531014E2F209959411C4E2FA1743E4A3FC0F,
	VirtualCameraClient_remove_FocusDistanceSampleReceived_m1DC8B2FFBC27E79359B94EFF0AC2492E243FCA61,
	VirtualCameraClient_add_ApertureSampleReceived_m99E5DC71F936F50BD3FB7EE912A9B3EC86243296,
	VirtualCameraClient_remove_ApertureSampleReceived_m858DE78BFD5B0D34AD74E13C5A75C9C7B286E0F0,
	VirtualCameraClient_add_InputSampleReceived_m06F7B4B5CA04E5C22B334F62D4DD6A2C54062082,
	VirtualCameraClient_remove_InputSampleReceived_m4EFDA0BB1EC3E78B667F550F9DF9BEEF9DAE3F63,
	VirtualCameraClient_add_DampingEnabledReceived_mD9EADAEDA8C6EA866BB5E6CFDB3BBB8597BE1F05,
	VirtualCameraClient_remove_DampingEnabledReceived_m1B4BB346F2F9587290485BD3ABC4D140EF335E11,
	VirtualCameraClient_add_BodyDampingReceived_m98E56C2C3914E2D47553D84E1C16DC7672E93D33,
	VirtualCameraClient_remove_BodyDampingReceived_mC659ADC0E56D0354A4FA870ADDD03E460E8711C9,
	VirtualCameraClient_add_AimDampingReceived_mC12EEDFE9176C635818ECF80F48DE4F5000C084D,
	VirtualCameraClient_remove_AimDampingReceived_mC1032C7487FF54D7EC3B1606BB6F4653E94DB58C,
	VirtualCameraClient_add_FocalLengthDampingReceived_mB7D939692DAC11FA79B4BB792F05FED23230F914,
	VirtualCameraClient_remove_FocalLengthDampingReceived_mAA4510C818437986CCEC5BD7E13CDC61C53FF92D,
	VirtualCameraClient_add_FocusDistanceDampingReceived_m2E1A9D0E614599C4E8B0033AB908872CE4262DC6,
	VirtualCameraClient_remove_FocusDistanceDampingReceived_m2E1B539335E65F949B9709BAA693D338FA4154FA,
	VirtualCameraClient_add_ApertureDampingReceived_mA8B0E541ABF7D2D57F85D0275F61BF580807423E,
	VirtualCameraClient_remove_ApertureDampingReceived_mFEC3626465DCC79128F5178AF9033626E097D383,
	VirtualCameraClient_add_PositionLockReceived_m0E3F0B9AD1EC80E6938B59CA38126DFDC1CE4428,
	VirtualCameraClient_remove_PositionLockReceived_mE14461FE6B68AD1EB020CA63C0274BE24FF0A7F6,
	VirtualCameraClient_add_RotationLockReceived_mA2FA850AA09B87771D2796FF18962ECE15D16681,
	VirtualCameraClient_remove_RotationLockReceived_mC7051B214167DF461741D22FEFA8953494D1F155,
	VirtualCameraClient_add_AutoHorizonReceived_m356966B524371552C8ED4EC8D948E4E9679B4C8D,
	VirtualCameraClient_remove_AutoHorizonReceived_m238AB7A7D081C7CE19D3AA1BF1FEC11277D998CF,
	VirtualCameraClient_add_ErgonomicTiltReceived_m9D354870C25EECCD4A071EDD13A38C82D2F7E4BA,
	VirtualCameraClient_remove_ErgonomicTiltReceived_mFB55B389E113D6E31BE4FF3DA49B5723B24B7138,
	VirtualCameraClient_add_RebasingReceived_m53844169CA07F6320F93551B71AC79A624895276,
	VirtualCameraClient_remove_RebasingReceived_m44A2285D781A4D6A0FD4F83DEF8941373BDE9521,
	VirtualCameraClient_add_MotionScaleReceived_mA49076529EA2A5B27038E5A4DA4E256FF7F07BA0,
	VirtualCameraClient_remove_MotionScaleReceived_m7059F3442D381B98B0BCCEA3E2B4DFC8E190BB82,
	VirtualCameraClient_add_JoystickSensitivityReceived_mA6DA7D2E35628FD494BDCC1E81188D1A369BFF9E,
	VirtualCameraClient_remove_JoystickSensitivityReceived_mAEF7635BCDF555E9680F5359707FC5F8AEBD7DEA,
	VirtualCameraClient_add_PedestalSpaceReceived_mA43B1823A0B8AA7C440BFA106311B53ABBD365DA,
	VirtualCameraClient_remove_PedestalSpaceReceived_mA0FB6FA7AEB228FC295747D03423F1770CAEDC38,
	VirtualCameraClient_add_MotionSpaceReceived_m4453116C56465A3C62E1E36FACA99BE62C05D0CB,
	VirtualCameraClient_remove_MotionSpaceReceived_m1B754286DF804F298EACCABED74A406AB6C1DD4B,
	VirtualCameraClient_add_FocusModeReceived_mCB96D2CABA091282741C3BAF32E7CD1EB2E3E2F2,
	VirtualCameraClient_remove_FocusModeReceived_m64BB08FAE0289CD42E8EEE2AE9348AF77FCFC8E4,
	VirtualCameraClient_add_FocusReticlePositionReceived_m5EA3BB5FFA24A07C194480296D6826CB1676112F,
	VirtualCameraClient_remove_FocusReticlePositionReceived_m2B06730D652590F2E9FED21C319C28570ADD03B0,
	VirtualCameraClient_add_FocusDistanceOffsetReceived_mB9F0A4AC5AF43667FF76A785E92915F9AF77BAFE,
	VirtualCameraClient_remove_FocusDistanceOffsetReceived_m81484812E36511C725167D2299369C73CB0C9C4C,
	VirtualCameraClient_add_CropAspectReceived_m4F000FA79E0BAD1015D2DC86611FF126B8EEA293,
	VirtualCameraClient_remove_CropAspectReceived_mB4DDCB31BB4B068F1761D88FC18DD4B277C4BCC7,
	VirtualCameraClient_add_GateFitReceived_mAB070CEBB1A0E2A8B9D2B526F1CB3692B1ECE600,
	VirtualCameraClient_remove_GateFitReceived_m76E0653BEE30A757230FE9F76BF919F9F0C805DE,
	VirtualCameraClient_add_ShowGateMaskReceived_mA8F7F2E4D57B879AFFB1D1CA34CAFB31DC55DEC2,
	VirtualCameraClient_remove_ShowGateMaskReceived_mD3D76768B6FBB27D673FFC48DE7C6C104B65624A,
	VirtualCameraClient_add_ShowFrameLinesReceived_m797EE20C000E9F0C8D85F9C698764061B621B149,
	VirtualCameraClient_remove_ShowFrameLinesReceived_m4BF2140C18C5F425862A48C0E58CE540CB782484,
	VirtualCameraClient_add_ShowCenterMarkerReceived_mD6C4134E1C82FEA07831DFF0070D8CA1B43A44D8,
	VirtualCameraClient_remove_ShowCenterMarkerReceived_m99AC6E5142F421FAF03323F28EE3B7ECA71D68B7,
	VirtualCameraClient_add_ShowFocusPlaneReceived_mA7E0B87B4010F7CD8E003BD7FC5CE1943328A66D,
	VirtualCameraClient_remove_ShowFocusPlaneReceived_m9E7E3E11F6CE0415F5638A38F4B8DFE2EA2C1DF3,
	VirtualCameraClient_add_SetPoseToOrigin_m8959B9A1990489CAFB613674DA9B65FFC0D6E091,
	VirtualCameraClient_remove_SetPoseToOrigin_mBA12076DF93C7AF42D69F8D644E97298B64B7378,
	VirtualCameraClient_add_SetLensAsset_m193232699E3D8CB89176C74725F0E9CE7A3566D7,
	VirtualCameraClient_remove_SetLensAsset_mDED9496FCF52D30165E9D2A0421483038FB6C1C0,
	VirtualCameraClient_add_TakeSnapshot_m2F541E649F1460A2EEA957FDAC1A0105B0E684CB,
	VirtualCameraClient_remove_TakeSnapshot_m80A4EE5DD92F5AFF0CD67990EF9D0A01B83119FF,
	VirtualCameraClient_add_GoToSnapshot_m88AA6B4810EC55996D75627E5347D508901C91A2,
	VirtualCameraClient_remove_GoToSnapshot_m35802D31E47E240E46DFCB08FA1A94613B72F21C,
	VirtualCameraClient_add_LoadSnapshot_m894296BCF85708553F377B20A5941A3E54A66264,
	VirtualCameraClient_remove_LoadSnapshot_mA513B6D0B4FFC2AC97C2B377EA1148197A688D55,
	VirtualCameraClient_add_DeleteSnapshot_mC85D7A48A8A0DCE00F51B17907B94F7A868521F7,
	VirtualCameraClient_remove_DeleteSnapshot_m3FECAF5D85D7D7899FEE006F5DA824336635F2A5,
	VirtualCameraClient__ctor_m533C9D1C7FC28FFC4F94A5F1BCEC1050F16B5EDF,
	VirtualCameraClient_SendChannelFlags_m20412A5E1E68DA824FFBD9240F78BD80C2775190,
	VirtualCameraClient_SendLens_mC960FB238A10F3A3B62E38F3BDEB37CAE2EDA0F1,
	VirtualCameraClient_SendCameraBody_m4341C3FDCE6D01BC3F396B351576C842FE5645D1,
	VirtualCameraClient_SendSettings_m7EFC3B3F5C29813E011EB04E1F7E113941ADE38C,
	VirtualCameraClient_SendVideoStreamState_mCBAAD36EBDE4F4B544AFDC12781B391EDF70ACD7,
	VirtualCameraClient_SendLensKitDescriptor_mEE755F2BA358359607207FB9CC37979B3FFDA597,
	VirtualCameraClient_SendSnapshotListDescriptor_mE06FC1CE676DCAE1B3B8581180A6978777D7026B,
	VirtualCameraClient_SendVirtualCameraTrackMetadataListDescriptor_m9CCDA79A97A4C99DC15CA7E5B74959F70D9DAC8D,
	VirtualCameraClient_ToString_mE7E62BB2E6927E2020D19FBF04FE321C3B115038,
	VirtualCameraClient_U3C_ctorU3Eb__143_0_m1728EF917F9D126D42B70D4691AF7BAE325E4E7E,
	VirtualCameraClient_U3C_ctorU3Eb__143_1_mA04D184119FF7A9AE512378AB1276D8F2BF5C602,
	VirtualCameraClient_U3C_ctorU3Eb__143_2_mDBE23FAEEAEFBFEEB8F3CDEE491518E26A50A6CD,
	VirtualCameraClient_U3C_ctorU3Eb__143_3_m29256A8CC5D2BD6405B8CD6EC749C2EC1D1A2186,
	VirtualCameraClient_U3C_ctorU3Eb__143_4_m36C9E0ADA6F9544D59DC0D4E6F822F3755BBA188,
	VirtualCameraClient_U3C_ctorU3Eb__143_5_mB85D99CA13FF209C6938E2BCB86A34B94D0DB25A,
	VirtualCameraClient_U3C_ctorU3Eb__143_6_mFAF58CCE6491EB22098557C586921D750CE4E90D,
	VirtualCameraClient_U3C_ctorU3Eb__143_7_mDB568D036678C333C9DE5DE74BE7291CBE1A7376,
	VirtualCameraClient_U3C_ctorU3Eb__143_8_m574CE3EEB4D029366A752C3E95FDC96FEDC0FB31,
	VirtualCameraClient_U3C_ctorU3Eb__143_9_m4B1A0C807D95FAAB284278CA89E0B6A44FBE719D,
	VirtualCameraClient_U3C_ctorU3Eb__143_10_m8A264BDFA81D8A771FD01A44BA0F70980C72D3A3,
	VirtualCameraClient_U3C_ctorU3Eb__143_11_m52DF6C0C0E0245904DA10806A7438A54C447CB81,
	VirtualCameraClient_U3C_ctorU3Eb__143_12_m923F153F590879A5092CC130DC9F0BC8A28C2E5A,
	VirtualCameraClient_U3C_ctorU3Eb__143_13_mA50A1FC0B59EB4F6B44DB66F18684361E954D944,
	VirtualCameraClient_U3C_ctorU3Eb__143_14_m670D94E617FC6A3F3AFE471148FB21432062BA79,
	VirtualCameraClient_U3C_ctorU3Eb__143_15_m23166B7D062B6B53E76E7674D17CE4374A6284ED,
	VirtualCameraClient_U3C_ctorU3Eb__143_16_m7F47505FC0FCE5A6422C52AE7AEAF7B20221065C,
	VirtualCameraClient_U3C_ctorU3Eb__143_17_mC984846AE501510A6844E8CAA4E40E41C185353A,
	VirtualCameraClient_U3C_ctorU3Eb__143_18_m79D9069CA80ED8CAA61DAF9927A3FF227863E83E,
	VirtualCameraClient_U3C_ctorU3Eb__143_19_mBE207E25413E68E6BF05CF9F038D96EFE175077D,
	VirtualCameraClient_U3C_ctorU3Eb__143_20_m9E5BC18EF9F391F7F4AC05D197C8DE5B37A48B2A,
	VirtualCameraClient_U3C_ctorU3Eb__143_21_m40B37D59B574FE81BAA2AD906C05B13B7EADB2FE,
	VirtualCameraClient_U3C_ctorU3Eb__143_22_mD83F04D38E58F7EFDA5FD970227F4C2E70F44F35,
	VirtualCameraClient_U3C_ctorU3Eb__143_23_m997F1739ED257FE150B2604C793170CD387C8D28,
	VirtualCameraClient_U3C_ctorU3Eb__143_24_m7D9A67D40522CE362759218F97E0C9E752F9657E,
	VirtualCameraClient_U3C_ctorU3Eb__143_25_mDB096A4DE19ED31F6F21797799310420C61CE2ED,
	VirtualCameraClient_U3C_ctorU3Eb__143_26_m456B555D22E5C77CCFC672C6285FC7B74C15AFFD,
	VirtualCameraClient_U3C_ctorU3Eb__143_27_m270ED62B183374E1D93A918FCD84D64C558CFDDC,
	VirtualCameraClient_U3C_ctorU3Eb__143_28_mCFFB7B92D0317D3DFCB0177ED960F882F73F5BFA,
	VirtualCameraClient_U3C_ctorU3Eb__143_29_m4A1EB21B8D05B024FCFD94428A1B5517B47BBC48,
	VirtualCameraClient_U3C_ctorU3Eb__143_30_mC4C23B55247078F8CC64978B582A98C2DA5EE81A,
	VirtualCameraClient_U3C_ctorU3Eb__143_31_m31B0584E6E0A81C3794322E882DD2E718FDD5ECE,
	VirtualCameraClient_U3C_ctorU3Eb__143_32_mAC26005FCD5A6249AF9FE872FCB6C5274B114182,
	VirtualCameraClient_U3C_ctorU3Eb__143_33_m3B4059DFDEF3AD8B59D6BAAA41CB7502FAEA6FA1,
	VirtualCameraClient_U3C_ctorU3Eb__143_34_m17E75A16DB235534BD728B3BB7BBDD51F4338F55,
	VirtualCameraHost_add_ChannelFlagsReceived_m159FBD87ED7CF0A8EBC56761053E245F8DE6B9C7,
	VirtualCameraHost_remove_ChannelFlagsReceived_m83221DC9CC8793106E8CF49AC334B39C16C96450,
	VirtualCameraHost_add_FocalLengthReceived_mB393033CB600D614A707DB6760A16B700F4DDEE1,
	VirtualCameraHost_remove_FocalLengthReceived_m547DDF04E2094CF335E2B28A9B4E4EBABD7337D5,
	VirtualCameraHost_add_FocusDistanceReceived_m5C206EE3373266671D8907B29C0AAADA2D674ED9,
	VirtualCameraHost_remove_FocusDistanceReceived_m38A96743B61FE158A41CFCFBEB7F8FB9CF738467,
	VirtualCameraHost_add_ApertureReceived_mCCC43315159821D808A62D92BE6D33846D6560A1,
	VirtualCameraHost_remove_ApertureReceived_m663584F918BFB0C76F73823C819B0926C576BB72,
	VirtualCameraHost_add_SensorSizeReceived_m5BA8A25C1BB3F41D06933D2EFA58987B6726754C,
	VirtualCameraHost_remove_SensorSizeReceived_m42CB537B3224338CC74E4E13DD95F7968C16A29E,
	VirtualCameraHost_add_IsoReceived_mA459DDD500D1825AD4161A5B7CBCA4CAF71858FD,
	VirtualCameraHost_remove_IsoReceived_m59EC6D2B29CD83D0D7878E27811C39CEFC51F055,
	VirtualCameraHost_add_ShutterSpeedReceived_mB33252AC6467BC3244789CE20859F6D59A148459,
	VirtualCameraHost_remove_ShutterSpeedReceived_m2FDEC2DF89FA1A95B415C5B0ADC923528B1230B9,
	VirtualCameraHost_add_DampingEnabledReceived_m651912458972770CBD1C7FA58A7AB1B312AA9B85,
	VirtualCameraHost_remove_DampingEnabledReceived_m64D103D36F4FB46F5A1C9C618B9C19B6460E919E,
	VirtualCameraHost_add_BodyDampingReceived_m21F309E185CE06C58DD0D49FBC338346C5297E66,
	VirtualCameraHost_remove_BodyDampingReceived_m096E220D009782EDDDBC93E13F82E0D5B7A4B60D,
	VirtualCameraHost_add_AimDampingReceived_m17FBC379CCD6056C9EF317FD6F292F390978CD9A,
	VirtualCameraHost_remove_AimDampingReceived_m0708195242F6C3C54F0E2B6D2DA14E9C0960702A,
	VirtualCameraHost_add_FocalLengthDampingReceived_mE3849B295BA74D04120C82763A8CB41661410F08,
	VirtualCameraHost_remove_FocalLengthDampingReceived_m2CDCAE926252F678A82FB400DEA69EC17A0FF796,
	VirtualCameraHost_add_FocusDistanceDampingReceived_mCCFB2D53A264433461661DC29A749EB81E62942E,
	VirtualCameraHost_remove_FocusDistanceDampingReceived_m465039CAB693C066124148376B4E9E06F9B18642,
	VirtualCameraHost_add_ApertureDampingReceived_m504723A52B2C75DE924417E5535C12AD5A75169C,
	VirtualCameraHost_remove_ApertureDampingReceived_mCE05F0B46F1A33F7FF7C7E3C683F76BB64B736F3,
	VirtualCameraHost_add_PositionLockReceived_mA77D9D2D3E295781F7055D7784F5865FF64C0E4F,
	VirtualCameraHost_remove_PositionLockReceived_m109093E83FDB3EFBCF16FDB0F2D4C47453148956,
	VirtualCameraHost_add_RotationLockReceived_mB5C50EA627D0A4461C9A92D968AEFB9599A496E1,
	VirtualCameraHost_remove_RotationLockReceived_m8F3EAEE4BB07CA627F48E8BE70842F2B1BF0F38C,
	VirtualCameraHost_add_AutoHorizonReceived_mD6D3A456D9D0530FABDA74AE677C4BEF3FCD3ACE,
	VirtualCameraHost_remove_AutoHorizonReceived_m8509F1049DDE1321A1605C372208103723EFE71B,
	VirtualCameraHost_add_ErgonomicTiltReceived_m1013E6BC2B7348FA48D5D777BB1779FF8A66EDA4,
	VirtualCameraHost_remove_ErgonomicTiltReceived_m2C2BF2973ACE3B46E74C6139AB959AD1F5462171,
	VirtualCameraHost_add_RebasingReceived_m0570040BC0C0A979CF06DCC739BC1A1B5285A20B,
	VirtualCameraHost_remove_RebasingReceived_m32BC8160B840258BD737C66C63F4A46E66345A29,
	VirtualCameraHost_add_MotionScaleReceived_m1994B9D7F73AA9C2E34EA52B7EF3ABF437452941,
	VirtualCameraHost_remove_MotionScaleReceived_m6F4868876F6F3DC4D3AD862125C5C4311D9E2931,
	VirtualCameraHost_add_JoystickSensitivityReceived_mDEEE4CB4FB42DD5449C6D8D3D5346BA2EC23B213,
	VirtualCameraHost_remove_JoystickSensitivityReceived_mBD6CB1100803C659211CC55528B044A83806DFDA,
	VirtualCameraHost_add_PedestalSpaceReceived_m84E6839F4961979BDC1B0B18C39D2B694DCD88B0,
	VirtualCameraHost_remove_PedestalSpaceReceived_m84EA632941F876D27193829060C8EFE7D70A5A4B,
	VirtualCameraHost_add_MotionSpaceReceived_m2D7CCDC8A712FB807A5F14CFE245A1FDFA722C79,
	VirtualCameraHost_remove_MotionSpaceReceived_m98EEFBF99B6C441EA081A27022F63641349DBEC7,
	VirtualCameraHost_add_FocusModeReceived_mCBCA8C069728C463E0A4073C95B4240D37B746A6,
	VirtualCameraHost_remove_FocusModeReceived_m37BCBABC6108DA9E353539AC5FD30A44C34F102E,
	VirtualCameraHost_add_FocusReticlePositionReceived_mF6C3596D9A6A257F9F3C0FCD2F60D840C3B47864,
	VirtualCameraHost_remove_FocusReticlePositionReceived_mE5630CC819A44C70B854FCF610C1012D3739620A,
	VirtualCameraHost_add_FocusDistanceOffsetReceived_m44EE3C39FF0B0588AE1AAAC2820525295ED08E83,
	VirtualCameraHost_remove_FocusDistanceOffsetReceived_mC2ED06A37436C6EFDA086378345EDD6B940EC606,
	VirtualCameraHost_add_CropAspectReceived_m862967CCF90CE42E2D23EC5EF0E8BC0785DF7B72,
	VirtualCameraHost_remove_CropAspectReceived_mBCD9A7599FC2254846718B8B462F19D9C1541A7A,
	VirtualCameraHost_add_ShowGateMaskReceived_m66B10E39BD81B532C4E961E0E85159BC4C490B92,
	VirtualCameraHost_remove_ShowGateMaskReceived_m58C606557423547F0114D7C04B9D2F2B7671A2D5,
	VirtualCameraHost_add_ShowFrameLinesReceived_m017CA7D5C9D9146B014AE31D2F36BEBCE9E18261,
	VirtualCameraHost_remove_ShowFrameLinesReceived_m24F4706D1D3F04C030D09E2B04A101D28565EC4E,
	VirtualCameraHost_add_ShowCenterMarkerReceived_m8402F5BB9322D3CE40579643D903CAB28417D973,
	VirtualCameraHost_remove_ShowCenterMarkerReceived_m137070EA44BE28A5F2BABE6DBA89DCBBFD0A8267,
	VirtualCameraHost_add_ShowFocusPlaneReceived_mAAE002D7C20AC071662B45B70F28D5C19C689A23,
	VirtualCameraHost_remove_ShowFocusPlaneReceived_m73EAB645D56A095AC9F0EE47982AE6B29264AC48,
	VirtualCameraHost_add_VideoStreamIsRunningReceived_mA7C475B79A5E558A7AFC8077FDE87EB76F16BFE9,
	VirtualCameraHost_remove_VideoStreamIsRunningReceived_mC3A59BDF86BA790E42E3176987B04C9DBE397392,
	VirtualCameraHost_add_VideoStreamPortReceived_m2D528DB78FF032DD8864BC3125C5180B3A87A611,
	VirtualCameraHost_remove_VideoStreamPortReceived_m9CCB5F1A97CE292E17C2C366712409EF21717ECC,
	VirtualCameraHost_add_LensKitDescriptorReceived_m749820AEBACC58A80D43D066DDDB7C2AD35C601D,
	VirtualCameraHost_remove_LensKitDescriptorReceived_m40E8B2A2086675BA949A827B901A070A5A653CA9,
	VirtualCameraHost_add_SelectedLensAssetReceived_mDAAA96509EBA19CA06DCA44EADFD1E982ACAD683,
	VirtualCameraHost_remove_SelectedLensAssetReceived_mBA2BF4A88285DBB70A59CB31F2E18A0894D69788,
	VirtualCameraHost_add_SnapshotListDescriptorReceived_m81D0D30B570F06F6EC27B84893BCE7C28D9FDB03,
	VirtualCameraHost_remove_SnapshotListDescriptorReceived_mA2D8BB432EADD09DF42CD3B2A9F7992EC7CDAD90,
	VirtualCameraHost_add_VcamTrackMetadataListDescriptorReceived_mEBD6EE4DE786E1E8C5A8B9EA9DB2220E2D6FC342,
	VirtualCameraHost_remove_VcamTrackMetadataListDescriptorReceived_m44EE5FD55C2A92B94DF2C83BBE41C7F60E19B545,
	VirtualCameraHost__ctor_mCCC6F848E70BC48EF654D16AD6D132558C04F6A2,
	VirtualCameraHost_SendChannelFlags_m26C1A813C35E46F1CEE6193CDAF610F291E1B4CB,
	VirtualCameraHost_SendInput_m50F2056C5847E74468B6162C00FD81EEB2F72D27,
	VirtualCameraHost_SendJoysticks_mF653638C90D03C2D4E62275D8AA16C17F18CA8A5,
	VirtualCameraHost_SendGamepad_m8D043FC35189154583AE9C2947B50FA411B8909A,
	VirtualCameraHost_SendPose_m6A122B3A2ECD5D184781EA355FA6C58223426CC3,
	VirtualCameraHost_SendFocalLength_m02886C33E47B94DFCD176FC88983E74C16E7938E,
	VirtualCameraHost_SendFocusDistance_mBC0046682EC52E40D98D0277E6122E29F5EC5FC6,
	VirtualCameraHost_SendAperture_m6D0950B03CD4680E6556276C32D3523EAF6BE07D,
	VirtualCameraHost_SendDampingEnabled_m4A23352E5A432C6E5E3C8F81C8EBE2DF1F90397A,
	VirtualCameraHost_SendBodyDamping_m789DC8F93D15A2B922B3CC0A0CBACE63284F5077,
	VirtualCameraHost_SendAimDamping_m8DC93BDA20035DCC1BC52933BDDB82FF1BE084DE,
	VirtualCameraHost_SendFocalLengthDamping_m37C39BF1ED02B5373F299BD63543ECAF10864FF0,
	VirtualCameraHost_SendFocusDistanceDamping_mFCD516855ACC1EB7533F55FB028E2DFDAF30AF90,
	VirtualCameraHost_SendApertureDamping_m53BB3D310B476A4A10A6E179F058253D1789252B,
	VirtualCameraHost_SendPositionLock_m6D50BE394009D446CF227497A802ABBC65FF70D4,
	VirtualCameraHost_SendRotationLock_mD17E879098C12D57B73E0AB2A8041CFB22D1996D,
	VirtualCameraHost_SendAutoHorizon_m77D508B7D6E56F15466F0F7004890D235964394C,
	VirtualCameraHost_SendErgonomicTilt_m89F33E7DDFA400EDCD6C56FF61F89898D532043D,
	VirtualCameraHost_SendRebasing_mBA103DDC7FF528112F48C0B3D6FFC9DACE4FC636,
	VirtualCameraHost_SendMotionScale_mA803E511B0BE6694B9DB6BD121D2D7F66C802963,
	VirtualCameraHost_SendJoystickSensitivity_mA573D5BDE38104F4B37747EFABECE82F6BE897C4,
	VirtualCameraHost_SendPedestalSpace_m0A80B9BDE9CC577CC9EC56A1B94B621A6068D3B2,
	VirtualCameraHost_SendMotionSpace_mF0145E85283E732BCC09A7CD81EBA0B7DBA1C37A,
	VirtualCameraHost_SendFocusMode_mAE55D63C45A7A1998DBF40DF471B22F7CDFDACBA,
	VirtualCameraHost_SendFocusReticlePosition_m07480D867E11489D46FBE8EDF5D3CC7D97CED4DA,
	VirtualCameraHost_SendFocusDistanceOffset_mA616674FA1E2DE44F812E611FDDE7577CB19C0D5,
	VirtualCameraHost_SendCropAspect_m0F8E80225776C20BB747D1D301AAC459491AAFB1,
	VirtualCameraHost_SendShowGateMask_m292541BBBC13FCFAF63821963EC4471974BD13B9,
	VirtualCameraHost_SendShowFrameLines_m37CA68770163DA7C287A9437FFD10D259484F7BB,
	VirtualCameraHost_SendShowCenterMarker_m9E45D579047A6AB59DCDC6CDBDF6AA565DDD5223,
	VirtualCameraHost_SendShowFocusPlane_m90F510DD18CB41D248CE72691C56706CFA9C35E6,
	VirtualCameraHost_SetErgonomicTilt_m1228D9CEFDBDF0A91435C72E4AA61D20F1A661E7,
	VirtualCameraHost_SetPoseToOrigin_m37744FD883673B03978A7901A047DE49377799F7,
	VirtualCameraHost_SetLensAsset_m3AC9A2941CED947D0552E485FFD04C9536261B11,
	VirtualCameraHost_TakeSnapshot_m2845A24F89D5633979AFADE8F7410FBB1E90CBC9,
	VirtualCameraHost_GoToSnapshot_m919B77AC5341E25427B43B02C1469C336A8BD061,
	VirtualCameraHost_LoadSnapshot_m38C19B24ED0ED5DA13B7E085AAAF989F1A7E582D,
	VirtualCameraHost_DeleteSnapshot_mF0824D037A4DCB95FDF823F87EF643D80C2630A1,
	VirtualCameraHost_U3C_ctorU3Eb__146_4_m99C1D929BBC6D886E46D67B85E73AC6B765D06BA,
	VirtualCameraHost_U3C_ctorU3Eb__146_5_m8F044D6427DA0A276AA28A83FC0328AC11AD2254,
	VirtualCameraHost_U3C_ctorU3Eb__146_6_mD3EF70944AB86A3D2C5F00EEA686F2790628E57B,
	VirtualCameraHost_U3C_ctorU3Eb__146_7_mC69275DDA2330AB2743C1CC5D8F387E4C555BC08,
	VirtualCameraHost_U3C_ctorU3Eb__146_8_mA78B46BC544084C20F058798EC1A74B11559FF2D,
	VirtualCameraHost_U3C_ctorU3Eb__146_9_mA2380A8CFA8DAFB08FAE1F12879FDCC86D4F9DA5,
	VirtualCameraHost_U3C_ctorU3Eb__146_10_m613F5AED9250100A483ED57AC4DB96A3F7692D00,
	VirtualCameraHost_U3C_ctorU3Eb__146_11_m711138E880E3CE22B7E51F88FAD9E08B89AD6767,
	VirtualCameraHost_U3C_ctorU3Eb__146_12_mA851A5B5C65AA66BF93E4388B3061F8FFF681908,
	VirtualCameraHost_U3C_ctorU3Eb__146_13_m205085F3A214996C4F6CF3D3EE95016BBD060172,
	VirtualCameraHost_U3C_ctorU3Eb__146_14_m98038F40C647D78509F4E8963CAFDA2EF2030B2B,
	VirtualCameraHost_U3C_ctorU3Eb__146_15_mEEC60D26C7765075E097A1A049257A25B4BBC343,
	VirtualCameraHost_U3C_ctorU3Eb__146_16_m6CB538053DA76F140E120616E6158D8EFF3AB0C3,
	VirtualCameraHost_U3C_ctorU3Eb__146_17_mF7553C28C90EBCCD7CE9C59863A02A13511ACC3F,
	VirtualCameraHost_U3C_ctorU3Eb__146_18_m47692B57507A36C461BFDDC649931AEC7E4E0F17,
	VirtualCameraHost_U3C_ctorU3Eb__146_19_m6E2DA6678D342FA3E50FA1654104974FB199C485,
	VirtualCameraHost_U3C_ctorU3Eb__146_20_mAAD4C5AE724890605B9BD6586DD47016BFE76B79,
	VirtualCameraHost_U3C_ctorU3Eb__146_21_mEE5061C461F3E7BFEA426572021FE947F1A483BF,
	VirtualCameraHost_U3C_ctorU3Eb__146_22_m6F4B734C67AE01373A764A5FD2BE4044949EEDC4,
	VirtualCameraHost_U3C_ctorU3Eb__146_23_mDCE4586044A00D83C2C0E17017B6D13C62E5E376,
	VirtualCameraHost_U3C_ctorU3Eb__146_24_m5F51103EB43AA56E9B44EB3D4E199E278AA4972A,
	VirtualCameraHost_U3C_ctorU3Eb__146_25_mD68B8A7B435760CDAC48D2850795981A1E302D24,
	VirtualCameraHost_U3C_ctorU3Eb__146_26_m0AFCCA2620C1857267787E2371375529BAA0D196,
	VirtualCameraHost_U3C_ctorU3Eb__146_27_mDA363F6D604784207168C7743E9DC9B584F69693,
	VirtualCameraHost_U3C_ctorU3Eb__146_28_m3A1945771687A98CD57A51CE3C057D6D534E6627,
	VirtualCameraHost_U3C_ctorU3Eb__146_29_m1BB1DA250ABC444E74D494F0EF886F5319EA205E,
	VirtualCameraHost_U3C_ctorU3Eb__146_30_mBD04331D6D2D764923DB967EC2B6979A9E675447,
	VirtualCameraHost_U3C_ctorU3Eb__146_31_mD9BF519464E77F86B130E6C6BE8607FBF01705FD,
	VirtualCameraHost_U3C_ctorU3Eb__146_32_m56DC0A33D8D6D67946AB57979A922F7B8DB3A138,
	VirtualCameraHost_U3C_ctorU3Eb__146_33_m6CA015774DFB0A5F781F0F884A8AE2D5A58B1966,
	VirtualCameraHost_U3C_ctorU3Eb__146_34_mDE09067DC2E229D45F8CF9121D48B57752AF23C0,
	VirtualCameraHost_U3C_ctorU3Eb__146_35_m171B2A27C5E05385E4B98DA736DB31E9FDBD0D8B,
	VirtualCameraHost_U3C_ctorU3Eb__146_36_m0227E48C81CCBA74DB7AE290E4BF06F2180F808E,
	VirtualCameraHost_U3C_ctorU3Eb__146_37_mA06060A3FE324645E29566CF46D9D5D1447CE637,
	VirtualCameraHost_U3C_ctorU3Eb__146_38_mD0E098AEBC54ACB62B17520C21E44341426258C0,
	VirtualCameraHost_U3C_ctorU3Eb__146_39_m41536BF907892F07ED94F990DEA2CB077BB72FD8,
	U3CU3Ec__DisplayClass146_0__ctor_mFE3D5E8845ECD2186E2438E0419FF4091A87BEBE,
	U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__0_mE84E4539C375B9494442E5517B4B0D5345094B5E,
	U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__1_m976F6D235E78AAC0EE718831BF4EECB66BBA8666,
	U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__2_m9B4E5657FE7D565F96D8190E8E64FB4DCC5F8706,
	U3CU3Ec__DisplayClass146_0_U3C_ctorU3Eb__3_m838F48EC075A8702B679EA43F0C329C59E84C3E5,
	U3CU3Ec__DisplayClass146_1__ctor_m0A78FD3CF427FE0406C0BC22708B46B5B8047778,
	U3CU3Ec__DisplayClass146_1_U3C_ctorU3Eb__40_m13851CD0DE73BEDAD4D78A665E56DCBDB85A3703,
	U3CU3Ec__DisplayClass146_2__ctor_m69424B8F13731E2313DB4358121C112A72F9DBB8,
	U3CU3Ec__DisplayClass146_2_U3C_ctorU3Eb__41_m39A0B7C0EBBEE8646B29FB7D8BCDBDD63D2A5E5E,
	U3CU3Ec__DisplayClass146_3__ctor_m06CB9CC0FF2F7EA3A3EE1B0DB829578B2BE54B71,
	U3CU3Ec__DisplayClass146_3_U3C_ctorU3Eb__42_mD70D36C6A335B419DF51654B264F35BD968B4CCD,
	U3CU3Ec__DisplayClass146_4__ctor_mA75D61E1D046DF4D9C012CBA972903167292E0A4,
	U3CU3Ec__DisplayClass146_4_U3C_ctorU3Eb__43_m4CAAE428CA1A4B75DDA5F5E9D5CA19C40944E146,
	CameraBodyParameterLimits__cctor_m642FF5123FEB3B08ED769BBAA12EE6603DB46BD6,
	CameraBody_get_DefaultSensorSize_m21DC7C40BBFED30F351BA21B5415CDD64673D26A,
	CameraBody_get_SensorSize_m57BD99794EB2B8FD6726BD4C7EFCCBDBCF239E19,
	CameraBody_set_SensorSize_m538765E6BCE5EAC9303CB6D24E17451F2E2F4534,
	CameraBody_get_Iso_mBD7E43DF43AB68AB691C3834EB837BE77DCC65F8,
	CameraBody_set_Iso_m3D13402100F58A2DB9929C0444A18B210AEE8673,
	CameraBody_get_ShutterSpeed_m6488A7C82A70358E47079EEC1582980635DEAE16,
	CameraBody_set_ShutterSpeed_mCDE51EAD272A5FBAC62475BA9B702FC30910C3B7,
	CameraBody_Equals_m8215DA58FF64F84F98278B7E32DA0CDFEA2663FA,
	CameraBody_Equals_mDDCEFB8B12B2AC84FA7598B7668078CFB2E2E202,
	CameraBody_GetHashCode_m2A692D08A175E7CD17788FFA274420ED0F365FE0,
	CameraBody_op_Equality_m1EF95F2668244FE37D5CBCD03938CE4DC35E8E82,
	CameraBody_op_Inequality_mED58063F2FD8603010087CC629ECB888A8E1791C,
	CameraBody__cctor_mB4600871ED97BA3B1815678E5C283A71DBC10C5B,
	CameraBodyExtensions_Validate_mEE381CE88F20B129884FAF6D13BBB4E11921E0AE,
	CameraBodyExtensions_ValidateSensorSize_m65923A840EFE24475DF922A1785659BAEF9D5CDB,
	CameraBodyExtensions_ValidateIso_m4D4E647FFFA0B42C61F3B10C33368640F00C3C74,
	CameraBodyExtensions_ValidateShutterSpeed_m9474F79F431B62A15CA9C3EE481600D2F3A3F3A0,
	Damping_op_Equality_mE0BF0B844EFA6F4A9AECECCD8CC89B40D0028E8D,
	Damping_op_Inequality_m0A393DEF8DE85BAC610EC8DED3A836F9BBD9FCFF,
	Damping_Equals_mAB5DA5F5581E0271980BF208BC9FE40009048D33,
	Damping_Equals_mC63B6C8C9E6EE517E46A5D0035E8F8CD2EC3CBB4,
	Damping_GetHashCode_m832DD9394B86353889C1A3EE90EA8D3547FB7B09,
	Damping__cctor_mD2A5C8EABF9A45FBB2C2F84AC9E8EB21A80CE2FC,
	Lens_get_FocalLength_mBE4A25CFE01DA0040A5BCCA43CB6C54AB264E973,
	Lens_set_FocalLength_m1CA608D42692D55DDA0AD6E1D9FE8309183AE85D,
	Lens_get_FocusDistance_m00087F445C45AEAD6CC931F19127202F1064C1C0,
	Lens_set_FocusDistance_m537518C8ECFA42957360C31730E3CBEDB7D42545,
	Lens_get_Aperture_mCB8A88845749E454FC6397D6F5AAE16A17F64AC6,
	Lens_set_Aperture_mE793F3CFEBB9A6E9EB75CD4AF837A49CF8BE14C8,
	Lens_Equals_mE180110E0AC18C9F1B6A70F071A327329F6B8065,
	Lens_Equals_m10275F066902B301B1103088AA576BA31505015A,
	Lens_GetHashCode_mCA26CA57BCB505F566D30E1C5A4AD33321BFF903,
	Lens_op_Equality_m645B02677BE270DD9F8E0DDE22A10FCFC63AB072,
	Lens_op_Inequality_mF35C36617A635D0FC3E295A09E0FA3172CAE4A90,
	Lens__cctor_m9B09C433D8A51E86C4305167DC58B0E4BC191F85,
	LensExtensions_Validate_mC2B2CFF9E7DA04BA4C59880E30CEDDFB825E59C8,
	LensIntrinsics_get_FocalLengthRange_m025EC2905CDCC404164BABC592A0283BF2A5637C,
	LensIntrinsics_set_FocalLengthRange_m78490921319A48BC3E4DF149B886169E7C18C405,
	LensIntrinsics_get_CloseFocusDistance_m9F5BDA5846E204157501009F6F8C6F6013F3F2C8,
	LensIntrinsics_set_CloseFocusDistance_m5414DB32227ABCB4F433A11010BA2B5B23126A0B,
	LensIntrinsics_get_ApertureRange_mC5FC518909DBFF1016CB4E4248E7ABAD9AEFD722,
	LensIntrinsics_set_ApertureRange_mCA78AF2F423D4E2C7F82D0781FC7AB2D2699A485,
	LensIntrinsics_get_LensShift_m7F021A7722141AA459B1D2661A6BBB62ECAD6290,
	LensIntrinsics_set_LensShift_mD33CF32A4FC73468F6D7BF98162F4AD029B1F029,
	LensIntrinsics_get_BladeCount_m7F7B5F11A88C4FD59A8DF83F7EADADCC6DC1640D,
	LensIntrinsics_set_BladeCount_m0B9FFBBBED33594669D5F9635290D2BD452DF398,
	LensIntrinsics_get_Curvature_m83E347CD0794843055DC31B4D9B778DCE64BD28B,
	LensIntrinsics_set_Curvature_mE4FED4B32EE41DFC81FC2EF05658E5FA40F83F7C,
	LensIntrinsics_get_BarrelClipping_m83BB383CA2F25AC82C01DE84F0A4DB0AE302CDC0,
	LensIntrinsics_set_BarrelClipping_m0212EE07B4415D73DAE7B72BFD73F45CBCF7B505,
	LensIntrinsics_get_Anamorphism_mB94AF73FFDA43DAD98225DE7749EEA43940465D0,
	LensIntrinsics_set_Anamorphism_mB4FF5E76652C835B4D64E6E999E5BA257152BBF9,
	LensIntrinsics_Equals_m97CA0464C4F0006FD05200DB40E1EAD692B5AF33,
	LensIntrinsics_Equals_m4D231AD6ECCBD39012303329EB6349D5DC868EF3,
	LensIntrinsics_GetHashCode_m670B20275E6DE8BCB60E054AF1B4E57483D27F7B,
	LensIntrinsics_op_Equality_mD8D1973A81B3A576DE6AA0C1A80FEFCD4361C858,
	LensIntrinsics_op_Inequality_m335434B860DB00A18896EC987BBE96042229D35E,
	LensIntrinsics__cctor_mBCC9C9F942FFF92C6A720831627CAAB9A55CAE1B,
	LensIntrinsicsExtensions_Validate_m932907FD04A9DF11E2AE0B377A1FF8A1439C882C,
	LensIntrinsicsExtensions_ValidateFocalLength_mFF98A2C35AA92793117300AE99C35D528E117EC1,
	LensIntrinsicsExtensions_ValidateFocusDistance_m492D52DCAEC384BA3DC43FFDE07DEB6CE6334112,
	LensIntrinsicsExtensions_ValidateAperture_m8C2E21E59C9702233B9F29600514985D4558338E,
	LensIntrinsicsExtensions_ValidateFocalLengthRange_mB3FFF8F0BDB6B43595E8B3B9D41471099D774446,
	LensIntrinsicsExtensions_ValidateFocusDistanceRange_m729D7280FB9E6110D42A63D440C09D0EDD487125,
	LensIntrinsicsExtensions_ValidateApertureRange_m332BF16E506FE8DC58387011C5935E25369721C5,
	LensIntrinsicsExtensions_ValidateBladeCount_mE800F1A07A1D2799C87141B9CB3B98754921D896,
	LensIntrinsicsExtensions_ValidateCurvature_m238472FE90BA51E1EBE0487F5385BCAFAD29E9E2,
	LensIntrinsicsExtensions_ValidateBarrelClipping_m46746A94D043C0C9D3BB7C70154CA998DE9FCDA9,
	LensIntrinsicsExtensions_ValidateAnamorphism_m048F0ED6529537F9FA3E2B5F1A6B2B433C5E7BDC,
	LensLimits__cctor_mDF45D94B9D2851D44C435AAC77A9B797F89C6F0F,
	ApertureSample_get_Time_m5C25C8558B7AB86807E29B64750BFB8D98185A36,
	ApertureSample_set_Time_mE9B285AD9C04152A4C5FD3830CDBF37CA9C27221,
	FocalLengthSample_get_Time_m59960FA4AD6CBF17A8692914D17FFFDA1A09C585,
	FocalLengthSample_set_Time_mB64A4381A5533F4C1695E6A3C949952F2A209DD6,
	FocusDistanceSample_get_Time_mC2163345A6F7217D25319887CA948971B1C07A80,
	FocusDistanceSample_set_Time_m463DFB091517982F8E65F4EB698FD0D9D436656B,
	GamepadSample_get_Time_mBEFA677C035141023BA516D60BCCE31636EF9D91,
	GamepadSample_set_Time_m9EFD433216AEB0639C8A4FDBE475949EC8AE61CA,
	JoysticksSample_get_Time_m9FEAA7B26309693B5FAE0A41987131BD3F05F759,
	JoysticksSample_set_Time_m05550D55269B7CB980D7A731B60CEB5981FBEF18,
	PoseSample_get_Time_m1F3663D84E7DC90AE0D4238C4C77A063795D48F0,
	PoseSample_set_Time_mF51D44DC5C977DBF1F310150F27E60E741CC1D2F,
	Settings_ToString_m4DA28138C5829CA8DF1B047B48A05DD66E3A33FA,
	Settings_Validate_m000CDEFC7FE09CE52E3C01A39B0B44AE506551A4,
	Settings_Equals_mBE8B586D38FB27C2D11E585474947C39EAE20B33,
	Settings_Equals_m937F379EB8B04E987858D8F8E7D8C83E05BD6C05,
	Settings_GetHashCode_m17419316CD2BF1653CFC14E16C8D26D6FF91D5A9,
	Settings_op_Equality_mD5F7CAB39BEE7267EEA49F55B0E6DCF127BD36A7,
	Settings_op_Inequality_m501DB7082DB23DC34067BA39917FB63FE15E08C5,
	Settings__cctor_mD1289FCD3820007FBDE1970C350F191DB4598FD3,
	VcamTrackMetadataDescriptor_get_TakeGuid_m7C5AA9EA83D85202602E32468C6AF0156F92D768,
	VcamTrackMetadataDescriptor_set_TakeGuid_mA7F8756491DCA205292A7AA11B399A41E96A293B,
	VcamTrackMetadataDescriptor_get_FocalLength_m7E0D2BC58A1FD5E6DF15A198373C5B81A7EB89C2,
	VcamTrackMetadataDescriptor_set_FocalLength_mFB2D4ADBF2B5B467037B8872241668EC6D9A15AF,
	VcamTrackMetadataDescriptor_get_FocusDistance_m408BAF633B23AB0B933E13F68BD30EB8681DBC86,
	VcamTrackMetadataDescriptor_set_FocusDistance_mA5482AE0CECFE58D8666AACED8A9E4BAEEC1B957,
	VcamTrackMetadataDescriptor_get_Aperture_mA0A3E97D5050C22A6CEA834EF415B52063E7AD13,
	VcamTrackMetadataDescriptor_set_Aperture_mF5031F7437AA545EB2D4E6C6FB24C7336C849EBE,
	VcamTrackMetadataDescriptor_get_SensorSize_m131EB8B9F8C50A07581B4AF45AEF463FA25AA659,
	VcamTrackMetadataDescriptor_set_SensorSize_mA0C2370424BFF608873ED6CF6C8C705907F851C5,
	VcamTrackMetadataDescriptor_get_SensorPresetName_m7C1230157CFFBFEC257BDD9439A0310DA5910F91,
	VcamTrackMetadataDescriptor_set_SensorPresetName_m7B0153BA2B23240B979FD66A0E93C716B95C6EB3,
	VcamTrackMetadataDescriptor_get_Iso_m7FA908BC70647DCE6EC4193B2E132DED8AA6CC2C,
	VcamTrackMetadataDescriptor_set_Iso_m7195988087570974797710B06D0C1789057047B7,
	VcamTrackMetadataDescriptor_get_ShutterSpeed_mF8BB9AB015D84AEBFDD89D64E178C815A0688E30,
	VcamTrackMetadataDescriptor_set_ShutterSpeed_m96549D6D7B653EF5F5BE0A559AF4EB79F9C1E1A8,
	VcamTrackMetadataDescriptor_get_AspectRatio_m8CBCF97BD28BAED5365018C7C94636E72068A39C,
	VcamTrackMetadataDescriptor_set_AspectRatio_m788A5CB0D89067991E55006539E8E5C4453E6F5C,
	VcamTrackMetadataDescriptor_Create_mCE13027D4CF358278D0948B46870109D59719298,
	VcamTrackMetadataDescriptor__ctor_m43D7400AE5ACD0221176E9AD0B3BB7522FEC2A7A,
	SensorPresetCacheProxy__cctor_mF64A711E5313D93677ADBB17B61C8F09D0B83221,
	U3CU3Ec__cctor_m2C78A2C19E652286763B6419777465B26D305AF6,
	U3CU3Ec__ctor_mC3278E95DE33BE574A7520848E2E8094098027FA,
	U3CU3Ec_U3C_cctorU3Eb__1_0_m09CFCA3E0B21FFB40038DC351EA65EDA4BB69C9E,
	VcamTrackMetadataListDescriptor_get_Descriptors_m694362F9D5AB134CFA8D8F70E2E31D0801F8E0F3,
	VcamTrackMetadataListDescriptor__ctor_m0CFA6A1F0E8C7D9E5B9ADB932C64EAEA2A46F14B,
	VcamTrackMetadataListDescriptor_Create_mC55E98812A130F8E0030C84DB0908B1CF6DBBA5F,
	VcamTrackMetadataListDescriptor__cctor_m41660B52C212F06F828D7923674F70C605BF0101,
	VideoStreamState_Equals_m85A2F92F50CF20081E15E3C297FEF35D8E9FEA69,
	VideoStreamState_Equals_mC000E8A1FCCA986E01D6607C0908B6211D34AB62,
	VideoStreamState_GetHashCode_m7CA7043FD40E6F8CE14223C89541C0D72EF10DA6,
	VideoStreamState_ToString_m842FC14CE15430A73D02EADEC180B054C512E903,
	VideoStreamState_op_Equality_mA86633D6C658160951E1C9C4D509A2EFE4185726,
	VideoStreamState_op_Inequality_mA91A444357BDEFC43036E5A497B7DA0EDE4BFE47,
	NULL,
	NULL,
	BaseCameraDriver_OnEnable_mE7CD7FBAE56B75A8849A9A3A2D9284ED6D887007,
	BaseCameraDriver_OnDisable_m634904192CB55DAD58155EF44E0F5735029FC91F,
	BaseCameraDriver_Awake_mE765139853FE430A44DCCA4CDF5813D610F5AFD8,
	BaseCameraDriver_OnDestroy_m7ECE143CACDBD3BCB79FDF5CE63E9CD57F802E53,
	BaseCameraDriver_OnValidate_mE94F9173513C85BF33E29E78B9255CEEE5ACE385,
	BaseCameraDriver_TryGetImplementation_m5B0837C80B3239428E3497F9339DD6570186A621,
	BaseCameraDriver_Update_m87A5711E88932306991AB1C4B37EDE8C49660BC7,
	BaseCameraDriver_LateUpdate_m1B9F330E10AD3241B2D417499853D2B49ED5B298,
	BaseCameraDriver_OnDrawGizmos_m23A849AA91B22260958FC66C5D7E79DB0E6BE76C,
	BaseCameraDriver_Register_m9570010C4E1076BD17F752357C48873D43745FD6,
	BaseCameraDriver__ctor_m7E574833761857FAD1CF9B87B9B0912EB0631085,
	CinemachineCameraDriver_OnEnable_mFE482A43C83D05BD7899C74D2E55263D134FD40C,
	CinemachineCameraDriver_GetImplementation_mE1B3931DC2152DAE5C28475E9289CF09F17F8D11,
	CinemachineCameraDriver_GetCamera_m7C3971C561957023C8DD887D3BB554FDF3A71F39,
	CinemachineCameraDriver_SetDamping_mAF51C91B4C612891EBD1FFBF0F872B1D87CED2FC,
	CinemachineCameraDriver__ctor_m27E15C86CDD540442282407F0ACE6B616A843C9A,
	CompositeCameraDriverImpl__ctor_m1273903E98782FD8F4CE53683C5B04BE9790331D,
	CompositeCameraDriverImpl_Dispose_m9545AD90AE4D091233EA92D3E5D695A40BD22371,
	CompositeCameraDriverImpl_EnableDepthOfField_m182394555EE82B62BAE8D9EFB291BAF37F8E5E9E,
	CompositeCameraDriverImpl_SetFocusDistance_mCE49D120C067B88789F9044526564E06C420F296,
	CompositeCameraDriverImpl_SetPhysicalCameraProperties_m0511A1E91478F8753B3E8C40B17567BD789989C4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PhysicalCameraDriver_OnEnable_m028259848C432C5949032CEBA2674C34FB771B17,
	PhysicalCameraDriver_OnDestroy_mF12F93087A6003AC7377E9D2B25035915077CA35,
	PhysicalCameraDriver_GetImplementation_m211E4CDF4791972EEB0FF1B50159ED2011393246,
	PhysicalCameraDriver_GetCamera_m0AA8B186224BE866DB20B25FAFA4619C9D183CAD,
	PhysicalCameraDriver__ctor_mA50ECB521E6D6435351F8C782B26E35428190700,
	VanillaCameraDriverComponent_get_Camera_m697FF84113CB3CE6DBFAF287FCE98EF26F799BBB,
	VanillaCameraDriverComponent_set_Camera_mC03DD1AA6C6902AE0B6773D7F78928810F781C81,
	VanillaCameraDriverComponent_Dispose_m938FA27F3D5602CD393452A687D3C5293A1E34C0,
	VanillaCameraDriverComponent_EnableDepthOfField_m90216A916C263C9BFA947497448CF30580CDE612,
	VanillaCameraDriverComponent_SetDamping_m1AE8DFDEFC84311DEB1BAA495B411BBC3E0B8B3F,
	VanillaCameraDriverComponent_SetFocusDistance_m5FC4767078E2F9DF1748D206E207546CEE0B0F54,
	VanillaCameraDriverComponent_SetPhysicalCameraProperties_mD72123CE494D0C303A4F7306E4154980E6439106,
	VanillaCameraDriverComponent__ctor_mDF72D1DEABE5D35129BAF7AE94A4CA8DA6777751,
	VolumeProfileTracker_get_Instance_mC365AF28DF295AA6EBEBAB4312D9B1417DFA852C,
	VolumeProfileTracker_TryRegisterProfileOwner_m61DCD6ACFD2B47919DC103BBFB68F1AF205EBF34,
	VolumeProfileTracker_UnregisterProfile_m3FED91A6B6EDE1876F6038E83A1F4DEAF7197E95,
	VolumeProfileTracker__ctor_mCBA85ADA6A6BD9B2E1E35E65160D7734DA850593,
	VolumeProfileTracker__cctor_mA37906773DBEBB4D738F8D7C3C5D42F28349F5CF,
	FocusPlaneConsts__cctor_mB298253CD21F5D3610BDEEE3DA26AD258F399B8F,
	FocusPlaneMap__ctor_mDC66E46E09A8E080996DEE71CD80D27D2C59AB0B,
	FocusPlaneRenderer_get_RenderMaterial_m50AB3EB3BA967F7940F6AEAC76C9E95261A49926,
	FocusPlaneRenderer_get_ComposeMaterial_mE77A0861F8933FB64B898E84E5E41610BAA64C62,
	NULL,
	FocusPlaneRenderer_SetCamera_mDBF754A778EF10888100EC1AA90C0F94EF01C024,
	FocusPlaneRenderer_SetFocusDistance_m199456B83FCB82FF95F97EE9065ED81A8E05CECE,
	FocusPlaneRenderer_Awake_m05F4FFAD0A0DEE57146AFB49254176C4D63578C1,
	FocusPlaneRenderer_OnDestroy_m2C779FFFCACD4D2B040458C0BB0AEBAB28F25D6B,
	FocusPlaneRenderer_OnEnable_m33FA9FA3CFF95089B6CE917D7BF7CD202731D1D5,
	FocusPlaneRenderer_OnDisable_m4329696F45C4B48CF62D0FBFCE36508CF0DC863A,
	FocusPlaneRenderer_OnValidate_m61F062625DC548604B3E1F1D97308CA90B9AA883,
	FocusPlaneRenderer_Update_m24D7D81327C90D9DB1FC9724B9ADCA8722FA6D81,
	FocusPlaneRenderer_Validate_mD68FA972FAEF6F01C2AD85A83852BAC5E5C394BD,
	FocusPlaneRenderer_AllocateTargetIfNeeded_m6F7D234CD82962754F7409EF690EBD8176EAA5DE,
	FocusPlaneRenderer__ctor_m76B08F91C278FF00C863E689BBF628B2AEFE47EC,
	NullImpl_SetCamera_m3C48858B288FA7C16D7810D8201BB8D2CAE4B7DD,
	NullImpl_Initialize_m1CE3E5FBC49A5E7EAAE29A3FF3F3F3EFED7F50F9,
	NullImpl_Dispose_m5B3CB2F8CBEA38FA995E4A959139D0EA62CD7E94,
	NullImpl_Update_m93BFC40FD55FBC783DD2893476BA3134537B222E,
	NULL,
	NullImpl_AllocateTargetIfNeeded_mF8DD6BA036359DF83681D659FEF2FBCAF5FD04AD,
	NullImpl__ctor_m73335FB5FFFAA82646C415D2C61179A15FA0DAC9,
	ShaderIDs__cctor_m379D855156F6B23363AAC1B1A591581957916D53,
	FocusPlaneSettings_Apply_m9EFB25FE66B6450C1B1E05AF82D2E88A8F01143E,
	FocusPlaneSettings_GetHashCode_mD916DC27D3CDA9C782F362F38CF36188218516A9,
	FocusPlaneSettings_Equals_mCBD3F6194F7BE175F1A5D8AB691CAD744F5A690E,
	FocusPlaneSettings_Equals_m57EBF080D8902EA26975FC4073C77E74630B8279,
	FocusPlaneSettings_op_Equality_mDC75E87E72A7DC0C82F878F609E03A61F2C99F1A,
	FocusPlaneSettings_op_Inequality_mA330B3214F7A3115499ADE3FADB49E925C9B6E34,
	FocusPlaneSettings_GetDefault_m2B3E659D39EEAB5E09D01812870CFC2ECCD0E062,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LegacyFocusPlaneImpl__ctor_mA6A35DC3508E7E47731F88C3C3FBE106A0C79ED6,
	LegacyFocusPlaneImpl_SetCamera_mFE2BB10A0867C9628391191536AA22A8B6259A58,
	LegacyFocusPlaneImpl_Initialize_m7FFB906DD7BE4A5DFBB3A22982090CDBB288A43A,
	LegacyFocusPlaneImpl_Dispose_mB9DA2422199AA0F772E963B9EA08A69CE6B72732,
	LegacyFocusPlaneImpl_Update_m3E8E1225E6F435FF7CF545708A0DF38292EEA38C,
	NULL,
	LegacyFocusPlaneImpl_Unity_LiveCapture_VirtualCamera_IRenderTargetProviderU3CUnityEngine_RenderTextureU3E_TryGetRenderTarget_mBB6EA93FAA0D0221CB16D7A8980481288FE52CFA,
	LegacyFocusPlaneImpl_AllocateTargetIfNeeded_m4D29A3779E96CC48A91774894A0FC14835D0FDD3,
	LegacyFocusPlaneImpl_AddCommandBufferIfNeeded_m294AF12D40A7814E8046DDCFD70FF214EDAE3D54,
	LegacyFocusPlaneImpl_RemoveCommandBufferIfNeeded_mE8BBCB330FB15F76EDC0BF419BDF7363381503CB,
	LegacyFocusPlaneImpl_UpdateCommandBuffers_mF9927BC8D776F966A9175BEAF2574C5586DC7D2D,
	BaseFocusReticleControllerImplementation_set_CoordinatesTransform_m6B2ADDBEF7D8DCE11D6F3B5DA47CD144B6C3EE32,
	BaseFocusReticleControllerImplementation_get_CoordinatesTransform_mE5A5845F1727DB208D3FE0BCE02787C6AF8AC85B,
	BaseFocusReticleControllerImplementation_set_FocusReticle_m475399303E827E177D85C9C181E288A713126D54,
	BaseFocusReticleControllerImplementation_get_FocusReticle_mE17B375ED2C5352E6D1161BB2D1A4AE2C983E1BA,
	BaseFocusReticleControllerImplementation_set_PendingTap_m5C3C4873067142FE0816E70570E67C5AB6A05316,
	BaseFocusReticleControllerImplementation_set_PendingDrag_mF25A3810C92B5F32AA56B4505BBA87440652D220,
	BaseFocusReticleControllerImplementation_set_IsDragging_m106F6DD0F2F5D69BF783516F653675DBB6FB1E55,
	BaseFocusReticleControllerImplementation_set_LastPointerPosition_m8BC2B0CD42950E3FD23BE6E942BEA268D62F3759,
	BaseFocusReticleControllerImplementation_Initialize_m3187408FF812BCF923355725B8F3144E822D0FFF,
	BaseFocusReticleControllerImplementation_Dispose_mFA039EA57CD6ABCDF7421A1D741476908FECA3A1,
	BaseFocusReticleControllerImplementation_UpdateView_m4BF5A76BE168C91B09A8581AF9B915B46EECACC1,
	BaseFocusReticleControllerImplementation_SetReticleActive_mE5DE95980638C172534D76E21004CD7554873C3D,
	BaseFocusReticleControllerImplementation_ShouldSendPosition_m98774787FF28E9D22530756FEA37E3871AD02866,
	BaseFocusReticleControllerImplementation_OnAnimationComplete_mA172C6DF4B5B0663CBE463F5BD72558E40723FC1,
	BaseFocusReticleControllerImplementation__ctor_mB589AFBD26C59ABC187ADC01075CC549BECD3486,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	FocusReticle_add_AnimationComplete_m361F45822808CB0510DF6F9C19206C925E72A4D1,
	FocusReticle_remove_AnimationComplete_mCAD439E36BF4E8F187F3A5440A7CE4CA123B9483,
	FocusReticle_Awake_m15B9BA179277D5BAF419D979939519057B691354,
	FocusReticle_SetActive_m2B96C18055C429DFF90C0AFE5CF47D0B2421A680,
	FocusReticle_SetPosition_mCA06C2C0D7F29C8BB97604430FF08057D7AD0851,
	FocusReticle_ResetAnimation_m4484B7FC2817CA997518E1D3E1CE16E5C4418509,
	FocusReticle_Animate_mB8E7713A68533BB511D6B2F3D6C30F410D7C70E6,
	FocusReticle_StopAnimationIfNeeded_m4D54AC2E1E0E79E180FDC2F88221081CC74D5867,
	FocusReticle_Animation_m402968B89A15D9A2913AA226A9C652E384C7B221,
	FocusReticle__ctor_m4C1276E826FCA3A421BD7A175091F0AACE1DD313,
	U3CAnimationU3Ed__12__ctor_m180543D03DF8CFD3B9A3A9D079D5FB06FAF12F3F,
	U3CAnimationU3Ed__12_System_IDisposable_Dispose_m4B8BFDC5BD0E96C31863FEBAA2AC317341E6D76F,
	U3CAnimationU3Ed__12_MoveNext_m0D1AEE4B12E820BADD91E7C4929FFD36C7BC90F0,
	U3CAnimationU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3B870B81E0509FAA7B860553306C51224A43D71A,
	U3CAnimationU3Ed__12_System_Collections_IEnumerator_Reset_mC5E16B217A60BBE1234497236EA4B8829503414E,
	U3CAnimationU3Ed__12_System_Collections_IEnumerator_get_Current_m5F8C0CBDFA82A5B198A14B781626DCC279BD04A0,
	U3CU3Ec__cctor_m5C3C750FB4D091352764A65728112436823D4253,
	U3CU3Ec__ctor_mF3ACF641B3CCAC6718DBF649E715F23E89B171EA,
	U3CU3Ec_U3C_ctorU3Eb__13_0_mF42301809C8B8B1E293F81997AC1FBB91D7C5C07,
	ReticleAttribute__ctor_m22B0D84F3598FA2572DC12ADE41174A514BF03B7,
	FrameLinesMap__ctor_m87596C3FF172952BC057737F64A51ACAB31074BA,
	FrameLines_get_GateFit_m5E34A69D4F438DA82546E8FC69E1EE7825DB86FC,
	FrameLines_set_GateFit_mB3FBC971FC0168648054A85ACCF47A4F76006F18,
	FrameLines_get_GateMaskEnabled_m3A10D79730DBF5E566C632049324DC5372A6095A,
	FrameLines_set_GateMaskEnabled_m8CCEB8523C7C70AF696498A988731E8CB5467F42,
	FrameLines_get_AspectRatioEnabled_m7461D8D19BF1052371FC120522B4BDE506C72B82,
	FrameLines_set_AspectRatioEnabled_mBF7999ED75D43618A58CF01A18EC95000C36794B,
	FrameLines_get_CenterMarkerEnabled_m6AF7DCC054E4312C1E4F5E51206021E1A1B812F4,
	FrameLines_set_CenterMarkerEnabled_mCCCFB80D4C1D4679F2790F935B3E4CA2A83DDEFA,
	FrameLines_get_CropAspect_mE52C174319DE1BE8E1B436F98C221F88B3254935,
	FrameLines_set_CropAspect_m24BAAD168D3C300216251BF2A6EF9923F8AB6BDE,
	FrameLines_ShouldRender_m1580C3FCB5199FFEE3A6EB747367A399F9108E65,
	FrameLines_Awake_m1CBEC3E22000D013A3CE414E359ADE0E905E2329,
	FrameLines_Reset_m909C61E321C5E842D3C4C8C23921F7923C678465,
	FrameLines_OnValidate_m49398F1C9D3BD92C05C1D359F538F5BEAF83AD83,
	FrameLines_OnEnable_mE70A77228A5A37E9C450736991ADA3A1CC67ACCF,
	FrameLines_OnDisable_mBED69425B8F746A69112B9FB9D249B6EC70CED49,
	FrameLines_OnDestroy_m80EDD51D34D30D3B8B244AA07B54C874EBDD7215,
	FrameLines_Validate_m2A35A33D3C00FF70CEE5AA0F6BFCFAB0BAD58651,
	FrameLines_AddLegacyCommandBufferIfNeeded_m22C70DCBBB5B08A3D1F954E5E11759E641824F2C,
	FrameLines_RemoveLegacyCommandBufferIfNeeded_m01D91BD495C924AC0FA035CAF0F22D1C89428BFE,
	FrameLines_LateUpdate_mC83CDFE1FB509409661C3D333F75EA580E6507C9,
	FrameLines_UpdateCamera_m90B33CDD4808B39E6696CF9B147EDD4D2CA96901,
	FrameLines_Render_mAD51C7B2DD5B316AB9BFA12C51E026E0D0039BA9,
	FrameLines_UpdateGeometryIfNeeded_m6F7339576D600FF5E9AACB5DD9F72BC5A5F17591,
	FrameLines_DrawLetterBox_m3B8A8B9E8804AF01964F9BCD1AE909481DDD30C4,
	FrameLines_NdcToPixels_m79B2556A7458DC691B5DE104A0E3A1926DECA374,
	FrameLines_ApplyAspectRatio_mED7EB1D5DACFE7823B2F1B31085C9EDD44909A62,
	FrameLines__ctor_mE3765A0B80563835464E9CA7730E76FA26E385EF,
	FrameLinesDrawer_Initialize_mA106BA4D8E23CA5232F319F0CAAF2DD9A04F734B,
	FrameLinesDrawer_Dispose_m596B61CB2CF73AADB82AA5037DEC1E711D0FAB80,
	FrameLinesDrawer_Clear_mAA6E1F56EEAF6C658B63B357F61998D7E4BD1A03,
	FrameLinesDrawer_UpdateGeometry_mF7EC863D17792B8A8ED124787A9D3FDF7DEB51A6,
	FrameLinesDrawer_Render_m92E0692ACD1A271EA0D746B8605544D4CE4E4606,
	FrameLinesDrawer_SetColor_m3F2787AFED2AB94F1EEAFFCB783CE6A7CFB50922,
	FrameLinesDrawer_SetLineWidth_mBF0AE4EB176EF8DC8A328F16893D4954E2F4CE64,
	FrameLinesDrawer_DrawCross_mE36420E0DA57353923BD1E7F7BED0E221401082F,
	FrameLinesDrawer_DrawBox_m5966BDB4BE6E64482A32977C7CA0FE90063FEDA8,
	FrameLinesDrawer_DrawCornerBox_mC84FF28082882A748E0A84B612E6D1B94C41149F,
	FrameLinesDrawer_DrawRect_mEA3C668FF06F39EF220443FFA806272F2A853936,
	FrameLinesDrawer__ctor_mFF4CFDBA8870C904676B2E124EC9429A409EC25C,
	FrameLinesSettings_GetDefault_mF762BBDB42D275AED3A7065FC03E655F9409C17E,
	FrameLinesSettings_Validate_m1B77B42FE4DCCD1E00FB015B53789D2C69222D7E,
	FrameLinesSettings_Equals_m35858C73C99D2A7664A4BB2393A3F06CBAFA65FE,
	FrameLinesSettings_Equals_mD516E59CB6C22CECFA95230C9DE5318DF39851D0,
	FrameLinesSettings_GetHashCode_m64DCE0359BB9FF3A35DA47C93DDF4AEDACB72156,
	FrameLinesSettings_op_Equality_mADF081B8A0CB66AF06B81A13C97CEA1445491085,
	FrameLinesSettings_op_Inequality_m0E0A5B5B94FAAF74AD62812169875ADE5808F980,
	NULL,
	LensAsset_get_Manufacturer_m11073AFABC2D52244ADB62D85EBD69FDF3E93D84,
	LensAsset_set_Manufacturer_mD4D1AF526903E03270C727918B7E718E91DA2B2D,
	LensAsset_get_Model_m0CC0F2C515EB0A3FA8AE1F915AFAEE4CAE660789,
	LensAsset_set_Model_mC14964843A536D2C238442A921B720C9857F0C3E,
	LensAsset_get_DefaultValues_m4F3C38A21DBB5D8AA87F9DA7A1BBEAAB6AA98075,
	LensAsset_set_DefaultValues_mBE3EC0FED0B28FEF1805B15BABE71448A98F6D0C,
	LensAsset_get_Intrinsics_m59C410CB58ABA7ABCFE6A4F2C6039996AF2B3F2A,
	LensAsset_set_Intrinsics_m64BE5C80D2D83C5DA67AB6E30783D9C0140E29DB,
	LensAsset_Reset_m0D26E795E88F966F5ED5575ABFC5A051B4967D01,
	LensAsset_OnValidate_m038BDE72DFBEDCFDE3F4989E4E88175F661FCD45,
	LensAsset_GenerateName_m5748974E797CFABF48B1A417D5D3A0A465458C14,
	LensAsset__ctor_m93426F72FE67D6CC0D6F9F326BC12F301E9E9A04,
	LensAssetDescriptor_get_Guid_mCD1979C70458E658504D95045CBCEB198FE220A7,
	LensAssetDescriptor_set_Guid_m13E2FE3FA626C0EC3795CD997D6701DAB4969CC5,
	LensAssetDescriptor_get_Name_mBE7518DCA3D6254AB71ADF318D20E02D51D26FA3,
	LensAssetDescriptor_set_Name_mC5668A5EC826E8F65DE305489E553A44BC5E0441,
	LensAssetDescriptor_get_Manufacturer_m8C1A504EC7F66EB5E7727AB944B3C0B56A867E28,
	LensAssetDescriptor_set_Manufacturer_mFD25755BDDA05E5D63320A0F06C044AA39E763FB,
	LensAssetDescriptor_get_Model_m0898168639B35095DECB9B494F7FD6E061AD12F8,
	LensAssetDescriptor_set_Model_mF8D14C4E3A7756631AC7FAEF67B55C3B23B7506F,
	LensAssetDescriptor_get_DefaultValues_m3BF8B148349A9C77428747E1CA2F8FE2EEBD89C7,
	LensAssetDescriptor_set_DefaultValues_m29959DA1B34A6E4416640E4F8D024534152D401E,
	LensAssetDescriptor_get_Intrinsics_mFCE8204751EC5269C0F36A56967B1BECEC4FEA5B,
	LensAssetDescriptor_set_Intrinsics_m69632DBFEF003FD60369FA4FAF5AA16F4D68F088,
	LensAssetDescriptor_Create_mF4898C1AE1ED9A6E181CCB10971223810C00C019,
	LensAssetDescriptor__ctor_m1FBA96805BE3E5701C633AFCC65D8FB18458105D,
	LensKit_get_Lenses_mD3C475F6B3C57E6DE62552A7C093D2007A1823A1,
	LensKit__ctor_mE10B954EEA19A6B43BBDAED8958D50774AF9C999,
	LensKitDescriptor_get_Name_m551871CAC0A1E155078870E17993AC1511226351,
	LensKitDescriptor_set_Name_mC9298D66A0694548945EDCBDBAE6E04A396AB731,
	LensKitDescriptor_get_SelectedLensAsset_m71F80504D1D5891FEBA495C29E811D0AD9BEA2F1,
	LensKitDescriptor_set_SelectedLensAsset_m86702B7A0CEC20F7E7797B111ADEF51E97870110,
	LensKitDescriptor_get_Lenses_m1DBD7DD6EA246DFB697F921D3F3B49E873BC81C7,
	LensKitDescriptor_set_Lenses_m96B54F69129F83FD338734A9396087962D316D0C,
	LensKitDescriptor_Create_mBCD420C2780A844509D29D71F2D9948A31EFF55B,
	LensKitDescriptor_Create_mAE5B3AEB559E7ED1833271D6B2CDC80D5A0DABAA,
	LensKitDescriptor__ctor_mA3664EA46CD8F98C44B8DE8F0AF0DA478EE780CF,
	U3CU3Ec__cctor_mD423169082AA817222A2575FE6D97BBE7769E7F1,
	U3CU3Ec__ctor_m4232CEC8DC910E5235FC35ED466ABAE6131CD946,
	U3CU3Ec_U3CCreateU3Eb__13_0_mA48CB816BE71F0604B649897BA29D2542CEB6D0F,
	SampleProcessor_get_TimeShiftTolerance_m081A61109FD1A50372879C6732573813B9CB2A33,
	SampleProcessor_set_TimeShiftTolerance_m9E871D750D3F9DF560DF054CEC63A724420793C5,
	SampleProcessor_get_MinBufferSize_m1F34BBFE65EE33367B248FDD67D4F7EFD64DDD70,
	SampleProcessor_get_BufferSize_mF2204E940C1E5749FA0932588172939A9FA9F2EA,
	SampleProcessor_set_BufferSize_m1E98F5141074B386E2C32F7957344404E6487581,
	SampleProcessor_get_GetLensTarget_mF14349BA25AA7DC50798124817C68EB83257D766,
	SampleProcessor_set_GetLensTarget_m9B510B16D97C4CDAF225ECE4295239680E544B5F,
	SampleProcessor_get_GetRig_m6C32C01A38D8EED490BD5F5D2BEBF36CA3AB8534,
	SampleProcessor_set_GetRig_mB2C0ADDCD411A3F1A372AEA9401EDB4E78C25BBF,
	SampleProcessor_get_SetRig_mE3E52AF159FD3A1702A8DE8F06138675D12F29E1,
	SampleProcessor_set_SetRig_m2BA6D871A96A593E7AAD827BA53DAC20F14002E8,
	SampleProcessor_get_ValidateLens_m73488B1C3628948ADCE5A1C4D6006064441B7644,
	SampleProcessor_set_ValidateLens_mB62F19E6388713A13BCA865267E4484A38610357,
	SampleProcessor_get_ApplyDamping_m3D2FE9F865A2EF2C7D3F0F2D6A23BC81AA1B8B82,
	SampleProcessor_set_ApplyDamping_m8BF958B318CF6EC0E9B17AF620C0FDACD8D30D01,
	SampleProcessor_get_GetSettings_m4AEB741702B3A78B19DA44CA96669CDD3C88E4C0,
	SampleProcessor_set_GetSettings_m514358841F0B3FD93491D0D5A765C24CE1119BE9,
	SampleProcessor_get_CurrentFrameTime_m4BBE47CDBFE1A152C1AF7F7297120512523A0832,
	SampleProcessor_set_CurrentFrameTime_m77196D1C9966B3463A500A1A0BD166B97A22DB7F,
	SampleProcessor_get_CurrentTime_m57EABFE95D971CF4F6E53B257F3C922A65BF5110,
	SampleProcessor_get_CurrentLens_mF0ABEF617B76245FE7C1BD58A716AF7EBA9576C6,
	SampleProcessor_Validate_m4A2FB21BA80A62D6598CB8FC32FB315D2669E851,
	SampleProcessor_MarkRigNeedsInitialize_m4DFDC1847B674ECE69F9CD44C5902CA7C90848BD,
	SampleProcessor_Reset_m51D4C52EA51808063C5A9BFBC7E43E511BB07C5C,
	SampleProcessor_Reset_mA7CE934979930F06FFC0267878967B47A36D597A,
	SampleProcessor_AddInputKeyframe_m6F2BD8A34585B66C021CF2EF6BD068CDD86AF205,
	SampleProcessor_AddFocusDistanceKeyframe_m643269EA325388BAEA1D13B930AFDAE22905619F,
	SampleProcessor_AddFocalLengthKeyframe_m40ECA305C622620450EBA1D94652303CDE8A9D58,
	SampleProcessor_AddApertureKeyframe_m6E2A49BCC30AF7DFB5A5CBA016F9C941B7636A3D,
	SampleProcessor_AddLensKeyframe_m4DFCD530E1CC9F486E013AEB21AE9C94FAB1DAA6,
	SampleProcessor_GetBufferFrameRate_mEAABF12386B27F243937490B2A0D8924638DD19F,
	SampleProcessor_TryGetBufferRange_m39D7C15C7DD6513435A7DB8B3943613173DFA798,
	SampleProcessor_GetStatusAt_mF80812AD05F82C1777F7BB5FE653E82EEBF27FAE,
	SampleProcessor_ProcessTo_mDD9FEDCD7AD4A5B9A95C6BBFE78803CDA95178B7,
	SampleProcessor_InitializeRigIfNeeded_m61A17FF0EEEB5A04BF27BB52ADA5351B4B707F14,
	SampleProcessor_GetRigSettings_m18CC4BC56133481BAC1E01AC92AD5A84C9DE2D4F,
	SampleProcessor__ctor_m005EC93A8A0697FEC2DCDEF7DAFCAC54F4F9C32E,
	SampleProcessor__cctor_mC5D03B453327ED80004495E6A0ECD984DA7F2F6F,
	U3CProcessToU3Ed__68__ctor_m81A160A01E7E5011E4491CE3109F4E2A930A84DE,
	U3CProcessToU3Ed__68_System_IDisposable_Dispose_mD784A28AB426A6C9B3D816178766524E6948FA18,
	U3CProcessToU3Ed__68_MoveNext_mF2A13CC361AB3F7F3D7F618D495F53EBD217F43E,
	U3CProcessToU3Ed__68_System_Collections_Generic_IEnumeratorU3CU28System_DoubletimeU2CUnityEngine_PoseU3FposeU2CUnity_LiveCapture_VirtualCamera_LensU3FlensU29U3E_get_Current_mB8B6B1D9213763B1B85B547F5F02F2FD422DAA2E,
	U3CProcessToU3Ed__68_System_Collections_IEnumerator_Reset_m56044935F448E83B78009F0570B4A8185B61A60D,
	U3CProcessToU3Ed__68_System_Collections_IEnumerator_get_Current_mF09DCF69F059D2CE7134C34D070EFB65CA6BACCF,
	U3CProcessToU3Ed__68_System_Collections_Generic_IEnumerableU3CU28System_DoubletimeU2CUnityEngine_PoseU3FposeU2CUnity_LiveCapture_VirtualCamera_LensU3FlensU29U3E_GetEnumerator_m1058B477CAD5DE1935A7E167C88BF1905EA4CFA9,
	U3CProcessToU3Ed__68_System_Collections_IEnumerable_GetEnumerator_mFE4310DE099C0900ED2A4EB4662DB998B82D00F5,
	AspectRatioAttribute__ctor_mC38379E322960559031CC7E9C48842E7AA201233,
	AspectRatioPreset_get_Name_mF1BDA9552D4BA1827F2298534172D154CD0B288A,
	AspectRatioPreset_set_Name_m6AD4EDB92ECEB8E1BF3291F39C0F3A2A8696D871,
	AspectRatioPreset_get_AspectRatio_mFB78928968D413711E270F578F6E3294A3A172D3,
	AspectRatioPreset_set_AspectRatio_m3A46EB1054A402C9DEF10111BEBD27D017DDE0FF,
	AspectRatioPresets_get_AspectRatios_mDF1E822EB88365FB91189E53CDC0C1720A59AA7E,
	AspectRatioPresets__ctor_mB63D49F556BFE7025CD6DF547B7EE3554253DDCF,
	SensorPreset_get_Name_m430FD0857655BCBD6E772EE6E9837C405913378A,
	SensorPreset_set_Name_mBE6386447B4CCF3C22F5E5A954C0F978EDE53080,
	SensorPreset_get_SensorSize_mF974B0CC50D7322A16B7BC1AB1AB095AEBE9C663,
	SensorPreset_set_SensorSize_m1C3CABAEC30B1879A5A4B8DE27B2D6D4073C29C1,
	SensorPreset_Equals_mCC3BA15B2B6FF28580601A55E793D14D23A436A3,
	SensorPreset_Equals_mA8D0C5B3171480C89FCAE142234CAC897322EB51,
	SensorPreset_GetHashCode_mEA7B5F3E6671F1A8A92ABC548A5C816263250585,
	SensorPreset_op_Equality_m592D265B56AF78351EAE68C121526DB6A09DBBE5,
	SensorPreset_op_Inequality_mF7918780F47B34555276B45DF18FA8D9C5E868DB,
	SensorPresets_get_Sensors_mF8F733B67715AE4B6644A0DE963845260A3C1263,
	SensorPresets__ctor_m22A6DC3E6FB2718785C872701C090A60BDD126D4,
	SensorSizeAttribute__ctor_m84D90CBADBA419406A22876078C15E2BCA5347CE,
	DefaultRaycaster__ctor_m79F37997FE5C88D85A3544BF6A70329083E6E043,
	DefaultRaycaster_Raycast_mA5EE3E653145D6C611C054028C369DD7AEB2BB68,
	DefaultRaycaster_Raycast_m25C7083927BE28CE1C992FF2B6A531F5F29A2BB1,
	DefaultRaycaster_CanPerformRaycast_m6C59814F7009DF1056763AEB153C00C4BA967F1A,
	DefaultRaycaster_GetDistance_m6D719F8A2F0FAEC562D0A6A98799E1CAED9079C0,
	DefaultRaycaster__cctor_m29885E7482ABEA0936FF72EF0876D647E469F072,
	DefaultRaycasterFactoryImpl_Create_m7D45A2C79F7952A1B7279F695E071DE94E842EC5,
	DefaultRaycasterFactoryImpl_Dispose_m5E663D50DE82433BF88348E6A7A1D18484618711,
	DefaultRaycasterFactoryImpl__ctor_m1B70A04B3B10D3621050E1510E75833A028CA05A,
	NULL,
	NULL,
	NULL,
	NULL,
	MeshIntersectionTracker_get_CurrentMode_mCE7224998135C9C9F9B3B230DA2E2B8D703DC56D,
	MeshIntersectionTracker_set_CurrentMode_m0D5DB2823BAE3EB0A67AA9265A8859936187AC48,
	MeshIntersectionTracker_Initialize_mBFF50E8AAC96DFA89C2C3D9E3C722ED942CBD22D,
	MeshIntersectionTracker_Dispose_m2BC81FE8F7B89FF40E7A50AA179D01C7D23A40F4,
	MeshIntersectionTracker_Reset_m5C645E34D5DC7999043A553776375F0B092CA3C8,
	MeshIntersectionTracker_TryUpdate_m862519BCC370BEA5880D03996244B9A6CCA40F47,
	MeshIntersectionTracker_TryTrack_mEB30B8CF561B18E97823DBACA58D5DB3B89CC941,
	MeshIntersectionTracker_TryTrackMesh_m5135314AAAEA3B357AF57428FD505F0540F76350,
	MeshIntersectionTracker_TryTrackSkinnedMesh_mB039E56E90EA1FE8FEDCF96E51DB01D5A9BCE072,
	MeshIntersectionTracker_ReadbackVerticesAndReturnLocalPosition_mB5FBE03DFA9DB0173CC3DCEA3C7F3693E12B2DB5,
	MeshIntersectionTracker_BarycentricToCartesian_mBD98F1C785646FF5CA98940C0C32F28600F10A54,
	MeshIntersectionTracker_SkinVertex_m896497DCA93B182910394CD3EA8E70CFAC7EF557,
	MeshIntersectionTracker_RayMeshIntersection_mD0DDF58E2AA5CD3E804FF4BC13EF650A3947ADE8,
	MeshIntersectionTracker_RayMeshIntersection_m24016F713062AE69968470E39FFB585CD24A52AF,
	MeshIntersectionTracker_RayTriangleIntersection_m2C5177F46761A1F3019C083558115949010C4D9D,
	MeshIntersectionTracker__ctor_mED899F28230E8A8A8036A82004EE332547B51B4E,
	MeshIntersectionTracker__cctor_m788B0E3801F9B932B697E0A4B5951A6674D2FDF6,
	RaycasterFactory_SetImplementation_mD4FCBF4879CCB2E6B4E6D6B8FFB55BE61C1CD616,
	RaycasterFactory_RestoreDefaultImplementation_mF43D9752A603DBEE9EA2BA149201DA9837E5987E,
	RaycasterFactory_Create_m997716D2312553933B72AF1A9699CA237723824E,
	RaycasterFactory_Dispose_m39A508D812EC184483AA800DD66A55E2378E6F03,
	RaycasterFactory__cctor_m595B424C4000642ED013206016B41C0AA6D3AEAB,
	CustomPassOrderAttribute_get_OrderHint_mFCFDF3389AE2D67F72B1E9B3D2F03271C689A01C,
	CustomPassOrderAttribute__ctor_m940DB96EE263A7D0F0267FD43E26ABB35C3A3B4F,
	NULL,
	ScreenshotImpl_Take_m1D3564285AABEC2BF41F5B6E78B8CBBE16BDD230,
	ScreenshotImpl_DestroyTexture_m133075D9FBA29059D00B96CA8A3C587BE63E73B6,
	ScreenshotImpl__ctor_mC0F7BBEA12AA409E5ED55B0E85AA3248C84CB5E7,
	Snapshot_get_Pose_m489A5AA45E8FAB71923A3D498E62CF87445674B2,
	Snapshot_set_Pose_mDC0A936D50C0BF0D0E57B3D15616F26361AD1545,
	Snapshot_get_LensAsset_m6A9D85E7F781FB66F557CB1436568867EFB984F4,
	Snapshot_set_LensAsset_mF285945C2E2B82BB832851DD5E06AF728E907744,
	Snapshot_get_Lens_m0363FA2E5A7A1C99397E22F157EC2C436E2CA7DB,
	Snapshot_set_Lens_mF14DF34C7A68DD519BDF7BE9E3D96E68A06021FD,
	Snapshot_get_CameraBody_m9D155DF7BDCF127ECB330CB4589D8BBF98F0D876,
	Snapshot_set_CameraBody_m8E6ECD8383DD8BBB431D87733865D95CAE47C4A9,
	Snapshot_get_Screenshot_m49DF0E72884B09C79F728BB3760F46BE55D3B723,
	Snapshot_set_Screenshot_m807CE5577D32929FFCE0335DD92B02FE896F47DC,
	Snapshot_get_Slate_m521042D683C2AFF518D550993EFBBE6B99F439DA,
	Snapshot_set_Slate_m94536913F1AD5A3A8B20321CA95158E63C1B2631,
	Snapshot_get_FrameRate_mDEDD98A69A502A173B8B682528BA386D4D500995,
	Snapshot_set_FrameRate_m3F712D39E3582A9059A2360B7FB13E709066EDC5,
	Snapshot_get_Time_m3BD5FB580A29251972B06B7F8344BA47655D86CB,
	Snapshot_set_Time_m52BDD5EC1E55BE93944574940E064594353644A4,
	Snapshot_Equals_m921133B9C9CCBB8D6618325A02352D0E14C331CB,
	Snapshot_Equals_m8A8537A7259FCB22BB963212CF49607A94606E39,
	Snapshot_GetHashCode_mAF051CFD88485641B3D098C5396E933EFE6B207A,
	Snapshot_op_Equality_m03C1DE2461EB51D60562806C2D75EA3208A59957,
	Snapshot_op_Inequality_m2298DD3C90BF79A6534E918BBD14CC656D222FC4,
	Snapshot__ctor_m1BCA10E5B936326D884E04813101BC71974B951F,
	SnapshotDescriptor_get_Pose_mB1FE5994A04A3E8CD3414AE77E9B2B1CE057C722,
	SnapshotDescriptor_set_Pose_mA93CA8A804F53AAA6F44D279D15C40E91E7BE969,
	SnapshotDescriptor_get_LensAsset_mDF8CD834659B2C8AE25FFC22E943729D53F87F92,
	SnapshotDescriptor_set_LensAsset_m0106C2529EE9EB5831D6DFD22D9823F8C1B1C75A,
	SnapshotDescriptor_get_Lens_m96C5743A2D6433AC60B5804B8C79811B75E0B09B,
	SnapshotDescriptor_set_Lens_mA06223FB812F1F12F9823776C9D70F23BDF804B9,
	SnapshotDescriptor_get_CameraBody_m941767CABE57ADDC6C9D9203B68BDA419978477F,
	SnapshotDescriptor_set_CameraBody_mB13BDD106DBC224494DAC7DA6DAEDA0151F2FEAD,
	SnapshotDescriptor_get_Screenshot_m9ECD141563B94FA2F81C0371982C3469EB366F5C,
	SnapshotDescriptor_set_Screenshot_mD53CA70B486A86C0D4F8AE0EAB32C1DB5F40639C,
	SnapshotDescriptor_get_IsSlateValid_mE3BB358597B94AF9AECF2868EDA6F8A0F2CAC98B,
	SnapshotDescriptor_set_IsSlateValid_m288EF277E2A1550B4A33D539C115354E17FC7A9F,
	SnapshotDescriptor_get_SceneNumber_m53DC365A72826C00AE3335FE94CFD8E25C5783D8,
	SnapshotDescriptor_set_SceneNumber_mCD550600A447F3109D7B05DCAFED54F8443C68E9,
	SnapshotDescriptor_get_ShotName_mA69AE38FB56C2C2E7B75AE1B384C07983631BC56,
	SnapshotDescriptor_set_ShotName_m3F773DF4E9FBCDBB4DE97232A376B7A0E54B9729,
	SnapshotDescriptor_get_FrameRate_m5FB8E385145CB6E0FCBBB0F82BFBBEA037C15D4F,
	SnapshotDescriptor_set_FrameRate_mE320271C6DC95E99B7EDF8C1B4FDAC57DCBD81F5,
	SnapshotDescriptor_get_Time_mA2BB465F24C230203D74EB2A1EF85AE32E9D925D,
	SnapshotDescriptor_set_Time_m8A943AD17F1514C893E6820FB9D9E8420163F7B1,
	SnapshotDescriptor_Create_m9D90A1F6FB55DEDE750EC1E24966E414B2C5BEA0,
	SnapshotDescriptor__ctor_m9B6AB3D3B6F7B1E005FE25F8EE8419A4A1BA16ED,
	SnapshotLibrary_get_Count_m8C3233FD9A8FA502F26EFBAA5F14F5D3671943DE,
	SnapshotLibrary_get_Snapshots_m731986C0EEB13E3B0909BDDB37E9371A0D0FA4D3,
	SnapshotLibrary_Clear_mA617E9BCB7F6EE410A222BFF5B13A6B9885CA8BA,
	SnapshotLibrary_Add_m323B4768909187D5000E17DB4F65DAE294756047,
	SnapshotLibrary_RemoveAt_m53C9A8528CA10A7C1C72393FE0CC8029927D5499,
	SnapshotLibrary_Get_m88531F591C97B6C9352EDE05B255D3F0A980391D,
	SnapshotLibrary_Set_m761AABAB10C1CF92D0616EF982556E1682ACE3F9,
	SnapshotLibrary_GetEnumerator_m67E71EB7E5E926213B9A068AF3CE851A5E3717E0,
	SnapshotLibrary_System_Collections_IEnumerable_GetEnumerator_m9CDAEC656C8F366F93583E9DFEF49C13DE26A843,
	SnapshotLibrary_IsIndexValid_mC7C5E3648154F42D5E5C489505AD118B50527885,
	SnapshotLibrary__ctor_m5F83E97AC14C36EF2681A6956BCE6A12F0C06D8E,
	SnapshotLibraryUtility_CreateSnapshotLibrary_m495560CBB6E3C9A9B9B65463FA7C2DB845376B31,
	SnapshotLibraryUtility_AddSnapshot_m3554A0852D1CC5D68A0BFB054F45D8F952999102,
	SnapshotLibraryUtility_GetSnapshotLibraryDefaultName_mC4476B7C10557D7E298CA20DD34F6969BC2AF92D,
	SnapshotLibraryUtility_EnforceSnapshotLibrary_mA4FEA03ABC597F74CB08135AB6A40227221770EC,
	SnapshotLibraryUtility_MigrateSnapshotsToSnapshotLibrary_mD16AF0C264495359268107CD6DFBBE6199254EDE,
	SnapshotListDescriptor_get_Snapshots_m581F92B3B82F546A907F4C4EC5C3198A4746A25D,
	SnapshotListDescriptor_set_Snapshots_mCDB8F1DCB52BA11D8AC196C721BBA6BEDF9874E1,
	SnapshotListDescriptor_Create_mE99CDE9676D4AB61B98B5A3649AFECCDFCF502B6,
	SnapshotListDescriptor__ctor_m8570E179E5A8B56FB54BBE2AE1E11DFC57EDD4DF,
	SnapshotSettings_get_ScreenshotDirectory_m577CC71E6334B5E196FF62DE687E51F3B4883EB2,
	SnapshotSettings_Reset_m9ABCAB0FFB5BAA477C27595FE58D950603B5B9E1,
	SnapshotSettings__ctor_mDA2DEFA54F04D0D772B81EC2F1D49E0E95319F5B,
	SnapshotSettings__cctor_m4EAEBD80348B0F37FBA183A5B71FF36C9B8CB441,
	NULL,
	AdditionalCoreUtils_CreateEmptyGameObject_m310A90206101A49B701E2B94290C1153661E66FF,
	AdditionalCoreUtils_CreateEngineMaterial_m7980798DB5D29901564BFB71436C93C75B7B45BD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	FocusDistanceUtility_AsString_m32AEF4E34B906188C7A20933058D9BB17A5C4AC0,
	FocusDistanceUtility_AsString_m3AE7ADC4B0F9BF34748250049D805B7B179C1097,
	FocusDistanceUtility_Normalize_mC99AB919D2658511A2ECCC0AD343E119CD8BFEDA,
	FocusDistanceUtility_Denormalize_m0C7ACD7625709D52F68C0C92CACE7F3B9C014C59,
	ReadOnly__ctor_m32E1DE3C1EC30C774EE3DFF2BCB16CFFB826BDF2,
	VideoServer_IsSupported_m9450FF8BA62824D4F2903B3AA33A0C82D6E9689E,
	VideoServer_get_BaseResolution_mD171903C925D40A82D3B1FA3B4F85AE3272DE3EC,
	VideoServer_set_BaseResolution_m1356196746E357036CE817BDFB494703ADB9F3E1,
	VideoServer_get_Camera_mD1E05CBCA559ABEAACB29219EACB34AEF11D201B,
	VideoServer_set_Camera_m3C1349D7A8D2CE41C1E77FAE2661D97C21F558AF,
	VideoServer_get_IsRunning_mB0610564B7208073705EDCCDB3A22FCD074BA9D4,
	VideoServer_get_Port_mE9C823239804D1EE2506B502FFA48EAD7F54A786,
	VideoServer_Update_m4CDBCF734720F8689C83E5761144B8057344EA13,
	VideoServer_StartServer_mA2207FE492F1CCE482BA174B42564E57B321AC46,
	VideoServer_StopServer_m4F42CEEB30EB3D7DDF872AA4457CBF121834862A,
	VideoServer_GetBitRate_mB509D4E66157D4D21A4FEBA54742EF6F50B490ED,
	VideoServer_GetFrameRate_m873316FA339511845FB6F55309D07248B8A80EAA,
	VideoServer_GetResolution_m6181FE32847F9CCB50AFB034CC8D623CF46E68BE,
	VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_ShouldPrioritizeLatency_m21FF65207F470A832F820BF23E5722E1445108D0,
	VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_get_usesDirectAccess_m0D902F2ECD31190D042ED9843FDE9E4515AA593A,
	VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_get_frameFormat_m215CA0292C2B52A88EECF0AD7FDBE75EA9851590,
	VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_ConsumeFrame_m51FE5A011E489DE2B2D596C3DA6267AFB8791D86,
	VideoServer_Unity_LiveCapture_VideoStreaming_Server_IVideoStreamSink_ConsumeFrame_mF458D8D8FD3A941B12A94B2516806CF07AA9BB2E,
	VideoServer_SetActiveCamera_m76EB02AF2EC44A6CBF9D736B518E8479B30AFF8B,
	VideoServer_RegisterSink_mDA7099FE39DF21E8104BED4F105A0074F0702286,
	VideoServer_UnregisterSink_mF0A20FD1825D12CCFD364B987FEC66F246FD3811,
	VideoServer__ctor_m5D07D56851C1E3B71496CF78AB49FB738331C3C9,
	VideoServerSettings_get_Encoder_mB1C81B6E1FD0D9D01F2BB4E6E5F8D10D3178F97E,
	VideoServerSettings_get_ResolutionScale_mD6318D2C3A79E4CE50133A565F5A98ABD32AED27,
	VideoServerSettings_get_FrameRate_mBFEE9FAB3A325F8A7F618E8AEE60E5F41726F7D2,
	VideoServerSettings_get_Quality_m54EA7AB2E45E98B0B48509DF028BE546FE14B9CA,
	VideoServerSettings_get_PrioritizeLatency_m27F207E47A5BA353CFA5D889CF55A7E90F5884B2,
	VideoServerSettings_OnValidate_mE868E236842FFC1C1EBBA357AFA19DCAF986CFCA,
	VideoServerSettings_Reset_m373871A220AE2F67EEF8E01446157D04668F61C3,
	VideoServerSettings__ctor_m79782BBDF2E11AAD12633FC2DA3594E21FAB2E4A,
	VirtualCameraActor_get_LocalPosition_m74509D75D5E904D0E18C09F21D369816E3856E7E,
	VirtualCameraActor_set_LocalPosition_mC634119CD3478696A277B958DCB1D5FD640F41E8,
	VirtualCameraActor_get_LocalEulerAngles_m8E0521F5D855A3AF3D2272BCB73C05644DDEC1D6,
	VirtualCameraActor_set_LocalEulerAngles_m28FA9EAB73A8F3312D56497B20D5F5715C4757F0,
	VirtualCameraActor_get_LocalPositionEnabled_mBF8B840B0E2BBCE31FC72039DD9F533988696B6C,
	VirtualCameraActor_set_LocalPositionEnabled_mAB73520972D35AA949BF235EEBC377D65F6830E3,
	VirtualCameraActor_get_LocalEulerAnglesEnabled_mE684D0214B135989FBAEF27A2E9F5E2B9A93A4E0,
	VirtualCameraActor_set_LocalEulerAnglesEnabled_m2D5494A548DBFA290CCD2C9F9720BC524AECB003,
	VirtualCameraActor_get_Animator_mD80839D32DE4D7864749093C7AE3B084E89E4966,
	VirtualCameraActor_set_Animator_mE67D10E814E927D9A7E437466843B13A5FD6C876,
	VirtualCameraActor_get_Lens_mE76CD046500726900EFEAD30535F8BF0F70D41BB,
	VirtualCameraActor_set_Lens_m8147AB37C86CBE07A310EDA329528AC57DBD0FEF,
	VirtualCameraActor_get_LensIntrinsics_m6E75687A55D7C9E1F9740B6232DED5DB1954FC1F,
	VirtualCameraActor_set_LensIntrinsics_m9C95E35B27909BF61023820D9CE50091FE1FFBA7,
	VirtualCameraActor_get_CameraBody_m7F139541C9485E773F35C1513643A0CA4E2E7FDF,
	VirtualCameraActor_set_CameraBody_mC6282D74200F265EA6DADA368FC60E792B16AE86,
	VirtualCameraActor_get_DepthOfFieldEnabled_mD6ED7B3E43D58F7BF366EF49DC4046B504C5436B,
	VirtualCameraActor_set_DepthOfFieldEnabled_m675EE057A28F35340C68EBE580E871A283A3C9C0,
	VirtualCameraActor_get_CropAspect_m9B8D3B1C0986AD7793F41A886B08AC003E695610,
	VirtualCameraActor_set_CropAspect_mA16F96E3E97AD07AECE7757C030977EBB1CD92F6,
	VirtualCameraActor_Awake_m317694B8918D0B43CD92263AD18561136C896318,
	VirtualCameraActor_OnValidate_mB3FA0DB6173F7656C57450A6367A34C5E8FFBF9E,
	VirtualCameraActor_Register_mC174793D9BDDD2F3AE5A27D4586284756C533727,
	VirtualCameraActor__ctor_m3A581C3F39C25A013DA83E0918740EA68D0D4319,
	VirtualCameraChannelFlagsExtensions_AreAllChannelsActive_mF72DC3614DD110928A213980F3117B492E0310DE,
	VirtualCameraDevice_get_instances_mFCCD57D3FE1CE33498289F5BEE7154B27B5DD937,
	VirtualCameraDevice_get_Recorder_m686A3372BDABD398C3C4D20D8A4E73196D98DA94,
	VirtualCameraDevice_get_Processor_m49B32DF6D592FFD7D4D80A0FC5ECCBFF2B2D5281,
	VirtualCameraDevice_get_Actor_m9D46215F68F640D83FBEAD891EDC019657086A8A,
	VirtualCameraDevice_set_Actor_m5CE0CC77B99990B26A3B2211751FBF844445E448,
	VirtualCameraDevice_get_Pose_mA05203083DED4627FAE527B12E6CFAA52D97EECF,
	VirtualCameraDevice_get_Origin_mB22E41A10ED2AA8933C17A176C5A47FDB62D859D,
	VirtualCameraDevice_get_LocalPose_m923C85AD81625F904799D4BE52A8FD9D125AA5EB,
	VirtualCameraDevice_get_Settings_mC95ABB66503B9583405854FE18EC64CDF86D37A6,
	VirtualCameraDevice_set_Settings_mF2519FF39DF29C00F735BDC1A74309EE6699E794,
	VirtualCameraDevice_get_Lens_m7942C25C0295728AF3185C68AD9BD65E3916B1B1,
	VirtualCameraDevice_set_Lens_m74CD8FDD71624F687A8699AC2DC6E291D8024E89,
	VirtualCameraDevice_get_LensAsset_mC0FD50AEE4590BFE0720088119EDB2BEA19D6CDE,
	VirtualCameraDevice_set_LensAsset_m7A8C883EB41C0413606EAF77D1D52B181C35F508,
	VirtualCameraDevice_get_LensIntrinsics_mCE087DD2FF0180918F4BA98C3D121238E2ED59A6,
	VirtualCameraDevice_get_CameraBody_mAAF45782C04427B0F50BFB812CACD38316CC1DD6,
	VirtualCameraDevice_get_SnapshotLibrary_m63ADE676D0FB9BB21D58483BDE68FA0182360ADB,
	VirtualCameraDevice_set_SnapshotLibrary_m83CE89487C24CE60841BF0BA044927554E335131,
	VirtualCameraDevice_TryGetInternalClient_m31262E1C89884190A24C01D8FD9B403455834AC0,
	VirtualCameraDevice_InitializeDriver_mB909BCD7A15178386B3766C93C96420ED4E105CD,
	VirtualCameraDevice_SetupProcessor_m8E143AB49BEBF52626310A68704215773536B071,
	VirtualCameraDevice_Reset_m816E2C1BA4EFABE35E41FFADB9B07231E9954081,
	VirtualCameraDevice_OnValidate_mE50C384E3C90E66C268CF27B05EC8EF75072276D,
	VirtualCameraDevice_ValidateActor_mC60C89C2388FA867377E7AA0CD21C5DC91689CC9,
	VirtualCameraDevice_UpdateOverlaysIfNeeded_m4DCA3C5B75FD90827A491EF11212D055317A8386,
	VirtualCameraDevice_ValidateLensIntrinsics_mBB21FEA3B85471F4B8E4AA6732AE6E8A23F22DA2,
	VirtualCameraDevice_OnSlateChanged_m7F35F86BB934BF853EAFBDDEDA74ECC89B112E1B,
	VirtualCameraDevice_OnRegisterLiveProperties_mB754790FB70DD3576C28505A333FAE8D8207BC40,
	VirtualCameraDevice_SetScreenshotImpl_mBA7A0BBD98DAFF1AE30C5124E95A62FA9ABFC160,
	VirtualCameraDevice_GetSnapshotCount_m30CEDCD03AB3882972CF016FF722D750FF3C16CF,
	VirtualCameraDevice_GetSnapshot_m6041F1F7D5314B10FA957F637682A0E808401373,
	VirtualCameraDevice_TakeSnapshot_mCFBB1672FFAC650EE8AA3E5980188B47D568F0CC,
	VirtualCameraDevice_GoToSnapshot_mBC7EB9DE42E517CF6A2E7DC751453B2A1814E940,
	VirtualCameraDevice_GoToSnapshot_mF2F5C928F3ACECCB5D6E7B4DF2EA88EC50A257A2,
	VirtualCameraDevice_LoadSnapshot_m15AC42F83D3BD466D6AC8B9DB9393786F9C15718,
	VirtualCameraDevice_LoadSnapshot_m1B0DEF5676CA0DC6F4B18AD362244B382FDB8C67,
	VirtualCameraDevice_DeleteSnapshot_m1DC89DCBF86BD64937813314668333DF02271E9C,
	VirtualCameraDevice_Awake_m5089B8ED8F32314D85653CA6B2CFC1EB23FCB40F,
	VirtualCameraDevice_OnEnable_mCFCCB558CE13DAB68F7F5987D2206497FEEB2D80,
	VirtualCameraDevice_OnDisable_mB73DBDC3A40AA8C95B8F762D09220D4B77BD4259,
	VirtualCameraDevice_IsReady_mA904264B0B82AFF5DF31BFDC96FC6970473CCF5B,
	VirtualCameraDevice_Write_m1BAA0391357D4E7034C1A6F29AD512F7D9C50E0B,
	VirtualCameraDevice_GetVideoServer_m518E09AEF573B96C4A92BDD0D01E8E55B1DF8939,
	VirtualCameraDevice_RequestAlignWithActor_m9C2303ECF780F249A43ED952763E45E3B32C8196,
	VirtualCameraDevice_SetOrigin_m1646BB9EDCB1386A5A99A84FB2E0F2B513BBC21D,
	VirtualCameraDevice_SetARPose_m50E887BDB92CD2FCB4F063AFDD3BAB385681E74E,
	VirtualCameraDevice_RefreshRig_mB667F831C724A9B4ACBC1AA0A07D3CCC59EE4C51,
	VirtualCameraDevice_SetFocusMode_m5DD1DC1E57FFF767596830659A3EADC463030F0E,
	VirtualCameraDevice_SetReticlePosition_mD8DBC0A8605144099F805C259B08610184D5021D,
	VirtualCameraDevice_UpdateClient_mAAF8103BF088B17DF07EA9002BB40F973CD50F34,
	VirtualCameraDevice_MarkClientTime_m9144F9880967FA1EB15A93FBD2BC46AA5EB4A409,
	VirtualCameraDevice_UpdateDevice_m41F6E852F783BCD4C7DE0745A7A9A2344DD493E4,
	VirtualCameraDevice_LiveUpdate_m50FE9908AD7234858F0AF8E61D24864C8E0C643B,
	VirtualCameraDevice_UpdateActor_m32ECCD7D55E039BE318D799852620B77131FB862,
	VirtualCameraDevice_GetCamera_m69B04BBC2711DA54E5FD8A1BCB731C31BAE74999,
	VirtualCameraDevice_GetAssetName_m7E542F1B678840A8596177727F1ACDC3C4E30A0D,
	VirtualCameraDevice_OnClientAssigned_m52363B4E6B8F248318FC2A037E2556D94A510643,
	VirtualCameraDevice_OnClientUnassigned_m97F5FE27F21D389DB23B742EE5C253D68EAF3D24,
	VirtualCameraDevice_Register_mE83627198CF85DB1E88A44A9EE1B4061F94E55A8,
	VirtualCameraDevice_Unregister_mFFF368DB144FEE11E041A26B42D780A3A5DAC011,
	VirtualCameraDevice_OnRecordingChanged_mFC2A02A13608081E5C620E75CEE7CFFFAC202B7F,
	VirtualCameraDevice_UpdateRigOriginFromActor_mA7CADE58F75E33F4A358542654E230E675D84277,
	VirtualCameraDevice_OnChannelFlagsReceived_m522024D85C4364ADF1E5F1F454BF5B703723D78C,
	VirtualCameraDevice_OnInputSampleReceived_mF31E54E1C5F83A3AF94CE80627972784BACC606E,
	VirtualCameraDevice_OnFocalLengthSampleReceived_mD34177CB63C97A7C3BFF6DE953586F75C60D532C,
	VirtualCameraDevice_OnFocusDistanceSampleReceived_m17717FE47ABC49089EBDDA87057AB23B7FF8A649,
	VirtualCameraDevice_OnApertureSampleReceived_m12A28083724B6E2F83223CC1946443CF6E61C1A8,
	VirtualCameraDevice_OnDampingEnabledReceived_mA9B4BBBF244AD838642303A2B2ECBB6E4DA5D0BC,
	VirtualCameraDevice_OnBodyDampingReceived_mB84C4ABE05355F6A37EA12F57747A7717BD7FCA9,
	VirtualCameraDevice_OnAimDampingReceived_m6A599B51127882831A77A88B13857C139B1D01C6,
	VirtualCameraDevice_OnFocalLengthDampingReceived_m585F4E4627DE56E50F8AA49DC457E84C4B50D889,
	VirtualCameraDevice_OnFocusDistanceDampingReceived_mE9E0ED50FFB1845622C79BF9F8BBDC6F44F0FD18,
	VirtualCameraDevice_OnApertureDampingReceived_m68FC9D7808D3C414BB572DF85A61F1692DA2C7E9,
	VirtualCameraDevice_OnPositionLockReceived_mC08F5EAC68736E1F9E0F5CA28F6ADC250D7A4142,
	VirtualCameraDevice_OnRotationLockReceived_m2F77121F0D4FB162FAF4ABED7639DF0E4C741B63,
	VirtualCameraDevice_OnAutoHorizonReceived_m789A4532BF11E05B73C38B6EDA493F78BB3192B2,
	VirtualCameraDevice_OnErgonomicTiltReceived_m1A88584C081CD0904C667C69E6D9536BB672E60A,
	VirtualCameraDevice_OnRebasingReceived_mB64DA26554A9D0837DA8977F2B72C12FC61A76FD,
	VirtualCameraDevice_OnMotionScaleReceived_m3ED094B3BB12DB0FB4A50C168FB96C29FCB70518,
	VirtualCameraDevice_OnJoystickSensitivityReceived_m84FF718E85F61D831886C7BE6EDB02963B98C29B,
	VirtualCameraDevice_OnPedestalSpaceReceived_m6F4DFB70D1ECCC8743F7D0D9672BB907F4893441,
	VirtualCameraDevice_OnMotionSpaceReceived_m0F6F2EFC0B203824A302DDADFEF8B3BA5914DE12,
	VirtualCameraDevice_OnFocusModeReceived_m42C5A7A2F8FF4C91B7BD3D07DC4A8A0EBD7BF220,
	VirtualCameraDevice_OnFocusReticlePositionReceived_m96302A05A68484C9AF2996283540BDE19EC430A6,
	VirtualCameraDevice_OnFocusDistanceOffsetReceived_m04D03C0AC4624A06030A2141B4E3D383373AFEC8,
	VirtualCameraDevice_OnCropAspectReceived_m13F346D5335C11BC2B8960ED242920B9ECF05656,
	VirtualCameraDevice_OnGateFitReceived_mB8605FD8384968D67073EB02640F24B72A1A67F9,
	VirtualCameraDevice_OnShowGateMaskReceived_mBAF1C645EC5EE961DBACE2EC6290504250ADA9CE,
	VirtualCameraDevice_OnShowFrameLinesReceived_m9A9684FFE523FC5565829FE6260E94E65E21B575,
	VirtualCameraDevice_OnShowCenterMarkerReceived_mF0159041280B87272E94D0E4CE88984E8F61568D,
	VirtualCameraDevice_OnShowFocusPlaneReceived_m13B0AC06A70DE956852C0B65F65172452E3F300D,
	VirtualCameraDevice_OnSetPoseToOrigin_mAD5F73D98072F99DBC5164AA63F04417FDC48186,
	VirtualCameraDevice_OnSetLensAsset_mF80EB7AE790250321ABF1E5D141C65350630F14E,
	VirtualCameraDevice_OnTakeSnapshot_mA5795C840CBA287694D6781E2FA31DF5C659D292,
	VirtualCameraDevice_OnGoToSnapshot_m21E8B5BDCB1347B9F6E50E1A7BA981BD233FB45A,
	VirtualCameraDevice_OnLoadSnapshot_m02FAD8980D7B1F68A5D7AFC5FADCC181E4174C6E,
	VirtualCameraDevice_OnDeleteSnapshot_mB4CF7FA25FF969EA1E237CFED6B560E9405F8613,
	VirtualCameraDevice_RecordCurrentValues_m9547314D2B6DE2D3236DCE8F5CC36A23ECD819A2,
	VirtualCameraDevice_UpdateAutoFocusDistance_m43BE488572AA94D851A21E2A3DC42CB3F63CF67F,
	VirtualCameraDevice_IsDepthOfFieldEnabled_m166284A4EF3DB8ED367E585047900C28E1DD93B2,
	VirtualCameraDevice_StartVideoServer_mB23B0979BB924D0D51E7F681CEB2F70D09CC9B21,
	VirtualCameraDevice_StopVideoServer_mBC53F1806FE77C3A47D987E53A983973C03E2977,
	VirtualCameraDevice_InitializeVideoResolution_m9A9507ECEF51F904E018DE3C3B1D28224F391009,
	VirtualCameraDevice_SendChannelFlags_m72493E8A5FDD24F308CD3C9765C444F8EE5DF00D,
	VirtualCameraDevice_SendLens_mF8FBAC8772F5AC57252FF079F4E0D14A289DE878,
	VirtualCameraDevice_SendLensKitIfNeeded_mDD7C25F660F44EE7487736F7880406A5EC1DEA78,
	VirtualCameraDevice_SendSnapshotsIfNeeded_mB8E186220F280566FDA7E9AA901C52B8FC7A00D2,
	VirtualCameraDevice_SendCameraBody_m250BA7BEB744C30C58AD5EEE02B756D9264E2353,
	VirtualCameraDevice_SendSettings_m362E356799FBDE3791B5B5F90EE6E3388C323395,
	VirtualCameraDevice_SendVideoStreamState_m832B76CC27AEF2AEE49AE76D9A7DCA835084C3AC,
	VirtualCameraDevice_get_IsSynchronized_mE303AE9C31003C0065ED14887E7FA480312033B6,
	VirtualCameraDevice_set_IsSynchronized_m73845E37B56F23B856909EA1FC59B332EDEFFA93,
	VirtualCameraDevice_get_Id_m80FA745417675658BD302EDB3BE2D3CBC618EC26,
	VirtualCameraDevice_Unity_LiveCapture_IRegistrable_get_FriendlyName_mB8E3E32F943C9C2734DB8B6923A9A2D89B0B6124,
	VirtualCameraDevice_get_Synchronizer_mBCF71C46EB33D038160AA51EFA949AF0FE21B2E5,
	VirtualCameraDevice_set_Synchronizer_m6EA56C23A7A2B0A23066A0FF5BBDD6E21C554782,
	VirtualCameraDevice_get_FrameRate_m7D3A7EA16F659E129F6AD73E43CA0DEFE14E3ADC,
	VirtualCameraDevice_get_BufferSize_mCD6F80C0E37D2C7D66731279F0E7676F37CF842D,
	VirtualCameraDevice_set_BufferSize_mBAF4765DF6AD05CF9CDD0D14DA0EFAA0E49E831F,
	VirtualCameraDevice_get_MaxBufferSize_m3002D8A825D3C185FBBE0244096528EA6987A287,
	VirtualCameraDevice_get_MinBufferSize_mBEC8161E23DB2E382336E83EE51306285318B8F2,
	VirtualCameraDevice_get_PresentationOffset_m3E2DAA0E0ABC30CB58AD9BF602D616DD84D9A8F4,
	VirtualCameraDevice_set_PresentationOffset_mF17C92DF13DBEA8655AD82E495611915FB9D8B52,
	VirtualCameraDevice_TryGetBufferRange_mB859454FE0E80B37E31537A1230543F8A6060B95,
	VirtualCameraDevice_PresentAt_m7E0F4BFE68BD129CB9E0261DF95525777D39F85B,
	VirtualCameraDevice_Process_m0B1A15D13A82F99ABFC98018DEA0D1A7A040DC8E,
	VirtualCameraDevice_UpdateFocusRigIfNeeded_mD06E13C7A4CE1D04910C2D027E8F3B389E54E33F,
	VirtualCameraDevice__ctor_m339FA2303B33AB8CC98E0E052EAFBC8355749CE4,
	VirtualCameraDevice__cctor_m870E04667AFEBC79CF4D9660077183B0401FF387,
	VirtualCameraDevice_U3CSetupProcessorU3Eb__67_0_m35D791087EA6E52F457AA0DCBB5AA2700C71391F,
	VirtualCameraDevice_U3CSetupProcessorU3Eb__67_1_m45FA3645F003A49A292B7658B5E1F133678A1E6B,
	VirtualCameraDevice_U3CSetupProcessorU3Eb__67_2_mFBFBA98441746981E36509164A1766AB90331F78,
	VirtualCameraDevice_U3CSetupProcessorU3Eb__67_3_m0162325BCFA8AFD385C33506F6230F39AEF8E217,
	VirtualCameraDevice_U3CSetupProcessorU3Eb__67_4_mB74F6F58804EF74D0C74CAA65B989501922CF86C,
	VirtualCameraDevice_U3CSetupProcessorU3Eb__67_5_m82B92E9FD273F9D156EBC532B82B5D5EDD4CB21A,
	VirtualCameraDevice_U3COnRecordingChangedU3Eb__107_0_m5690AEC447453DE97FD6DC701A2F7D604B4E5482,
	VirtualCameraRecorder_get_InitialTime_m76444B16E7970E58DA20188B176AA3D07AF3348A,
	VirtualCameraRecorder_set_InitialTime_mA63B0CEB5A0ED6CBE352B970F45334959D9C3724,
	VirtualCameraRecorder_get_Time_m2689017891EB80B21249A71B7FCE3CF3986A2FD5,
	VirtualCameraRecorder_set_Time_m314D06DBBDD68E20A48E18E290AC2FEE755D88B0,
	VirtualCameraRecorder_get_ElapsedTime_m4BFED7D60F23010366BB67C401D66BE6E6BE4E39,
	VirtualCameraRecorder_get_TimeOffset_m70B04ADCE57A79D3DB84ABC491B1F25E9FFD275B,
	VirtualCameraRecorder_set_TimeOffset_m890F118938156AF67953DAF6BEF3292D1E081EB4,
	VirtualCameraRecorder_get_RecordingTime_mAAF3C5127AB280ACE6DD5AB04E1371BA68994A54,
	VirtualCameraRecorder_get_OnReset_mF545B3728789921531C689CC9F36487D032F736F,
	VirtualCameraRecorder_set_OnReset_m4FEA12899BB3FF4D157BF3050092F88B86258F99,
	VirtualCameraRecorder_get_PositionError_m0C010F45DE6D8D957E3FCC3D154A35D0B8E0D2FB,
	VirtualCameraRecorder_set_PositionError_mED26ABC5EE84B6831B4166A5E69873E1831A9050,
	VirtualCameraRecorder_get_RotationError_m5B6728A451B9F63EAEC13E6A41E9123BB1AC1D15,
	VirtualCameraRecorder_set_RotationError_m6BBBFB58A228899EC65759C8AF4A691BBFB2C2FA,
	VirtualCameraRecorder_get_LensError_mE95575281AB062F711803CBF8E1C83E4C4567EF1,
	VirtualCameraRecorder_set_LensError_mF8A0C3C95C3B3008EA2502966B0D7D28366CFEDC,
	VirtualCameraRecorder_get_Channels_m1C9EB8CECF1236235EE00CBC7D02510981CA0CF0,
	VirtualCameraRecorder_set_Channels_mABADA918699AA918AD70581C7D86B3E32E0C3C6E,
	VirtualCameraRecorder_Validate_m54B1AFCD6D033AD77126DD1D3E7382225F70CE8D,
	VirtualCameraRecorder_IsEmpty_m7A13271CA1A6CC40A40E5742C7579BB42FD82DFA,
	VirtualCameraRecorder_Update_m1593B26A254F39C10E0217789082BA68F4E47415,
	VirtualCameraRecorder_Prepare_m4F66DC66E13ADC65BB6688AADC82D02B54B874B6,
	VirtualCameraRecorder_Reset_m8FD584A035D714E60B4F145BBDEFA4EBB232A859,
	VirtualCameraRecorder_RecordPosition_mB1360C99BA7BAFB9960053C0749FD3FF02CE5DAC,
	VirtualCameraRecorder_RecordRotation_m04A6562E23446CF56533B56C3060DD44022CC362,
	VirtualCameraRecorder_RecordFocalLength_m5187A14615A0672075CF23DFECF6FE7A1DBBEC15,
	VirtualCameraRecorder_RecordFocusDistance_m9CDAE497B53FA99E0C288306C57307447355629D,
	VirtualCameraRecorder_RecordAperture_mC9DFE10FF9E6D8DF4EE4D973707CDCFAE95B6AB9,
	VirtualCameraRecorder_RecordEnableDepthOfField_mC7B97C6EC9102A017B2D951FF11F20AC283A0127,
	VirtualCameraRecorder_RecordCropAspect_m49000604D52F267ABC3267A92AF04928EBA70D0E,
	VirtualCameraRecorder_RecordLocalPositionEnabled_m015C02BBA038E65524AE52680335C24B63B2A0AC,
	VirtualCameraRecorder_RecordLocalEulerAnglesEnabled_m8DA490563720CFDCB89DEF4FDC0BD95055363950,
	VirtualCameraRecorder_RecordLensIntrinsics_m6C15EE9EC3259D282D6D5A2F8A70680628956F7D,
	VirtualCameraRecorder_Bake_m4CD61FC4F803FEF071A3DA2BA61904F9A7C9A733,
	NULL,
	VirtualCameraRecorder_GetReduceable_m904397A1EADB45E30F842E040DE06712DAB4D286,
	VirtualCameraRecorder__ctor_mEC363E1EA20C4C50855967A943671B3D5B72891A,
	VirtualCameraTrackMetadata_get_Channels_mDC27A44C4ECCDF57468E0ABE5CE6832D68BADEB0,
	VirtualCameraTrackMetadata_set_Channels_m5DF8B8104E9356D78AD63BA5F10FEE219AC05AE7,
	VirtualCameraTrackMetadata_get_Lens_m4A471F02C1BA3D01E5B051AA0FA22904A7A0B27C,
	VirtualCameraTrackMetadata_set_Lens_mAF1B78952DDD0CD1A1EC19DA0458050F2CF2AF24,
	VirtualCameraTrackMetadata_get_CameraBody_mD20B760931C14C89ACA775B89B06D3CA01ED463B,
	VirtualCameraTrackMetadata_set_CameraBody_m85210EA0D6626B7EA20F3BCA302C5487912A1555,
	VirtualCameraTrackMetadata_get_LensAsset_m0A909833DF0464D9A73CB94E8B833C14AD254012,
	VirtualCameraTrackMetadata_set_LensAsset_m3EA638D9E89F2E9A2A0DA621FFFA112476549E85,
	VirtualCameraTrackMetadata_get_CropAspect_mC42609F83FDF5BF0EC4EAFF650B6558D28EF30DB,
	VirtualCameraTrackMetadata_set_CropAspect_m6C8532F4CF33A0D3B2E0DC8F356C40C95F0A48F6,
	VirtualCameraTrackMetadata__ctor_mC0FE4A066FAAA8119A872733422BDA2ACAFC9FE6,
	VirtualCameraDamping_Calculate_m3C40D8D2B81A42BA97C9758541C7168182A7820C,
	VirtualCameraDamping_Damp_m91ECF7AE3024A7B9415D98992F2E459820A0F591,
	VirtualCameraDamping_Damp_m2A966F08B3E69C18F4EB202045E518733F05B54C,
	VirtualCameraRigSettings_get_Identity_m5E2540EBD5395AEECC61A9A2A22153137D2CD360,
	VirtualCameraRigState_get_Identity_m3E747B7DECFFB95EAD8970D62C120F8C987CFB76,
	VirtualCameraRig_Update_mF795DEBB219C9A1AC2E69F2B9EA545FFF54AC9EC,
	VirtualCameraRig_Rebase_m768F52ABE40F7BC48F5310512278A40C265CAD2E,
	VirtualCameraRig_Refresh_m4F2D4DE4ECB53288A89F525C8DBA1C76A6550363,
	VirtualCameraRig_WorldToLocal_m6A6E6C2E79235461E1E1C30BF0196C7B8B07EB85,
	VirtualCameraRig_Reset_m5F94CCA029FC32DB1EFB5B91FC3304E19560D024,
	VirtualCameraRig_Translate_m3543EE0FD850762D5307FDDECA31DF9FA01D6B8B,
	VirtualCameraRig_Rotate_mF2E14060BBE7D00E351C3FE95AB6B93AA12661F8,
	VirtualCameraRig_ComputePose_mCBAAD835691E518FF411A9989EF912452CCBAAA5,
	VirtualCameraRig_Mask_m38EDF6F881CCEAD60502B7DBEEE24912443378C8,
	BaseRaycasterImpl_Initialize_mA767FBF0A7173CFE19785C8EE4D88567F62669EB,
	BaseRaycasterImpl_Dispose_m1E179FB735AF786D094D350E1EA6CD3D82564172,
	BaseRaycasterImpl_GetPickingShader_mC136F1901B02D2F88B049FA5418AB58991474865,
	BaseRaycasterImpl_GetPickingMaterial_m38520C0C34C739B16826960C0C6E69F104C027BA,
	BaseRaycasterImpl_Raycast_mF0C4EAE32DA7C766928F6B02B0AFA460D925EA35,
	BaseRaycasterImpl_Raycast_mAC358FBC2CEE4399D4FDBA9DCE525588178D15E7,
	NULL,
	BaseRaycasterImpl_ReadDepthSample_m50390A7B72375B275A75C1ABAB1CFFBB82CC2A4D,
	BaseRaycasterImpl_ReadColorSample_mC6A7CA0409AE9DA3FA628EB3C4499F7EF32664DD,
	BaseRaycasterImpl_EncodeId_mA7F63A46C00EC93699B717ACC29F74FB38A09122,
	BaseRaycasterImpl_DecodeId_mE0D6ADCB43018936DC00123768BE52ADF09D0044,
	BaseRaycasterImpl_LinearEyeDepth_mDEB37E43613B1CE74AAB3D62A2060291C417E313,
	BaseRaycasterImpl__ctor_m76756F8D7826CD231A6C3AC68BE751BE16EC3556,
	PickingScope_IsActive_mBB780560528D2464EDC05A5BF921318DE71915BE,
	PickingScope__ctor_mEBCAB84D22F6C04A22780FC32C6990539C799220,
	PickingScope_Dispose_mACF5C3AAAB83F5E5FB2E2E807F0498F2CE711CD6,
	PickingScope_TryGetObject_mEA564C8484FEA66939A5749DB9785746E2DEF30B,
	PickingScope_UpdateObjectIds_m7B9212908D5496F9BB3B4BA0D8070F36FBBD2149,
	PickingScope__cctor_mFFA25C75BA9F25B2BBE8DDFBB2D677199A59B13B,
	GraphicsRaycaster__ctor_m111632A5461AD317BB1CCB54B33A694F75EBB7C5,
	GraphicsRaycaster_Dispose_mB85AD5BA45D6B3BAAB8F739BBCFF279B92B9BE60,
	GraphicsRaycaster_Raycast_mDF48CEC5FFE4D8566EBC14681FEE03D97FAAD48F,
	GraphicsRaycaster_Raycast_m052689B6AAD1A16A130869FC68DAA0E5927ABBC0,
	GraphicsRaycaster_Raycast_mA7A63A69EE42BA1B88B1F808837D217DB86D8D2E,
	GraphicsRaycaster_Raycast_m963E99759C289D520A4F978252DB6439C98BAC14,
	GraphicsRaycaster_Validate_m95CD80683A768BE9F33AF48FAD7B0D4C4471EBE1,
	NULL,
	NULL,
	NULL,
	NULL,
	LegacyRaycasterImpl_Initialize_m68B0B9CAA6414909DAA565E7B4D82594F699801B,
	LegacyRaycasterImpl_Dispose_m9671E3BB17BB4663C411B3111FB5402C22E4DFFE,
	LegacyRaycasterImpl_Render_m3BAF0A682137BD44A45D4EE0626E533977647B45,
	LegacyRaycasterImpl__ctor_m87691EF240F72C3E55F2EBCC8236D5E4F4C10CC1,
	LensAssetDescriptorV0_op_Explicit_mFDB400878DCB7EC52EE4F34587C1A85039591DF8,
	LensAssetDescriptorV0_op_Explicit_mEA83689723A3D2EECBF981D0BDDD7AD7057ED6EF,
	LensAssetDescriptorV0__ctor_m30CD7B566CA8C4DC8600BE593678B415F3959194,
	LensKitDescriptorV0_op_Explicit_m32C9F5846451A30CBA2F8338F80B1B8F6C2C6C3B,
	LensKitDescriptorV0_op_Explicit_m93804BD98418BE83CFB8D1A95BCCFE4C26262AA8,
	LensKitDescriptorV0__ctor_m6186E504DEAEACEBE4FDDC26E61486DDC526CA36,
	U3CU3Ec__cctor_m7432C504ACCAEC5BEA668F676A6ADFE022546BCE,
	U3CU3Ec__ctor_mCA8C6D4AC13E5316BBF14D0997420881A68CD546,
	U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m096B447D589D9AC8A02C51CA5946B00083099F19,
	U3CU3Ec_U3Cop_ExplicitU3Eb__3_0_mC8B298FB61DD67F233659CB21C6C42CB9CF8116B,
	ApertureSampleV0_op_Explicit_m81E02C422BAAF8EF6D6EA311B5EEDE3173E8456B,
	ApertureSampleV0_op_Explicit_m917B2E1B4D18BCBD4FADE049138D8BE2CF412F76,
	ApertureSampleV1_op_Explicit_mB142C00D24D5797270BF9B492AED23F540C5FF91,
	ApertureSampleV1_op_Explicit_mEA1CF1F621D6B95792A6D876AC17DB3509F3ABB5,
	FocalLengthSampleV0_op_Explicit_mA36729993193323C13B8AE44946A806485631097,
	FocalLengthSampleV0_op_Explicit_m1C543FBF8F34D4F1FAC27A052210D9494358F38A,
	FocalLengthSampleV1_op_Explicit_m78A9441C17CAF68030B19FF51CFD3613F0550818,
	FocalLengthSampleV1_op_Explicit_mFD782A20968CBB0AFA63A953535A8BE2FCD146A9,
	FocusDistanceSampleV0_op_Explicit_mDFFFDDD9834EDE097AE6575EE3ADE0248809DDC0,
	FocusDistanceSampleV0_op_Explicit_mA2A43C79C2CDA3F137EBF299C8ED346B58C6A881,
	FocusDistanceSampleV1_op_Explicit_m026A30D01801C4D5D09FE42B6BE4ED9EED638653,
	FocusDistanceSampleV1_op_Explicit_m443554D544AD6DDBF6FD8509B7A15016D166A439,
	GamepadSampleV0_op_Explicit_m24FEE9FA82C9C3DB7CBFAB45B887CAAF97316BB2,
	GamepadSampleV0_op_Explicit_mDF048704531B41E8D1338A39B8A68DFE1C53EDE4,
	InputSampleV0_op_Explicit_m7D824315E8D45976E862C13D92128323832EA52E,
	InputSampleV0_op_Explicit_mD9B3D63B59A3E8DC8DA6612B2184E143CEEB88CE,
	JoysticksSampleV0_op_Explicit_mC31CFD290FAF9804CB39E34DFEE22F30CE50C4F3,
	JoysticksSampleV0_op_Explicit_m4880073A4F424D78E5F22D496F7B96A9F38F746F,
	PoseSampleV0_op_Explicit_mF4923B318359F925FF9A23D5593A465284CEABE1,
	PoseSampleV0_op_Explicit_mD34060DFB8123E7AE9106C018251122B437BFB32,
	PoseSampleV1_op_Explicit_m61EDD46CD427FDD54E43056012BF07BC9A7BA5B9,
	PoseSampleV1_op_Explicit_mC721B2CA5077EF2C426F5CB9ACD8C1B31D753927,
	SnapshotDescriptorV0_op_Explicit_m09F4D2D5B7E9A2428A76C39D31F6E7B94D964915,
	SnapshotDescriptorV0_op_Explicit_mFDBFBAB8598FECA11EEEA18E3AFD85B11DE4A24F,
	SnapshotDescriptorV0__ctor_m3FA544279213A088132228746238808AC623FDBB,
	SnapshotListDescriptorV0_op_Explicit_m168DBCAC86177B0603C6F76AD11FC97B5AACF481,
	SnapshotListDescriptorV0_op_Explicit_m3FFF441DF6C7A855EBC92406EF41E33D029D945D,
	SnapshotListDescriptorV0__ctor_mD08434DA481C7328D2D54FCA810988188DA083DB,
	U3CU3Ec__cctor_mEBA1D6932DD46E23E611727E3AC34230D1496E23,
	U3CU3Ec__ctor_m0F4E84133BCD78D928C554895561DC7422839CF7,
	U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_mF8867F098F1F6827FE71F86382E1926897087594,
	U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_mE905168B1DF0A91DACF4BB71E046EAB8D88D7E59,
	VcamTrackMetadataDescriptorV0_op_Explicit_m029DEAAD164D045997FECDC094389BB6109A7847,
	VcamTrackMetadataDescriptorV0_op_Explicit_m1DECD1F959809A35188B987A98922E68449B8A60,
	VcamTrackMetadataDescriptorV0__ctor_mC1C86C1A5495EE7F4F2D99DEE149349A24DFEA7B,
	VcamTrackMetadataListDescriptorV0_op_Explicit_m08437A2A9903416B43FB6CC1498921A8A96988A8,
	VcamTrackMetadataListDescriptorV0_op_Explicit_m4845A808722FFDF97F814BCF9F0C77AFE00A0D44,
	VcamTrackMetadataListDescriptorV0__ctor_mAC1023181CA0DE19366D11E955474DC85B198528,
	U3CU3Ec__cctor_m6BD455B473288FC6D9D9ED3B7E0A56ECB49E80BF,
	U3CU3Ec__ctor_m767B956925C838B7F84903A6F8970E7D626B5796,
	U3CU3Ec_U3Cop_ExplicitU3Eb__1_0_m80FFE1EE9D05F287484713CA83C37A28C27FDDD0,
	U3CU3Ec_U3Cop_ExplicitU3Eb__2_0_m2A9CEF6FCEAD72AFFED0F22733D1F2C5AA919557,
};
extern void CameraBody_get_SensorSize_m57BD99794EB2B8FD6726BD4C7EFCCBDBCF239E19_AdjustorThunk (void);
extern void CameraBody_set_SensorSize_m538765E6BCE5EAC9303CB6D24E17451F2E2F4534_AdjustorThunk (void);
extern void CameraBody_get_Iso_mBD7E43DF43AB68AB691C3834EB837BE77DCC65F8_AdjustorThunk (void);
extern void CameraBody_set_Iso_m3D13402100F58A2DB9929C0444A18B210AEE8673_AdjustorThunk (void);
extern void CameraBody_get_ShutterSpeed_m6488A7C82A70358E47079EEC1582980635DEAE16_AdjustorThunk (void);
extern void CameraBody_set_ShutterSpeed_mCDE51EAD272A5FBAC62475BA9B702FC30910C3B7_AdjustorThunk (void);
extern void CameraBody_Equals_m8215DA58FF64F84F98278B7E32DA0CDFEA2663FA_AdjustorThunk (void);
extern void CameraBody_Equals_mDDCEFB8B12B2AC84FA7598B7668078CFB2E2E202_AdjustorThunk (void);
extern void CameraBody_GetHashCode_m2A692D08A175E7CD17788FFA274420ED0F365FE0_AdjustorThunk (void);
extern void Damping_Equals_mAB5DA5F5581E0271980BF208BC9FE40009048D33_AdjustorThunk (void);
extern void Damping_Equals_mC63B6C8C9E6EE517E46A5D0035E8F8CD2EC3CBB4_AdjustorThunk (void);
extern void Damping_GetHashCode_m832DD9394B86353889C1A3EE90EA8D3547FB7B09_AdjustorThunk (void);
extern void Lens_get_FocalLength_mBE4A25CFE01DA0040A5BCCA43CB6C54AB264E973_AdjustorThunk (void);
extern void Lens_set_FocalLength_m1CA608D42692D55DDA0AD6E1D9FE8309183AE85D_AdjustorThunk (void);
extern void Lens_get_FocusDistance_m00087F445C45AEAD6CC931F19127202F1064C1C0_AdjustorThunk (void);
extern void Lens_set_FocusDistance_m537518C8ECFA42957360C31730E3CBEDB7D42545_AdjustorThunk (void);
extern void Lens_get_Aperture_mCB8A88845749E454FC6397D6F5AAE16A17F64AC6_AdjustorThunk (void);
extern void Lens_set_Aperture_mE793F3CFEBB9A6E9EB75CD4AF837A49CF8BE14C8_AdjustorThunk (void);
extern void Lens_Equals_mE180110E0AC18C9F1B6A70F071A327329F6B8065_AdjustorThunk (void);
extern void Lens_Equals_m10275F066902B301B1103088AA576BA31505015A_AdjustorThunk (void);
extern void Lens_GetHashCode_mCA26CA57BCB505F566D30E1C5A4AD33321BFF903_AdjustorThunk (void);
extern void LensIntrinsics_get_FocalLengthRange_m025EC2905CDCC404164BABC592A0283BF2A5637C_AdjustorThunk (void);
extern void LensIntrinsics_set_FocalLengthRange_m78490921319A48BC3E4DF149B886169E7C18C405_AdjustorThunk (void);
extern void LensIntrinsics_get_CloseFocusDistance_m9F5BDA5846E204157501009F6F8C6F6013F3F2C8_AdjustorThunk (void);
extern void LensIntrinsics_set_CloseFocusDistance_m5414DB32227ABCB4F433A11010BA2B5B23126A0B_AdjustorThunk (void);
extern void LensIntrinsics_get_ApertureRange_mC5FC518909DBFF1016CB4E4248E7ABAD9AEFD722_AdjustorThunk (void);
extern void LensIntrinsics_set_ApertureRange_mCA78AF2F423D4E2C7F82D0781FC7AB2D2699A485_AdjustorThunk (void);
extern void LensIntrinsics_get_LensShift_m7F021A7722141AA459B1D2661A6BBB62ECAD6290_AdjustorThunk (void);
extern void LensIntrinsics_set_LensShift_mD33CF32A4FC73468F6D7BF98162F4AD029B1F029_AdjustorThunk (void);
extern void LensIntrinsics_get_BladeCount_m7F7B5F11A88C4FD59A8DF83F7EADADCC6DC1640D_AdjustorThunk (void);
extern void LensIntrinsics_set_BladeCount_m0B9FFBBBED33594669D5F9635290D2BD452DF398_AdjustorThunk (void);
extern void LensIntrinsics_get_Curvature_m83E347CD0794843055DC31B4D9B778DCE64BD28B_AdjustorThunk (void);
extern void LensIntrinsics_set_Curvature_mE4FED4B32EE41DFC81FC2EF05658E5FA40F83F7C_AdjustorThunk (void);
extern void LensIntrinsics_get_BarrelClipping_m83BB383CA2F25AC82C01DE84F0A4DB0AE302CDC0_AdjustorThunk (void);
extern void LensIntrinsics_set_BarrelClipping_m0212EE07B4415D73DAE7B72BFD73F45CBCF7B505_AdjustorThunk (void);
extern void LensIntrinsics_get_Anamorphism_mB94AF73FFDA43DAD98225DE7749EEA43940465D0_AdjustorThunk (void);
extern void LensIntrinsics_set_Anamorphism_mB4FF5E76652C835B4D64E6E999E5BA257152BBF9_AdjustorThunk (void);
extern void LensIntrinsics_Equals_m97CA0464C4F0006FD05200DB40E1EAD692B5AF33_AdjustorThunk (void);
extern void LensIntrinsics_Equals_m4D231AD6ECCBD39012303329EB6349D5DC868EF3_AdjustorThunk (void);
extern void LensIntrinsics_GetHashCode_m670B20275E6DE8BCB60E054AF1B4E57483D27F7B_AdjustorThunk (void);
extern void ApertureSample_get_Time_m5C25C8558B7AB86807E29B64750BFB8D98185A36_AdjustorThunk (void);
extern void ApertureSample_set_Time_mE9B285AD9C04152A4C5FD3830CDBF37CA9C27221_AdjustorThunk (void);
extern void FocalLengthSample_get_Time_m59960FA4AD6CBF17A8692914D17FFFDA1A09C585_AdjustorThunk (void);
extern void FocalLengthSample_set_Time_mB64A4381A5533F4C1695E6A3C949952F2A209DD6_AdjustorThunk (void);
extern void FocusDistanceSample_get_Time_mC2163345A6F7217D25319887CA948971B1C07A80_AdjustorThunk (void);
extern void FocusDistanceSample_set_Time_m463DFB091517982F8E65F4EB698FD0D9D436656B_AdjustorThunk (void);
extern void GamepadSample_get_Time_mBEFA677C035141023BA516D60BCCE31636EF9D91_AdjustorThunk (void);
extern void GamepadSample_set_Time_m9EFD433216AEB0639C8A4FDBE475949EC8AE61CA_AdjustorThunk (void);
extern void JoysticksSample_get_Time_m9FEAA7B26309693B5FAE0A41987131BD3F05F759_AdjustorThunk (void);
extern void JoysticksSample_set_Time_m05550D55269B7CB980D7A731B60CEB5981FBEF18_AdjustorThunk (void);
extern void PoseSample_get_Time_m1F3663D84E7DC90AE0D4238C4C77A063795D48F0_AdjustorThunk (void);
extern void PoseSample_set_Time_mF51D44DC5C977DBF1F310150F27E60E741CC1D2F_AdjustorThunk (void);
extern void Settings_ToString_m4DA28138C5829CA8DF1B047B48A05DD66E3A33FA_AdjustorThunk (void);
extern void Settings_Validate_m000CDEFC7FE09CE52E3C01A39B0B44AE506551A4_AdjustorThunk (void);
extern void Settings_Equals_mBE8B586D38FB27C2D11E585474947C39EAE20B33_AdjustorThunk (void);
extern void Settings_Equals_m937F379EB8B04E987858D8F8E7D8C83E05BD6C05_AdjustorThunk (void);
extern void Settings_GetHashCode_m17419316CD2BF1653CFC14E16C8D26D6FF91D5A9_AdjustorThunk (void);
extern void VideoStreamState_Equals_m85A2F92F50CF20081E15E3C297FEF35D8E9FEA69_AdjustorThunk (void);
extern void VideoStreamState_Equals_mC000E8A1FCCA986E01D6607C0908B6211D34AB62_AdjustorThunk (void);
extern void VideoStreamState_GetHashCode_m7CA7043FD40E6F8CE14223C89541C0D72EF10DA6_AdjustorThunk (void);
extern void VideoStreamState_ToString_m842FC14CE15430A73D02EADEC180B054C512E903_AdjustorThunk (void);
extern void FocusPlaneSettings_Apply_m9EFB25FE66B6450C1B1E05AF82D2E88A8F01143E_AdjustorThunk (void);
extern void FocusPlaneSettings_GetHashCode_mD916DC27D3CDA9C782F362F38CF36188218516A9_AdjustorThunk (void);
extern void FocusPlaneSettings_Equals_mCBD3F6194F7BE175F1A5D8AB691CAD744F5A690E_AdjustorThunk (void);
extern void FocusPlaneSettings_Equals_m57EBF080D8902EA26975FC4073C77E74630B8279_AdjustorThunk (void);
extern void FrameLinesSettings_Validate_m1B77B42FE4DCCD1E00FB015B53789D2C69222D7E_AdjustorThunk (void);
extern void FrameLinesSettings_Equals_m35858C73C99D2A7664A4BB2393A3F06CBAFA65FE_AdjustorThunk (void);
extern void FrameLinesSettings_Equals_mD516E59CB6C22CECFA95230C9DE5318DF39851D0_AdjustorThunk (void);
extern void FrameLinesSettings_GetHashCode_m64DCE0359BB9FF3A35DA47C93DDF4AEDACB72156_AdjustorThunk (void);
extern void AspectRatioPreset_get_Name_mF1BDA9552D4BA1827F2298534172D154CD0B288A_AdjustorThunk (void);
extern void AspectRatioPreset_set_Name_m6AD4EDB92ECEB8E1BF3291F39C0F3A2A8696D871_AdjustorThunk (void);
extern void AspectRatioPreset_get_AspectRatio_mFB78928968D413711E270F578F6E3294A3A172D3_AdjustorThunk (void);
extern void AspectRatioPreset_set_AspectRatio_m3A46EB1054A402C9DEF10111BEBD27D017DDE0FF_AdjustorThunk (void);
extern void SensorPreset_get_Name_m430FD0857655BCBD6E772EE6E9837C405913378A_AdjustorThunk (void);
extern void SensorPreset_set_Name_mBE6386447B4CCF3C22F5E5A954C0F978EDE53080_AdjustorThunk (void);
extern void SensorPreset_get_SensorSize_mF974B0CC50D7322A16B7BC1AB1AB095AEBE9C663_AdjustorThunk (void);
extern void SensorPreset_set_SensorSize_m1C3CABAEC30B1879A5A4B8DE27B2D6D4073C29C1_AdjustorThunk (void);
extern void SensorPreset_Equals_mCC3BA15B2B6FF28580601A55E793D14D23A436A3_AdjustorThunk (void);
extern void SensorPreset_Equals_mA8D0C5B3171480C89FCAE142234CAC897322EB51_AdjustorThunk (void);
extern void SensorPreset_GetHashCode_mEA7B5F3E6671F1A8A92ABC548A5C816263250585_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[80] = 
{
	{ 0x06000164, CameraBody_get_SensorSize_m57BD99794EB2B8FD6726BD4C7EFCCBDBCF239E19_AdjustorThunk },
	{ 0x06000165, CameraBody_set_SensorSize_m538765E6BCE5EAC9303CB6D24E17451F2E2F4534_AdjustorThunk },
	{ 0x06000166, CameraBody_get_Iso_mBD7E43DF43AB68AB691C3834EB837BE77DCC65F8_AdjustorThunk },
	{ 0x06000167, CameraBody_set_Iso_m3D13402100F58A2DB9929C0444A18B210AEE8673_AdjustorThunk },
	{ 0x06000168, CameraBody_get_ShutterSpeed_m6488A7C82A70358E47079EEC1582980635DEAE16_AdjustorThunk },
	{ 0x06000169, CameraBody_set_ShutterSpeed_mCDE51EAD272A5FBAC62475BA9B702FC30910C3B7_AdjustorThunk },
	{ 0x0600016A, CameraBody_Equals_m8215DA58FF64F84F98278B7E32DA0CDFEA2663FA_AdjustorThunk },
	{ 0x0600016B, CameraBody_Equals_mDDCEFB8B12B2AC84FA7598B7668078CFB2E2E202_AdjustorThunk },
	{ 0x0600016C, CameraBody_GetHashCode_m2A692D08A175E7CD17788FFA274420ED0F365FE0_AdjustorThunk },
	{ 0x06000176, Damping_Equals_mAB5DA5F5581E0271980BF208BC9FE40009048D33_AdjustorThunk },
	{ 0x06000177, Damping_Equals_mC63B6C8C9E6EE517E46A5D0035E8F8CD2EC3CBB4_AdjustorThunk },
	{ 0x06000178, Damping_GetHashCode_m832DD9394B86353889C1A3EE90EA8D3547FB7B09_AdjustorThunk },
	{ 0x0600017A, Lens_get_FocalLength_mBE4A25CFE01DA0040A5BCCA43CB6C54AB264E973_AdjustorThunk },
	{ 0x0600017B, Lens_set_FocalLength_m1CA608D42692D55DDA0AD6E1D9FE8309183AE85D_AdjustorThunk },
	{ 0x0600017C, Lens_get_FocusDistance_m00087F445C45AEAD6CC931F19127202F1064C1C0_AdjustorThunk },
	{ 0x0600017D, Lens_set_FocusDistance_m537518C8ECFA42957360C31730E3CBEDB7D42545_AdjustorThunk },
	{ 0x0600017E, Lens_get_Aperture_mCB8A88845749E454FC6397D6F5AAE16A17F64AC6_AdjustorThunk },
	{ 0x0600017F, Lens_set_Aperture_mE793F3CFEBB9A6E9EB75CD4AF837A49CF8BE14C8_AdjustorThunk },
	{ 0x06000180, Lens_Equals_mE180110E0AC18C9F1B6A70F071A327329F6B8065_AdjustorThunk },
	{ 0x06000181, Lens_Equals_m10275F066902B301B1103088AA576BA31505015A_AdjustorThunk },
	{ 0x06000182, Lens_GetHashCode_mCA26CA57BCB505F566D30E1C5A4AD33321BFF903_AdjustorThunk },
	{ 0x06000187, LensIntrinsics_get_FocalLengthRange_m025EC2905CDCC404164BABC592A0283BF2A5637C_AdjustorThunk },
	{ 0x06000188, LensIntrinsics_set_FocalLengthRange_m78490921319A48BC3E4DF149B886169E7C18C405_AdjustorThunk },
	{ 0x06000189, LensIntrinsics_get_CloseFocusDistance_m9F5BDA5846E204157501009F6F8C6F6013F3F2C8_AdjustorThunk },
	{ 0x0600018A, LensIntrinsics_set_CloseFocusDistance_m5414DB32227ABCB4F433A11010BA2B5B23126A0B_AdjustorThunk },
	{ 0x0600018B, LensIntrinsics_get_ApertureRange_mC5FC518909DBFF1016CB4E4248E7ABAD9AEFD722_AdjustorThunk },
	{ 0x0600018C, LensIntrinsics_set_ApertureRange_mCA78AF2F423D4E2C7F82D0781FC7AB2D2699A485_AdjustorThunk },
	{ 0x0600018D, LensIntrinsics_get_LensShift_m7F021A7722141AA459B1D2661A6BBB62ECAD6290_AdjustorThunk },
	{ 0x0600018E, LensIntrinsics_set_LensShift_mD33CF32A4FC73468F6D7BF98162F4AD029B1F029_AdjustorThunk },
	{ 0x0600018F, LensIntrinsics_get_BladeCount_m7F7B5F11A88C4FD59A8DF83F7EADADCC6DC1640D_AdjustorThunk },
	{ 0x06000190, LensIntrinsics_set_BladeCount_m0B9FFBBBED33594669D5F9635290D2BD452DF398_AdjustorThunk },
	{ 0x06000191, LensIntrinsics_get_Curvature_m83E347CD0794843055DC31B4D9B778DCE64BD28B_AdjustorThunk },
	{ 0x06000192, LensIntrinsics_set_Curvature_mE4FED4B32EE41DFC81FC2EF05658E5FA40F83F7C_AdjustorThunk },
	{ 0x06000193, LensIntrinsics_get_BarrelClipping_m83BB383CA2F25AC82C01DE84F0A4DB0AE302CDC0_AdjustorThunk },
	{ 0x06000194, LensIntrinsics_set_BarrelClipping_m0212EE07B4415D73DAE7B72BFD73F45CBCF7B505_AdjustorThunk },
	{ 0x06000195, LensIntrinsics_get_Anamorphism_mB94AF73FFDA43DAD98225DE7749EEA43940465D0_AdjustorThunk },
	{ 0x06000196, LensIntrinsics_set_Anamorphism_mB4FF5E76652C835B4D64E6E999E5BA257152BBF9_AdjustorThunk },
	{ 0x06000197, LensIntrinsics_Equals_m97CA0464C4F0006FD05200DB40E1EAD692B5AF33_AdjustorThunk },
	{ 0x06000198, LensIntrinsics_Equals_m4D231AD6ECCBD39012303329EB6349D5DC868EF3_AdjustorThunk },
	{ 0x06000199, LensIntrinsics_GetHashCode_m670B20275E6DE8BCB60E054AF1B4E57483D27F7B_AdjustorThunk },
	{ 0x060001A9, ApertureSample_get_Time_m5C25C8558B7AB86807E29B64750BFB8D98185A36_AdjustorThunk },
	{ 0x060001AA, ApertureSample_set_Time_mE9B285AD9C04152A4C5FD3830CDBF37CA9C27221_AdjustorThunk },
	{ 0x060001AB, FocalLengthSample_get_Time_m59960FA4AD6CBF17A8692914D17FFFDA1A09C585_AdjustorThunk },
	{ 0x060001AC, FocalLengthSample_set_Time_mB64A4381A5533F4C1695E6A3C949952F2A209DD6_AdjustorThunk },
	{ 0x060001AD, FocusDistanceSample_get_Time_mC2163345A6F7217D25319887CA948971B1C07A80_AdjustorThunk },
	{ 0x060001AE, FocusDistanceSample_set_Time_m463DFB091517982F8E65F4EB698FD0D9D436656B_AdjustorThunk },
	{ 0x060001AF, GamepadSample_get_Time_mBEFA677C035141023BA516D60BCCE31636EF9D91_AdjustorThunk },
	{ 0x060001B0, GamepadSample_set_Time_m9EFD433216AEB0639C8A4FDBE475949EC8AE61CA_AdjustorThunk },
	{ 0x060001B1, JoysticksSample_get_Time_m9FEAA7B26309693B5FAE0A41987131BD3F05F759_AdjustorThunk },
	{ 0x060001B2, JoysticksSample_set_Time_m05550D55269B7CB980D7A731B60CEB5981FBEF18_AdjustorThunk },
	{ 0x060001B3, PoseSample_get_Time_m1F3663D84E7DC90AE0D4238C4C77A063795D48F0_AdjustorThunk },
	{ 0x060001B4, PoseSample_set_Time_mF51D44DC5C977DBF1F310150F27E60E741CC1D2F_AdjustorThunk },
	{ 0x060001B5, Settings_ToString_m4DA28138C5829CA8DF1B047B48A05DD66E3A33FA_AdjustorThunk },
	{ 0x060001B6, Settings_Validate_m000CDEFC7FE09CE52E3C01A39B0B44AE506551A4_AdjustorThunk },
	{ 0x060001B7, Settings_Equals_mBE8B586D38FB27C2D11E585474947C39EAE20B33_AdjustorThunk },
	{ 0x060001B8, Settings_Equals_m937F379EB8B04E987858D8F8E7D8C83E05BD6C05_AdjustorThunk },
	{ 0x060001B9, Settings_GetHashCode_m17419316CD2BF1653CFC14E16C8D26D6FF91D5A9_AdjustorThunk },
	{ 0x060001D9, VideoStreamState_Equals_m85A2F92F50CF20081E15E3C297FEF35D8E9FEA69_AdjustorThunk },
	{ 0x060001DA, VideoStreamState_Equals_mC000E8A1FCCA986E01D6607C0908B6211D34AB62_AdjustorThunk },
	{ 0x060001DB, VideoStreamState_GetHashCode_m7CA7043FD40E6F8CE14223C89541C0D72EF10DA6_AdjustorThunk },
	{ 0x060001DC, VideoStreamState_ToString_m842FC14CE15430A73D02EADEC180B054C512E903_AdjustorThunk },
	{ 0x06000228, FocusPlaneSettings_Apply_m9EFB25FE66B6450C1B1E05AF82D2E88A8F01143E_AdjustorThunk },
	{ 0x06000229, FocusPlaneSettings_GetHashCode_mD916DC27D3CDA9C782F362F38CF36188218516A9_AdjustorThunk },
	{ 0x0600022A, FocusPlaneSettings_Equals_mCBD3F6194F7BE175F1A5D8AB691CAD744F5A690E_AdjustorThunk },
	{ 0x0600022B, FocusPlaneSettings_Equals_m57EBF080D8902EA26975FC4073C77E74630B8279_AdjustorThunk },
	{ 0x06000297, FrameLinesSettings_Validate_m1B77B42FE4DCCD1E00FB015B53789D2C69222D7E_AdjustorThunk },
	{ 0x06000298, FrameLinesSettings_Equals_m35858C73C99D2A7664A4BB2393A3F06CBAFA65FE_AdjustorThunk },
	{ 0x06000299, FrameLinesSettings_Equals_mD516E59CB6C22CECFA95230C9DE5318DF39851D0_AdjustorThunk },
	{ 0x0600029A, FrameLinesSettings_GetHashCode_m64DCE0359BB9FF3A35DA47C93DDF4AEDACB72156_AdjustorThunk },
	{ 0x060002F5, AspectRatioPreset_get_Name_mF1BDA9552D4BA1827F2298534172D154CD0B288A_AdjustorThunk },
	{ 0x060002F6, AspectRatioPreset_set_Name_m6AD4EDB92ECEB8E1BF3291F39C0F3A2A8696D871_AdjustorThunk },
	{ 0x060002F7, AspectRatioPreset_get_AspectRatio_mFB78928968D413711E270F578F6E3294A3A172D3_AdjustorThunk },
	{ 0x060002F8, AspectRatioPreset_set_AspectRatio_m3A46EB1054A402C9DEF10111BEBD27D017DDE0FF_AdjustorThunk },
	{ 0x060002FB, SensorPreset_get_Name_m430FD0857655BCBD6E772EE6E9837C405913378A_AdjustorThunk },
	{ 0x060002FC, SensorPreset_set_Name_mBE6386447B4CCF3C22F5E5A954C0F978EDE53080_AdjustorThunk },
	{ 0x060002FD, SensorPreset_get_SensorSize_mF974B0CC50D7322A16B7BC1AB1AB095AEBE9C663_AdjustorThunk },
	{ 0x060002FE, SensorPreset_set_SensorSize_m1C3CABAEC30B1879A5A4B8DE27B2D6D4073C29C1_AdjustorThunk },
	{ 0x060002FF, SensorPreset_Equals_mCC3BA15B2B6FF28580601A55E793D14D23A436A3_AdjustorThunk },
	{ 0x06000300, SensorPreset_Equals_mA8D0C5B3171480C89FCAE142234CAC897322EB51_AdjustorThunk },
	{ 0x06000301, SensorPreset_GetHashCode_mEA7B5F3E6671F1A8A92ABC548A5C816263250585_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1242] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	2117,
	6463,
	6480,
	6379,
	6554,
	6636,
	6500,
	6500,
	6500,
	7926,
	6463,
	6460,
	6420,
	6423,
	6363,
	6377,
	6630,
	6555,
	6555,
	6555,
	6555,
	6377,
	6377,
	6377,
	6555,
	6377,
	6630,
	6630,
	6463,
	6463,
	6377,
	6628,
	6555,
	6555,
	6377,
	6377,
	6377,
	6377,
	6377,
	8075,
	6553,
	8075,
	6463,
	6463,
	6463,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	6500,
	2117,
	6463,
	6459,
	6473,
	6432,
	6518,
	6418,
	6421,
	6361,
	6377,
	6630,
	6555,
	6555,
	6555,
	6555,
	6377,
	6377,
	6377,
	6555,
	6377,
	6630,
	6630,
	6463,
	6463,
	6377,
	6628,
	6555,
	6555,
	6377,
	6377,
	6377,
	6377,
	6555,
	8075,
	6446,
	8075,
	6463,
	6463,
	6463,
	6463,
	6555,
	6555,
	6555,
	6628,
	6463,
	6555,
	6377,
	6630,
	6555,
	6555,
	6555,
	6555,
	6377,
	6377,
	6377,
	6555,
	6377,
	6630,
	6630,
	6463,
	6463,
	6377,
	6628,
	6555,
	6555,
	6377,
	6377,
	6377,
	6377,
	6377,
	6463,
	6500,
	6463,
	6500,
	6500,
	8075,
	6518,
	6418,
	6421,
	6361,
	8075,
	6518,
	8075,
	6418,
	8075,
	6421,
	8075,
	6361,
	12321,
	12315,
	8064,
	6628,
	7890,
	6463,
	7986,
	6555,
	4651,
	4753,
	7890,
	10547,
	10547,
	12321,
	12105,
	12105,
	12105,
	12105,
	10555,
	10555,
	4753,
	4668,
	7890,
	12321,
	7986,
	6555,
	7986,
	6555,
	7986,
	6555,
	4732,
	4753,
	7890,
	10597,
	10597,
	12321,
	11136,
	8064,
	6628,
	7986,
	6555,
	8064,
	6628,
	8064,
	6628,
	7890,
	6463,
	8064,
	6628,
	7986,
	6555,
	7986,
	6555,
	4733,
	4753,
	7890,
	10598,
	10598,
	12321,
	12105,
	10985,
	10985,
	10985,
	12105,
	12105,
	12105,
	12105,
	12105,
	12105,
	12105,
	12321,
	7844,
	6409,
	7844,
	6409,
	7844,
	6409,
	7844,
	6409,
	7844,
	6409,
	7844,
	6409,
	7926,
	8075,
	4798,
	4753,
	7890,
	10633,
	10633,
	12321,
	7872,
	6446,
	7986,
	6555,
	7986,
	6555,
	7986,
	6555,
	8064,
	6628,
	7926,
	6500,
	7986,
	6555,
	7986,
	6555,
	7986,
	6555,
	10899,
	8075,
	12321,
	12321,
	8075,
	5848,
	7926,
	6500,
	11806,
	12321,
	4891,
	4753,
	7890,
	7926,
	10682,
	10682,
	0,
	0,
	8075,
	8075,
	8075,
	8075,
	8075,
	4623,
	8075,
	8075,
	8075,
	6500,
	8075,
	8075,
	7926,
	7926,
	6398,
	8075,
	6500,
	8075,
	6377,
	6555,
	2072,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8075,
	8075,
	7926,
	7926,
	8075,
	7926,
	6500,
	8075,
	6377,
	6398,
	6555,
	2072,
	8075,
	12283,
	2382,
	4753,
	8075,
	12321,
	12321,
	8075,
	7926,
	7926,
	0,
	6500,
	6555,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	3479,
	8075,
	6500,
	8075,
	8075,
	8075,
	0,
	2339,
	8075,
	12321,
	6500,
	7890,
	4685,
	4753,
	10564,
	10564,
	12268,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3792,
	6500,
	8075,
	8075,
	8075,
	0,
	4623,
	2339,
	8075,
	6377,
	8075,
	6500,
	7926,
	6500,
	7926,
	6377,
	6377,
	6377,
	6628,
	8075,
	8075,
	2179,
	6377,
	4623,
	8075,
	8075,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6500,
	6500,
	8075,
	6377,
	6628,
	8075,
	6377,
	8075,
	5816,
	8075,
	6463,
	8075,
	7820,
	7926,
	8075,
	7926,
	12321,
	8075,
	8075,
	8075,
	8075,
	7820,
	6377,
	7820,
	6377,
	7820,
	6377,
	7820,
	6377,
	7986,
	6555,
	7820,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	6377,
	8075,
	8075,
	6500,
	2435,
	3896,
	5901,
	10159,
	8075,
	8075,
	8075,
	8075,
	8075,
	6500,
	6382,
	6555,
	2181,
	6532,
	3840,
	6532,
	8075,
	12270,
	8075,
	4688,
	4753,
	7890,
	10566,
	10566,
	0,
	7926,
	6500,
	7926,
	6500,
	7904,
	6480,
	7905,
	6481,
	8075,
	8075,
	11806,
	8075,
	7872,
	6446,
	7926,
	6500,
	7926,
	6500,
	7926,
	6500,
	7904,
	6480,
	7905,
	6481,
	11806,
	8075,
	7926,
	8075,
	7926,
	6500,
	7890,
	6463,
	7926,
	6500,
	11806,
	10899,
	8075,
	12321,
	8075,
	5833,
	7890,
	6463,
	7890,
	7890,
	6463,
	7926,
	6500,
	7926,
	6500,
	7926,
	6500,
	7926,
	6500,
	7926,
	6500,
	7926,
	6500,
	7858,
	6430,
	7844,
	7904,
	8075,
	8075,
	6430,
	8075,
	6459,
	3187,
	3187,
	3187,
	3184,
	7856,
	2289,
	5450,
	5824,
	3146,
	6056,
	8075,
	12321,
	6463,
	8075,
	7820,
	7801,
	8075,
	7926,
	7926,
	7926,
	8075,
	7926,
	6500,
	7986,
	6555,
	7926,
	8075,
	7926,
	6500,
	8064,
	6628,
	4795,
	4753,
	7890,
	10632,
	10632,
	7926,
	8075,
	8075,
	6500,
	1701,
	446,
	1701,
	10989,
	12321,
	7926,
	6500,
	8075,
	0,
	0,
	0,
	0,
	7890,
	6463,
	8075,
	8075,
	8075,
	2290,
	868,
	868,
	868,
	8066,
	9557,
	8595,
	8524,
	8524,
	8431,
	8075,
	12321,
	12115,
	12321,
	12283,
	12115,
	12321,
	7890,
	6463,
	0,
	646,
	6500,
	8075,
	7944,
	6517,
	7926,
	6500,
	7904,
	6480,
	7822,
	6379,
	7926,
	6500,
	7926,
	6500,
	7856,
	6428,
	7844,
	6409,
	4753,
	4753,
	7890,
	10611,
	10611,
	8075,
	7944,
	6517,
	7926,
	6500,
	7904,
	6480,
	7822,
	6379,
	7872,
	6446,
	7820,
	6377,
	7890,
	6463,
	7926,
	6500,
	7856,
	6428,
	7844,
	6409,
	11806,
	8075,
	7890,
	7926,
	8075,
	6500,
	4719,
	5828,
	6500,
	7926,
	7926,
	4719,
	8075,
	11806,
	11228,
	11806,
	12115,
	12115,
	7926,
	6500,
	11806,
	8075,
	7926,
	8075,
	8075,
	12321,
	0,
	12283,
	11806,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9516,
	10050,
	10098,
	10098,
	8075,
	12257,
	8065,
	6629,
	7926,
	6500,
	7820,
	7890,
	8075,
	8075,
	8075,
	7890,
	7890,
	8065,
	7820,
	7820,
	7890,
	6368,
	6405,
	6500,
	8075,
	8075,
	8075,
	7890,
	7986,
	7890,
	7986,
	7820,
	8075,
	8075,
	8075,
	8066,
	6630,
	8066,
	6630,
	7820,
	6377,
	7820,
	6377,
	7926,
	6500,
	7904,
	6480,
	7905,
	6481,
	7822,
	6379,
	7820,
	6377,
	7986,
	6555,
	8075,
	8075,
	6500,
	8075,
	11507,
	12283,
	7926,
	7926,
	7926,
	6500,
	7944,
	7944,
	7944,
	7985,
	6554,
	7904,
	6480,
	7926,
	6500,
	7905,
	7822,
	7926,
	6500,
	4623,
	8075,
	8075,
	8075,
	8075,
	8075,
	6554,
	8075,
	6500,
	6500,
	6500,
	7890,
	5828,
	8075,
	6463,
	6500,
	6463,
	6500,
	6463,
	8075,
	8075,
	8075,
	7820,
	6500,
	7926,
	8075,
	6517,
	6517,
	8075,
	6377,
	6628,
	8075,
	6409,
	8075,
	8075,
	3834,
	7926,
	7926,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	6463,
	6459,
	6418,
	6421,
	6361,
	6377,
	6630,
	6555,
	6555,
	6555,
	6555,
	6377,
	6377,
	6377,
	6555,
	6377,
	6630,
	6630,
	6463,
	6463,
	6377,
	6628,
	6555,
	6555,
	6377,
	6377,
	6377,
	6377,
	6377,
	8075,
	6553,
	8075,
	6463,
	6463,
	6463,
	8075,
	2290,
	7820,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	8075,
	7820,
	6377,
	7926,
	7926,
	7926,
	6500,
	7856,
	7890,
	6463,
	7681,
	7681,
	7858,
	6430,
	2289,
	2778,
	8075,
	8075,
	8075,
	12321,
	7904,
	8072,
	6637,
	7820,
	7985,
	5770,
	8075,
	7679,
	6251,
	7844,
	6409,
	7844,
	7844,
	6409,
	7844,
	7926,
	6500,
	7986,
	6555,
	7986,
	6555,
	7986,
	6555,
	7890,
	6463,
	8075,
	7820,
	6409,
	1992,
	8075,
	6630,
	6524,
	6555,
	6555,
	6555,
	6377,
	6555,
	6377,
	6377,
	6481,
	7926,
	0,
	5828,
	8075,
	7890,
	6463,
	7904,
	6480,
	7822,
	6379,
	7926,
	6500,
	7986,
	6555,
	8075,
	9529,
	10172,
	10098,
	12319,
	12320,
	10286,
	11138,
	11143,
	11138,
	12105,
	8479,
	9027,
	11143,
	9558,
	8075,
	8075,
	7926,
	7926,
	273,
	166,
	0,
	7986,
	7825,
	12094,
	11655,
	10098,
	8075,
	11510,
	6500,
	8075,
	2336,
	8075,
	12321,
	8075,
	8075,
	869,
	273,
	447,
	166,
	3857,
	0,
	0,
	0,
	0,
	8075,
	8075,
	8075,
	8075,
	11806,
	11806,
	8075,
	11806,
	11806,
	8075,
	12321,
	8075,
	5833,
	5833,
	11478,
	11476,
	11481,
	11477,
	11595,
	11593,
	11598,
	11594,
	11603,
	11601,
	11606,
	11602,
	11620,
	11619,
	11629,
	11628,
	11707,
	11705,
	11855,
	11851,
	11858,
	11852,
	11806,
	11806,
	8075,
	11806,
	11806,
	8075,
	12321,
	8075,
	5833,
	5833,
	11806,
	11806,
	8075,
	11806,
	11806,
	8075,
	12321,
	8075,
	5833,
	5833,
};
static const Il2CppTokenRangePair s_rgctxIndices[7] = 
{
	{ 0x02000069, { 13, 19 } },
	{ 0x06000214, { 0, 1 } },
	{ 0x0600023B, { 1, 2 } },
	{ 0x06000374, { 3, 6 } },
	{ 0x06000377, { 9, 3 } },
	{ 0x06000378, { 12, 1 } },
	{ 0x06000469, { 32, 1 } },
};
extern const uint32_t g_rgctx_IFocusPlaneImpl_TryGetRenderTarget_TisT_tCE94299C80BFF34671765402D94512127303EE04_m45F3531F746348653AE36ECE5ACF5D98D392382F;
extern const uint32_t g_rgctx_IRenderTargetProvider_1_tB7EA6F10F2AF6750E554BF9601AD226D17522DE7;
extern const uint32_t g_rgctx_IRenderTargetProvider_1_TryGetRenderTarget_m9F1CC43837A4CDD63AD68462CFC89866B0D86624;
extern const uint32_t g_rgctx_CircularBuffer_1_tF4D421C2937F9E4F518F89726468B72619E704C7;
extern const uint32_t g_rgctx_CircularBuffer_1_get_Count_m7AEB263AAA04EF56397DCDDA63004F617926590B;
extern const uint32_t g_rgctx_CircularBuffer_1_Front_mE5D46C577D08DB3ED938A05CDA00144CFBCC2897;
extern const uint32_t g_rgctx_CircularBuffer_1_get_Item_mDB79EEF427ED5CD8D0B4FE6C60F0724B63507365;
extern const uint32_t g_rgctx_Nullable_1_t5BAE57FC0910F3BE7F060F39505A4D859950FE35;
extern const uint32_t g_rgctx_Nullable_1__ctor_m7775E346B14AD5B09F620F1DB00242938BAE9B4B;
extern const uint32_t g_rgctx_GameObject_GetComponent_TisT_tFB725F6FE80E11659A4213527596C1AFD51434F7_mB7CA4FE93DF66573A611DB9A4DC7E6CAD8BF304C;
extern const uint32_t g_rgctx_T_tFB725F6FE80E11659A4213527596C1AFD51434F7;
extern const uint32_t g_rgctx_GameObject_AddComponent_TisT_tFB725F6FE80E11659A4213527596C1AFD51434F7_m54054DE8F3E1678147F3A3F17D215CA33E4B404E;
extern const uint32_t g_rgctx_T_t8744713B0813AED215522B2D37CA8E79981868B8;
extern const uint32_t g_rgctx_ComponentMap_2_tB7098AA444231C62EC336FCF83BC3816B5B7FD8D;
extern const uint32_t g_rgctx_Dictionary_2_t460AC2B60DD6DC6F353BA1AE0BE0220EA864EDE4;
extern const uint32_t g_rgctx_Dictionary_2_Add_mA12F995022BF8B633FEA9F8C0AB867C688737C64;
extern const uint32_t g_rgctx_Dictionary_2_t41A32BBA9FDE9A3343B4CC8565B3A3E06F9956B6;
extern const uint32_t g_rgctx_Dictionary_2_Add_m87ACAE0749739C9F8B687E2D6006CD7560B0B157;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_m8E0928D50A7270882B9D3E41DB4E186109A98000;
extern const uint32_t g_rgctx_Dictionary_2_Remove_m434547646B9FD165BB4DE726B411F7B8123BB963;
extern const uint32_t g_rgctx_Dictionary_2_Remove_mD4A4894BD0F4312FA1317CE4061E0476D03A95AB;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_mA67264B70FFA6EE9FEA197946C142AE24A227CF8;
extern const uint32_t g_rgctx_TValue_t6ACE4268CBD4A01921360267F5673AAD85969719;
extern const uint32_t g_rgctx_ComponentMap_2_Remove_m945ABAF6BF5BC3C1A423D901F41D9496054A634A;
extern const uint32_t g_rgctx_TKey_tD8749FF6822A1AF0B6D6B229AA7D2F1279E9F4F8;
extern const uint32_t g_rgctx_ComponentMap_2_Remove_mF914B51C0DEC50D9834ADE3D4E1E9F462CA9F6D7;
extern const uint32_t g_rgctx_ComponentMap_2_Add_mFE5CB5F00531C8019A0D9AEE1B6742E0957F8BCB;
extern const uint32_t g_rgctx_ComponentMap_2_UpdateMap_m3D835D9CAE266D743717E29C7B63C769D3122323;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mF7967B7A2D297E3DB2E2FD680B9D0FA7B37F7D1B;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m9AE328657904A8306D2EE2EF12B3F0A6729F2E56;
extern const uint32_t g_rgctx_ComponentMap_2_tB7098AA444231C62EC336FCF83BC3816B5B7FD8D;
extern const uint32_t g_rgctx_ComponentMap_2__ctor_m15644EE21BBD6D743641A84E35BBED7CB961D092;
extern const uint32_t g_rgctx_ICurve_1_tCC2CEA367B6AB9DD3C5CADCF24F6AB92F3D02037;
static const Il2CppRGCTXDefinition s_rgctxValues[33] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IFocusPlaneImpl_TryGetRenderTarget_TisT_tCE94299C80BFF34671765402D94512127303EE04_m45F3531F746348653AE36ECE5ACF5D98D392382F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IRenderTargetProvider_1_tB7EA6F10F2AF6750E554BF9601AD226D17522DE7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IRenderTargetProvider_1_TryGetRenderTarget_m9F1CC43837A4CDD63AD68462CFC89866B0D86624 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_CircularBuffer_1_tF4D421C2937F9E4F518F89726468B72619E704C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CircularBuffer_1_get_Count_m7AEB263AAA04EF56397DCDDA63004F617926590B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CircularBuffer_1_Front_mE5D46C577D08DB3ED938A05CDA00144CFBCC2897 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_CircularBuffer_1_get_Item_mDB79EEF427ED5CD8D0B4FE6C60F0724B63507365 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Nullable_1_t5BAE57FC0910F3BE7F060F39505A4D859950FE35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Nullable_1__ctor_m7775E346B14AD5B09F620F1DB00242938BAE9B4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GameObject_GetComponent_TisT_tFB725F6FE80E11659A4213527596C1AFD51434F7_mB7CA4FE93DF66573A611DB9A4DC7E6CAD8BF304C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFB725F6FE80E11659A4213527596C1AFD51434F7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GameObject_AddComponent_TisT_tFB725F6FE80E11659A4213527596C1AFD51434F7_m54054DE8F3E1678147F3A3F17D215CA33E4B404E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8744713B0813AED215522B2D37CA8E79981868B8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ComponentMap_2_tB7098AA444231C62EC336FCF83BC3816B5B7FD8D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t460AC2B60DD6DC6F353BA1AE0BE0220EA864EDE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_mA12F995022BF8B633FEA9F8C0AB867C688737C64 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t41A32BBA9FDE9A3343B4CC8565B3A3E06F9956B6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m87ACAE0749739C9F8B687E2D6006CD7560B0B157 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_m8E0928D50A7270882B9D3E41DB4E186109A98000 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Remove_m434547646B9FD165BB4DE726B411F7B8123BB963 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Remove_mD4A4894BD0F4312FA1317CE4061E0476D03A95AB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_mA67264B70FFA6EE9FEA197946C142AE24A227CF8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_t6ACE4268CBD4A01921360267F5673AAD85969719 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentMap_2_Remove_m945ABAF6BF5BC3C1A423D901F41D9496054A634A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tD8749FF6822A1AF0B6D6B229AA7D2F1279E9F4F8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentMap_2_Remove_mF914B51C0DEC50D9834ADE3D4E1E9F462CA9F6D7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentMap_2_Add_mFE5CB5F00531C8019A0D9AEE1B6742E0957F8BCB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentMap_2_UpdateMap_m3D835D9CAE266D743717E29C7B63C769D3122323 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_mF7967B7A2D297E3DB2E2FD680B9D0FA7B37F7D1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m9AE328657904A8306D2EE2EF12B3F0A6729F2E56 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ComponentMap_2_tB7098AA444231C62EC336FCF83BC3816B5B7FD8D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ComponentMap_2__ctor_m15644EE21BBD6D743641A84E35BBED7CB961D092 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICurve_1_tCC2CEA367B6AB9DD3C5CADCF24F6AB92F3D02037 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_LiveCapture_VirtualCamera_CodeGenModule;
const Il2CppCodeGenModule g_Unity_LiveCapture_VirtualCamera_CodeGenModule = 
{
	"Unity.LiveCapture.VirtualCamera.dll",
	1242,
	s_methodPointers,
	80,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	7,
	s_rgctxIndices,
	33,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
