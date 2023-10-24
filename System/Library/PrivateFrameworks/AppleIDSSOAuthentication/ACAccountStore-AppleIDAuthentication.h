//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleIDAuthentication)
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0090000000002260
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0090000000002248
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;	// IMP=0x0090000000001fc1
- (id)aida_accountForAltDSID:(id)arg1;	// IMP=0x0090000000001d5b
- (id)aida_accountForPrimaryiCloudAccount;	// IMP=0x0090000000001cfc
- (id)aida_accountForiCloudAccount:(id)arg1;	// IMP=0x00900000000019dd
- (id)aida_AppleIDAuthenticationAccounts;	// IMP=0x009000000000197e
- (id)aida_AppleIDAuthenticationAccountType;	// IMP=0x0090000000001962
- (id)_primaryiCloudAccount;	// IMP=0x009000000000174d
@end
