//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView, _UIFloatingContentView;
@protocol AVxOverlayInteractionAssistant;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuCell : UICollectionViewCell
{
    _Bool _destructive;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    UIView *_stackView;	// 40 = 0x28
    UILabel *_label;	// 48 = 0x30
    UIImageView *_leadingImageView;	// 56 = 0x38
    UIImageView *_trailingImageView;	// 64 = 0x40
}

+ (id)_checkmarkImage;	// IMP=0x0060000000127ab8
+ (Class)classForFocusableCollectionView;	// IMP=0x0060000000127aa7
+ (Class)classForClippedCollectionView;	// IMP=0x0060000000127a96
- (void).cxx_destruct;	// IMP=0x00000000001279a7
@property(readonly, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) UIImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
- (_Bool)_isFocusedForForegroundColor;	// IMP=0x00000000001278fa
- (void)_updateBackgroundColor;	// IMP=0x00000000001278f4
- (void)_updateFloatingContentControlIsFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000127846
- (void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001277aa
- (void)_updateFloatingContentControlStateAnimated:(_Bool)arg1;	// IMP=0x0000000000127769
- (id)_secondaryImageView;	// IMP=0x0000000000127754
- (id)_primaryImageView;	// IMP=0x0000000000127725
- (_Bool)_isDisabled;	// IMP=0x0000000000127710
- (void)_updateVisualStateForIsFocused:(_Bool)arg1;	// IMP=0x000000000012759e
- (void)_updateVisualState;	// IMP=0x000000000012756d
- (void)didHintFocusMovement:(id)arg1;	// IMP=0x000000000012754a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000127429
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001273ee
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001273b3
- (void)prepareForReuse;	// IMP=0x00000000001272e6
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000001272c9
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000000127288
- (void)setFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000012726c
@property(nonatomic, getter=isCheckmarkHidden) _Bool checkmarkHidden;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *title;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x0000000000126e87
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000126209

@end
