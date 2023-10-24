//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SiriTTSNeuralUtils : NSObject
{
}

+ (_Bool)compileANEModel:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000f02dc
+ (_Bool)isANEModelCompiled:(id)arg1;	// IMP=0x00800000000f01c1
+ (_Bool)shouldUseNeuralVoice:(id)arg1;	// IMP=0x00800000000f00a6
+ (_Bool)isNeuralVoiceReady:(id)arg1;	// IMP=0x00800000000eff8b
+ (_Bool)isH12Platform;	// IMP=0x00800000000eff81
+ (_Bool)isNeuralPlatform;	// IMP=0x00800000000eff77
+ (_Bool)isANEOnly;	// IMP=0x00800000000eff6d
+ (_Bool)hasANE;	// IMP=0x00800000000eff63
+ (_Bool)hasAMX;	// IMP=0x00800000000eff59

@end
