//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnounceSpeechManager, ADAnnouncementRequest, ADCallObserver, ADExternalNotificationRequestQueue, ADRequestDelayManager, AFNotifyObserver, AFWatchdogTimer, NSString;
@protocol OS_dispatch_queue;

@interface ADExternalNotificationRequestHandler : NSObject
{
    AFWatchdogTimer *_currentNotificationTimer;	// 8 = 0x8
    AFWatchdogTimer *_stateTimer;	// 16 = 0x10
    AFWatchdogTimer *_triggerlessUserReplyTimer;	// 24 = 0x18
    _Bool _triggerlessUserReplyTimerTimedOut;	// 32 = 0x20
    _Bool _triggerlessRequestEnteredListeningState;	// 33 = 0x21
    long long _currentState;	// 40 = 0x28
    ADRequestDelayManager *_currentRequestDelayManager;	// 48 = 0x30
    AFNotifyObserver *_clientStateObserver;	// 56 = 0x38
    ADCallObserver *_callObserver;	// 64 = 0x40
    ADAnnounceSpeechManager *_announceSpeechManager;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_instrumentationQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_accessQueue;	// 96 = 0x60
    ADAnnouncementRequest *_previousRequest;	// 104 = 0x68
    ADAnnouncementRequest *_currentRequest;	// 112 = 0x70
    unsigned long long _synchronousBurstIndex;	// 120 = 0x78
    ADExternalNotificationRequestQueue *_requestQueue;	// 128 = 0x80
    AFNotifyObserver *_ringerStateObserver;	// 136 = 0x88
    NSString *_interruptedMediaType;	// 144 = 0x90
}

+ (id)sharedNotificationRequestHandler;	// IMP=0x00200000002dc336
- (void).cxx_destruct;	// IMP=0x00200000002d8760
- (void)_voicePromptStyleDidChange:(id)arg1;	// IMP=0x00100000002d875a
- (void)voicePromptStyleDidChange:(id)arg1;	// IMP=0x00100000002d8754
- (void)_adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x00100000002d83ad
- (void)adCallStateChangedCallIncoming:(_Bool)arg1;	// IMP=0x00100000002d835f
- (void)adCallStateChangedCallInProcess:(_Bool)arg1;	// IMP=0x00100000002d8359
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000002d82ef
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x00100000002d82e9
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x00100000002d825c
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x00100000002d8256
- (void)speechManager:(id)arg1 didStopUnexpectlyWithError:(id)arg2;	// IMP=0x00100000002d820b
- (_Bool)speechManager:(id)arg1 detectedSpeechForListeningType:(long long)arg2 atHostTime:(float)arg3 shouldHandleActivation:(_Bool)arg4;	// IMP=0x00100000002d8170
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002d80a9
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002d7fe2
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002d7f1b
- (void)_triggerlessListeningTimerEnded;	// IMP=0x00100000002d7eb1
- (void)inEarDetectionStateDidChangeForBTAddress:(id)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x00100000002d7c2f
- (void)currentAudioRouteDidChange:(id)arg1;	// IMP=0x00100000002d7ba2
- (void)_startObservingRouteChanges;	// IMP=0x00100000002d7b57
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7aa0
- (void)_startTriggerlessFollowupRequestForSpeechObservingType:(long long)arg1 hostTime:(float)arg2;	// IMP=0x00100000002d798f
- (void)notifySpeechDetectedIsUndirected;	// IMP=0x00100000002d78c9
- (long long)announcePlatformForCurrentRequest;	// IMP=0x00100000002d7784
- (void)_processAnyQueuedAnnouncementsAfterUserSpeech;	// IMP=0x00100000002d7534
- (void)audioSessionDidEnd;	// IMP=0x00100000002d746e
- (void)_withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7179
- (void)withdrawalAnnouncementRequestForNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d70c2
- (void)_deactivateForReason:(long long)arg1 source:(long long)arg2 event:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d6fe6
- (void)_deactivateCarPlayNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d6e40
- (void)_deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002d6c46
- (void)deactivateNotificationAnnouncementRequestForReason:(long long)arg1 notification:(id)arg2 sourceAppId:(id)arg3 platform:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002d6b4b
- (_Bool)_deactivateWorkoutReminderAnnouncementWithId:(id)arg1;	// IMP=0x00100000002d67a0
- (void)deactivateWorkoutReminderAnnouncementWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d66e9
- (void)_stopCurrentRequestWithReason:(long long)arg1 shouldCancelRequest:(_Bool)arg2;	// IMP=0x00100000002d650f
- (void)_clearCurrentNotificationTimer;	// IMP=0x00100000002d64dd
- (void)_startTimerToResetStateFrom:(long long)arg1;	// IMP=0x00100000002d6434
- (void)_startAttendingForSpeechIfNeededForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d618b
- (long long)_getAnnouncementRequestFailureReasonFromError:(id)arg1;	// IMP=0x00100000002d6115
- (void)_startAnnouncementRequest:(id)arg1;	// IMP=0x00100000002d5e7a
- (void)_emitInstrumentationEventsForRequest:(id)arg1 currentlyPlayingMediaType:(id)arg2;	// IMP=0x00100000002d5e0e
- (void)emitInstrumentationEventsForRequest:(id)arg1;	// IMP=0x00100000002d5d81
- (void)_startAnnouncementRequestWithRequestInfo:(id)arg1;	// IMP=0x00100000002d5ce2
- (void)_handleNotificationWithRequiresOpportuneTime:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d58e5
- (void)_handleAnnounceIncomingCallRequest:(id)arg1;	// IMP=0x00100000002d55e6
- (_Bool)_accessibleAnnounceIsEnabled;	// IMP=0x00000000002d55b6
- (_Bool)_canAnnounceInCarPlay;	// IMP=0x00100000002d54c8
- (void)_handleAnnounceNotificationRequest:(id)arg1;	// IMP=0x00100000002d4757
- (_Bool)_announceOnDeviceSpeakerAllowedForRequest:(id)arg1;	// IMP=0x00100000002d4708
- (void)_handleAnnouncementRequest:(id)arg1;	// IMP=0x00100000002d461d
- (void)handleAnnouncementRequest:(id)arg1;	// IMP=0x00100000002d4590
- (void)_changeCurrentStateToState:(long long)arg1;	// IMP=0x00100000002d43a1
- (void)_clearTriggerlessUserReplyTimer;	// IMP=0x00100000002d42ee
- (void)_clearRequestState;	// IMP=0x00100000002d41a3
- (void)_completeNotificationsWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x00100000002d4058
- (_Bool)_isDeviceSilent;	// IMP=0x00100000002d3f6b
- (id)_queue;	// IMP=0x00100000002d3f5d
- (void)_setCurrentRequest:(id)arg1;	// IMP=0x00100000002d3f4c
- (id)_currentRequest;	// IMP=0x00100000002d3f3e
- (long long)_currentState;	// IMP=0x00100000002d3f34
- (id)_requestQueue;	// IMP=0x00100000002d3f23
- (id)_sharedCommandCenter;	// IMP=0x00100000002d3f0a
- (id)currentRequest;	// IMP=0x00100000002d3ef8
- (id)_init;	// IMP=0x00100000002d3c51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
