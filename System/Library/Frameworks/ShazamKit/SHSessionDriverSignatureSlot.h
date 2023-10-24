//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, SHSignature, SHSignatureGenerator;

__attribute__((visibility("hidden")))
@interface SHSessionDriverSignatureSlot : NSObject
{
    _Bool _shouldGenerateSpectralOutput;	// 8 = 0x8
    SHSignatureGenerator *_signatureGenerator;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    AVAudioPCMBuffer *_excessAudio;	// 32 = 0x20
    double _maximumSignatureDuration;	// 40 = 0x28
    SHSignature *_generatedSignature;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000492b
@property(readonly, nonatomic) SHSignature *generatedSignature; // @synthesize generatedSignature=_generatedSignature;
@property(readonly, nonatomic) double maximumSignatureDuration; // @synthesize maximumSignatureDuration=_maximumSignatureDuration;
@property(readonly, nonatomic) AVAudioPCMBuffer *excessAudio; // @synthesize excessAudio=_excessAudio;
@property(nonatomic) long long state; // @synthesize state=_state;
- (long long)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000045c2
@property(readonly, nonatomic) double signatureDuration;
@property(readonly, nonatomic) SHSignature *signature;
@property(readonly, nonatomic) SHSignatureGenerator *signatureGenerator; // @synthesize signatureGenerator=_signatureGenerator;
- (void)reset;	// IMP=0x0000000000004390
@property(nonatomic) _Bool shouldGenerateSpectralOutput; // @synthesize shouldGenerateSpectralOutput=_shouldGenerateSpectralOutput;
- (id)initWithMaximumSignatureDuration:(double)arg1;	// IMP=0x0000000000004265
- (id)initWithSignatureGenerator:(id)arg1;	// IMP=0x00000000000041fb

@end

