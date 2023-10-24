//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKeyboardLayout.h"

@class UIKBBackgroundView, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView *_backgroundView;	// 72 = 0x48
    UIKBTree *_keyplane;	// 80 = 0x50
}

+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;	// IMP=0x0060000000b1b6e9
+ (_Bool)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2;	// IMP=0x0060000000b1b5e6
+ (id)activeInstance;	// IMP=0x0060000000b1b552
- (void).cxx_destruct;	// IMP=0x0000000000b1bdfe
- (void)_moveWithEvent:(id)arg1;	// IMP=0x0000000000b1bdf8
- (struct CGRect)dragGestureRectInView:(id)arg1;	// IMP=0x0000000000b1bdda
- (_Bool)usesAutoShift;	// IMP=0x0000000000b1bdd2
- (id)currentKeyplane;	// IMP=0x0000000000b1bdbd
- (struct CGSize)splitLeftSize;	// IMP=0x0000000000b1bd6e
- (_Bool)shouldFadeToLayout;	// IMP=0x0000000000b1bd66
- (_Bool)shouldFadeFromLayout;	// IMP=0x0000000000b1bd5e
- (void)layoutSubviews;	// IMP=0x0000000000b1bc3a
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000b1bb3f
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;	// IMP=0x0000000000b1b8a9
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;	// IMP=0x0000000000b1b8a3
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x0000000000b1b88a
- (_Bool)visible;	// IMP=0x0000000000b1b857
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b1b563

@end
