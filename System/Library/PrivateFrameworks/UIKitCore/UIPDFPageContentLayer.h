//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentLayer : CALayer
{
    CALayer *_selectionLayer;	// 8 = 0x8
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000000f2c25a
- (void)layoutSublayers;	// IMP=0x0000000000f2c152
- (void)setNeedsDisplay;	// IMP=0x0000000000f2c106
- (void)setSelectionNeedsDisplay;	// IMP=0x0000000000f2c0e2
- (void)dealloc;	// IMP=0x0000000000f2c0a0
- (id)init;	// IMP=0x0000000000f2bf96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

