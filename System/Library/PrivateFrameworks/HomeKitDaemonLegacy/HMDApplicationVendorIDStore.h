//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDApplicationVendorIDStore : HMFObject
{
    NSMutableDictionary *_applicationVendorIdMapping;	// 8 = 0x8
    NSMutableDictionary *_applicationMachUUIDMapping;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000060c611
+ (id)sharedStore;	// IMP=0x001000000060c5e1
- (void).cxx_destruct;	// IMP=0x000000000060b85e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping; // @synthesize applicationMachUUIDMapping=_applicationMachUUIDMapping;
@property(readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping; // @synthesize applicationVendorIdMapping=_applicationVendorIdMapping;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000060b7a5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000060b5bc
- (void)__handleUninstalledApplication:(id)arg1;	// IMP=0x000000000060b528
- (id)_machUUIDsForApplication:(id)arg1;	// IMP=0x000000000060b35d
- (id)machUUIDsForApplication:(id)arg1;	// IMP=0x000000000060b213
- (void)_save;	// IMP=0x000000000060b10f
- (void)removeVendorIDForApplicationBundleId:(id)arg1;	// IMP=0x000000000060b057
- (_Bool)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;	// IMP=0x000000000060abf4
- (void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;	// IMP=0x000000000060abbd
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;	// IMP=0x000000000060aab2
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2;	// IMP=0x000000000060a9d4
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(_Bool)arg3;	// IMP=0x000000000060a8ec
- (void)_extractVendorIDForApplication:(id)arg1;	// IMP=0x000000000060a722
- (id)_vendorIDForApplication:(id)arg1;	// IMP=0x000000000060a528
- (id)vendorIDForApplication:(id)arg1;	// IMP=0x000000000060a3de
- (void)checkCorrectness;	// IMP=0x000000000060a36d
- (id)init;	// IMP=0x000000000060a20a

@end

