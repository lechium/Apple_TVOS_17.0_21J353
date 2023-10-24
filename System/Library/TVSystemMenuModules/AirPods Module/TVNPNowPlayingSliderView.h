//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class TVNPNowPlayingProgressView, UIImage, UIImageView, UIView;

@interface TVNPNowPlayingSliderView : UIControl
{
    double _maxBarWidth;	// 8 = 0x8
    _Bool _continuous;	// 16 = 0x10
    float _value;	// 20 = 0x14
    float _minimumValue;	// 24 = 0x18
    float _maximumValue;	// 28 = 0x1c
    UIImage *_minimumValueImage;	// 32 = 0x20
    UIImage *_maximumValueImage;	// 40 = 0x28
    TVNPNowPlayingProgressView *_progressBarView;	// 48 = 0x30
    UIImageView *_minValueIconView;	// 56 = 0x38
    UIImageView *_maxValueIconView;	// 64 = 0x40
    UIView *_thumbView;	// 72 = 0x48
    struct CGPoint _lastThumbLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000013090
@property(readonly, nonatomic) struct CGPoint lastThumbLocation; // @synthesize lastThumbLocation=_lastThumbLocation;
@property(readonly, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) UIImageView *maxValueIconView; // @synthesize maxValueIconView=_maxValueIconView;
@property(readonly, nonatomic) UIImageView *minValueIconView; // @synthesize minValueIconView=_minValueIconView;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (id)_unfocusedProgressColor;	// IMP=0x0000000000012db0
- (id)_focusedProgressColor;	// IMP=0x0000000000012cd0
- (void)_rightPressed:(id)arg1;	// IMP=0x0000000000012be0
- (void)_leftPressed:(id)arg1;	// IMP=0x0000000000012b00
- (void)_panUpdated:(id)arg1;	// IMP=0x0000000000012560
- (void)_menuPressed;	// IMP=0x0000000000012550
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000124e0
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000012470
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000012400
- (_Bool)shouldTrack;	// IMP=0x00000000000123e0
- (double)maxBarWidth;	// IMP=0x00000000000123c0
- (void)setMaxBarWidth:(double)arg1;	// IMP=0x0000000000012350
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000012060
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000011f80
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000011f40
- (void)layoutSubviews;	// IMP=0x0000000000011900
- (_Bool)canBecomeFocused;	// IMP=0x00000000000118e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000010f10

@end

