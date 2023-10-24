//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingMovingAverageBuffer, ADOpportuneSpeakingStateManager, AFWatchdogTimer, CSOpportuneSpeakListener, CSOpportuneSpeakListenerOption, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ADOpportuneSpeakingModuleEdgeDetector : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    _Bool _currentHasAccel;	// 16 = 0x10
    _Bool _currentHasVAD;	// 17 = 0x11
    ADOpportuneSpeakingMovingAverageBuffer *_avbuffer;	// 24 = 0x18
    ADOpportuneSpeakingStateManager *_stateManager;	// 32 = 0x20
    CSOpportuneSpeakListener *_listener;	// 40 = 0x28
    CSOpportuneSpeakListenerOption *_listeningOptions;	// 48 = 0x30
    _Bool _inVoice;	// 56 = 0x38
    int _currentFrameCount;	// 60 = 0x3c
    int _currentPausedFrameCount;	// 64 = 0x40
    int _currentVoiceFrameCount;	// 68 = 0x44
    int _thresholdFrameCount;	// 72 = 0x48
    CDUnknownBlockType _successCompletionBlock;	// 80 = 0x50
    CDUnknownBlockType _failCompletionBlock;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 96 = 0x60
    unsigned long long _mode;	// 104 = 0x68
    _Bool _isStopping;	// 112 = 0x70
    AFWatchdogTimer *_timer;	// 120 = 0x78
    NSString *_deviceID;	// 128 = 0x80
    float _maxDelay;	// 136 = 0x88
    float _voiceOnMin;	// 140 = 0x8c
    float _voiceOffMax;	// 144 = 0x90
    float _mostRecentAudioFrameHostTime;	// 148 = 0x94
    _Bool _shouldStopListeningOnDetection;	// 152 = 0x98
    _Bool _isListening;	// 153 = 0x99
}

- (void).cxx_destruct;	// IMP=0x00200000000becbd
@property(readonly, nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x00100000000bec63
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2 withHostTime:(float)arg3;	// IMP=0x00100000000bec10
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;	// IMP=0x00100000000bebc2
- (id)modeDescriptionFor:(unsigned long long)arg1;	// IMP=0x00100000000beba7
- (void)_didStopListening;	// IMP=0x00100000000beb8d
- (void)_didStartListening;	// IMP=0x00100000000beb73
- (void)_restartAndExtendListening;	// IMP=0x00100000000bea9f
- (void)stopListening;	// IMP=0x00100000000bea54
- (void)_stopListeningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000be97d
- (void)_thresholdDetected;	// IMP=0x00100000000be6b9
- (void)_handleFrame:(unsigned long long)arg1;	// IMP=0x00100000000be2a1
- (void)updateAttendingThreshold:(float)arg1;	// IMP=0x00100000000be251
- (void)listenForUserSpeechWithOptions:(id)arg1 forVoice:(float)arg2 maxDelay:(float)arg3 stopOnDetection:(_Bool)arg4 executeOnSuccess:(CDUnknownBlockType)arg5 onFail:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bdfc2
- (void)listenForPauseWithOptions:(id)arg1 forPause:(float)arg2 maxDelay:(float)arg3 stopOnDetection:(_Bool)arg4 executeOnSuccess:(CDUnknownBlockType)arg5 onFail:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bdd0d
- (void)_scheduleTimerForMaxDelay:(float)arg1;	// IMP=0x00100000000bdc78
- (void)_resetStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bdbfb
- (void)_initializeVoiceThresholdsForOpportuneSpeakListeningType:(unsigned long long)arg1;	// IMP=0x00100000000bdaef
- (unsigned int)_framesPerSecondForOpportuneSpeakListeningType:(unsigned long long)arg1;	// IMP=0x00100000000bda47
- (void)dealloc;	// IMP=0x00100000000bda07
- (id)initWithQueue:(id)arg1 stateManager:(id)arg2;	// IMP=0x00100000000bd8c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

