//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000b324c
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000b23ed
- (void)_getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00900000000b1b94
- (id)_gkAccountForAppleID:(id)arg1;	// IMP=0x00900000000b18af
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1 conformsToMultiUserRestrictions:(_Bool)arg2;	// IMP=0x00900000000b08d9
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;	// IMP=0x00900000000b085f
- (id)_gkAllCredentials;	// IMP=0x00900000000b0831
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00900000000b0240
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x00900000000b01e1
- (id)_gkCredentialForAltDSID:(id)arg1 environment:(long long)arg2;	// IMP=0x00900000000afdd7
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00900000000ae239
@end
