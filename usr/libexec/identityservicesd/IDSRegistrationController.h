//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IDSRateLimiter, IDSUserStore, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDSRegistrationController : NSObject
{
    NSString *_deviceName;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    NSMutableArray *_activeRegistrations;	// 24 = 0x18
    NSMutableArray *_trackedRegistrations;	// 32 = 0x20
    NSMutableSet *_deferredRegisters;	// 40 = 0x28
    int _screenSharingToken;	// 48 = 0x30
    int _iMessageToken;	// 52 = 0x34
    int _faceTimeToken;	// 56 = 0x38
    int _callingToken;	// 60 = 0x3c
    _Bool _displayingAddNumberPrompt;	// 64 = 0x40
    IDSKeychainWrapper *_keychainWrapper;	// 72 = 0x48
    IDSUserStore *_userStore;	// 80 = 0x50
    IDSRateLimiter *_simDeactivationRequestRateLimiter;	// 88 = 0x58
}

+ (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0020000000058a2c
+ (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000058920
+ (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000058406
+ (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000058368
+ (id)sharedInstance;	// IMP=0x0010000000057b78
+ (id)registeredPhoneNumbers;	// IMP=0x0010000000057952
+ (_Bool)validSIMStateForRegistration;	// IMP=0x0010000000057859
+ (_Bool)_isPhoneNumberAuthenticationDuringBuddyAllowed;	// IMP=0x00100000000577c0
+ (_Bool)canCompleteRegistration;	// IMP=0x0010000000057706
+ (_Bool)canStartRegistrationForAccountType:(int)arg1;	// IMP=0x00100000000574e1
+ (_Bool)isBuddyShowing;	// IMP=0x001000000005747c
+ (void)initialize;	// IMP=0x001000000005743c
- (void).cxx_destruct;	// IMP=0x0020000000062618
@property(retain, nonatomic) IDSRateLimiter *simDeactivationRequestRateLimiter; // @synthesize simDeactivationRequestRateLimiter=_simDeactivationRequestRateLimiter;
@property(nonatomic) _Bool displayingAddNumberPrompt; // @synthesize displayingAddNumberPrompt=_displayingAddNumberPrompt;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void)noteManateeAvailabilityTime;	// IMP=0x0010000000062567
- (void)noteiCloudSignInTime;	// IMP=0x0010000000062523
- (void)SIM:(id)arg1 didDeactivateWithInfo:(id)arg2;	// IMP=0x0010000000062248
- (double)simDeactivationInfoRateLimitInterval;	// IMP=0x001000000006219b
- (long long)simDeactivationInfoRateLimitCount;	// IMP=0x0010000000062101
- (void)_alertForHomeNumberIfNeededForSIMIdentifier:(id)arg1 withPhoneNumber:(id)arg2;	// IMP=0x0010000000061aeb
- (void)_notifyHomeNumberSuccessForUser:(id)arg1;	// IMP=0x0010000000061a44
- (id)_phoneUserWithCredentials;	// IMP=0x0010000000061885
- (id)_provisionedTemporaryUser;	// IMP=0x00100000000616e7
- (_Bool)_pnrOngoing;	// IMP=0x0010000000061559
- (void)_postHomeNumberNotificationBeforeAlertForIdentifier:(id)arg1 forcefully:(_Bool)arg2;	// IMP=0x00100000000612ae
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0010000000061034
- (void)_systemConfigurationPrefsChanged;	// IMP=0x0010000000060b52
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsOfType:(int)arg1;	// IMP=0x00100000000609b3
- (id)activeRegistrationsMatchingUserID:(id)arg1;	// IMP=0x001000000006082d
- (void)stopTrackingActiveRegistration:(id)arg1;	// IMP=0x0010000000060715
- (void)startTrackingActiveRegistration:(id)arg1;	// IMP=0x001000000006058b
- (void)stopTrackingRegistration:(id)arg1;	// IMP=0x0010000000060434
- (void)startTrackingRegistration:(id)arg1;	// IMP=0x0010000000060258
- (void)_updateNotifyState;	// IMP=0x001000000005fd6c
- (void)removeListener:(id)arg1;	// IMP=0x001000000005fd1f
- (void)addListener:(id)arg1;	// IMP=0x001000000005fc9d
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;	// IMP=0x001000000005fb4d
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005f7df
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x001000000005f630
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x001000000005f4eb
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;	// IMP=0x001000000005f351
- (_Bool)_sendIDSAuthenticationForRegistration:(id)arg1;	// IMP=0x001000000005f154
- (void)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;	// IMP=0x001000000005ee2c
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005ed7f
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x001000000005eb6f
- (_Bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1;	// IMP=0x001000000005e765
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005d97d
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;	// IMP=0x001000000005d730
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x001000000005d6ab
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x001000000005d557
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x001000000005d360
- (void)center:(id)arg1 allSucceededRegistrations:(id)arg2;	// IMP=0x001000000005d2bc
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005d1c0
- (void)center:(id)arg1 succeededRegistration:(id)arg2;	// IMP=0x001000000005cc8a
- (void)_captureDiagnosticsForFailedRegistration:(id)arg1 registrationError:(long long)arg2;	// IMP=0x001000000005c9c1
- (_Bool)_shouldSubmitRegistrationCompletedMetricForRegistration:(id)arg1;	// IMP=0x001000000005c973
- (void)_submitRegistrationCompletedMetricWithRegistration:(id)arg1 success:(_Bool)arg2 registrationError:(long long)arg3;	// IMP=0x001000000005c7ad
- (void)_notifyDeregistrationStarting:(id)arg1;	// IMP=0x001000000005c59f
- (void)_notifyAllRegistrationSuccess:(id)arg1;	// IMP=0x001000000005c1c0
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x001000000005be29
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;	// IMP=0x001000000005b9e7
- (void)_notifyRegistrationStarting:(id)arg1;	// IMP=0x001000000005b759
- (void)_notifyRegistrationUpdated:(id)arg1;	// IMP=0x001000000005b4cb
- (void)_notifyNeedsNewRegistration;	// IMP=0x001000000005b2dd
- (_Bool)_performCorrectServerRequestForTemporaryPhoneRegistration:(id)arg1 sentAuthentication:(_Bool *)arg2 sentIDSAction:(_Bool *)arg3;	// IMP=0x001000000005ad9c
- (_Bool)_performCorrectServerRequestForDeviceIDRegistration:(id)arg1;	// IMP=0x001000000005ab84
- (void)reportSpamMessage:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000005aae3
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000005a9dd
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000005a93c
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000005a854
- (_Bool)unregisterInfo:(id)arg1;	// IMP=0x001000000005a67f
- (_Bool)registerInfo:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000058c1f
- (_Bool)registerInfo:(id)arg1;	// IMP=0x0010000000058c0b
- (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000058bc8
- (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000058b78
- (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000058b21
- (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0010000000058b07
- (_Bool)registrationSupportedForRegistration:(id)arg1;	// IMP=0x00100000000581b7
- (void)dealloc;	// IMP=0x001000000005809b
- (id)initWithUserStore:(id)arg1;	// IMP=0x0010000000057c73
- (id)init;	// IMP=0x0010000000057bcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
