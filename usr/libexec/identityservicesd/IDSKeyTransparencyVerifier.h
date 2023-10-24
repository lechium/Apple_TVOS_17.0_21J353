//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCloudKitKeyTransparencyStore, IDSCurrentServerTime, IDSDAccountController, IDSDServiceController, IDSKeyTransparencyPolicy, IDSPeerIDManager, IDSPushHandler, IDSRateLimiter, IDSRegistrationKeyManager, IDSRegistrationReasonTracker, KTVerifier, NSDate, NSDictionary;
@protocol CUTMetricLogger, IDSKeyTransparencyRegistrationDataSource;

@interface IDSKeyTransparencyVerifier : NSObject
{
    IDSCloudKitKeyTransparencyStore *_keyTransparencyStore;	// 8 = 0x8
    IDSKeyTransparencyPolicy *_policy;	// 16 = 0x10
    id <IDSKeyTransparencyRegistrationDataSource> _registrationDataSource;	// 24 = 0x18
    KTVerifier *_KTVerifier;	// 32 = 0x20
    NSDictionary *_serviceToVerifier;	// 40 = 0x28
    NSDictionary *_optInEligibleKTApplicationToIDSServiceIdentifier;	// 48 = 0x30
    NSDictionary *_serviceToOptInManager;	// 56 = 0x38
    IDSRegistrationKeyManager *_keyManager;	// 64 = 0x40
    id <CUTMetricLogger> _internalMetricLogger;	// 72 = 0x48
    id <CUTMetricLogger> _productionMetricLogger;	// 80 = 0x50
    IDSRateLimiter *_selfHealRateLimiter;	// 88 = 0x58
    NSDate *_kickPeerVerificationDate;	// 96 = 0x60
}

+ (id)strippedURIFromKeyTransparencyURI:(id)arg1;	// IMP=0x0040000000450401
+ (id)keyTransparencyURIPrefixForServiceIdentifier:(id)arg1;	// IMP=0x0010000000450266
+ (id)keyTransparencyApplicationForServiceIdentifier:(id)arg1;	// IMP=0x00100000004501bb
+ (id)keyTransparencyServiceIdentifierForTransparencyApplication:(id)arg1;	// IMP=0x0010000000450110
+ (id)keyTransparencyVersionNumberForServiceType:(id)arg1;	// IMP=0x001000000043dbe0
+ (_Bool)isKeyTransparencyEnabled;	// IMP=0x001000000043dba6
+ (id)sharedInstance;	// IMP=0x001000000043d0f8
- (void).cxx_destruct;	// IMP=0x00200000004508a4
@property(retain, nonatomic) NSDate *kickPeerVerificationDate; // @synthesize kickPeerVerificationDate=_kickPeerVerificationDate;
@property(retain, nonatomic) IDSRateLimiter *selfHealRateLimiter; // @synthesize selfHealRateLimiter=_selfHealRateLimiter;
@property(readonly, nonatomic) id <CUTMetricLogger> productionMetricLogger; // @synthesize productionMetricLogger=_productionMetricLogger;
@property(readonly, nonatomic) id <CUTMetricLogger> internalMetricLogger; // @synthesize internalMetricLogger=_internalMetricLogger;
@property(readonly, nonatomic) IDSRegistrationKeyManager *keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) NSDictionary *serviceToOptInManager; // @synthesize serviceToOptInManager=_serviceToOptInManager;
@property(readonly, nonatomic) NSDictionary *optInEligibleKTApplicationToIDSServiceIdentifier; // @synthesize optInEligibleKTApplicationToIDSServiceIdentifier=_optInEligibleKTApplicationToIDSServiceIdentifier;
@property(readonly, nonatomic) NSDictionary *serviceToVerifier; // @synthesize serviceToVerifier=_serviceToVerifier;
@property(readonly, nonatomic) KTVerifier *KTVerifier; // @synthesize KTVerifier=_KTVerifier;
@property(readonly, nonatomic) id <IDSKeyTransparencyRegistrationDataSource> registrationDataSource; // @synthesize registrationDataSource=_registrationDataSource;
@property(readonly, nonatomic) IDSKeyTransparencyPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) IDSCloudKitKeyTransparencyStore *keyTransparencyStore; // @synthesize keyTransparencyStore=_keyTransparencyStore;
- (double)keyTransparencyPeerUpdateLastResortFetchInterval;	// IMP=0x0010000000450768
- (double)keyTransparencyCKContainerExpiryTime;	// IMP=0x001000000045070e
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0010000000450626
- (void)_presentInternalVerificationAlertWithText:(id)arg1;	// IMP=0x0010000000450505
- (id)SHA256HashForKeyTransparencyTrustedService:(id)arg1;	// IMP=0x001000000044fe4e
- (id)SHA256HashForKeyTransparencyTrustedServices:(id)arg1;	// IMP=0x001000000044f985
- (id)SHA256HashForKeyTransparencyTrustedDevice:(id)arg1;	// IMP=0x001000000044f755
- (id)_keyTransparencyVerifierForServiceIdentifier:(id)arg1;	// IMP=0x001000000044f694
- (long long)_IDSEndpointTransparencyVerificationStateForKTResult:(unsigned long long)arg1;	// IMP=0x001000000044f676
- (id)_IDSEndpointTransparencyStatesForKTLoggableDatas:(id)arg1 index:(id)arg2;	// IMP=0x001000000044f42f
- (id)_KTDatasForIDSProtoKeyTransparencyTrustedDevices:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x001000000044eee9
- (id)_IDSProtoKeyTransparencyTrustedDeviceForKeyTransparencyIndex:(id)arg1 entry:(id)arg2;	// IMP=0x001000000044ec5c
- (id)_KTDatasForIDSKeyTransparencyEntries:(id)arg1;	// IMP=0x001000000044ea9e
- (id)_KTDataForIDSKeyTransparencyEntry:(id)arg1;	// IMP=0x001000000044e8f4
- (id)_mergeCloudKitTrustedDevices:(id)arg1 accountKeyTrustedDevices:(id)arg2;	// IMP=0x001000000044e841
- (_Bool)_isTrustedCandidate:(id)arg1 index:(id)arg2 givenTrustedDevices:(id)arg3;	// IMP=0x001000000044e36e
- (unsigned long long)_numberOfMatchesForCandidates:(id)arg1 index:(id)arg2 trustedDevices:(id)arg3;	// IMP=0x001000000044e25f
- (void)_submitMetricsForTrustedDeviceVerificationWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4 index:(id)arg5 entries:(id)arg6;	// IMP=0x001000000044d85f
- (void)_submitMetricsForTrustedDeviceEnrollmentWithCloudKitResult:(id)arg1 cloudKitOperationTimeInterval:(double)arg2 accountKeyResult:(id)arg3 accountKeyOperationTimeInterval:(double)arg4;	// IMP=0x001000000044d128
- (void)_submitMetricForTrustedDeviceEnrollmentWithKVSResult:(id)arg1 kvsSyncTimeInterval:(double)arg2;	// IMP=0x001000000044cd6e
- (void)reportAccountKeyFetchMetricForService:(id)arg1 withSuccess:(_Bool)arg2 isAccountMismatch:(_Bool)arg3 withError:(id)arg4;	// IMP=0x001000000044c7ba
- (_Bool)isKeyInKVS:(id)arg1;	// IMP=0x001000000044c683
- (void)updateCurrentDeviceInKVS:(CDUnknownBlockType)arg1;	// IMP=0x001000000044c1a7
- (void)repairKVSDeviceEntryIfNeeded;	// IMP=0x001000000044bf6c
- (void)fetchCurrentDeviceKVSKey:(CDUnknownBlockType)arg1;	// IMP=0x001000000044bc9d
- (void)removeAllKVSEntries;	// IMP=0x001000000044bc60
- (id)forceSyncKVS;	// IMP=0x001000000044b704
- (id)_fetchExpiredEntriesFromKVS;	// IMP=0x001000000044af65
- (id)fetchTrustedDevicesFromKVS;	// IMP=0x001000000044ab9d
- (void)_removeObjectsForKeysFromKVS:(id)arg1;	// IMP=0x001000000044a996
- (void)_insertTrustedDeviceToKVS:(id)arg1 withMetadata:(id)arg2;	// IMP=0x001000000044a77c
- (id)_fetchCurrentKVS;	// IMP=0x001000000044a72c
- (void)updateKVSWithTrustedDevices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000449ef8
- (void)_notifyClientOfKTVerifierResults:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000449a5d
- (void)peerVerificationFinishedWithResults:(id)arg1;	// IMP=0x0010000000449249
- (void)fetchKTCDPStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000004490b3
- (void)registrationDataNeedsUpdate;	// IMP=0x0010000000449001
- (void)fetchKTRegistrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000448ef1
- (_Bool)fetchCachedManateeAvailability;	// IMP=0x0010000000448ead
- (void)shouldNoteManateeAvailabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000448cae
- (void)healSelfForApplication:(id)arg1 withHealableErrors:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000448413
- (void)fetchSelfVerificationInfoForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000446e48
- (void)_fetchVerificationInfoForService:(id)arg1 forURIs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000044643c
- (void)fetchPeerVerificationInfoForApplication:(id)arg1 forURIs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004461fe
- (void)clearTransparencyCacheForService:(id)arg1 peerURI:(id)arg2;	// IMP=0x0010000000445ec0
- (void)clearCacheAndUpdatePeersForService:(id)arg1;	// IMP=0x0010000000445429
- (void)getOptInStatesForKTApplications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000444d91
- (_Bool)isOptedInForServiceIdentifier:(id)arg1;	// IMP=0x0010000000444b46
- (void)sendOptInUpdateRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000443c27
- (void)sendOptInUpdateForApplications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004433d7
- (void)checkOptInEligibilityForApplication:(id)arg1 andFetchSelfVerificationRequestIDWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000442d68
- (id)_clientErrorForKTResult:(unsigned long long)arg1 underlyingError:(id)arg2;	// IMP=0x0010000000442ca2
- (void)_mutateSuccessfulSyncIndicatorOnKTLoggableDatas:(id)arg1 forIndex:(id)arg2;	// IMP=0x001000000044268f
- (void)_fulfillOrFailPromiseSeal:(id)arg1 basedOnIndex:(id)arg2 KTResult:(unsigned long long)arg3 ktLoggableDatas:(id)arg4 optedIn:(_Bool)arg5 error:(id)arg6;	// IMP=0x0010000000442555
- (id)_currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x0010000000442005
- (id)_verifyKeyTransparencyOfRegisteredIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3;	// IMP=0x0010000000441b04
- (void)_forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004415c2
- (id)_currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x0010000000440edf
- (id)_transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3;	// IMP=0x00100000004409d4
- (void)currentPeerVerificationResultsForURIVerificationMap:(id)arg1 forService:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004400bc
- (void)nukeKeyTransparencyStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043fd39
- (void)forceVerificationWithIndex:(id)arg1 ticket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000043fb80
- (id)currentVerificationResultsForRegisteredIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x001000000043f932
- (id)currentPeerVerificationResultsForQueriedIndex:(id)arg1 ticket:(id)arg2;	// IMP=0x001000000043f6e4
- (id)_pruneTrustedDevice:(id)arg1 givenEligibleServiceIdentifiers:(id)arg2;	// IMP=0x001000000043f4e2
- (id)transparencyTicketForRegistrationWithIndex:(id)arg1 verificationState:(id)arg2 entry:(id)arg3;	// IMP=0x001000000043f21b
- (void)initiateKTQueryForUris:(id)arg1 service:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000043edeb
- (void)_kickPeerVerificationForURIs:(id)arg1 service:(id)arg2 fetchNow:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000043ea33
- (void)kickPeerVerificationForURIs:(id)arg1 service:(id)arg2 localURI:(id)arg3 fetchNow:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000043e61d
- (id)transparencyTicketForQueryResultsWithIndex:(id)arg1 verificationState:(id)arg2 entries:(id)arg3 localURI:(id)arg4;	// IMP=0x001000000043e13a
- (id)fetchKTEligibleServices;	// IMP=0x001000000043e0ea
- (void)fetchLocalDeviceTrustCircleEligibleServiceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043deaa
- (void)fetchLocalDeviceTrustCircleEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043dce5
- (_Bool)isDeviceAccountStateKeyTransparencyEligible;	// IMP=0x001000000043dc5c
@property(readonly, nonatomic) IDSRegistrationReasonTracker *registrationReasonTracker;
@property(readonly, nonatomic) IDSPushHandler *pushHandler;
@property(readonly, nonatomic) IDSCurrentServerTime *serverTime;
@property(readonly, nonatomic) IDSDServiceController *serviceController;
@property(readonly, nonatomic) IDSDAccountController *accountController;
@property(readonly, nonatomic) IDSPeerIDManager *peerIDManager;
- (id)initWithPolicy:(id)arg1 serviceToVerifier:(id)arg2 keyManager:(id)arg3 store:(id)arg4 registrationDataSource:(id)arg5 internalMetricLogger:(id)arg6 productionMetricLogger:(id)arg7 serviceToKTOptInManager:(id)arg8;	// IMP=0x001000000043d57f
- (id)init;	// IMP=0x001000000043d14d

@end

