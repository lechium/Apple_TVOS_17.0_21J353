//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30TVRootShowcaseCarouselItemCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 1970226774 = 0x756f4656
    MISSING_TYPE *layout;	// 778989417 = 0x2e6e6f69
    MISSING_TYPE *carouselItemDelegate;	// 98 = 0x62
    MISSING_TYPE *artworkView;	// 2147483672 = 0x80000018
    MISSING_TYPE *avPlayer;	// 24 = 0x18
    MISSING_TYPE *avPlayerLayer;	// 2949120 = 0x2d0000
    MISSING_TYPE *blurView;	// 1920169263 = 0x7273752f
    MISSING_TYPE *buttonStackView;	// 1769435951 = 0x6977732f
    MISSING_TYPE *textStackView;	// 2004050537 = 0x77736269
    MISSING_TYPE *captionLabel;	// 1818583907 = 0x6c656363
    MISSING_TYPE *titleLabel;	// 2036608613 = 0x79642e65
    MISSING_TYPE *subtitleLabel;	// 2147483672 = 0x80000018
    MISSING_TYPE *focusContainerGuide;	// 24 = 0x18
    MISSING_TYPE *buttonWidthConstraint;	// 393216 = 0x60000
    MISSING_TYPE *buttons;	// 1920169263 = 0x7273752f
    MISSING_TYPE *buttonActions;	// 1769435951 = 0x6977732f
}

- (void).cxx_destruct;	// IMP=0x0000000000545e80
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityCaptionLabel;
- (void)restartVideo;	// IMP=0x0000000000545890
- (void)handleTappedButton:(id)arg1;	// IMP=0x0000000000545840
- (void)didMoveToWindow;	// IMP=0x00000000005445f0
- (void)prepareForReuse;	// IMP=0x00000000005441d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005441b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000544180
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end

