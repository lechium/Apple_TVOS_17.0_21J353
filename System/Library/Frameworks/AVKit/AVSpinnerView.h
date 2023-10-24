//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface AVSpinnerView : UIView
{
    struct CGSize _size;	// 8 = 0x8
    id _didBecomeActiveNotificationObserver;	// 24 = 0x18
    id _willResignActiveNotificationObserver;	// 32 = 0x20
    _Bool _animating;	// 40 = 0x28
    CAAnimationGroup *_animations;	// 48 = 0x30
    UIColor *_color;	// 56 = 0x38
    CALayer *_mainLayer;	// 64 = 0x40
    CALayer *_overlayLayer;	// 72 = 0x48
}

+ (id)repeatingRotationAnimation;	// IMP=0x006000000000de59
+ (id)spinnerAnimationGroup;	// IMP=0x006000000000dd70
+ (struct CGImage *)spinnerImageWithSize:(struct CGSize)arg1 color:(id)arg2;	// IMP=0x006000000000da5d
- (void).cxx_destruct;	// IMP=0x000000000000d833
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(retain, nonatomic) CALayer *mainLayer; // @synthesize mainLayer=_mainLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CAAnimationGroup *animations; // @synthesize animations=_animations;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (id)_animationToOpacity:(double)arg1;	// IMP=0x000000000000d5ef
- (void)_removeAnimations;	// IMP=0x000000000000d47c
- (void)_addAnimations;	// IMP=0x000000000000d2f5
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000d2aa
- (void)layoutSubviews;	// IMP=0x000000000000d1b3
- (void)dealloc;	// IMP=0x000000000000d11b
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000000cd0e

@end

