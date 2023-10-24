//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVHapticSequence, NSString;

__attribute__((visibility("hidden")))
@interface AdvancedPatternPlayer
{
    AVHapticSequence *_sequence;	// 48 = 0x30
    double _loopEnd;	// 56 = 0x38
    int _state;	// 64 = 0x40
    double _seekOffset;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000c8de
@property double seekOffset; // @synthesize seekOffset=_seekOffset;
- (_Bool)earlyUnduckAudioAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000c757
- (_Bool)setVolume:(float)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000c701
- (_Bool)activateChannelByIndex:(unsigned long long)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000c6ab
- (id)initWithVibePatternDictionary:(id)arg1 engine:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c3c7
- (id)initWithRingtoneData:(id)arg1 engine:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c10a
@property(copy) CDUnknownBlockType completionHandler;
@property _Bool isMuted;
@property float playbackRate;
@property double loopEnd;
@property _Bool loopEnabled;
@property(readonly) _Bool paused;
@property(readonly) _Bool running;
- (double)patternDuration;	// IMP=0x000000000000b613
- (_Bool)cancelAndReturnError:(id *)arg1;	// IMP=0x000000000000b505
- (_Bool)seekToOffset:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000b28e
- (_Bool)resumeAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000b063
- (_Bool)pauseAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000ad83
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000abf8
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x000000000000a54b
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000a0a3
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009d53
- (_Bool)doResumeAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009ad7
- (_Bool)doStartFromPausedAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000989f
- (_Bool)doStartFromStoppedAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000958c
- (void)clearExternalResources:(id)arg1;	// IMP=0x00000000000092f7
- (void)doSetMute:(_Bool)arg1;	// IMP=0x000000000000916b
- (void)dealloc;	// IMP=0x0000000000008fd9
- (id)initWithPattern:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000008880
- (id)init;	// IMP=0x0000000000008872
- (void)finishInit;	// IMP=0x00000000000084ec
- (void)setPaused;	// IMP=0x00000000000084d8
- (void)setRunning;	// IMP=0x00000000000084c4
- (void)resetState;	// IMP=0x00000000000084b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
