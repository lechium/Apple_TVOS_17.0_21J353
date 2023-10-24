//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDUserActivity, NSString, TUCallCenter;
@protocol CSDUserActivityCommunicatorProtocol, OS_dispatch_queue, TUFeatureFlags;

@interface CSDUserActivityManager : NSObject
{
    CDUnknownBlockType _lockdownModeEnabled;	// 8 = 0x8
    id <CSDUserActivityCommunicatorProtocol> _activityCommunicator;	// 16 = 0x10
    TUCallCenter *_callCenter;	// 24 = 0x18
    CSDUserActivity *_handoffActivity;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <TUFeatureFlags> _featureFlags;	// 48 = 0x30
}

+ (id)allConversationHandoffDynamicIdentifierPossibilitiesForGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2;	// IMP=0x002000000001732a
+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x0010000000014209
+ (id)sharedInstance;	// IMP=0x00100000000141e9
- (void).cxx_destruct;	// IMP=0x00200000000196b9
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSDUserActivity *handoffActivity; // @synthesize handoffActivity=_handoffActivity;
@property(nonatomic) __weak TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) id <CSDUserActivityCommunicatorProtocol> activityCommunicator; // @synthesize activityCommunicator=_activityCommunicator;
@property(copy, nonatomic) CDUnknownBlockType lockdownModeEnabled; // @synthesize lockdownModeEnabled=_lockdownModeEnabled;
- (id)dynamicIdentifierForConversation:(id)arg1 uplinkMuted:(_Bool)arg2 sendingVideo:(_Bool)arg3;	// IMP=0x00100000000194bb
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x0010000000019362
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;	// IMP=0x001000000001923f
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2 fromOldConversation:(id)arg3;	// IMP=0x001000000001911b
- (void)conversationManager:(id)arg1 screeningChangedForConversation:(id)arg2;	// IMP=0x001000000001909f
- (void)conversationManager:(id)arg1 avModeChangedForConversation:(id)arg2 fromOldConversation:(id)arg3;	// IMP=0x001000000001900a
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 fromOldConversation:(id)arg3;	// IMP=0x0010000000018f75
- (void)stoppedReceivingActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000018e56
- (void)receivedBroadcastedActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2 originatingDeviceType:(id)arg3;	// IMP=0x0010000000018810
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00100000000187bd
- (void)updateAudioVideoHandoffPreferencesForCall:(id)arg1;	// IMP=0x00100000000184d5
- (void)callIsSendingVideoChanged:(id)arg1;	// IMP=0x001000000001840a
- (void)callIsUplinkMutedChanged:(id)arg1;	// IMP=0x001000000001833f
- (void)callConnected:(id)arg1;	// IMP=0x001000000001818b
- (void)callStartedConnecting:(id)arg1;	// IMP=0x0010000000018063
- (void)shouldSuppressRingtoneChanged:(id)arg1;	// IMP=0x0010000000017f1a
- (void)callContinuityChanged:(id)arg1;	// IMP=0x0010000000017d66
- (void)callStatusChanged:(id)arg1;	// IMP=0x0010000000017b31
- (void)updateAppHistoryActivityForCall;	// IMP=0x00100000000174ce
- (void)deregisterHandoffIdentifiersForConversation:(id)arg1;	// IMP=0x0010000000017224
- (void)updateHandoffRegistrationForConversation:(id)arg1 fromOldConversation:(id)arg2;	// IMP=0x001000000001690c
- (void)processStatusChangeAsHandedOffIfNecessaryForCall:(id)arg1;	// IMP=0x00100000000162b6
- (void)updateHandoffAdvertisementForConversation:(id)arg1 fromOldConversation:(id)arg2 uplinkMuted:(_Bool)arg3 sendingVideo:(_Bool)arg4;	// IMP=0x0010000000015d79
- (void)updateHandoffAdvertisementForCall:(id)arg1;	// IMP=0x001000000001577d
- (void)updateHandoffAdvertisementForConversation:(id)arg1 fromOldConversation:(id)arg2;	// IMP=0x00100000000155d3
- (void)updateSuppressRingtoneActivityListeningState;	// IMP=0x000000000001544e
- (void)startSuppressRingtoneActivityBroadcastingForCall:(id)arg1;	// IMP=0x001000000001532e
- (void)startSuppressRingtoneActivityBroadcastingIfNecessaryForCallWithStatusChange:(id)arg1;	// IMP=0x0010000000015216
- (void)endHandoffActivity;	// IMP=0x00100000000150a6
- (void)updateHandoffActivityStateForCall:(id)arg1;	// IMP=0x0010000000014c03
- (void)updateCallHandoffRegistration;	// IMP=0x001000000001482b
- (void)dealloc;	// IMP=0x0010000000014756
- (id)initWithQueue:(id)arg1 activityCommunicator:(id)arg2 callCenter:(id)arg3 featureFlags:(id)arg4;	// IMP=0x0010000000014362

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

