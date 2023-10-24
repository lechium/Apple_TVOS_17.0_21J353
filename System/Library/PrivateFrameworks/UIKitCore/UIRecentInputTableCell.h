//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCell.h"

@class UILabel, UITextInputTraits, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIRecentInputTableCell : UITableViewCell
{
    UILabel *_floatingLabel;	// 8 = 0x8
    long long _blurEffectStyle;	// 16 = 0x10
    UITextInputTraits *_textInputTraits;	// 24 = 0x18
}

+ (id)backgroundColorForBlurEffectStyle:(long long)arg1;	// IMP=0x00600000009c4d11
+ (id)focusedTextColorForBlurEffectStyle:(long long)arg1;	// IMP=0x00600000009c4cb0
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)arg1;	// IMP=0x00600000009c4c4f
- (void).cxx_destruct;	// IMP=0x00000000009c4e6b
@property(retain, nonatomic) UITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(retain, nonatomic) UILabel *floatingLabel; // @synthesize floatingLabel=_floatingLabel;
- (_Bool)_tvIsDarkMode;	// IMP=0x00000000009c4d5c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000009c4ba8
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009c4b2a
- (void)_updateAppearance;	// IMP=0x00000000009c49ab
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000009c4716
- (void)setInputText:(id)arg1 withBlurStyle:(long long)arg2;	// IMP=0x00000000009c449b
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView;
- (void)layoutSubviews;	// IMP=0x00000000009c43c0

@end

