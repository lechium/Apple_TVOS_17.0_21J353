//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class NSLayoutConstraint, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockAppItemButton : UIButton
{
    NSLayoutConstraint *_heightConstraint;	// 128 = 0x80
    NSLayoutConstraint *_widthConstraint;	// 136 = 0x88
    _Bool _active;	// 144 = 0x90
    _Bool _hasBadge;	// 145 = 0x91
    NSString *_bundleIdentifier;	// 152 = 0x98
    UIImageView *_iconImageView;	// 160 = 0xa0
    UIImageView *_iconHighlightImageView;	// 168 = 0xa8
    UIImageView *_badgeView;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000ed73a3
@property(nonatomic) _Bool hasBadge; // @synthesize hasBadge=_hasBadge;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *iconHighlightImageView; // @synthesize iconHighlightImageView=_iconHighlightImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000ed71f1
- (_Bool)canBecomeFocused;	// IMP=0x0000000000ed71dc
- (void)_buttonPressed:(id)arg1;	// IMP=0x0000000000ed6fe9
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ed6f32
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ed6e7b
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000ed6db0
- (void)setBadgeHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ed69ce
- (_Bool)shouldShowBadge;	// IMP=0x0000000000ed6983
@property(readonly, nonatomic) _Bool itemHasBundleIdentifier;
- (void)setCharge:(float)arg1;	// IMP=0x0000000000ed6896
- (float)charge;	// IMP=0x0000000000ed6888
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ed6614
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000ed5e2f

@end

