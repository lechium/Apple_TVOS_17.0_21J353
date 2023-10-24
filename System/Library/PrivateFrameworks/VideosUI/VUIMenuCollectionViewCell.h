//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIVisualEffectView, VUIAnimatedLabel, VUITextLayout, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface VUIMenuCollectionViewCell : UICollectionViewCell
{
    _Bool _shouldAppearSelected;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    VUITextLayout *_titleLayout;	// 24 = 0x18
    VUIAnimatedLabel *_titleLabel;	// 32 = 0x20
    _UIFloatingContentView *_floatingView;	// 40 = 0x28
    UIVisualEffectView *_backgroundVisualEffectView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000070748
@property(retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView=_backgroundVisualEffectView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) VUIAnimatedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateTitleLabel;	// IMP=0x00000000000704c7
- (void)_updateSelectedBackgroundColor;	// IMP=0x0000000000070310
- (unsigned long long)_floatingViewControlState;	// IMP=0x00000000000702d1
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x000000000006fee2
- (void)layoutSubviews;	// IMP=0x000000000006fe31
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006fe1a
- (void)updateFloatingViewControlState;	// IMP=0x000000000006fd8d
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000006faaa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006f507

@end

