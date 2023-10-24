//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSData, NSHashTable, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMDApplicationInfo : HMFObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    _Bool _independent;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    NSHashTable *_processes;	// 24 = 0x18
    HMDApplicationInfo *_companionApplicationInfo;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000672109
+ (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x0010000000671f52
+ (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x0010000000671e03
+ (id)privateVendorIdentifier;	// IMP=0x0010000000671de5
- (void).cxx_destruct;	// IMP=0x0000000000671da3
@property(readonly) HMDApplicationInfo *companionApplicationInfo; // @synthesize companionApplicationInfo=_companionApplicationInfo;
@property(readonly, getter=isIndependent) _Bool independent; // @synthesize independent=_independent;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x0000000000671d53
- (void)removeProcess:(id)arg1;	// IMP=0x0000000000671cd8
- (void)addProcess:(id)arg1;	// IMP=0x0000000000671c5d
@property(readonly, copy) NSArray *processes;
- (id)clientIdentifierSalt:(id *)arg1;	// IMP=0x0000000000671aa9
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
@property(readonly, getter=isInstalled) _Bool installed;
@property(readonly) HMDApplicationInfo *hostApplicationInfo;
@property(readonly, copy) NSData *vendorIdentifier;
@property(readonly) NSURL *bundleURL;
- (id)attributeDescriptions;	// IMP=0x00000000006717fa
- (id)shortDescription;	// IMP=0x000000000067178e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006716b3
@property(readonly) unsigned long long hash;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000671587
- (id)init;	// IMP=0x00000000006714df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
