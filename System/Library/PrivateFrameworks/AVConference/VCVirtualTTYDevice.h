//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCAudioIO, VCAudioPayload;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTTYDevice : NSObject
{
    int _clientPid;	// 8 = 0x8
    struct tagVCAudioFrameFormat _vpioFormat;	// 16 = 0x10
    int deviceRole;	// 64 = 0x40
    _Bool isValid;	// 68 = 0x44
    NSObject<VCMediaStreamDelegate> *delegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;	// 80 = 0x50
    struct _opaque_pthread_mutex_t sessionLock;	// 88 = 0x58
    int _state;	// 152 = 0x98
    VCAudioPayload *_currentAudioPayload;	// 160 = 0xa0
    VCAudioIO *_audioIO;	// 168 = 0xa8
    struct SoundDec_t *_decoder;	// 176 = 0xb0
    struct opaqueCMSimpleQueue *_charQueue;	// 184 = 0xb8
    struct tagVCMemoryPool *_characterPool;	// 192 = 0xc0
    id _textStream;	// 200 = 0xc8
    unsigned int _audioSessionId;	// 208 = 0xd0
}

@property(nonatomic) NSObject<VCMediaStreamDelegate> *delegate; // @synthesize delegate;
@property int deviceRole; // @synthesize deviceRole;
@property _Bool isValid; // @synthesize isValid;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000003b8d72
- (void)serverDidDie;	// IMP=0x00000000003b8cea
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000003b8ce4
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000003b8cde
- (void)setCanProcessAudio:(_Bool)arg1;	// IMP=0x00000000003b8ccc
- (_Bool)canProcessAudio;	// IMP=0x00000000003b8cba
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000003b8a63
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000003b8967
- (void)unlock;	// IMP=0x00000000003b8959
- (void)lock;	// IMP=0x00000000003b894b
- (id)setPause:(_Bool)arg1;	// IMP=0x00000000003b8861
- (id)stop;	// IMP=0x00000000003b87eb
- (void)sendText:(id)arg1;	// IMP=0x00000000003b8799
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x00000000003b8517
- (id)start;	// IMP=0x00000000003b80d7
- (void)dealloc;	// IMP=0x00000000003b8023
- (id)initWithMode:(long long)arg1 clientPid:(int)arg2;	// IMP=0x00000000003b7bf6
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000003b7bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

