//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "FigSubtitleBackdropCALayer.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FigSubtitleWebVTTCueCALayer : FigSubtitleBackdropCALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal *layerInternal;	// 24 = 0x18
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000048e542
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x000000000048e133
- (void)setDefaultFontSize:(double)arg1;	// IMP=0x000000000048e085
- (void)setViewport:(struct CGRect)arg1;	// IMP=0x000000000048e00f
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg1;	// IMP=0x000000000048df9c
- (void)setContent:(struct __CFAttributedString *)arg1;	// IMP=0x000000000048df2b
- (struct __CFString *)getContentID;	// IMP=0x000000000048dea8
- (unsigned char)isDirty;	// IMP=0x000000000048dde7
- (struct CGRect)getSuggestedBounds:(unsigned char)arg1;	// IMP=0x000000000048db84
- (void)setCuePosition:(struct CGPoint)arg1;	// IMP=0x000000000048d959
- (void)dealloc;	// IMP=0x000000000048d8c3
- (id)init;	// IMP=0x000000000048d7a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

