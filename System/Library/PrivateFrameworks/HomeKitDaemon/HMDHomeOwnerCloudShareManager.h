//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCoreDataCloudShareService, HMDCoreDataCloudTransform, HMDHomeManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeOwnerCloudShareManager : NSObject
{
    HMDCoreDataCloudShareService *_shareService;	// 8 = 0x8
    HMDCoreDataCloudTransform *_cloudTransform;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    CDUnknownBlockType _modelSelectionBlock;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000be0fc1
- (void).cxx_destruct;	// IMP=0x0000000000bdf278
- (void)didDeleteModelWithID:(id)arg1 tombstone:(id)arg2 context:(id)arg3;	// IMP=0x0000000000bdf141
- (void)_deleteSharedHome:(id)arg1;	// IMP=0x0000000000bdf07e
- (id)_createShareForHome:(id)arg1;	// IMP=0x0000000000bdec48
- (id)_existingSharedHomesWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000bde95c
- (id)_allExistingSharesForHomeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000bde857
- (id)_canonicalShareFromSharesToSharedHomes:(id)arg1 shareMap:(id)arg2;	// IMP=0x0000000000bde725
- (id)_existingShareForHomeWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000bde2f0
- (id)_shareForHome:(id)arg1;	// IMP=0x0000000000bde1f9
- (id)_removeShare:(id)arg1 usingShareService:(id)arg2 forHomeWithUUID:(id)arg3;	// IMP=0x0000000000bde027
- (id)removeSharesForHome:(id)arg1;	// IMP=0x0000000000bddd71
- (id)acceptShareInvitation:(id)arg1;	// IMP=0x0000000000bddd5b
- (id)auditAccessForUsers:(id)arg1 home:(id)arg2;	// IMP=0x0000000000bddbec
- (id)revokeAccessForUser:(id)arg1 home:(id)arg2;	// IMP=0x0000000000bdda7a
- (id)grantAccessForUser:(id)arg1 home:(id)arg2;	// IMP=0x0000000000bdd908
- (id)initWithContainer:(id)arg1 sharedStore:(id)arg2 privateStore:(id)arg3 moc:(id)arg4 cloudTransform:(id)arg5 homeManager:(id)arg6;	// IMP=0x0000000000bdd799
- (id)initWithShareService:(id)arg1 homeManager:(id)arg2 cloudTransform:(id)arg3 modelSelectionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000bdd60c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

