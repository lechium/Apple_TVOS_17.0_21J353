//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, AKClient, AKEducationEnterpriseController, AKFidoDaemonServerHandler, AKPasswordResetPresenter, CUTReachability, NSString;
@protocol AKAppleIDAuthSupportProxy;

@interface AKAppleIDAuthenticationService : NSObject
{
    AKClient *_client;	// 8 = 0x8
    NSObject<AKAppleIDAuthSupportProxy> *_authProxy;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
    AKAuthenticationTrafficController *_authTrafficController;	// 32 = 0x20
    AKAuthenticationUILiaison *_authUILiaison;	// 40 = 0x28
    CUTReachability *_reachability;	// 48 = 0x30
    AKFidoDaemonServerHandler *_fidoHandler;	// 56 = 0x38
    AKEducationEnterpriseController *_eduController;	// 64 = 0x40
    AKPasswordResetPresenter *_passwordResetPresenter;	// 72 = 0x48
}

+ (id)_verificationQueue;	// IMP=0x002000000003924d
- (void).cxx_destruct;	// IMP=0x002000000005759b
@property(retain, nonatomic) AKPasswordResetPresenter *passwordResetPresenter; // @synthesize passwordResetPresenter=_passwordResetPresenter;
- (void)deleteDeviceListCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000057424
- (void)deleteDeviceListCacheWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000571da
- (void)_fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056fcd
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056ef9
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056e55
- (_Bool)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1;	// IMP=0x0010000000056c7f
- (_Bool)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000054db4
- (void)piggyback:(id)arg1 handleVerificationWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054d26
- (void)piggyback:(id)arg1 handleEscapeHatchError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054634
- (void)piggyback:(id)arg1 shouldContinueWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005434d
- (void)piggyback:(id)arg1 validateSecurityCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054054
- (void)piggyback:(id)arg1 promptForRandomCodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053f75
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053e87
- (id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000053dae
- (void)_beginChangePasswordFlowWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005388e
- (void)_changePasswordAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000533aa
- (void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053126
- (void)_handleCreateNewAppleIDError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052fd8
- (void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000528a6
- (void)_repairAppleIDWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005231f
- (id)_addAccountNameParameterToURL:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000052104
- (void)_beginiForgotFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051ca9
- (void)_handleRecoverCredentialsError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051b67
- (void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005143d
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005138a
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000512d7
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000051240
- (void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000500dc
- (void)_performSilentServiceTokenAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fc21
- (void)serverUIContext:(id)arg1 processAdditionalData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f8ef
- (_Bool)shouldProcessAdditionalServerUIData:(id)arg1;	// IMP=0x001000000004f8d6
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f83c
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f7ad
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004f795
- (void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f1d8
- (void)fetchGlobalConfigurationUsingPolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f153
- (void)clearSessionCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f08f
- (void)_handleGrandslamResponse:(id)arg1 data:(id)arg2 error:(id)arg3 serverResponse:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000004eed3
- (void)_performGrandslamEndpointActionWithContext:(id)arg1 serverResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004eb2d
- (void)_attemptPasswordlessAuthAfterBiometricOrPasscodeValidationWithContext:(id)arg1 promptType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e69d
- (void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e4eb
- (void)_processValidationCodeSuccessResponse:(id)arg1 authResponse:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004e3ab
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 piggybacking:(_Bool)arg4 initialAuthResponse:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000004df27
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 initialAuthResponse:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004defc
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004d6cb
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d6b2
- (void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 forContext:(id)arg5 error:(id *)arg6;	// IMP=0x001000000004d585
- (void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000004d2a7
- (void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004c9e2
- (id)_authKitAccountFromContext:(id)arg1;	// IMP=0x001000000004c768
- (void)_handleSuccessfulVerificationForContext:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004c354
- (void)_shouldContinueAuthenticatingForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000004a8d5
- (void)_handleVerificationCompletionForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000004a6ff
- (void)_performSafeSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a511
- (void)_performSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a307
- (id)_srpAuthContextHelperWithContext:(id)arg1;	// IMP=0x001000000004a25c
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000497fa
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000497e1
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000497c4
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000497ab
- (void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000048f9d
- (void)_checkFreshnessAndVerifyWithPassword:(id)arg1 serverResponse:(id)arg2 additionalData:(id)arg3 secondaryActionError:(id)arg4 context:(id)arg5 newServerResponse:(id)arg6 username:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000048d9b
- (void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000048bc2
- (void)_titleAndMessageForBadNetworkRelatedErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000048ab8
- (void)_titleAndMessageForError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047dbd
- (_Bool)_incrementAttemptsForContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000047b8c
- (void)_showAlertForVerificationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000479dc
- (void)_handleVerificationError:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004784e
- (void)_handleMissingUsernameOrPasswordForContext:(id)arg1 password:(id)arg2 username:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000047423
- (void)_keepLoginAliveWithContext:(id)arg1 error:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047329
- (void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000045fd4
- (void)_refreshAuthModeFromServerForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045ec1
- (void)_refreshAuthModeIfNecessaryForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045b45
- (void)_refreshLocalAccountAndUpdateContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000453bb
- (void)_updateAltDSIDAndUsername:(id)arg1;	// IMP=0x0010000000044e19
- (void)_correlateContext:(id)arg1 withAuthModeInformation:(CDStruct_5577c19c)arg2;	// IMP=0x0010000000044d79
- (void)_performInteractiveFederatedAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000449ff
- (_Bool)_shouldBroadcastForProximity:(id)arg1;	// IMP=0x00100000000449f7
- (void)_performInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044554
- (void)refreshAuthMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000442ad
- (void)_attemptInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043dc8
- (id)_accountForContinuationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000439bb
- (void)_showContinueUsingUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004341c
- (void)_accountForContinuationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000432e6
- (void)_attemptPasswordlessAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042de7
- (void)_attemptPasswordlessAuthOptionsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042852
- (void)_showBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000424b5
- (void)_attemptBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000423d1
- (void)performPasswordResetWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000041fd7
- (void)_finishAnalyticsEvent:(id)arg1 authenticationResults:(id)arg2 authenticationContext:(id)arg3 error:(id)arg4;	// IMP=0x0010000000041ec7
- (id)_createProxAnalyticsForAuthenticationContextIfNeeded:(id)arg1;	// IMP=0x0010000000041ce5
- (_Bool)_isInteractiveAuthRequiredForContext:(id)arg1;	// IMP=0x00100000000419f0
- (void)_handlePasswordlessAuthResults:(id)arg1 context:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000416aa
- (void)_performAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004128d
- (void)_upgradeSecurityLevelWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040df9
- (void)_authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040bde
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040376
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003fdc3
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003fb0e
- (void)performCheckInForAccountWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f815
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f427
- (oneway void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f256
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e0ce
- (void)_validateLoginCode:(unsigned long long)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 idmsData:(id)arg4 authContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000003da46
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d445
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d33f
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003c16f
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003c0bf
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c02d
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003be5c
- (void)activeLoginCode:(CDUnknownBlockType)arg1;	// IMP=0x001000000003bd03
- (void)isDevicePasscodeProtected:(CDUnknownBlockType)arg1;	// IMP=0x001000000003bc8a
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ba9b
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b8da
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b78a
- (void)performSilentTTRFor:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b70f
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b5ff
- (void)deleteAuthorizationDatabaseWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b4a6
- (void)fetchAppListWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b38f
- (void)deviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003af37
- (_Bool)_shouldShowAlertForAuthModeError:(id)arg1;	// IMP=0x001000000003aed0
- (_Bool)_shouldBlockAuthModeForEntitlementsCheck;	// IMP=0x001000000003ae74
- (void)fetchAuthModeAndMDMRequiredWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003abf6
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a982
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a841
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a67b
- (void)getUserInformationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a4a9
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a2e3
- (void)_setAuthKitAccount:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000039b02
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000398ac
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000039656
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000395b5
- (void)fetchURLBagFromCache:(_Bool)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039523
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039494
- (void)accountNamesForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000392ce
- (id)init;	// IMP=0x00100000000390dd
- (id)initWithProxy:(id)arg1;	// IMP=0x0010000000039083
- (id)initWithClient:(id)arg1 passwordResetPresenter:(id)arg2;	// IMP=0x0010000000038fe2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
