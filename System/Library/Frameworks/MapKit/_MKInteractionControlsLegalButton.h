//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UILabel, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _MKInteractionControlsLegalButton : UIControl
{
    UILabel *_label;	// 8 = 0x8
    _UIFloatingContentView *_floatingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d702e
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001d6fb1
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001d6f34
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001d6e3d
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001d6d59
- (void)_selectGestureChanged:(id)arg1;	// IMP=0x00000000001d6d06
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d65bc

@end

