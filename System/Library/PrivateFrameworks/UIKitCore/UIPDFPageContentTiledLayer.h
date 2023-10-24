//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CATiledLayer.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentTiledLayer : CATiledLayer
{
    CALayer *_selectionLayer;	// 8 = 0x8
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000000f273f3
- (void)layoutSublayers;	// IMP=0x0000000000f272d3
- (void)setNeedsDisplay;	// IMP=0x0000000000f27282
- (void)setSelectionNeedsDisplay;	// IMP=0x0000000000f2725e
- (void)dealloc;	// IMP=0x0000000000f27217
- (id)init;	// IMP=0x0000000000f2710d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

