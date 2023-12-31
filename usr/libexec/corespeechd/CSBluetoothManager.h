//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSBluetoothManager : NSObject
{
    _Bool _isAttachingBluetoothSession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    struct BTSessionImpl *_bluetoothSession;	// 32 = 0x20
    struct BTLocalDeviceImpl *_localDevice;	// 40 = 0x28
    NSArray *_pairedDeviceAddresses;	// 48 = 0x30
    NSArray *_connectedDeviceAddresses;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_bluetoothSessionSetupGroup;	// 64 = 0x40
    struct BTAccessoryManagerImpl *_accessoryManager;	// 72 = 0x48
    NSMutableDictionary *_deviceAddressToDeviceInfoMap;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00400000000881f5
- (void).cxx_destruct;	// IMP=0x0020000000087a23
@property(retain, nonatomic) NSMutableDictionary *deviceAddressToDeviceInfoMap; // @synthesize deviceAddressToDeviceInfoMap=_deviceAddressToDeviceInfoMap;
@property(nonatomic) struct BTAccessoryManagerImpl *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup; // @synthesize bluetoothSessionSetupGroup=_bluetoothSessionSetupGroup;
@property(retain, nonatomic) NSArray *connectedDeviceAddresses; // @synthesize connectedDeviceAddresses=_connectedDeviceAddresses;
@property(retain, nonatomic) NSArray *pairedDeviceAddresses; // @synthesize pairedDeviceAddresses=_pairedDeviceAddresses;
@property(nonatomic) struct BTLocalDeviceImpl *localDevice; // @synthesize localDevice=_localDevice;
@property(nonatomic) _Bool isAttachingBluetoothSession; // @synthesize isAttachingBluetoothSession=_isAttachingBluetoothSession;
@property(nonatomic) struct BTSessionImpl *bluetoothSession; // @synthesize bluetoothSession=_bluetoothSession;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_clearBluetoothDeviceInfoForDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x001000000008782f
- (void)_loadAACPCapabilityForDevice:(struct BTDeviceImpl *)arg1 deviceAddress:(id)arg2;	// IMP=0x001000000008758c
- (id)_setBluetoothDeviceInfoForDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x001000000008738e
- (void)_fetchAllConnectedDevices;	// IMP=0x0010000000087291
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x001000000008728b
- (void)_tearDownAccessoryManager;	// IMP=0x0010000000087276
- (void)_setUpAccessoryManager;	// IMP=0x0010000000087170
- (void)_tearDownLocalDevice;	// IMP=0x0010000000087143
- (void)_setUpLocalDevice;	// IMP=0x0010000000086f9d
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000086e5d
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000086d19
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;	// IMP=0x0010000000086c04
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)arg1 accessoryEvent:(int)arg2 device:(struct BTDeviceImpl *)arg3 accessoryState:(int)arg4;	// IMP=0x0010000000086b30
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x0010000000086ad2
- (void)_attachBluetoothSession;	// IMP=0x00100000000869a7
- (void)_detachBluetoothSession;	// IMP=0x00100000000868d9
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl *)arg1;	// IMP=0x0010000000086397
- (id)getBluetoothDeviceInfoForDeviceWithId:(id)arg1;	// IMP=0x0010000000086150
- (id)_getAddressWithBTDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x0010000000085fec
- (id)_getConnectedBluetoothDeviceAddressesFromLocalDevice:(struct BTLocalDeviceImpl *)arg1;	// IMP=0x0010000000085cc1
- (void)getConnectedBluetoothDeviceAddressesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085c2f
- (void)getWirelessSplitterInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085b9d
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085a93
- (id)init;	// IMP=0x0010000000085993

@end

