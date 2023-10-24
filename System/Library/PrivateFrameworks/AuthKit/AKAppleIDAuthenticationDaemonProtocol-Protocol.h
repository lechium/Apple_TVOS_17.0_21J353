//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class AKAccountRecoveryContext, AKAppleIDAuthenticationContext, AKCircleRequestContext, AKDeviceListRequestContext, AKFollowUpTearDownContext, AKUserInformation, NSArray, NSDictionary, NSHTTPURLResponse, NSNumber, NSString;
@protocol NSSecureCoding;

@protocol AKAppleIDAuthenticationDaemonProtocol <NSObject>
- (void)deleteDeviceListCacheWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)deleteDeviceListCacheWithContext:(AKDeviceListRequestContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchUserInformationForAltDSID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)fetchGlobalConfigurationUsingPolicy:(unsigned long long)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)clearSessionCacheWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)forceURLBagUpdateForAltDSID:(NSString *)arg1 urlSwitchData:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)fetchURLBagFromCache:(_Bool)arg1 altDSID:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchURLBagForAltDSID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)accountNamesForAltDSID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)activeLoginCode:(void (^)(NSString *, NSError *))arg1;
- (void)isDevicePasscodeProtected:(void (^)(_Bool, NSError *))arg1;
- (void)teardownFollowUpWithContext:(AKFollowUpTearDownContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)synchronizeFollowUpItemsForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)persistMasterKeyVerifier:(NSDictionary *)arg1 withContext:(AKAppleIDAuthenticationContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)verifyMasterKey:(NSString *)arg1 withContext:(AKAccountRecoveryContext *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)renewRecoveryTokenWithContext:(AKAccountRecoveryContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)performCircleRequestWithContext:(AKCircleRequestContext *)arg1 completion:(void (^)(AKCircleRequestPayload *, NSError *))arg2;
- (oneway void)isCreateAppleIDAllowedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)validateVettingToken:(NSString *)arg1 forAltDSID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)reportSignOutForAllAppleIDsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)reportSignOutForAppleID:(NSString *)arg1 service:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)performCheckInForAccountWithAltDSID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)configurationInfoWithIdentifiers:(NSArray *)arg1 forAltDSID:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)setConfigurationInfo:(id <NSSecureCoding>)arg1 forIdentifier:(NSString *)arg2 forAltDSID:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)warmUpVerificationSessionWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)performSilentTTRFor:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)revokeAuthorizationForApplicationWithClientID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)deleteAuthorizationDatabaseWithAltDSID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)fetchAppListWithAltDSID:(NSString *)arg1 completion:(void (^)(AKApplicationMetadataInfo *, NSError *))arg2;
- (void)deviceListWithContext:(AKDeviceListRequestContext *)arg1 completion:(void (^)(AKDeviceListResponse *, NSError *))arg2;
- (void)fetchAuthModeWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)updateUserInformationForAltDSID:(NSString *)arg1 userInformation:(AKUserInformation *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)getUserInformationForAltDSID:(NSString *)arg1 completion:(void (^)(AKUserInformation *, NSError *))arg2;
- (void)getUserInformationWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(AKUserInformation *, NSError *))arg2;
- (void)setAppleIDWithDSID:(NSNumber *)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)setAppleIDWithAltDSID:(NSString *)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)getServerUILoadDelegateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)getServerUILoadDelegateForAltDSID:(NSString *)arg1 completion:(void (^)(AKAppleIDServerResourceLoadDelegate *, NSError *))arg2;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forContext:(AKAppleIDAuthenticationContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)updateStateWithExternalAuthenticationResponse:(NSHTTPURLResponse *)arg1 forAppleID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)generateLoginCodeWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)checkSecurityUpgradeEligibilityForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)performPasswordResetWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)authenticateWithContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

