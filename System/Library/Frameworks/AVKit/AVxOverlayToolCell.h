//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class AVControlItem, NSLayoutConstraint, UIImageView, UILabel, UILongPressGestureRecognizer, UIView, UIVisualEffectView, _UIFloatingContentView;
@protocol AVxOverlayInteractionAssistant, AVxOverlayToolCellDelegate;

__attribute__((visibility("hidden")))
@interface AVxOverlayToolCell : UICollectionViewCell
{
    NSLayoutConstraint *_imageWidthConstraint;	// 8 = 0x8
    NSLayoutConstraint *_imageHeightConstraint;	// 16 = 0x10
    double _lastInteractionNotificationTimeInterval;	// 24 = 0x18
    _Bool _disabledWhileFocused;	// 32 = 0x20
    UILabel *_label;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    AVControlItem *_controlItem;	// 56 = 0x38
    double _minimumWidth;	// 64 = 0x40
    double _scale;	// 72 = 0x48
    id <AVxOverlayToolCellDelegate> _delegate;	// 80 = 0x50
    id <AVxOverlayInteractionAssistant> _interactionAssistant;	// 88 = 0x58
    UIVisualEffectView *_visualEffectView;	// 96 = 0x60
    _UIFloatingContentView *_floatingView;	// 104 = 0x68
    UIView *_focusView;	// 112 = 0x70
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000078909
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) _Bool disabledWhileFocused; // @synthesize disabledWhileFocused=_disabledWhileFocused;
@property(retain, nonatomic) id <AVxOverlayInteractionAssistant> interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
@property(nonatomic) __weak id <AVxOverlayToolCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(retain, nonatomic) AVControlItem *controlItem; // @synthesize controlItem=_controlItem;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (id)_imageTintColor;	// IMP=0x0000000000078653
- (void)_longPressAction:(id)arg1;	// IMP=0x00000000000785fc
- (void)updateFocusState:(id)arg1;	// IMP=0x000000000007837c
- (void)didHintFocusMovement:(id)arg1;	// IMP=0x0000000000078359
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000078252
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000000781a9
- (_Bool)canBecomeFocused;	// IMP=0x0000000000078102
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000076d3c

@end

