//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallController, CSDCallStateController, CSDRelayMessagingController, NSString, TUDTMFSoundPlayer;

@interface CSDRelayCallDelegate : NSObject
{
    CSDCallStateController *_callStateController;	// 8 = 0x8
    TUDTMFSoundPlayer *_dtmfSoundPlayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000019eebc
@property(readonly, nonatomic) TUDTMFSoundPlayer *dtmfSoundPlayer; // @synthesize dtmfSoundPlayer=_dtmfSoundPlayer;
@property(nonatomic) __weak CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
- (void)relayCallDidPerformUplinkMuted:(id)arg1 uplinkMuted:(_Bool)arg2;	// IMP=0x001000000019ee16
- (void)relayCallConferenceDidStop:(id)arg1 cleanly:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000019ecd9
- (void)relayCallConferenceFailedToStart:(id)arg1;	// IMP=0x001000000019ebdb
- (void)relayCallConferenceDidStartSuccessfullyForPulledCall:(id)arg1;	// IMP=0x001000000019eb1b
- (void)relayCallConferenceDidStartSuccessfullyForOutgoingDialedCall:(id)arg1;	// IMP=0x001000000019eb09
- (void)relayCallConferenceDidStartSuccessfullyForIncomingAnsweredCall:(id)arg1;	// IMP=0x001000000019eab7
- (void)relayCallDidBecomeEndpointForPull:(id)arg1;	// IMP=0x001000000019e8ee
- (void)relayCallDidSendHardPauseDigits:(id)arg1;	// IMP=0x001000000019e885
- (void)relayCall:(id)arg1 didPlayLocalDTMFToneForKey:(unsigned char)arg2;	// IMP=0x001000000019e83b
- (void)relayCallDidUngroup:(id)arg1;	// IMP=0x001000000019e7d2
- (void)relayCall:(id)arg1 didGroupWithOtherCall:(id)arg2;	// IMP=0x001000000019e747
- (void)relayCallDidUnhold:(id)arg1;	// IMP=0x001000000019e6de
- (void)relayCallDidHold:(id)arg1;	// IMP=0x001000000019e675
- (void)relayCallDidDisconnect:(id)arg1;	// IMP=0x001000000019e60c
- (void)relayCall:(id)arg1 didAnswerWithRequest:(id)arg2;	// IMP=0x001000000019e373
- (void)relayCallDidDial:(id)arg1;	// IMP=0x001000000019de74
- (void)relayCallDidJoin:(id)arg1;	// IMP=0x001000000019dc38
- (id)localProviderWithIdentifier:(id)arg1;	// IMP=0x001000000019db71
- (void)_handleJoinConversationResponse:(_Bool)arg1 sessionAvailable:(_Bool)arg2 forRelayCall:(id)arg3;	// IMP=0x001000000019d8ad
- (_Bool)_anyOtherCallHasAnEndpointElsewhere:(id)arg1;	// IMP=0x001000000019d6b7
- (void)_setAllCallsToHeldExceptCall:(id)arg1;	// IMP=0x001000000019d510
@property(readonly, nonatomic) CSDCallController *callController;
@property(readonly, nonatomic) CSDRelayMessagingController *relayMessagingController;
- (id)init;	// IMP=0x001000000019d41a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

