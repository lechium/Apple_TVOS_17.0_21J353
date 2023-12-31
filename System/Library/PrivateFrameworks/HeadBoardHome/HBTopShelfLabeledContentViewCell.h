//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSObject, NSString, NSURL, TVImageProxy, UIColor, UIImageView, UILabel, UIView, _TVProgressView;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HBTopShelfLabeledContentViewCell
{
    NSObject<OS_dispatch_source> *_expirationTimerSource;	// 8 = 0x8
    UIColor *_defaultUnhighlightedColor;	// 16 = 0x10
    _TVProgressView *_progressView;	// 24 = 0x18
    UILabel *_topRightTextLabel;	// 32 = 0x20
    UILabel *_playbackTitleLabel;	// 40 = 0x28
    UILabel *_playbackSubtitleLabel;	// 48 = 0x30
    UIImageView *_topRightImageView;	// 56 = 0x38
    UIView *_overlayView;	// 64 = 0x40
    NSDate *_expirationDate;	// 72 = 0x48
    NSString *_topRightText;	// 80 = 0x50
    NSURL *_topRightImageURL;	// 88 = 0x58
    NSNumber *_playbackPercentage;	// 96 = 0x60
    NSString *_playbackTitle;	// 104 = 0x68
    NSString *_playbackSubtitle;	// 112 = 0x70
    NSString *_capturedTitle;	// 120 = 0x78
    UIColor *_capturedHighlightedColor;	// 128 = 0x80
    UIColor *_capturedUnhighlightedColor;	// 136 = 0x88
    TVImageProxy *_topRightImageProxy;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000035eba
@property(retain, nonatomic) TVImageProxy *topRightImageProxy; // @synthesize topRightImageProxy=_topRightImageProxy;
@property(retain, nonatomic) UIColor *capturedUnhighlightedColor; // @synthesize capturedUnhighlightedColor=_capturedUnhighlightedColor;
@property(retain, nonatomic) UIColor *capturedHighlightedColor; // @synthesize capturedHighlightedColor=_capturedHighlightedColor;
@property(copy, nonatomic) NSString *capturedTitle; // @synthesize capturedTitle=_capturedTitle;
@property(retain, nonatomic) NSString *playbackSubtitle; // @synthesize playbackSubtitle=_playbackSubtitle;
@property(retain, nonatomic) NSString *playbackTitle; // @synthesize playbackTitle=_playbackTitle;
@property(retain, nonatomic) NSNumber *playbackPercentage; // @synthesize playbackPercentage=_playbackPercentage;
@property(retain, nonatomic) NSURL *topRightImageURL; // @synthesize topRightImageURL=_topRightImageURL;
@property(retain, nonatomic) NSString *topRightText; // @synthesize topRightText=_topRightText;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void)_updateDefaultUnhighlightedColor;	// IMP=0x0000000000035cf2
- (double)_maxTitleWidthWithFocus:(_Bool)arg1;	// IMP=0x0000000000035ca5
- (id)_animatedTitleLabel;	// IMP=0x0000000000035c93
- (Class)_labelClass;	// IMP=0x0000000000035c82
- (void)_updateTitleExpirationAppearance;	// IMP=0x0000000000035928
- (void)_updateOverlayView;	// IMP=0x0000000000034e2c
- (void)layoutSubviews;	// IMP=0x0000000000034deb
- (void)setUnhighlightedTextColor:(id)arg1;	// IMP=0x0000000000033a3c
- (id)unhighlightedTextColor;	// IMP=0x0000000000033a2a
- (void)setHighlightedTextColor:(id)arg1;	// IMP=0x00000000000339fc
- (id)highlightedTextColor;	// IMP=0x00000000000339ea
- (void)setTitle:(id)arg1;	// IMP=0x00000000000339bc
- (id)title;	// IMP=0x00000000000339aa
- (void)didMoveToWindow;	// IMP=0x000000000003393c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003387d
- (void)prepareForReuse;	// IMP=0x00000000000337dd
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000332d8
- (void)dealloc;	// IMP=0x000000000003327c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000033110

@end

