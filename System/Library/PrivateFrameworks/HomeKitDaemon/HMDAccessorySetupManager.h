//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySetupCoordinator, HMDHomeManager, HMDSBSRemoteAlertHandleProvider, HMDXPCClientConnection, HMFMessageDispatcher, HMSetupAccessoryDescription, NSObject, NSString, NSUUID;
@protocol HMDSBSRemoteAlertHandle, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySetupManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMSetupAccessoryDescription *_pendingSetupAccessoryDescription;	// 16 = 0x10
    HMDXPCClientConnection *_accessorySetupHostClientConnection;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    HMDAccessorySetupCoordinator *_accessorySetupCoordinator;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMDHomeManager *_homeManager;	// 56 = 0x38
    HMDSBSRemoteAlertHandleProvider *_alertHandleProvider;	// 64 = 0x40
    CDUnknownBlockType _pendingAccessorySetupCompletionHandler;	// 72 = 0x48
    id <HMDSBSRemoteAlertHandle> _alertHandle;	// 80 = 0x50
    double _activationStartTime;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x0010000000085dfa
+ (id)accessorySetupHostBundleIdentifier;	// IMP=0x0010000000085de6
- (void).cxx_destruct;	// IMP=0x0000000000084d26
@property double activationStartTime; // @synthesize activationStartTime=_activationStartTime;
@property(retain) id <HMDSBSRemoteAlertHandle> alertHandle; // @synthesize alertHandle=_alertHandle;
@property(copy) CDUnknownBlockType pendingAccessorySetupCompletionHandler; // @synthesize pendingAccessorySetupCompletionHandler=_pendingAccessorySetupCompletionHandler;
@property(readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider; // @synthesize alertHandleProvider=_alertHandleProvider;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDAccessorySetupCoordinator *accessorySetupCoordinator; // @synthesize accessorySetupCoordinator=_accessorySetupCoordinator;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0000000000084b17
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x0000000000084a5f
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x00000000000849a7
- (void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x00000000000848ef
- (void)handleNFCProxSetupNotification:(id)arg1;	// IMP=0x0000000000084588
- (void)_handleFailAccessorySetupMessage:(id)arg1;	// IMP=0x000000000008431c
- (void)_handleFinishAccessorySetupMessage:(id)arg1;	// IMP=0x0000000000084165
- (void)_handleResumeAccessorySetupMessage:(id)arg1;	// IMP=0x0000000000083f3d
- (void)_handlePerformAccessorySetupMessage:(id)arg1;	// IMP=0x0000000000083b3d
- (id)_accessorySetupResultFromCompletedInfo:(id)arg1 clientIdentifierSalt:(id)arg2;	// IMP=0x00000000000839b6
- (void)_finishAccessorySetupWithSetupCompletedInfo:(id)arg1 setupError:(id)arg2;	// IMP=0x00000000000836e3
- (void)_launchHUISWithSetupAccessoryDescription:(id)arg1 resumeSetupUserInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000082dd9
- (void)_updateAccessoryDescription:(id)arg1 usingConnection:(id)arg2;	// IMP=0x0000000000082ccb
- (void)_launchHUISWithRequest:(id)arg1 connection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000081e0a
- (void)_launchHUISWithNFCProxSetupURL:(id)arg1;	// IMP=0x0000000000081a3f
- (id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000081826
- (void)launchAccessorySetupHostToRequestSetupCodeForAccessoryWithUUID:(id)arg1 accessoryName:(id)arg2 homeUUID:(id)arg3 clientConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000816b2
- (void)configure;	// IMP=0x00000000000813ad
@property(retain, nonatomic) HMDXPCClientConnection *accessorySetupHostClientConnection; // @synthesize accessorySetupHostClientConnection=_accessorySetupHostClientConnection;
@property(retain) HMSetupAccessoryDescription *pendingSetupAccessoryDescription; // @synthesize pendingSetupAccessoryDescription=_pendingSetupAccessoryDescription;
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2 messageDispatcher:(id)arg3 alertHandleProvider:(id)arg4;	// IMP=0x0000000000081052
- (id)initWithWorkQueue:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000080f6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
