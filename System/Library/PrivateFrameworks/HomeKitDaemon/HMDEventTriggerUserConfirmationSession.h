//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerDevice, HMDEventTriggerExecutionSession, HMDTriggerConfirmationTimer, HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventTriggerUserConfirmationSession
{
    HMDEventTriggerExecutionSession *_executionSession;	// 8 = 0x8
    HMDEventTriggerDevice *_requestingDevice;	// 16 = 0x10
    HMDTriggerConfirmationTimer *_userResponseTimer;	// 24 = 0x18
    HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *_analyticsEvent;	// 32 = 0x20
    NSMutableArray *_analyticsSendEvents;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000905193
- (void).cxx_destruct;	// IMP=0x0000000000904973
@property(retain, nonatomic) NSMutableArray *analyticsSendEvents; // @synthesize analyticsSendEvents=_analyticsSendEvents;
@property(retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *analyticsEvent; // @synthesize analyticsEvent=_analyticsEvent;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer; // @synthesize userResponseTimer=_userResponseTimer;
@property(readonly, nonatomic) HMDEventTriggerDevice *requestingDevice; // @synthesize requestingDevice=_requestingDevice;
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
- (void)_sessionComplete;	// IMP=0x00000000009047cd
- (void)_handleUserPermissionRemoveDialogRequest:(id)arg1;	// IMP=0x00000000009046c9
- (void)_removeUserDialog:(id)arg1;	// IMP=0x0000000000904377
- (void)_handleUserPermissionRemoteResponse:(id)arg1;	// IMP=0x00000000009040f3
- (void)_userResponse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000903939
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000903882
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000009037ca
- (void)_createBulletinNotification;	// IMP=0x0000000000903533
- (void)createBulletinNotification;	// IMP=0x00000000009034c2
- (void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2;	// IMP=0x000000000090301c
- (void)askForUserPermission:(id)arg1;	// IMP=0x0000000000902f64
- (void)_registerForMessages;	// IMP=0x0000000000902d6b
- (void)dealloc;	// IMP=0x0000000000902b6d
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5;	// IMP=0x0000000000902aad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

