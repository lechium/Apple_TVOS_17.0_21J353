//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesizer.h>

@class AVSpeechUtterance;

@interface AVSpeechSynthesizer (Implementation)
+ (_Bool)_supportsSpeakingWithPersonalVoices;	// IMP=0x00200000000229eb
+ (CDUnknownBlockType)assetFlushedCallback;	// IMP=0x0020000000022745
+ (void)setAssetFlushedCallback:(CDUnknownBlockType)arg1;	// IMP=0x0020000000022724
+ (unsigned long long)personalVoiceAuthorizationStatus;	// IMP=0x0020000000051491
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00200000000510ea
+ (_Bool)isSoftAppUsageProtectionDisabled;	// IMP=0x0020000000051001
- (void)_applyWebKitBehaviors;	// IMP=0x00100000000228fb
@property(nonatomic) _Bool detectSSMLAndModifyUtterances;
@property(nonatomic) _Bool initializedWebKitUsage;
- (id)speechQueue;	// IMP=0x0010000000022785
@property(retain, nonatomic) AVSpeechUtterance *inflightUtterance;
- (void)_enqueueNextJob;	// IMP=0x0010000000022666
- (void)processSpeechJobFinished:(id)arg1 successful:(_Bool)arg2;	// IMP=0x0010000000022465
- (void)speakUtterance:(id)arg1;	// IMP=0x0010000000022264
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2 toMarkerCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000221e8
- (void)writeUtterance:(id)arg1 toBufferCallback:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022187
- (void)dealloc;	// IMP=0x0010000000022039
- (id)init;	// IMP=0x0010000000021fed
- (_Bool)continueSpeaking;	// IMP=0x0010000000021f00
- (_Bool)pauseSpeakingAtBoundary:(long long)arg1;	// IMP=0x0010000000021dfb
- (_Bool)stopSpeakingAtBoundary:(long long)arg1;	// IMP=0x0010000000021c0b
- (void)_handleSpeechDone:(id)arg1 successful:(_Bool)arg2;	// IMP=0x0010000000021bb9
- (void)_speakUtterance:(id)arg1;	// IMP=0x001000000001f603
- (void)setAudioSessionInactiveTimeout:(double)arg1;	// IMP=0x001000000001f5b4
- (_Bool)isPaused;	// IMP=0x001000000001f570
- (_Bool)isSpeaking;	// IMP=0x001000000001f52c
- (long long)_convertBoundary:(long long)arg1;	// IMP=0x001000000001f51d
- (id)audioSession;	// IMP=0x001000000001f4cd
- (_Bool)isInAudioInterruption;	// IMP=0x001000000001f489
- (void)tearDownWarmupManager;	// IMP=0x001000000001f40c
- (void)prepareSpeechManager;	// IMP=0x001000000001f37e
- (void)setAudioQueueFlags:(unsigned int)arg1;	// IMP=0x001000000001f334
- (unsigned int)audioQueueFlags;	// IMP=0x001000000001f2f0
- (void)setUsesApplicationAudioSession:(_Bool)arg1;	// IMP=0x001000000001f2a2
- (_Bool)usesApplicationAudioSession;	// IMP=0x001000000001f25a
- (unsigned long long)audioSessionCategoryOptions;	// IMP=0x001000000001f216
- (void)setAudioSessionCategoryOptions:(unsigned long long)arg1;	// IMP=0x001000000001f1ca
- (id)audioSessionCategory;	// IMP=0x001000000001f17a
- (void)setAudioSessionCategory:(id)arg1;	// IMP=0x001000000001f111
- (void)setSetActiveOptions:(unsigned long long)arg1;	// IMP=0x001000000001f0c5
- (void)setIsInternalSynth:(_Bool)arg1;	// IMP=0x001000000001f078
- (_Bool)isInternalSynth;	// IMP=0x001000000001f036
- (unsigned long long)setActiveOptions;	// IMP=0x001000000001eff2
- (void)setSupportsAccurateWordCallbacks:(id)arg1;	// IMP=0x001000000001ef5b
- (id)supportsAccurateWordCallbacks;	// IMP=0x001000000001ef4a
- (void)setSkipLuthorRules:(id)arg1;	// IMP=0x001000000001eeb3
- (id)skipLuthorRules;	// IMP=0x001000000001eea2
- (void)setOutputChannels:(id)arg1;	// IMP=0x001000000001ee39
- (id)outputChannels;	// IMP=0x001000000001ede9
- (id)speechSource;	// IMP=0x001000000001edd8
- (void)setSpeechSource:(id)arg1;	// IMP=0x001000000001ed5a
- (id)speechManager;	// IMP=0x001000000001ecc2
@end

