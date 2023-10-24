//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDProcessInfo, HMDXPCMessageCountTracker, HMDXPCMessageSendPolicyParameters, HMDXPCRequestTracker, NSDictionary, NSObject, NSSet, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDXPCClientConnection : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDXPCMessageCountTracker *_counterTracker;	// 24 = 0x18
    NSString *_signature;	// 32 = 0x20
    _Bool _activated;	// 40 = 0x28
    _Bool _entitledForAPIAccess;	// 41 = 0x29
    _Bool _entitledForBackgroundMode;	// 42 = 0x2a
    _Bool _entitledForCameraClipsAccess;	// 43 = 0x2b
    _Bool _entitledForMultiUserSetupAccess;	// 44 = 0x2c
    _Bool _entitledForPersonManagerAccess;	// 45 = 0x2d
    _Bool _entitledForWalletKeyAccess;	// 46 = 0x2e
    HMDXPCMessageSendPolicyParameters *_sendPolicyParameters;	// 48 = 0x30
    NSDictionary *_userInfo;	// 56 = 0x38
    HMDProcessInfo *_processInfo;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
    NSXPCConnection *_xpcConnection;	// 80 = 0x50
    unsigned long long _entitlements;	// 88 = 0x58
    NSString *_clientName;	// 96 = 0x60
    NSUUID *_clientUUID;	// 104 = 0x68
    HMDXPCRequestTracker *_requestTracker;	// 112 = 0x70
    NSDictionary *_privateAccessEntitlement;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x001000000030bd9b
+ (unsigned long long)entitlementsForConnection:(id)arg1;	// IMP=0x001000000030ba09
- (void).cxx_destruct;	// IMP=0x000000000030aa13
@property(retain) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property(readonly) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(copy) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(copy) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitledForWalletKeyAccess) _Bool entitledForWalletKeyAccess; // @synthesize entitledForWalletKeyAccess=_entitledForWalletKeyAccess;
@property(readonly, nonatomic, getter=isEntitledForPersonManagerAccess) _Bool entitledForPersonManagerAccess; // @synthesize entitledForPersonManagerAccess=_entitledForPersonManagerAccess;
@property(readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) _Bool entitledForMultiUserSetupAccess; // @synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess;
@property(readonly, nonatomic, getter=isEntitledForCameraClipsAccess) _Bool entitledForCameraClipsAccess; // @synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000030a7ab
- (void)updateUserInfo:(id)arg1;	// IMP=0x000000000030a4e1
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000030a4cf
- (void)handleMessage:(id)arg1;	// IMP=0x000000000030a4bb
- (void)initiateRefresh;	// IMP=0x000000000030a41b
- (void)deactivate;	// IMP=0x000000000030a3c9
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000030a1ab
- (void)_handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000309840
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000308bbe
- (_Bool)shouldSendResponseForMessageIdentifier:(id)arg1;	// IMP=0x0000000000308b3c
@property(readonly, nonatomic) NSSet *activeRequests;
- (void)updateSendPolicyParameters:(id)arg1;	// IMP=0x00000000003089f0
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(copy, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters; // @synthesize sendPolicyParameters=_sendPolicyParameters;
- (void)__handleApplicationStateChange:(id)arg1;	// IMP=0x000000000030872c
@property(retain) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, getter=isPlatformBinary) _Bool platformBinary;
@property(readonly, nonatomic) int clientPid;
@property(readonly, nonatomic) NSString *name;
- (id)_displayName;	// IMP=0x0000000000308372
@property(readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) _Bool entitledForHomeLocationFeedbackAccess;
@property(readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) _Bool entitledForAssistantIdentifiers;
@property(readonly, nonatomic, getter=isEntitledForStateDump) _Bool entitledForStateDump;
@property(readonly, nonatomic, getter=isEntitledForSecureAccess) _Bool entitledForSecureAccess;
@property(readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) _Bool entitledForShortcutsAutomationAccess;
@property(readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) _Bool entitledToProvideMatterSetupPayload;
@property(readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) _Bool entitledToProvideAccessorySetupPayload;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationAccess) _Bool entitledForHomeLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
- (id)counterIdentifierForMessage:(id)arg1;	// IMP=0x0000000000307ed5
@property(readonly, nonatomic) unsigned long long homeManagerOptions;
@property(readonly) Class principalClass;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)attributeDescriptions;	// IMP=0x0000000000307be1
- (id)shortDescription;	// IMP=0x0000000000307af8
- (void)dealloc;	// IMP=0x00000000003079a5
- (id)initWithConnection:(id)arg1 counterTracker:(id)arg2;	// IMP=0x0000000000307730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
