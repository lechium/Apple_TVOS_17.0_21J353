//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CADisplayLink, UIImage, _VUISBIconProgressFractionTransition, _VUISBIconProgressPausedTransition, _VUISBInstallProgressStateTransition;
@protocol VUISBIconProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface VUISBIconProgressView : UIView
{
    _VUISBInstallProgressStateTransition *_activeStateTransition;	// 8 = 0x8
    _VUISBIconProgressPausedTransition *_activePausedTransition;	// 16 = 0x10
    _VUISBIconProgressFractionTransition *_activeFractionTransition;	// 24 = 0x18
    long long _modelState;	// 32 = 0x20
    _Bool _modelPaused;	// 40 = 0x28
    double _modelFraction;	// 48 = 0x30
    CADisplayLink *_displayLink;	// 56 = 0x38
    double _lastUpdate;	// 64 = 0x40
    UIImage *_maskImage;	// 72 = 0x48
    _Bool _canAnimate;	// 80 = 0x50
    _Bool _displayingPaused;	// 81 = 0x51
    id <VUISBIconProgressViewDelegate> _delegate;	// 88 = 0x58
    UIImage *_overlayImage;	// 96 = 0x60
    double _backgroundAlpha;	// 104 = 0x68
    double _foregroundAlpha;	// 112 = 0x70
    double _circleRadiusFraction;	// 120 = 0x78
    double _pauseRadiusFraction;	// 128 = 0x80
    long long _displayedState;	// 136 = 0x88
    double _displayedFraction;	// 144 = 0x90
}

+ (id)_pieImageAtFraction:(double)arg1;	// IMP=0x006000000004e0ae
+ (id)_pieImagesMemoryPool;	// IMP=0x006000000004e000
@property(nonatomic) double displayedFraction; // @synthesize displayedFraction=_displayedFraction;
@property(nonatomic) _Bool displayingPaused; // @synthesize displayingPaused=_displayingPaused;
@property(nonatomic) long long displayedState; // @synthesize displayedState=_displayedState;
@property(nonatomic) double pauseRadiusFraction; // @synthesize pauseRadiusFraction=_pauseRadiusFraction;
@property(nonatomic) double circleRadiusFraction; // @synthesize circleRadiusFraction=_circleRadiusFraction;
@property(nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) id <VUISBIconProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGRect circleBoundingRect;
- (id)_maskImage;	// IMP=0x000000000004e929
- (void)_drawPauseUIWithCenter:(struct CGPoint)arg1;	// IMP=0x000000000004e79f
- (void)_drawIncomingCircleWithCenter:(struct CGPoint)arg1;	// IMP=0x000000000004e6c9
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint)arg1;	// IMP=0x000000000004e525
- (void)_drawPieWithCenter:(struct CGPoint)arg1;	// IMP=0x000000000004e43f
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000004de49
- (void)_clearDisplayLink;	// IMP=0x000000000004de11
- (void)_ensureDisplayLink;	// IMP=0x000000000004dd5e
- (void)_onDisplayLink:(id)arg1;	// IMP=0x000000000004dc56
- (void)_clearTransitionIfComplete:(id *)arg1;	// IMP=0x000000000004dc1f
- (void)_updateFractionTransitionAnimated:(_Bool)arg1;	// IMP=0x000000000004db36
- (void)_updateStateTransitionAnimated:(_Bool)arg1;	// IMP=0x000000000004da2f
- (void)_updatePausedTransitionAnimated:(_Bool)arg1;	// IMP=0x000000000004d9c3
- (void)_updateTransitionsAnimated:(_Bool)arg1;	// IMP=0x000000000004d817
- (_Bool)_hasActiveTransitions;	// IMP=0x000000000004d7e4
- (void)setState:(long long)arg1 paused:(_Bool)arg2 fractionLoaded:(double)arg3 animated:(_Bool)arg4;	// IMP=0x000000000004d6ec
- (void)dealloc;	// IMP=0x000000000004d64b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004d5c7

@end

