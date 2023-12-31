//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCCannedAVSync;

__attribute__((visibility("hidden")))
@interface VCCannedAudioInjector
{
    unsigned int _audioSampleCount;	// 88 = 0x58
    int _assetType;	// 92 = 0x5c
    NSString *_cannedMoviePath;	// 96 = 0x60
    int _position;	// 104 = 0x68
    _Bool _fromBeginning;	// 108 = 0x6c
    _Bool _playbackComplete;	// 109 = 0x6d
    struct os_unfair_lock_s _samplesMutex;	// 112 = 0x70
    struct _opaque_pthread_cond_t _samplesConditional;	// 120 = 0x78
    struct AudioStreamBasicDescription _outputFormat;	// 168 = 0xa8
    VCCannedAVSync *_avSync;	// 208 = 0xd0
    _Bool _isSharedAVSync;	// 216 = 0xd8
    _Bool _isReadyToInject;	// 217 = 0xd9
    struct tagVCCannedAudioInjectorConverterProc _audioConverterProc;	// 224 = 0xe0
    struct opaqueVCAudioBufferList *_sampleBuffer;	// 304 = 0x130
    unsigned int _maxLoopCount;	// 312 = 0x138
    unsigned int _loopCount;	// 316 = 0x13c
    unsigned int _samplesInLoop;	// 320 = 0x140
    double _loopLength;	// 328 = 0x148
    _Bool _forceVoiceActive;	// 336 = 0x150
}

+ (id)defaultAudioFileNameWithFormat:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x0060000000384e98
+ (int)setupReader:(id)arg1 forAsset:(id)arg2 assetAudioFormat:(struct AudioStreamBasicDescription *)arg3 trackOutput:(id *)arg4;	// IMP=0x0060000000381ebc
+ (struct AudioStreamBasicDescription)internalAssetFormatWithFileFormat:(const struct AudioStreamBasicDescription *)arg1;	// IMP=0x0060000000381c06
+ (_Bool)isAudioAvailable:(id)arg1 fileName:(id)arg2;	// IMP=0x006000000038183f
@property _Bool isReadyToInject; // @synthesize isReadyToInject=_isReadyToInject;
- (int)setupSineInjectionWithConfig:(id)arg1;	// IMP=0x00000000003857fa
- (int)loadRawAudioSamples;	// IMP=0x0000000000384edd
- (int)loadEncodedAudioSamples;	// IMP=0x0000000000384bbd
- (void)parseMediaTracksForAsset:(id)arg1;	// IMP=0x0000000000383b25
- (int)allocateSampleBufferWithTrackOutput:(id)arg1 assetAudioFormat:(const struct AudioStreamBasicDescription *)arg2 sampleBuffer:(struct opaqueVCAudioBufferList **)arg3;	// IMP=0x000000000038382b
- (int)loadSamplesFromTrackOutput:(id)arg1 audioConverter:(struct OpaqueAudioConverter *)arg2 audioBuffer:(struct opaqueVCAudioBufferList *)arg3;	// IMP=0x0000000000383787
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 audioConverter:(struct OpaqueAudioConverter *)arg2 audioBuffer:(struct opaqueVCAudioBufferList *)arg3;	// IMP=0x0000000000382da3
- (int)setupAudioConverterWithAssetFormat:(const struct AudioStreamBasicDescription *)arg1 audioConverter:(struct OpaqueAudioConverter **)arg2;	// IMP=0x0000000000382772
- (void)cleanupAudioConverterProc;	// IMP=0x0000000000381bb0
- (void)setAudioConverterProcAudioBufferList:(const struct AudioBufferList *)arg1 blockBuffer:(struct OpaqueCMBlockBuffer *)arg2;	// IMP=0x0000000000381b63
- (void)completeSetupWithSampleBuffer:(struct opaqueVCAudioBufferList **)arg1;	// IMP=0x0000000000381ad4
- (int)setupAVSyncWithStartHostTime:(double)arg1 loopLength:(double)arg2;	// IMP=0x0000000000381750
- (int)loadAudioSamples;	// IMP=0x0000000000381510
- (_Bool)setupAssetInjectionWithConfig:(id)arg1;	// IMP=0x0000000000380ce0
- (id)description;	// IMP=0x0000000000380c42
- (void)dealloc;	// IMP=0x0000000000380a31
- (void)reportInjectorInitWithPath:(id)arg1;	// IMP=0x00000000003808e2
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000380282

@end

