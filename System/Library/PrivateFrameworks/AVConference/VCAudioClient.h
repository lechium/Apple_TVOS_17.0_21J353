//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioDevice, VCAudioIO, VCAudioManager;

__attribute__((visibility("hidden")))
@interface VCAudioClient : NSObject
{
    int _processId;	// 8 = 0x8
    VCAudioIO *_audioIO;	// 16 = 0x10
    _Bool _muted;	// 24 = 0x18
    unsigned int _state;	// 28 = 0x1c
    struct _opaque_pthread_mutex_t _stateMutex;	// 32 = 0x20
    double _lastAudioSessionStart;	// 96 = 0x60
    _Bool _isOnHold;	// 104 = 0x68
    struct VCAudioClientSettings _selectedSettings;	// 108 = 0x6c
    struct VCAudioClientSettings _requestedSettings;	// 120 = 0x78
    unsigned int _audioSessionId;	// 132 = 0x84
    unsigned int _spatialAudioRegistered;	// 136 = 0x88
    void **_audioSession;	// 144 = 0x90
    VCAudioManager *_audioManager;	// 152 = 0x98
    _Bool _isMutedTalkerNotificationRegistered;	// 160 = 0xa0
    _Bool _isMixingVoiceWithMediaEnabled;	// 161 = 0xa1
    _Bool _followSystemInput;	// 162 = 0xa2
    _Bool _followSystemOutput;	// 163 = 0xa3
    _Bool _mixingVoiceWithMediaEnabled;	// 164 = 0xa4
}

@property(nonatomic, getter=isFollowSystemOutputEnabled) _Bool followSystemOutput; // @synthesize followSystemOutput=_followSystemOutput;
@property(nonatomic, getter=isFollowSystemInputEnabled) _Bool followSystemInput; // @synthesize followSystemInput=_followSystemInput;
@property(nonatomic, getter=isMixingVoiceWithMediaEnabled) _Bool mixingVoiceWithMediaEnabled; // @synthesize mixingVoiceWithMediaEnabled=_mixingVoiceWithMediaEnabled;
@property(nonatomic) _Bool isMutedTalkerNotificationRegistered; // @synthesize isMutedTalkerNotificationRegistered=_isMutedTalkerNotificationRegistered;
@property(retain, nonatomic) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_muted;
- (void)serverDidDie;	// IMP=0x00000000001b3871
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000001b386b
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000001b3865
@property(retain, nonatomic) AVAudioDevice *outputDevice;
@property(retain, nonatomic) AVAudioDevice *inputDevice;
- (_Bool)setCurrentAudioDevice:(id)arg1 type:(_Bool)arg2;	// IMP=0x00000000001b3841
- (id)getCurrentAudioDeviceWithType:(_Bool)arg1;	// IMP=0x00000000001b3839
- (void)stopAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b3833
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b382d
- (_Bool)stopAudioSessionWithError:(id *)arg1;	// IMP=0x00000000001b3825
- (_Bool)startAudioSessionWithError:(id *)arg1;	// IMP=0x00000000001b381d
- (_Bool)stopWithError:(id *)arg1;	// IMP=0x00000000001b3307
- (_Bool)startWithError:(id *)arg1;	// IMP=0x00000000001b2df8
- (void)setAudioSessionProperties:(id)arg1;	// IMP=0x00000000001b2d80
- (_Bool)resetAudioSessionOutputPortOverride:(id *)arg1;	// IMP=0x00000000001b2d78
- (_Bool)unmuteWithError:(id *)arg1;	// IMP=0x00000000001b2d1f
- (_Bool)muteWithError:(id *)arg1;	// IMP=0x00000000001b2cfa
- (void)unlock;	// IMP=0x00000000001b2cec
- (void)lock;	// IMP=0x00000000001b2cde
- (void)dealloc;	// IMP=0x00000000001b2c77
- (id)initWithProcessId:(int)arg1;	// IMP=0x00000000001b2bdd

@end
