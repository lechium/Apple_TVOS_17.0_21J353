//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface CSCarKitUtils : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _recacheCarCapabilitiesLock;	// 16 = 0x10
    NSDictionary *_carPlayCapabilitiesDict;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000e2087
- (void).cxx_destruct;	// IMP=0x00200000000e1fb3
@property(readonly, nonatomic) NSDictionary *carPlayCapabilitiesDict; // @synthesize carPlayCapabilitiesDict=_carPlayCapabilitiesDict;
- (id)_fetchCarCapabilitiesDict;	// IMP=0x00100000000e1fa1
- (_Bool)isFlexibleFollowupDisabledForConnectedVehicle;	// IMP=0x00100000000e1f99
- (id)_latencyCorrectionSecondsForHeadUnit;	// IMP=0x00100000000e1f91
- (id)_getAndPotentiallyCacheCarPlayCapabilitiesDict;	// IMP=0x00100000000e1f89
- (_Bool)_isValidLatencyCorrectionValue:(id)arg1;	// IMP=0x00100000000e1f3e
- (id)potentiallyAddHWLatencyToOption:(id)arg1 streamHandle:(unsigned long long)arg2 voiceController:(id)arg3;	// IMP=0x00100000000e1f28
- (_Bool)isCarPlayConnected;	// IMP=0x00100000000e1f20
- (void)_recacheCarPlayCapabilitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1ebd
- (void)invalidateCachedCarPlayCapabilities;	// IMP=0x00100000000e1e1d
- (void)fetchCarCapabilitiesInBackgroundWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1d90
- (void)handleCarCapabilitiesUpdatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1cd6
- (void)handleHeadUnitConnectedWithAsyncCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1c1c
- (void)_startObservingCarCapabilitiesNotfication:(const struct __CFString *)arg1;	// IMP=0x00100000000e1be8
- (void)dealloc;	// IMP=0x00100000000e1b2c
- (id)init;	// IMP=0x00100000000e1a3d

@end

