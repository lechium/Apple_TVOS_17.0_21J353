//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothWirelessSplitterSessionProxy, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADMobileBluetoothDeviceDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    struct BTLocalDeviceImpl *_localDevice;	// 24 = 0x18
    struct BTAccessoryManagerImpl *_accessoryManager;	// 32 = 0x20
    _Bool _attachingToSession;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_sessionSetupGroup;	// 48 = 0x30
    struct os_unfair_lock_s _deviceProxiesLock;	// 56 = 0x38
    NSMutableDictionary *_deviceProxiesByAddress;	// 64 = 0x40
    NSMutableDictionary *_deviceProxiesByDeviceUID;	// 72 = 0x48
    struct os_unfair_lock_s _wirelessSplitterSessionProxyLock;	// 80 = 0x50
    ADMobileBluetoothWirelessSplitterSessionProxy *_wirelessSplitterSessionProxy;	// 88 = 0x58
    NSArray *_connectedDeviceAddresses;	// 96 = 0x60
    NSArray *_pairedDeviceAddresses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000d8abd
- (id)_pairedDeviceProxies;	// IMP=0x00100000000d888c
- (id)_fetchPairedDeviceAddresses;	// IMP=0x00100000000d8536
- (void)_resetPairedDeviceAddresses;	// IMP=0x00100000000d8489
- (id)_connectedDeviceProxies;	// IMP=0x00100000000d8258
- (id)_fetchConnectedDeviceAddresses;	// IMP=0x00100000000d7f02
- (void)_resetConnectedDeviceAddresses;	// IMP=0x00100000000d7e64
- (id)_deviceProxyWithUID:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x00100000000d7dbc
- (id)_deviceProxyWithAddress:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x00100000000d7d02
- (id)wirelessSplitterSession;	// IMP=0x00100000000d7c04
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d7b6d
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d7ad6
- (id)deviceWithUID:(id)arg1;	// IMP=0x00100000000d7a6b
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00100000000d7a00
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d7961
- (void)getBTDeviceWithDeviceUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d789e
- (void)getBTDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d77db
- (id)_deviceProxies;	// IMP=0x00100000000d76fa
- (void)_handleListeningModeChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x00100000000d7470
- (void)_handleInEarStatusChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x00100000000d71b3
- (void)_reloadForDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x00100000000d6fdb
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;	// IMP=0x00100000000d6ebd
- (void)_tearDownAccessoryManager;	// IMP=0x00100000000d6e90
- (void)_setUpAccessoryManager;	// IMP=0x00100000000d6cc9
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x00100000000d6bc4
- (void)_tearDownLocalDevice;	// IMP=0x00100000000d6b97
- (void)_setUpLocalDevice;	// IMP=0x00100000000d69d0
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x00100000000d6981
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;	// IMP=0x00100000000d688f
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;	// IMP=0x00100000000d6793
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;	// IMP=0x00100000000d656c
- (void)_attachToSession;	// IMP=0x00100000000d63ee
- (void)_detachFromSession;	// IMP=0x00100000000d630e
- (void)_cleanUpWirelessSplitterProxy;	// IMP=0x00100000000d6225
- (void)_cleanUpDeviceProxies;	// IMP=0x00100000000d5f51
- (void)invalidate;	// IMP=0x00100000000d5f06
- (id)init;	// IMP=0x00100000000d5d07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
