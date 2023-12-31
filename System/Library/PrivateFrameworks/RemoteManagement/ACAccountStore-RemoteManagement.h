//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (RemoteManagement)
+ (id)rm_defaultStore;	// IMP=0x00600000000021bf
- (id)rm_remoteManagementAccountForProfileIdentifier:(id)arg1;	// IMP=0x0010000000002e20
- (id)rm_remoteManagementAccountForEnrollmentURL:(id)arg1;	// IMP=0x0010000000002c3b
- (id)rm_remoteManagementAccountForIdentifier:(id)arg1;	// IMP=0x0010000000002a56
- (id)rm_remoteManagementAccountForDSID:(id)arg1;	// IMP=0x0010000000002871
- (id)rm_remoteManagementAccountForAltDSID:(id)arg1;	// IMP=0x001000000000268c
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;	// IMP=0x0010000000002418
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0010000000002349
- (id)rm_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x001000000000232a
- (id)rm_iTunesAccountForRemoteManagingAccount;	// IMP=0x001000000000230e
- (id)rm_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x00100000000022ef
- (id)rm_iCloudAccountForRemoteManagingAccount;	// IMP=0x00100000000022d3
- (id)rm_RemoteManagementAccounts;	// IMP=0x0010000000002274
- (id)rm_RemoteManagementAccountType;	// IMP=0x0010000000002258
@end

