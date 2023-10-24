//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class ACAccount, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSSyncRestrictedRegionTask : AMSTask
{
    ACAccount *_account;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
}

+ (id)createSyncAccountFlagsTaskForAccount:(id)arg1 bag:(id)arg2;	// IMP=0x0010000000391cfb
+ (double)checkRestrictedRegionDurationValueFromBag:(id)arg1;	// IMP=0x0010000000391a4e
+ (_Bool)storefrontContainsRestrictedRegionsValueFromBag:(id)arg1;	// IMP=0x001000000039179c
+ (double)durationOfSyncRestrictedRegionValueFromBag:(id)arg1;	// IMP=0x00100000003916fd
+ (_Bool)hasCachedRestrictedRegionsValueFromAccount:(id)arg1 cachedTimestamp:(double *)arg2;	// IMP=0x0010000000391686
+ (_Bool)didExceededSyncDuration:(double)arg1 lastTimestamp:(double)arg2 currentTimestamp:(double)arg3;	// IMP=0x0010000000391660
+ (id)createBagForSubProfile;	// IMP=0x00100000003904c3
+ (id)bagSubProfileVersion;	// IMP=0x0010000000390473
+ (id)bagSubProfile;	// IMP=0x0010000000390423
- (void).cxx_destruct;	// IMP=0x0000000000391dd6
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)cacheRestrictedRegionSyncTimestamp:(double)arg1;	// IMP=0x00000000003915e5
- (id)performSync;	// IMP=0x000000000039055d
- (id)initWithAccount:(id)arg1 bag:(id)arg2;	// IMP=0x0000000000390381
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000039036d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

