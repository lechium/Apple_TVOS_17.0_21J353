//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSSiriSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechPlaybackSimulator : NSObject
{
    id <CSSiriSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_playbackSource;	// 24 = 0x18
}

+ (id)_speechLogDecodingError;	// IMP=0x0020000000271567
- (void).cxx_destruct;	// IMP=0x0020000000270f7e
- (void)startPlaybackWithURL:(id)arg1 narrowBand:(_Bool)arg2 dictation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000270807
- (void)enforcePreviousEndpointHint;	// IMP=0x0010000000270801
- (void)updateEndpointHintForRC:(id)arg1 forceAccept:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002707e7
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x00100000002707e1
- (void)playRecordingStartAlert;	// IMP=0x00100000002707db
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00100000002707c1
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x00100000002707bb
- (void)setFingerprintWasRecognized;	// IMP=0x00100000002707b5
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00100000002707af
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x00100000002707a9
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x00100000002707a3
- (void)stopFingerprinting;	// IMP=0x001000000027079d
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x0010000000270788
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x0010000000270773
- (void)setSpeechWasRecognized;	// IMP=0x001000000027076d
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x0010000000270767
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x0010000000270761
- (void)releaseAudioSession;	// IMP=0x001000000027075b
- (id)delegate;	// IMP=0x0010000000270745
- (void)setDelegate:(id)arg1;	// IMP=0x00100000002706b8
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4 experimentContext:(id)arg5;	// IMP=0x001000000027064d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

