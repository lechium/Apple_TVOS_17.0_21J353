//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AKClient, NSDictionary, NSString;
@protocol AKAuthenticationContext;

@interface AKSRPContextHelper : NSObject
{
    NSString *;	// 8 = 0x8
    NSString *_passwordResetToken;	// 16 = 0x10
    _Bool _ignoreInternalTokens;	// 24 = 0x18
    _Bool _biometricAuth;	// 25 = 0x19
    _Bool _passcodeAuth;	// 26 = 0x1a
    _Bool _retryAuth;	// 27 = 0x1b
    _Bool _walrusEnabled;	// 28 = 0x1c
    _Bool _walrusWebAccessEnabled;	// 29 = 0x1d
    _Bool _hasSOSActiveDevice;	// 30 = 0x1e
    _Bool _passcodeAuthEnabled;	// 31 = 0x1f
    NSString *_username;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    NSString *_passwordlessToken;	// 48 = 0x30
    NSString *_idmsDataToken;	// 56 = 0x38
    NSString *_accountRecoveryMasterKey;	// 64 = 0x40
    NSString *_altDSID;	// 72 = 0x48
    NSString *_decodedRecoveryPET;	// 80 = 0x50
    NSString *_decodedRecoveryIdentityToken;	// 88 = 0x58
    AKClient *_client;	// 96 = 0x60
    ACAccount *_authKitAccount;	// 104 = 0x68
    id <AKAuthenticationContext> _authContext;	// 112 = 0x70
    NSDictionary *_additionalHeaders;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000b2e42
@property(copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(nonatomic) _Bool passcodeAuthEnabled; // @synthesize passcodeAuthEnabled=_passcodeAuthEnabled;
@property(nonatomic) _Bool hasSOSActiveDevice; // @synthesize hasSOSActiveDevice=_hasSOSActiveDevice;
@property(nonatomic) _Bool walrusWebAccessEnabled; // @synthesize walrusWebAccessEnabled=_walrusWebAccessEnabled;
@property(nonatomic) _Bool walrusEnabled; // @synthesize walrusEnabled=_walrusEnabled;
@property(nonatomic) _Bool retryAuth; // @synthesize retryAuth=_retryAuth;
@property(nonatomic) _Bool passcodeAuth; // @synthesize passcodeAuth=_passcodeAuth;
@property(nonatomic) _Bool biometricAuth; // @synthesize biometricAuth=_biometricAuth;
@property(retain, nonatomic) id <AKAuthenticationContext> authContext; // @synthesize authContext=_authContext;
@property(nonatomic) _Bool ignoreInternalTokens; // @synthesize ignoreInternalTokens=_ignoreInternalTokens;
@property(retain, nonatomic) ACAccount *authKitAccount; // @synthesize authKitAccount=_authKitAccount;
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *decodedRecoveryIdentityToken; // @synthesize decodedRecoveryIdentityToken=_decodedRecoveryIdentityToken;
@property(copy, nonatomic) NSString *decodedRecoveryPET; // @synthesize decodedRecoveryPET=_decodedRecoveryPET;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *accountRecoveryMasterKey; // @synthesize accountRecoveryMasterKey=_accountRecoveryMasterKey;
@property(copy, nonatomic) NSString *idmsDataToken; // @synthesize idmsDataToken=_idmsDataToken;
@property(copy, nonatomic) NSString *passwordlessToken; // @synthesize passwordlessToken=_passwordlessToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)eligibleForContinuationKeyAuthentication;	// IMP=0x00100000000b2c4b
@property(readonly, nonatomic) NSString *passwordResetToken;
@property(readonly, nonatomic) NSString *continuationToken;
- (void)clearContinuationTokenIfSupported;	// IMP=0x00100000000b24da
- (void)_addExperimentalFeaturesInfoToClientProvidedData:(id)arg1;	// IMP=0x00100000000b234a
- (void)authenticationParametersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b05e9
@property(readonly, nonatomic, getter=isContextSecretValidForSRP) _Bool contextSecretValidForSRP;
- (id)initWithContext:(id)arg1;	// IMP=0x00100000000b052d

@end
