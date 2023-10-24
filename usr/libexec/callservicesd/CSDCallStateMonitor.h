//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDRouteManager, NSString, TUCallCenter;
@protocol CSDCallContainer, OS_dispatch_queue, OS_dispatch_source, TUFeatureFlags;

@interface CSDCallStateMonitor : NSObject
{
    _Bool _audioMutedForHoldMusic;	// 8 = 0x8
    int _requestCLTMThrottleUncapToken;	// 12 = 0xc
    int _lockStateNotificationToken;	// 16 = 0x10
    int _passcodeLockedOrBlockedNotificationToken;	// 20 = 0x14
    TUCallCenter *_callCenter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_callDurationLimitTimer;	// 40 = 0x28
    id <TUFeatureFlags> _featureFlags;	// 48 = 0x30
    CDUnknownBlockType _setUpBreakBeforeMakeTimeout;	// 56 = 0x38
}

+ (double)breakBeforeMakeTimeout;	// IMP=0x002000000005a49d
- (void).cxx_destruct;	// IMP=0x002000000005df62
@property(copy, nonatomic) CDUnknownBlockType setUpBreakBeforeMakeTimeout; // @synthesize setUpBreakBeforeMakeTimeout=_setUpBreakBeforeMakeTimeout;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) int passcodeLockedOrBlockedNotificationToken; // @synthesize passcodeLockedOrBlockedNotificationToken=_passcodeLockedOrBlockedNotificationToken;
@property(nonatomic) int lockStateNotificationToken; // @synthesize lockStateNotificationToken=_lockStateNotificationToken;
@property(nonatomic) int requestCLTMThrottleUncapToken; // @synthesize requestCLTMThrottleUncapToken=_requestCLTMThrottleUncapToken;
@property(nonatomic, getter=isAudioMutedForHoldMusic) _Bool audioMutedForHoldMusic; // @synthesize audioMutedForHoldMusic=_audioMutedForHoldMusic;
@property(retain) NSObject<OS_dispatch_source> *callDurationLimitTimer; // @synthesize callDurationLimitTimer=_callDurationLimitTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x001000000005ddac
- (void)setHeySiriEnabled:(_Bool)arg1;	// IMP=0x001000000005dda6
- (void)_updateCallMutingForHoldMusic;	// IMP=0x001000000005d9b4
- (void)_handleCallDurationTimerFired;	// IMP=0x001000000005d57f
- (void)_setUpCallDurationLimitIfNecessary;	// IMP=0x001000000005d16e
- (id)_ringingTimerForCallWithIdentifier:(id)arg1;	// IMP=0x001000000005cd7b
- (void)_handleAudioReadyForCall:(id)arg1;	// IMP=0x001000000005cc1b
- (void)_setUpBreakBeforeMakeTimeoutIfNecessaryForCall:(id)arg1;	// IMP=0x001000000005c7bf
- (void)_pushCallToAlternateDestinationIfNecessary:(id)arg1;	// IMP=0x001000000005c373
- (void)_disconnectOrPullExistingCallsForCallIfNecessary:(id)arg1;	// IMP=0x001000000005bf7d
- (void)_notifyCLTMOfIncomingCall;	// IMP=0x001000000005bea0
- (void)_handlePasscodeLockedOrBlocked;	// IMP=0x001000000005be9a
- (void)_handleLockStateChanged;	// IMP=0x001000000005be94
- (void)enableEmergencyModeIfNecessaryForCall:(id)arg1;	// IMP=0x001000000005bd3f
- (void)_handleCallWantsHoldMusicChanged:(id)arg1;	// IMP=0x001000000005bd2d
- (void)_handleCallMayRequireBreakBeforeMakeChanged:(id)arg1;	// IMP=0x001000000005bd1b
- (void)disconnectActiveCallsBasedOnCallStatusForCall:(id)arg1;	// IMP=0x001000000005b982
- (void)disconnectAllCallsBesides:(id)arg1;	// IMP=0x001000000005b665
- (void)_handleCallConnected:(id)arg1;	// IMP=0x001000000005b546
- (void)handleCallUpgradedToVideoNotification:(id)arg1;	// IMP=0x001000000005b397
- (void)handleCallOneToOneModeChangedNotification:(id)arg1;	// IMP=0x001000000005b165
- (void)callIsOnHoldChangedNotification:(id)arg1;	// IMP=0x001000000005b027
- (void)leaveAVLessConversationsIfNecessaryForCall:(id)arg1;	// IMP=0x001000000005ac66
- (void)_handleCallStartedConnecting:(id)arg1;	// IMP=0x001000000005ab84
- (void)_handleCallStatusChanged:(id)arg1;	// IMP=0x001000000005a538
- (void)_handleCallHasStartedOutgoingChanged:(id)arg1;	// IMP=0x001000000005a526
- (_Bool)wantsBreakBeforeMakeForCall:(id)arg1;	// IMP=0x001000000005a203
@property(readonly, nonatomic) CSDRouteManager *routeManager;
@property(readonly, nonatomic) id <CSDCallContainer> callContainer;
- (void)_cleanCallMediaCache;	// IMP=0x0010000000059de6
- (void)handleCallWantsHoldMusicChangedNotification:(id)arg1;	// IMP=0x0010000000059d97
- (void)handleCallMayRequireBreakBeforeMakeChangedNotification:(id)arg1;	// IMP=0x0010000000059d48
- (void)handleCallConnectedNotification:(id)arg1;	// IMP=0x0010000000059cf9
- (void)handleCallStartedConnectingNotification:(id)arg1;	// IMP=0x0010000000059caa
- (void)handleCallStatusChangedNotification:(id)arg1;	// IMP=0x0010000000059b64
- (void)handleCallHasStartedOutgoingChangedNotification:(id)arg1;	// IMP=0x0010000000059b15
- (void)dealloc;	// IMP=0x0010000000059a32
- (id)initWithCallCenter:(id)arg1 featureFlags:(id)arg2;	// IMP=0x0010000000059634
- (id)initWithCallCenter:(id)arg1;	// IMP=0x00100000000595d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

