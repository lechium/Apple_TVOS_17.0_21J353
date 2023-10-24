//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPictureInPictureIndicatorSublayer, NSString;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureIndicatorLayer : CALayer
{
    AVPictureInPictureIndicatorSublayer *_contentLayer;	// 8 = 0x8
    struct CGRect _videoRectWhenPIPBegan;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005cf9
@property(readonly, nonatomic) struct CGRect videoRectWhenPIPBegan; // @synthesize videoRectWhenPIPBegan=_videoRectWhenPIPBegan;
@property(readonly, nonatomic) AVPictureInPictureIndicatorSublayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(copy, nonatomic) NSString *customText;
- (id)init;	// IMP=0x0000000000005b3f
- (void)layoutSublayers;	// IMP=0x000000000000589f
- (id)initWithDisplayScale:(double)arg1 placeholderImage:(struct CGImage *)arg2 opaque:(_Bool)arg3 videoRectWhenPIPBegan:(struct CGRect)arg4;	// IMP=0x00000000000057e3

@end

