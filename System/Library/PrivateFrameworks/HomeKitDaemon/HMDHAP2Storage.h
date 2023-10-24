//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPSystemKeychainStore, HMDAccessoryBrowser, NSMutableSet, NSString;
@protocol HAP2StorageDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHAP2Storage : NSObject
{
    id <HAP2StorageDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HAPSystemKeychainStore *_storage;	// 24 = 0x18
    NSMutableSet *_registeredIdentifiers;	// 32 = 0x20
    HMDAccessoryBrowser *_accessoryBrowser;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000013143
@property(nonatomic) __weak id <HAP2StorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)saveKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013065
- (void)removeCacheForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012f9d
- (void)saveCacheForIdentifier:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012ea7
- (void)fetchCacheForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012ddf
- (void)saveControllerIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012d1b
- (void)_removeKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012bad
- (void)removeKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012ae5
- (void)removeControllerKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012a31
- (void)fetchKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012969
- (void)fetchControllerKeyForDeviceId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000128a1
- (void)hasKeysForIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000127d9
- (void)deregisterPairedAccessoryWithIdentifier:(id)arg1;	// IMP=0x00000000000126b5
- (void)registerPairedAccessoryWithIdentifier:(id)arg1;	// IMP=0x0000000000012623
- (void)resetPairedAccessoryIdentifiers;	// IMP=0x00000000000125cf
- (id)initWithAccessoryBrowser:(id)arg1;	// IMP=0x00000000000124b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

