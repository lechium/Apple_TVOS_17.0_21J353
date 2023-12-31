//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFNetMonitor, NSArray, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSoftwareUpdateDocumentationManager : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMFNetMonitor *_netMonitor;	// 24 = 0x18
    NSMutableOrderedSet *_assets;	// 32 = 0x20
    NSMutableSet *_registeredMetadata;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000007f3742
+ (id)sharedManager;	// IMP=0x00100000007f36df
- (void).cxx_destruct;	// IMP=0x00000000007f262a
@property(readonly) NSMutableSet *registeredMetadata; // @synthesize registeredMetadata=_registeredMetadata;
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x00000000007f2327
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
- (void)auditAsset:(id)arg1;	// IMP=0x00000000007f1ef6
- (id)assetForDocumentationMetadata:(id)arg1;	// IMP=0x00000000007f1d23
- (void)removeAsset:(id)arg1;	// IMP=0x00000000007f1bca
- (void)addAsset:(id)arg1;	// IMP=0x00000000007f1a68
@property(readonly) NSArray *assets;
- (void)unregisterDocumentationMetadata:(id)arg1;	// IMP=0x00000000007f193d
- (void)registerDocumentationMetadata:(id)arg1;	// IMP=0x00000000007f189f
- (void)parseCachedAssets;	// IMP=0x00000000007f184d
- (id)init;	// IMP=0x00000000007f16f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

