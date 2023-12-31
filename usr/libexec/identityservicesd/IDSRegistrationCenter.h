//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, IDSPushHandler, IDSValidationQueue, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSRegistrationCenterMessageDelivery;

@interface IDSRegistrationCenter : NSObject
{
    NSMutableArray *_queuedRegistrations;	// 8 = 0x8
    NSMutableArray *_queuedAuthentications;	// 16 = 0x10
    NSMutableArray *_currentAuthentications;	// 24 = 0x18
    NSMutableArray *_currentRegistrations;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
    _Bool _pendingDequeue;	// 48 = 0x30
    _Bool _pendingDeregistration;	// 49 = 0x31
    NSMutableDictionary *_currentGetHandlesBlocks;	// 56 = 0x38
    NSMutableDictionary *_currentGetHandlesRegistrations;	// 64 = 0x40
    NSMutableArray *_successfulRegistrations;	// 72 = 0x48
    NSDate *_dateSentLastHTTPMessage;	// 80 = 0x50
    NSDate *_dateLastRegistered;	// 88 = 0x58
    NSDate *_accountingHour;	// 96 = 0x60
    unsigned long long _registrations;	// 104 = 0x68
    id <IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;	// 112 = 0x70
    IDSPushHandler *_pushHandler;	// 120 = 0x78
    IDSGetDependentRegistrationsCenter *_gdrCenter;	// 128 = 0x80
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 136 = 0x88
    IDSValidationQueue *_validationQueue;	// 144 = 0x90
    CUTDeferredTaskQueue *_sendAuthenticateRegistrationTask;	// 152 = 0x98
    CUTDeferredTaskQueue *_sendRegistrationTask;	// 160 = 0xa0
    CUTDeferredTaskQueue *_sendDeregistrationTask;	// 168 = 0xa8
    CUTDeferredTaskQueue *_cleanupAbsintheTask;	// 176 = 0xb0
}

+ (id)sharedInstance;	// IMP=0x002000000021532c
- (void).cxx_destruct;	// IMP=0x0020000000233c64
@property(readonly, nonatomic) CUTDeferredTaskQueue *cleanupAbsintheTask; // @synthesize cleanupAbsintheTask=_cleanupAbsintheTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendDeregistrationTask; // @synthesize sendDeregistrationTask=_sendDeregistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendRegistrationTask; // @synthesize sendRegistrationTask=_sendRegistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendAuthenticateRegistrationTask; // @synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask;
@property(readonly) IDSValidationQueue *validationQueue; // @synthesize validationQueue=_validationQueue;
- (void)sendDeactivationRequestWithSIM:(id)arg1 Info:(id)arg2;	// IMP=0x001000000023354d
- (void)buildValidationCredentialsIfNeeded;	// IMP=0x0010000000233547
- (void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000023324d
- (id)dateLastRegistered;	// IMP=0x001000000023323f
- (void)_noteRegistration;	// IMP=0x0010000000233093
- (_Bool)_checkOverRegistrations;	// IMP=0x0010000000232f6d
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x0010000000232ed3
- (void)removeListener:(id)arg1;	// IMP=0x0010000000232e86
- (void)addListener:(id)arg1;	// IMP=0x0010000000232e04
- (id)activeRegistrations;	// IMP=0x0010000000232d67
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000232af7
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;	// IMP=0x00100000002326d6
- (_Bool)sendDeregistration:(id)arg1;	// IMP=0x0010000000232522
- (_Bool)sendRegistration:(id)arg1;	// IMP=0x0010000000232153
- (void)__reallySendRegistration;	// IMP=0x00100000002320cc
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x0010000000231a88
- (void)__reallySendAuthenticateRegistration;	// IMP=0x00100000002319d6
- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000023183c
- (_Bool)_sendKTOptInStatusUpdateForRegistration:(id)arg1 withOptInStatus:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002311ec
- (_Bool)_sendKTOptInStatusForRegistration:(id)arg1 withOptInOutRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002305fe
- (_Bool)updateKTOptInStatusForRegistration:(id)arg1 withOptInOutRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000023041a
- (_Bool)updateKTOptInStatusForRegistration:(id)arg1 withOptInStatus:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002302fa
- (_Bool)_sendPseudonymMessageOperation:(unsigned long long)arg1 forURI:(id)arg2 pseudonymURI:(id)arg3 properties:(id)arg4 requestProperties:(id)arg5 forRegistration:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x001000000022f75c
- (double)_updatePseudonymExpiryEpoch:(double)arg1;	// IMP=0x001000000022f54e
- (_Bool)revokePseudonym:(id)arg1 forRegistration:(id)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000022f39e
- (_Bool)renewPseudonym:(id)arg1 forRegistration:(id)arg2 forUpdatedExpiryEpoch:(double)arg3 requestProperties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000022f1b9
- (_Bool)provisionPseudonymFor:(id)arg1 withURI:(id)arg2 properties:(id)arg3 requestProperties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000022ee0a
- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000022e1f5
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(_Bool)arg6;	// IMP=0x001000000022d56d
- (_Bool)isRegistering:(id)arg1;	// IMP=0x001000000022d507
- (id)_geoRegion;	// IMP=0x001000000022d4fa
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000022d1ec
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 registration:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000022ce44
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 selfURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000022caec
- (void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000022c815
- (void)reportSpamMessage:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000022c53e
- (void)_sendIDSAuthRequest:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000022c3a7
- (void)_sendAuthenticateRegistration:(id)arg1;	// IMP=0x001000000022bc98
- (id)_authMessageForRegistration:(id)arg1;	// IMP=0x001000000022b8ed
- (id)_provTemporaryPhoneMessageForRegistration:(id)arg1;	// IMP=0x001000000022a87f
- (id)_provDeviceIdentityMessageForRegistration:(id)arg1;	// IMP=0x0010000000229e60
- (id)_authUsersMessageForRegistration:(id)arg1 realm:(id)arg2;	// IMP=0x00100000002287f6
- (id)_authDSMessageForRegistration:(id)arg1 realm:(id)arg2;	// IMP=0x0010000000227ccd
- (long long)_authSubsystemForInfo:(id)arg1;	// IMP=0x0010000000227ca8
- (CDUnknownBlockType)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(CDUnknownBlockType)arg2 overallFailure:(CDUnknownBlockType)arg3;	// IMP=0x0010000000227363
- (void)sendHardDeregisterCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002269d1
- (void)_sendDeregistration:(id)arg1;	// IMP=0x0010000000226868
- (void)__reallySendDeregistration;	// IMP=0x00100000002267da
- (void)_sendRegistrationAsDeregister:(_Bool)arg1;	// IMP=0x0010000000222476
- (id)privateDeviceDataForKVSSuccess:(_Bool)arg1;	// IMP=0x0010000000221b69
- (id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2 transparencyDeviceSignaturesByServiceType:(id)arg3;	// IMP=0x00100000002214a8
- (id)_URIsToRegisterForRegistration:(id)arg1;	// IMP=0x0010000000221199
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;	// IMP=0x001000000021baeb
- (id)_keyTransparencyDeviceSignatureFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000021b641
- (id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000021b1c0
- (id)_keyTransparencyAccountKeyFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000021ad3f
- (long long)_countOfMessagesQueuedOfType:(Class)arg1 matchingCriteria:(CDUnknownBlockType)arg2;	// IMP=0x001000000021abac
- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;	// IMP=0x001000000021a6c8
- (void)_notifyRegistrationIdentitiesUpdated;	// IMP=0x001000000021a472
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;	// IMP=0x001000000021a0b5
- (void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0010000000219931
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;	// IMP=0x00100000002196a2
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x0010000000218fdd
- (void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0010000000217ee4
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;	// IMP=0x0010000000217852
- (void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(_Bool)arg5 info:(id)arg6;	// IMP=0x0010000000216db4
- (void)_dequeuePendingRequestsIfNecessary;	// IMP=0x001000000021667b
- (_Bool)_hasCurrentAuthenticationsOrRegistrations;	// IMP=0x001000000021663b
- (_Bool)_hasOngoingAuthentications;	// IMP=0x00100000002165fb
- (void)__sendMessage:(id)arg1;	// IMP=0x0010000000216504
- (void)logState;	// IMP=0x00100000002163ae
- (void)__dumpState;	// IMP=0x0010000000215de6
- (void)engramKeyStoreDidUpdateIdentities:(id)arg1;	// IMP=0x0010000000215b73
- (id)keyTransparencyVerifier;	// IMP=0x0010000000215b62
- (id)gdrCenter;	// IMP=0x0010000000215b51
- (void)dealloc;	// IMP=0x0010000000215a76
- (id)init;	// IMP=0x001000000021599e
- (id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3;	// IMP=0x0010000000215381

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

