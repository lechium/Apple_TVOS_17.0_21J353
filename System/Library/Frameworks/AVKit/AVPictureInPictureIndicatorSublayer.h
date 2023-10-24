//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CATextLayer, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureIndicatorSublayer : CALayer
{
    NSAttributedString *_attributedText;	// 8 = 0x8
    struct CGSize _imageSize;	// 16 = 0x10
    struct NSEdgeInsets _languageAwareOutsets;	// 32 = 0x20
    double _lineHeight;	// 64 = 0x40
    double _baselineOffset;	// 72 = 0x48
    CATextLayer *_textLayer;	// 80 = 0x50
    CALayer *_imageLayer;	// 88 = 0x58
    NSString *_customText;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000006f01
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
- (_Bool)canRenderAttributedTextWithoutTruncationInsideRect:(struct CGRect)arg1;	// IMP=0x0000000000006e4a
- (struct CGRect)textBoundingRectWhenDrawnInRect:(struct CGRect)arg1;	// IMP=0x0000000000006df6
- (void)layoutSublayersWithTextAndImageUsingInsetBounds:(struct CGRect)arg1;	// IMP=0x0000000000006650
- (void)layoutSublayers;	// IMP=0x0000000000006431
- (id)init;	// IMP=0x00000000000061bf
- (id)initWithDisplayScale:(double)arg1 placeholderImage:(struct CGImage *)arg2 opaque:(_Bool)arg3;	// IMP=0x0000000000005d0c

@end

