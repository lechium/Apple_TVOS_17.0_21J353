//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebTiledBackingLayer : CALayer
{
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> _tileController;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000b63e00
- (void).cxx_destruct;	// IMP=0x0000000000b63dc0
- (void)setBorderWidth:(double)arg1;	// IMP=0x0000000000b63d80
- (void)setBorderColor:(struct CGColor *)arg1;	// IMP=0x0000000000b63cd0
- (void)invalidate;	// IMP=0x0000000000b63c90
- (struct TiledBacking *)tiledBacking;	// IMP=0x0000000000b63c70
- (double)contentsScale;	// IMP=0x0000000000b63c30
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000b63c10
- (_Bool)wantsDeepColorBackingStore;	// IMP=0x0000000000b63bf0
- (void)setWantsDeepColorBackingStore:(_Bool)arg1;	// IMP=0x0000000000b63bc0
- (_Bool)drawsAsynchronously;	// IMP=0x0000000000b63b90
- (void)setDrawsAsynchronously:(_Bool)arg1;	// IMP=0x0000000000b63b60
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0000000000b63a40
- (void)setNeedsDisplay;	// IMP=0x0000000000b639f0
- (_Bool)isOpaque;	// IMP=0x0000000000b639c0
- (void)setOpaque:(_Bool)arg1;	// IMP=0x0000000000b63990
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000b638a0
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000b63890
- (void *)createTileController:(void *)arg1;	// IMP=0x0000000000b63830
- (void)dealloc;	// IMP=0x0000000000b63800
- (id)init;	// IMP=0x0000000000b637d0

@end

