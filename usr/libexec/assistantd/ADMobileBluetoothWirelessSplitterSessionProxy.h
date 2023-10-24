//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource, AFBluetoothWirelessSplitterSessionInfo, AFBluetoothWirelessSplitterSessionStateObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface ADMobileBluetoothWirelessSplitterSessionProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    AFBluetoothWirelessSplitterSessionInfo *_wirelessSplitterSessionInfo;	// 32 = 0x20
    AFBluetoothWirelessSplitterSessionStateObserver *_observer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000deaf0
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dea31
- (void)_invalidate;	// IMP=0x00100000000de914
- (void)_accessBTLocalDeviceUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000de70c
- (void)_fetchWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000de5f8
- (void)_updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000de3f3
- (void)_getWirelessSplitterSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000de352
- (void)_reload:(_Bool)arg1;	// IMP=0x00100000000de26b
- (void)invalidate;	// IMP=0x00100000000de220
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000de189
- (void)addObserver:(id)arg1;	// IMP=0x00100000000de0f2
- (void)getSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000de05b
- (void)bluetoothWirelessSplitterSessionStateObserver:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000000dded0
- (void)reload;	// IMP=0x00100000000dde85
- (void)updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000dddf8
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000ddc4d
- (void)dealloc;	// IMP=0x00100000000ddb98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

