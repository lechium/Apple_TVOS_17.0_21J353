//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellEditControl.h"

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl
{
    _UIFloatingContentView *_focusedFloatingContentView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000001024ca1
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001024bb1
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001024aab
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010249b8
- (_Bool)_shouldHandlePressEvent:(id)arg1;	// IMP=0x000000000102494a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000010248d0
- (_Bool)wantsImageShadow;	// IMP=0x00000000010248c8
- (_Bool)wantsMaskingWhileAnimatingDisabled;	// IMP=0x00000000010248ab
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000102482c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000010247ad
- (void)layoutSubviews;	// IMP=0x000000000102454a
- (id)_currentImage;	// IMP=0x0000000001024378
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000001024322
- (void)_updateFloatingViewForCurrentTraits;	// IMP=0x0000000001024179
- (void)_ensureFocusedFloatingContentView;	// IMP=0x0000000001023fbe

@end

