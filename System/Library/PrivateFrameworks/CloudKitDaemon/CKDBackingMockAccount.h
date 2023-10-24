//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDBackingAccount.h"

@class NSString;
@protocol CKDTestAccountProtocol, CKDTestDeviceProtocol;

@interface CKDBackingMockAccount : CKDBackingAccount
{
    NSString *_dsid;	// 8 = 0x8
    id <CKDTestAccountProtocol> _testAccount;	// 16 = 0x10
    id <CKDTestDeviceProtocol> _testDevice;	// 24 = 0x18
}

+ (id)mockAccountWithTestAccount:(id)arg1 testDevice:(id)arg2;	// IMP=0x00600000002e4f84
- (void).cxx_destruct;	// IMP=0x00000000002e5731
@property(readonly, nonatomic) id <CKDTestDeviceProtocol> testDevice; // @synthesize testDevice=_testDevice;
@property(readonly, nonatomic) id <CKDTestAccountProtocol> testAccount; // @synthesize testAccount=_testAccount;
- (_Bool)isDataclassEnabledForCellular:(id)arg1;	// IMP=0x00000000002e5707
- (_Bool)isDataclassEnabled:(id)arg1;	// IMP=0x00000000002e56ff
- (id)accountPropertiesForDataclass:(id)arg1;	// IMP=0x00000000002e56e6
- (_Bool)isPrimaryEmailVerified;	// IMP=0x00000000002e56de
- (_Bool)canRenew;	// IMP=0x00000000002e56d6
- (id)iCloudAuthTokenWithError:(id *)arg1;	// IMP=0x00000000002e5597
- (id)cloudKitAuthTokenWithError:(id *)arg1;	// IMP=0x00000000002e5458
- (id)personaIdentifier;	// IMP=0x00000000002e53ad
- (id)sharingURLHostname;	// IMP=0x00000000002e53a0
- (id)displayedHostname;	// IMP=0x00000000002e5393
- (id)fullName;	// IMP=0x00000000002e5343
- (id)serverPreferredPushEnvironment;	// IMP=0x00000000002e532f
- (id)username;	// IMP=0x00000000002e531d
- (id)primaryEmail;	// IMP=0x00000000002e52cd
- (id)identifier;	// IMP=0x00000000002e527d
- (id)dsid;	// IMP=0x00000000002e51a3
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e5119
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e508f
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e507a
- (id)_initMockAccountWithTestAccount:(id)arg1 testDevice:(id)arg2;	// IMP=0x00000000002e4ee2
- (long long)accountType;	// IMP=0x00000000002e4ed7

@end
