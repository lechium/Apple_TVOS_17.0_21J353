//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol _LTSpeechCompressorDelegate;

__attribute__((visibility("hidden")))
@interface _LTSpeechCompressor : NSObject
{
    id <_LTSpeechCompressorDelegate> _delegate;	// 8 = 0x8
    struct OpaqueAudioConverter *_audioConverter;	// 16 = 0x10
    NSMutableData *_bufferedAudio;	// 24 = 0x18
    unsigned long long _packetIndex;	// 32 = 0x20
    unsigned long long _bytesConsumed;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000058822
- (void)addAudioSampleData:(id)arg1;	// IMP=0x00000000000584f2
- (void)reset;	// IMP=0x00000000000584b3
- (void)startCompressionNarrowband:(_Bool)arg1;	// IMP=0x00000000000583fa
- (void)dealloc;	// IMP=0x00000000000583bc
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000058341

@end
