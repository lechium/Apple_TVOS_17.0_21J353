//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray;

__attribute__((visibility("hidden")))
@interface SHListeningInnerCirclesLayer
{
    NSArray *_innerCircleLayers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008294
@property(retain, nonatomic) NSArray *innerCircleLayers; // @synthesize innerCircleLayers=_innerCircleLayers;
@property(readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
- (id)innerCircleCoreAnimation;	// IMP=0x0000000000007e56
- (id)innerCircleScaleNullAnimation;	// IMP=0x0000000000007d18
- (void)addScaleNullAnimationToInnerCircleLayer:(id)arg1;	// IMP=0x0000000000007c46
- (void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2;	// IMP=0x0000000000007b06
- (void)startListeningAnimation;	// IMP=0x00000000000079f9
- (void)layoutSublayers;	// IMP=0x0000000000007790
- (id)buildInnerCircleLayers;	// IMP=0x000000000000765a
- (void)setup;	// IMP=0x00000000000074e7

@end

