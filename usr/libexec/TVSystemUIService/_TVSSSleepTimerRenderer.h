//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPRenderer.h>

@class TVSSAutoUpdatingSleepTimerGlyphView;

@interface _TVSSSleepTimerRenderer : TVSPRenderer
{
    TVSSAutoUpdatingSleepTimerGlyphView *_liveGlyphView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009aac0
- (id)_sleepTimerController;	// IMP=0x001000000009aa90
- (void)updateContentView;	// IMP=0x001000000009a910
- (void)applyContent:(id)arg1 animator:(id)arg2;	// IMP=0x001000000009a830
- (void)configureContentView:(id)arg1;	// IMP=0x001000000009a410

@end
