//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCTextReceiver, VCTextTransmitter;
@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextStream
{
    VCTextReceiver *_textReceiver;	// 648 = 0x288
    VCTextTransmitter *_textTransmitter;	// 656 = 0x290
    id <VCTextReceiverDelegate> _receiveDelegate;	// 664 = 0x298
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x001000000006b13b
- (double)rtcpHeartbeatLeeway;	// IMP=0x000000000006c5ac
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property(readonly, nonatomic) double lastReceivedRTPPacketTime;
- (void)onRTCPTimeout;	// IMP=0x000000000006c56c
- (void)onRTPTimeout;	// IMP=0x000000000006c566
- (void)onSendRTCPPacket;	// IMP=0x000000000006c4c6
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c4b1
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c49c
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c443
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000006c3ea
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006bdd9
- (_Bool)setupTextReceiverWithError:(id *)arg1;	// IMP=0x000000000006bc91
- (void)setupTextTransmitter;	// IMP=0x000000000006bb9a
- (void)onCallIDChanged;	// IMP=0x000000000006bb94
- (id)supportedPayloads;	// IMP=0x000000000006bb87
- (void)didReceiveText:(id)arg1;	// IMP=0x000000000006bb56
- (void)didReceiveCharacter:(unsigned short)arg1;	// IMP=0x000000000006b9ea
- (void)sendText:(id)arg1;	// IMP=0x000000000006b733
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x000000000006b478
@property(nonatomic) id <VCTextReceiverDelegate> receiveDelegate;
- (void)dealloc;	// IMP=0x000000000006b24f
- (id)init;	// IMP=0x000000000006b14f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

