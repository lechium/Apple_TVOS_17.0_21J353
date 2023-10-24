//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDictationView.h"

@class NSString, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIDictationLayoutView : UIDictationView
{
    _Bool _hideSwitcher;	// 64 = 0x40
    UIButton *_globeButton;	// 72 = 0x48
    UIButton *_keyboardButton;	// 80 = 0x50
    UILabel *_languageLabel;	// 88 = 0x58
    NSString *_currentDictationLanguage;	// 96 = 0x60
    UIView *_waveTapEndpointButtonView;	// 104 = 0x68
    _Bool _blackTextColor;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000b18a40
- (_Bool)isShowing;	// IMP=0x0000000000b189b5
- (void)returnToKeyboard;	// IMP=0x0000000000b18936
- (void)finishReturnToKeyboard;	// IMP=0x0000000000b188bf
- (void)layoutSubviews;	// IMP=0x0000000000b18119
- (void)setState:(int)arg1;	// IMP=0x0000000000b17e13
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000b17da2
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;	// IMP=0x0000000000b17944
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b1781e
- (void)updateLanguageLabel;	// IMP=0x0000000000b1743d
- (void)keyboardButtonPressed:(id)arg1;	// IMP=0x0000000000b1730d
- (id)darkGrayColor;	// IMP=0x0000000000b172d4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b1700a

@end

