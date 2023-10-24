//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSService.h>

@class HMDAccountHandle, IDSAccount, NSArray, NSSet, NSString;

@interface IDSService (HMDAccounts)
@property(readonly, copy) HMDAccountHandle *hmd_preferredHandle;
@property(readonly, copy) NSArray *hmd_handles;
@property(readonly, nonatomic, getter=hmd_isActive) _Bool hmd_active;

// Remaining properties
@property(readonly, copy, nonatomic) NSSet *accounts;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) IDSAccount *iCloudAccount;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier;
@property(readonly) Class superclass;
@end

