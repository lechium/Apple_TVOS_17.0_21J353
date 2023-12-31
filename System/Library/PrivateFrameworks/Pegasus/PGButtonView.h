//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIFont, UIImage, UIViewPropertyAnimator, _PGButton;
@protocol BSInvalidatable, PGButtonViewDelegate;

__attribute__((visibility("hidden")))
@interface PGButtonView
{
    double _currentGlyphSize;	// 8 = 0x8
    NSString *_currentGlyphImageName;	// 16 = 0x10
    UIImage *_currentCustomImage;	// 24 = 0x18
    id <BSInvalidatable> _preventAutoHideOfControlsAssertion;	// 32 = 0x20
    _Bool _circular;	// 40 = 0x28
    _Bool _highlighted;	// 41 = 0x29
    id <PGButtonViewDelegate> _delegate;	// 48 = 0x30
    NSString *_systemImageName;	// 56 = 0x38
    UIImage *_image;	// 64 = 0x40
    double _glyphSize;	// 72 = 0x48
    _PGButton *_actualButton;	// 80 = 0x50
    UIViewPropertyAnimator *_highlightAnimator;	// 88 = 0x58
}

+ (id)buttonWithDelegate:(id)arg1;	// IMP=0x0040000000042712
+ (id)disabledTintColor;	// IMP=0x00400000000426f9
+ (Class)layerClass;	// IMP=0x00400000000426e8
- (void).cxx_destruct;	// IMP=0x0000000000043b34
@property(nonatomic) __weak UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) _PGButton *actualButton; // @synthesize actualButton=_actualButton;
@property(nonatomic) double glyphSize; // @synthesize glyphSize=_glyphSize;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(nonatomic) __weak id <PGButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleDragExit:(id)arg1;	// IMP=0x000000000004378c
- (void)_handleDragEnter:(id)arg1;	// IMP=0x0000000000043775
- (void)_handleTouchUpInside:(id)arg1;	// IMP=0x000000000004371b
- (void)_handleTouchUpOrCancel:(id)arg1;	// IMP=0x00000000000436c5
- (void)_handleTouchDown:(id)arg1;	// IMP=0x000000000004361f
- (void)_updateForCircularAppearanceIfNeeded;	// IMP=0x0000000000043565
- (void)_updateGlyphConfigurationIfNeeded;	// IMP=0x0000000000043311
- (void)didMoveToWindow;	// IMP=0x00000000000432d0
@property(readonly, nonatomic) UIColor *enabledTintColor;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)sizeToFit;	// IMP=0x0000000000043059
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000042fc0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000042f1b
- (_Bool)_shouldHitTest;	// IMP=0x0000000000042ed5
- (void)layoutSubviews;	// IMP=0x0000000000042e48
@property(copy, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (void)setAccessibilityIdentifier:(id)arg1;	// IMP=0x0000000000042a2c
- (id)accessibilityIdentifier;	// IMP=0x0000000000042a0f
- (void)dealloc;	// IMP=0x00000000000429c6

@end

