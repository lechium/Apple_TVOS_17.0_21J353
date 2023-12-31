//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWatchManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _pairedWithWatch;	// 24 = 0x18
    NSArray *_connectedWatches;	// 32 = 0x20
    id <HMDIDSService> _service;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000008e6885
+ (id)shortDescription;	// IMP=0x00100000008e6878
+ (_Bool)isCompatibleWatchDevice:(id)arg1;	// IMP=0x00100000008e6870
+ (id)sharedManager;	// IMP=0x00100000008e67e3
- (void).cxx_destruct;	// IMP=0x00000000008e5e75
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00000000008e5d21
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000000008e5a5b
- (id)connectedWatchFromDeviceID:(id)arg1;	// IMP=0x00000000008e582a
@property(readonly, copy) NSArray *connectedWatches; // @synthesize connectedWatches=_connectedWatches;
@property(readonly, getter=isPairedWithWatch) _Bool pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property(readonly, copy) NSArray *watches;
- (void)__initializeConnectedDevices;	// IMP=0x00000000008e52c4
- (id)attributeDescriptions;	// IMP=0x00000000008e51f8
- (id)init;	// IMP=0x00000000008e5090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

