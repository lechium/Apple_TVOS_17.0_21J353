//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView
{
    int m_mode;	// 8 = 0x8
    double m_pointerOffset;	// 16 = 0x10
    NSArray *m_gradientColors;	// 24 = 0x18
    UIKeyboardMenuView *_menu;	// 32 = 0x20
    _UIBackdropView *_blurView;	// 40 = 0x28
    struct CGRect _keyRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000009aea2e
@property(retain, nonatomic) _UIBackdropView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=m_gradientColors;
@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000009adcbd
- (void)layoutSubviews;	// IMP=0x00000000009adb30
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000009ada37
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000009ad769

@end

