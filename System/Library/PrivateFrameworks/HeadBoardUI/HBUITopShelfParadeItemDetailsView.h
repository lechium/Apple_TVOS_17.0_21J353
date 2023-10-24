//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HBUITopShelfParadeActionsView, HBUITopShelfParadeButton, UIImageView, UILabel, _HBUITopShelfTextContentRatingWrapperView;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeItemDetailsView : UIView
{
    UILabel *_summaryLabel;	// 8 = 0x8
    UILabel *_namedAttributesLabel;	// 16 = 0x10
    UILabel *_genreLabel;	// 24 = 0x18
    UILabel *_yearLabel;	// 32 = 0x20
    UILabel *_durationLabel;	// 40 = 0x28
    UILabel *_gameControllerLabel;	// 48 = 0x30
    UILabel *_rottenTomatoesRatingLabel;	// 56 = 0x38
    UILabel *_commonSenseRatingLabel;	// 64 = 0x40
    UIView *_videoResolutionHDBadgeView;	// 72 = 0x48
    UIView *_videoResolution4KBadgeView;	// 80 = 0x50
    UIView *_videoColorSpaceHDRBadgeView;	// 88 = 0x58
    UIView *_videoColorSpaceDolbyVisionBadgeView;	// 96 = 0x60
    UIView *_audioDolbyAtmosBadgeView;	// 104 = 0x68
    UIView *_audioTranscriptionClosedCaptioningBadgeView;	// 112 = 0x70
    UIView *_audioTranscriptionSDHBadgeView;	// 120 = 0x78
    UIView *_audioDescriptionBadgeView;	// 128 = 0x80
    UILabel *_termsAndConditionsLabel;	// 136 = 0x88
    HBUITopShelfParadeActionsView *_actionsView;	// 144 = 0x90
    UIImageView *_contentRatingBadgeImageView;	// 152 = 0x98
    _HBUITopShelfTextContentRatingWrapperView *_contentRatingTextWrapperView;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000000f796
@property(readonly, nonatomic) _HBUITopShelfTextContentRatingWrapperView *contentRatingTextWrapperView; // @synthesize contentRatingTextWrapperView=_contentRatingTextWrapperView;
@property(readonly, nonatomic) UIImageView *contentRatingBadgeImageView; // @synthesize contentRatingBadgeImageView=_contentRatingBadgeImageView;
@property(readonly, nonatomic) HBUITopShelfParadeActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(readonly, nonatomic) UILabel *termsAndConditionsLabel; // @synthesize termsAndConditionsLabel=_termsAndConditionsLabel;
@property(readonly, nonatomic) UIView *audioDescriptionBadgeView; // @synthesize audioDescriptionBadgeView=_audioDescriptionBadgeView;
@property(readonly, nonatomic) UIView *audioTranscriptionSDHBadgeView; // @synthesize audioTranscriptionSDHBadgeView=_audioTranscriptionSDHBadgeView;
@property(readonly, nonatomic) UIView *audioTranscriptionClosedCaptioningBadgeView; // @synthesize audioTranscriptionClosedCaptioningBadgeView=_audioTranscriptionClosedCaptioningBadgeView;
@property(readonly, nonatomic) UIView *audioDolbyAtmosBadgeView; // @synthesize audioDolbyAtmosBadgeView=_audioDolbyAtmosBadgeView;
@property(readonly, nonatomic) UIView *videoColorSpaceDolbyVisionBadgeView; // @synthesize videoColorSpaceDolbyVisionBadgeView=_videoColorSpaceDolbyVisionBadgeView;
@property(readonly, nonatomic) UIView *videoColorSpaceHDRBadgeView; // @synthesize videoColorSpaceHDRBadgeView=_videoColorSpaceHDRBadgeView;
@property(readonly, nonatomic) UIView *videoResolution4KBadgeView; // @synthesize videoResolution4KBadgeView=_videoResolution4KBadgeView;
@property(readonly, nonatomic) UIView *videoResolutionHDBadgeView; // @synthesize videoResolutionHDBadgeView=_videoResolutionHDBadgeView;
@property(readonly, nonatomic) UILabel *commonSenseRatingLabel; // @synthesize commonSenseRatingLabel=_commonSenseRatingLabel;
@property(readonly, nonatomic) UILabel *rottenTomatoesRatingLabel; // @synthesize rottenTomatoesRatingLabel=_rottenTomatoesRatingLabel;
@property(readonly, nonatomic) UILabel *gameControllerLabel; // @synthesize gameControllerLabel=_gameControllerLabel;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(readonly, nonatomic) UILabel *yearLabel; // @synthesize yearLabel=_yearLabel;
@property(readonly, nonatomic) UILabel *genreLabel; // @synthesize genreLabel=_genreLabel;
@property(readonly, nonatomic) UILabel *namedAttributesLabel; // @synthesize namedAttributesLabel=_namedAttributesLabel;
@property(readonly, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
- (_Bool)canBecomeFocused;	// IMP=0x000000000000f59b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000000f4c9
- (id)preferredFocusEnvironments;	// IMP=0x000000000000f45e
- (void)updateContentRating:(id)arg1;	// IMP=0x000000000000f304
@property(readonly, nonatomic) HBUITopShelfParadeButton *secondaryActionButton;
@property(readonly, nonatomic) HBUITopShelfParadeButton *primaryActionButton;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000d678

@end

