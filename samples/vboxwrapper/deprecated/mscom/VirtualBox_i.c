

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Fri Oct  8 15:47:06 2010
 */
/* Compiler settings for Z:\home\vbox\tinderbox\3.2-sdk\out\linux.amd64\release\bin\sdk\bindings\mscom\idl\VirtualBox.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_VirtualBox,0x46137EEC,0x703B,0x4fe5,0xAF,0xD4,0x7C,0x9B,0xBB,0xBA,0x02,0x59);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxErrorInfo,0x4b86d186,0x407e,0x4f9e,0x8b,0xe8,0xe5,0x00,0x61,0xbe,0x87,0x25);


MIDL_DEFINE_GUID(IID, IID_ILocalOwner,0x308FF42A,0xDC45,0x49D4,0xA9,0x50,0xB1,0xEE,0xE5,0xE0,0x0B,0xB5);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxCallback,0x7f6a65b6,0xad5d,0x4a67,0x88,0x72,0x0b,0x11,0xcb,0x7e,0xa9,0x5c);


MIDL_DEFINE_GUID(IID, IID_IDHCPServer,0x6cfe387c,0x74fb,0x4ca7,0xbf,0xf6,0x97,0x3b,0xec,0x8a,0xf7,0xa3);


MIDL_DEFINE_GUID(IID, IID_IVirtualBox,0x3f36e024,0x7fed,0x4f20,0xa0,0x2c,0x91,0x58,0xa8,0x2b,0x44,0xe6);


MIDL_DEFINE_GUID(IID, IID_IVFSExplorer,0x2bb864a1,0x02a3,0x4474,0xa1,0xd4,0xfb,0x5f,0x23,0xb7,0x42,0xe1);


MIDL_DEFINE_GUID(IID, IID_IAppliance,0xe3ba9ab9,0xac2c,0x4266,0x8b,0xd2,0x91,0xc4,0xbf,0x72,0x1c,0xeb);


MIDL_DEFINE_GUID(IID, IID_IVirtualSystemDescription,0xd7525e6c,0x531a,0x4c51,0x8e,0x04,0x41,0x23,0x50,0x83,0xa3,0xd8);


MIDL_DEFINE_GUID(IID, IID_IInternalMachineControl,0x26604a54,0x8628,0x491b,0xa0,0xea,0xe1,0x39,0x2a,0x16,0xd1,0x3b);


MIDL_DEFINE_GUID(IID, IID_IBIOSSettings,0x38b54279,0xdc35,0x4f5e,0xa4,0x31,0x83,0x5b,0x86,0x7c,0x6b,0x5e);


MIDL_DEFINE_GUID(IID, IID_IMachine,0x6d9212cb,0xa5c0,0x48b7,0xbb,0xc1,0x3f,0xa2,0xba,0x2e,0xe6,0xd2);


MIDL_DEFINE_GUID(IID, IID_IConsoleCallback,0x60703f8d,0x81e4,0x4b45,0xa1,0x47,0xdc,0xfd,0x07,0x69,0x2b,0x19);


MIDL_DEFINE_GUID(IID, IID_IRemoteDisplayInfo,0xb3741084,0x806f,0x4c3b,0x8c,0x42,0xeb,0xad,0x1a,0x81,0xe4,0x5a);


MIDL_DEFINE_GUID(IID, IID_IConsole,0x6375231a,0xc17c,0x464b,0x92,0xcb,0xae,0x9e,0x12,0x8d,0x71,0xc3);


MIDL_DEFINE_GUID(IID, IID_IHostNetworkInterface,0xce6fae58,0x7642,0x4102,0xb5,0xdb,0xc9,0x00,0x5c,0x23,0x20,0xa8);


MIDL_DEFINE_GUID(IID, IID_IHost,0x35b004f4,0x7806,0x4009,0xbf,0xa8,0xd1,0x30,0x8a,0xdb,0xa7,0xe5);


MIDL_DEFINE_GUID(IID, IID_ISystemProperties,0x07c3ffd8,0x8f59,0x49cc,0xb6,0x08,0x53,0xa3,0x32,0xe8,0x5c,0xc3);


MIDL_DEFINE_GUID(IID, IID_IGuestOSType,0xe3f6727e,0xa09b,0x41ea,0xa8,0x24,0x86,0x4a,0x17,0x64,0x72,0xf3);


MIDL_DEFINE_GUID(IID, IID_IGuest,0xd915dff1,0xed38,0x495a,0x91,0xf1,0xab,0x6c,0x53,0x93,0x24,0x68);


MIDL_DEFINE_GUID(IID, IID_IProgress,0x856aa038,0x853f,0x42e2,0xac,0xf7,0x6e,0x7b,0x02,0xdb,0xe2,0x94);


MIDL_DEFINE_GUID(IID, IID_ISnapshot,0x1a2d0551,0x58a4,0x4107,0x85,0x7e,0xef,0x41,0x4f,0xc4,0x2f,0xfc);


MIDL_DEFINE_GUID(IID, IID_IMediumAttachment,0xe58eb3eb,0x8627,0x428b,0xbd,0xf8,0x34,0x48,0x7c,0x84,0x8d,0xe5);


MIDL_DEFINE_GUID(IID, IID_IMedium,0x1d578f43,0x5ef1,0x4415,0xb5,0x56,0x75,0x92,0xd3,0xcc,0xdc,0x8f);


MIDL_DEFINE_GUID(IID, IID_IMediumFormat,0x89f52554,0xd469,0x4799,0x9f,0xad,0x17,0x05,0xe8,0x6a,0x08,0xb1);


MIDL_DEFINE_GUID(IID, IID_IKeyboard,0x2d1a531b,0x4c6e,0x49cc,0x8a,0xf6,0x5c,0x85,0x7b,0x78,0xb5,0xd7);


MIDL_DEFINE_GUID(IID, IID_IMouse,0x7c0f2eae,0xf92d,0x498c,0xb8,0x02,0xe1,0xa3,0x76,0x37,0x74,0xdc);


MIDL_DEFINE_GUID(IID, IID_IFramebuffer,0xb7ed347a,0x5765,0x40a0,0xae,0x1c,0xf5,0x43,0xeb,0x4d,0xde,0xaf);


MIDL_DEFINE_GUID(IID, IID_IFramebufferOverlay,0x0bcc1c7e,0xe415,0x47d2,0xbf,0xdb,0xe4,0xc7,0x05,0xfb,0x0f,0x47);


MIDL_DEFINE_GUID(IID, IID_IDisplay,0x1fa79e39,0x0cc9,0x4ab3,0x9d,0xf3,0xed,0x3e,0x96,0xb4,0x24,0x96);


MIDL_DEFINE_GUID(IID, IID_INetworkAdapter,0x5bdb9df8,0xa5e1,0x4322,0xa1,0x39,0xb7,0xa4,0xa7,0x34,0xc7,0x90);


MIDL_DEFINE_GUID(IID, IID_ISerialPort,0x937f6970,0x5103,0x4745,0xb7,0x8e,0xd2,0x8d,0xcf,0x14,0x79,0xa8);


MIDL_DEFINE_GUID(IID, IID_IParallelPort,0x0c925f06,0xdd10,0x4b77,0x8d,0xe8,0x29,0x4d,0x73,0x8c,0x32,0x14);


MIDL_DEFINE_GUID(IID, IID_IMachineDebugger,0xb0b2a2dd,0x0627,0x4502,0x91,0xc2,0xdd,0xc5,0xe7,0x76,0x09,0xe0);


MIDL_DEFINE_GUID(IID, IID_IUSBController,0x6fdcccc5,0xabd3,0x4fec,0x93,0x87,0x2a,0xd3,0x91,0x4f,0xc4,0xa8);


MIDL_DEFINE_GUID(IID, IID_IUSBDevice,0xf8967b0b,0x4483,0x400f,0x92,0xb5,0x8b,0x67,0x5d,0x98,0xa8,0x5b);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceFilter,0xd6831fb4,0x1a94,0x4c2c,0x96,0xef,0x8d,0x0d,0x61,0x92,0x06,0x6d);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDevice,0x173b4b44,0xd268,0x4334,0xa0,0x0d,0xb6,0x52,0x1c,0x9a,0x74,0x0a);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDeviceFilter,0x4cc70246,0xd74a,0x400f,0x82,0x22,0x39,0x00,0x48,0x9c,0x03,0x74);


MIDL_DEFINE_GUID(IID, IID_IAudioAdapter,0x921873db,0x5f3f,0x4b69,0x91,0xf9,0x7b,0xe9,0xe5,0x35,0xa2,0xcb);


MIDL_DEFINE_GUID(IID, IID_IVRDPServer,0x7aeeb530,0x0b08,0x41fe,0x83,0x5d,0x9b,0xe9,0xec,0x1d,0xbe,0x5c);


MIDL_DEFINE_GUID(IID, IID_ISharedFolder,0x64637bb2,0x9e17,0x471c,0xb8,0xf3,0xf8,0x96,0x8d,0xd9,0x88,0x4e);


MIDL_DEFINE_GUID(IID, IID_IInternalSessionControl,0xab161f72,0xe4b3,0x44e6,0xa9,0x19,0x22,0x56,0x47,0x4b,0xda,0x66);


MIDL_DEFINE_GUID(IID, IID_ISession,0x12F4DCDB,0x12B2,0x4EC1,0xB7,0xCD,0xDD,0xD9,0xF6,0xC5,0xBF,0x4D);


MIDL_DEFINE_GUID(IID, IID_IStorageController,0xfd93adc0,0xbbaa,0x4256,0x9e,0x6e,0x00,0xe2,0x9f,0x91,0x51,0xc9);


MIDL_DEFINE_GUID(IID, IID_IPerformanceMetric,0x2a1a60ae,0x9345,0x4019,0xad,0x53,0xd3,0x4b,0xa4,0x1c,0xbf,0xe9);


MIDL_DEFINE_GUID(IID, IID_IPerformanceCollector,0xe22e1acb,0xac4a,0x43bb,0xa3,0x1c,0x17,0x32,0x16,0x59,0xb0,0xc6);


MIDL_DEFINE_GUID(IID, IID_INATEngine,0x4b286616,0xeb03,0x11de,0xb0,0xfb,0x17,0x01,0xec,0xa4,0x22,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_VirtualBox,0xB1A7A4F2,0x47B9,0x4A1E,0x82,0xB2,0x07,0xCC,0xD5,0x32,0x3C,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_Session,0x3C02F46D,0xC9D2,0x4F11,0xA3,0x84,0x53,0xF0,0xCF,0x91,0x72,0x14);


MIDL_DEFINE_GUID(CLSID, CLSID_CallbackWrapper,0x49EE8561,0x5563,0x4715,0xB1,0x8C,0xA4,0xB1,0xA4,0x90,0xDA,0xFE);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Fri Oct  8 15:47:06 2010
 */
/* Compiler settings for Z:\home\vbox\tinderbox\3.2-sdk\out\linux.amd64\release\bin\sdk\bindings\mscom\idl\VirtualBox.idl:
    Oicf, W1, Zp8, env=Win64 (32b run,appending)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_VirtualBox,0x46137EEC,0x703B,0x4fe5,0xAF,0xD4,0x7C,0x9B,0xBB,0xBA,0x02,0x59);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxErrorInfo,0x4b86d186,0x407e,0x4f9e,0x8b,0xe8,0xe5,0x00,0x61,0xbe,0x87,0x25);


MIDL_DEFINE_GUID(IID, IID_ILocalOwner,0x308FF42A,0xDC45,0x49D4,0xA9,0x50,0xB1,0xEE,0xE5,0xE0,0x0B,0xB5);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxCallback,0x7f6a65b6,0xad5d,0x4a67,0x88,0x72,0x0b,0x11,0xcb,0x7e,0xa9,0x5c);


MIDL_DEFINE_GUID(IID, IID_IDHCPServer,0x6cfe387c,0x74fb,0x4ca7,0xbf,0xf6,0x97,0x3b,0xec,0x8a,0xf7,0xa3);


MIDL_DEFINE_GUID(IID, IID_IVirtualBox,0x3f36e024,0x7fed,0x4f20,0xa0,0x2c,0x91,0x58,0xa8,0x2b,0x44,0xe6);


MIDL_DEFINE_GUID(IID, IID_IVFSExplorer,0x2bb864a1,0x02a3,0x4474,0xa1,0xd4,0xfb,0x5f,0x23,0xb7,0x42,0xe1);


MIDL_DEFINE_GUID(IID, IID_IAppliance,0xe3ba9ab9,0xac2c,0x4266,0x8b,0xd2,0x91,0xc4,0xbf,0x72,0x1c,0xeb);


MIDL_DEFINE_GUID(IID, IID_IVirtualSystemDescription,0xd7525e6c,0x531a,0x4c51,0x8e,0x04,0x41,0x23,0x50,0x83,0xa3,0xd8);


MIDL_DEFINE_GUID(IID, IID_IInternalMachineControl,0x26604a54,0x8628,0x491b,0xa0,0xea,0xe1,0x39,0x2a,0x16,0xd1,0x3b);


MIDL_DEFINE_GUID(IID, IID_IBIOSSettings,0x38b54279,0xdc35,0x4f5e,0xa4,0x31,0x83,0x5b,0x86,0x7c,0x6b,0x5e);


MIDL_DEFINE_GUID(IID, IID_IMachine,0x6d9212cb,0xa5c0,0x48b7,0xbb,0xc1,0x3f,0xa2,0xba,0x2e,0xe6,0xd2);


MIDL_DEFINE_GUID(IID, IID_IConsoleCallback,0x60703f8d,0x81e4,0x4b45,0xa1,0x47,0xdc,0xfd,0x07,0x69,0x2b,0x19);


MIDL_DEFINE_GUID(IID, IID_IRemoteDisplayInfo,0xb3741084,0x806f,0x4c3b,0x8c,0x42,0xeb,0xad,0x1a,0x81,0xe4,0x5a);


MIDL_DEFINE_GUID(IID, IID_IConsole,0x6375231a,0xc17c,0x464b,0x92,0xcb,0xae,0x9e,0x12,0x8d,0x71,0xc3);


MIDL_DEFINE_GUID(IID, IID_IHostNetworkInterface,0xce6fae58,0x7642,0x4102,0xb5,0xdb,0xc9,0x00,0x5c,0x23,0x20,0xa8);


MIDL_DEFINE_GUID(IID, IID_IHost,0x35b004f4,0x7806,0x4009,0xbf,0xa8,0xd1,0x30,0x8a,0xdb,0xa7,0xe5);


MIDL_DEFINE_GUID(IID, IID_ISystemProperties,0x07c3ffd8,0x8f59,0x49cc,0xb6,0x08,0x53,0xa3,0x32,0xe8,0x5c,0xc3);


MIDL_DEFINE_GUID(IID, IID_IGuestOSType,0xe3f6727e,0xa09b,0x41ea,0xa8,0x24,0x86,0x4a,0x17,0x64,0x72,0xf3);


MIDL_DEFINE_GUID(IID, IID_IGuest,0xd915dff1,0xed38,0x495a,0x91,0xf1,0xab,0x6c,0x53,0x93,0x24,0x68);


MIDL_DEFINE_GUID(IID, IID_IProgress,0x856aa038,0x853f,0x42e2,0xac,0xf7,0x6e,0x7b,0x02,0xdb,0xe2,0x94);


MIDL_DEFINE_GUID(IID, IID_ISnapshot,0x1a2d0551,0x58a4,0x4107,0x85,0x7e,0xef,0x41,0x4f,0xc4,0x2f,0xfc);


MIDL_DEFINE_GUID(IID, IID_IMediumAttachment,0xe58eb3eb,0x8627,0x428b,0xbd,0xf8,0x34,0x48,0x7c,0x84,0x8d,0xe5);


MIDL_DEFINE_GUID(IID, IID_IMedium,0x1d578f43,0x5ef1,0x4415,0xb5,0x56,0x75,0x92,0xd3,0xcc,0xdc,0x8f);


MIDL_DEFINE_GUID(IID, IID_IMediumFormat,0x89f52554,0xd469,0x4799,0x9f,0xad,0x17,0x05,0xe8,0x6a,0x08,0xb1);


MIDL_DEFINE_GUID(IID, IID_IKeyboard,0x2d1a531b,0x4c6e,0x49cc,0x8a,0xf6,0x5c,0x85,0x7b,0x78,0xb5,0xd7);


MIDL_DEFINE_GUID(IID, IID_IMouse,0x7c0f2eae,0xf92d,0x498c,0xb8,0x02,0xe1,0xa3,0x76,0x37,0x74,0xdc);


MIDL_DEFINE_GUID(IID, IID_IFramebuffer,0xb7ed347a,0x5765,0x40a0,0xae,0x1c,0xf5,0x43,0xeb,0x4d,0xde,0xaf);


MIDL_DEFINE_GUID(IID, IID_IFramebufferOverlay,0x0bcc1c7e,0xe415,0x47d2,0xbf,0xdb,0xe4,0xc7,0x05,0xfb,0x0f,0x47);


MIDL_DEFINE_GUID(IID, IID_IDisplay,0x1fa79e39,0x0cc9,0x4ab3,0x9d,0xf3,0xed,0x3e,0x96,0xb4,0x24,0x96);


MIDL_DEFINE_GUID(IID, IID_INetworkAdapter,0x5bdb9df8,0xa5e1,0x4322,0xa1,0x39,0xb7,0xa4,0xa7,0x34,0xc7,0x90);


MIDL_DEFINE_GUID(IID, IID_ISerialPort,0x937f6970,0x5103,0x4745,0xb7,0x8e,0xd2,0x8d,0xcf,0x14,0x79,0xa8);


MIDL_DEFINE_GUID(IID, IID_IParallelPort,0x0c925f06,0xdd10,0x4b77,0x8d,0xe8,0x29,0x4d,0x73,0x8c,0x32,0x14);


MIDL_DEFINE_GUID(IID, IID_IMachineDebugger,0xb0b2a2dd,0x0627,0x4502,0x91,0xc2,0xdd,0xc5,0xe7,0x76,0x09,0xe0);


MIDL_DEFINE_GUID(IID, IID_IUSBController,0x6fdcccc5,0xabd3,0x4fec,0x93,0x87,0x2a,0xd3,0x91,0x4f,0xc4,0xa8);


MIDL_DEFINE_GUID(IID, IID_IUSBDevice,0xf8967b0b,0x4483,0x400f,0x92,0xb5,0x8b,0x67,0x5d,0x98,0xa8,0x5b);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceFilter,0xd6831fb4,0x1a94,0x4c2c,0x96,0xef,0x8d,0x0d,0x61,0x92,0x06,0x6d);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDevice,0x173b4b44,0xd268,0x4334,0xa0,0x0d,0xb6,0x52,0x1c,0x9a,0x74,0x0a);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDeviceFilter,0x4cc70246,0xd74a,0x400f,0x82,0x22,0x39,0x00,0x48,0x9c,0x03,0x74);


MIDL_DEFINE_GUID(IID, IID_IAudioAdapter,0x921873db,0x5f3f,0x4b69,0x91,0xf9,0x7b,0xe9,0xe5,0x35,0xa2,0xcb);


MIDL_DEFINE_GUID(IID, IID_IVRDPServer,0x7aeeb530,0x0b08,0x41fe,0x83,0x5d,0x9b,0xe9,0xec,0x1d,0xbe,0x5c);


MIDL_DEFINE_GUID(IID, IID_ISharedFolder,0x64637bb2,0x9e17,0x471c,0xb8,0xf3,0xf8,0x96,0x8d,0xd9,0x88,0x4e);


MIDL_DEFINE_GUID(IID, IID_IInternalSessionControl,0xab161f72,0xe4b3,0x44e6,0xa9,0x19,0x22,0x56,0x47,0x4b,0xda,0x66);


MIDL_DEFINE_GUID(IID, IID_ISession,0x12F4DCDB,0x12B2,0x4EC1,0xB7,0xCD,0xDD,0xD9,0xF6,0xC5,0xBF,0x4D);


MIDL_DEFINE_GUID(IID, IID_IStorageController,0xfd93adc0,0xbbaa,0x4256,0x9e,0x6e,0x00,0xe2,0x9f,0x91,0x51,0xc9);


MIDL_DEFINE_GUID(IID, IID_IPerformanceMetric,0x2a1a60ae,0x9345,0x4019,0xad,0x53,0xd3,0x4b,0xa4,0x1c,0xbf,0xe9);


MIDL_DEFINE_GUID(IID, IID_IPerformanceCollector,0xe22e1acb,0xac4a,0x43bb,0xa3,0x1c,0x17,0x32,0x16,0x59,0xb0,0xc6);


MIDL_DEFINE_GUID(IID, IID_INATEngine,0x4b286616,0xeb03,0x11de,0xb0,0xfb,0x17,0x01,0xec,0xa4,0x22,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_VirtualBox,0xB1A7A4F2,0x47B9,0x4A1E,0x82,0xB2,0x07,0xCC,0xD5,0x32,0x3C,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_Session,0x3C02F46D,0xC9D2,0x4F11,0xA3,0x84,0x53,0xF0,0xCF,0x91,0x72,0x14);


MIDL_DEFINE_GUID(CLSID, CLSID_CallbackWrapper,0x49EE8561,0x5563,0x4715,0xB1,0x8C,0xA4,0xB1,0xA4,0x90,0xDA,0xFE);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* defined(_M_IA64) || defined(_M_AMD64)*/

