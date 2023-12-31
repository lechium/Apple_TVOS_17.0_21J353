//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SDProximityController : NSObject
{
    NSDictionary *_niSessions;	// 8 = 0x8
    NSMutableDictionary *_deviceIdToDelegate;	// 16 = 0x10
    NSMutableDictionary *_deviceIdToStatusId;	// 24 = 0x18
    unsigned long long _currentRestartDelay;	// 32 = 0x20
    unsigned long long _defaultRestartDelay;	// 40 = 0x28
    unsigned long long _currentRestartCount;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 56 = 0x38
    NSMutableDictionary *_deviceIdToCurrentPreset;	// 64 = 0x40
}

+ (id)sharedController;	// IMP=0x002000000004e240
- (void).cxx_destruct;	// IMP=0x001000000004ffdf
@property(readonly, copy, nonatomic) NSMutableDictionary *deviceIdToCurrentPreset; // @synthesize deviceIdToCurrentPreset=_deviceIdToCurrentPreset;
- (long long)_deviceToPreset:(id)arg1;	// IMP=0x001000000004fd74
- (void)_runSession;	// IMP=0x001000000004f874
- (void)_newDeviceOrRegion:(id)arg1 region:(id)arg2;	// IMP=0x001000000004f55f
- (void)_removeDevice:(id)arg1;	// IMP=0x001000000004f450
- (void)_notifyRegionLost:(id)arg1;	// IMP=0x001000000004f3b6
- (void)_removeDeviceIdFromAirpodsStatus:(id)arg1;	// IMP=0x001000000004f13b
- (unsigned long long)checkDeviceRegion:(id)arg1;	// IMP=0x001000000004eeda
- (void)sender:(id)arg1 _notifyBluetoothSample:(id)arg2 withId:(id)arg3 forType:(unsigned long long)arg4;	// IMP=0x001000000004e8ea
- (void)clearDeviceList;	// IMP=0x001000000004e81a
- (void)notifyDeviceLost:(id)arg1;	// IMP=0x001000000004e6f1
- (void)sender:(id)arg1 notifyBluetoothSample:(id)arg2 forType:(unsigned long long)arg3;	// IMP=0x001000000004e46b
- (void)sender:(id)arg1 notifyBluetoothSample:(id)arg2;	// IMP=0x001000000004e3c0
- (id)init;	// IMP=0x001000000004e295
- (void)restart;	// IMP=0x00100000000500cf
- (void)sessionBegan;	// IMP=0x001000000005001d
- (void)sessionWasSuspended:(id)arg1;	// IMP=0x00100000000506f0
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0010000000050634
- (void)session:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000050578
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;	// IMP=0x00100000000503d4
- (void)session:(id)arg1 didDiscoverNearbyObject:(id)arg2;	// IMP=0x00100000000502ee
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;	// IMP=0x0010000000050292
- (void)sessionDidStartRunning:(id)arg1;	// IMP=0x0010000000050280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

