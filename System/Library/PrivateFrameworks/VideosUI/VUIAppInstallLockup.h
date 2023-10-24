//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImage, UILabel, UIStackView, VUIAppInstallView, VUITextBadge;

__attribute__((visibility("hidden")))
@interface VUIAppInstallLockup : UIView
{
    VUIAppInstallView *_iconView;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    UILabel *_iAPLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UIStackView *_nameAndRatingStack;	// 40 = 0x28
    UIStackView *_containerStack;	// 48 = 0x30
    _Bool _canFocus;	// 56 = 0x38
    UIImage *_icon;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSString *_ageRating;	// 80 = 0x50
    NSString *_iAP;	// 88 = 0x58
    NSString *_subtitle;	// 96 = 0x60
    UIStackView *_metadataStackView;	// 104 = 0x68
    VUITextBadge *_ageRatingBadge;	// 112 = 0x70
    UILabel *_ageRatingLabel;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000015d11e
@property(retain, nonatomic) UILabel *ageRatingLabel; // @synthesize ageRatingLabel=_ageRatingLabel;
@property(retain, nonatomic) VUITextBadge *ageRatingBadge; // @synthesize ageRatingBadge=_ageRatingBadge;
@property(nonatomic) _Bool canFocus; // @synthesize canFocus=_canFocus;
@property(retain, nonatomic) UIStackView *metadataStackView; // @synthesize metadataStackView=_metadataStackView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *iAP; // @synthesize iAP=_iAP;
@property(copy, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)_textColorForDarkMode;	// IMP=0x000000000015cfec
- (void)_configureLabels;	// IMP=0x000000000015cc57
- (void)_configureAgeRatingBadge;	// IMP=0x000000000015ca63
- (_Bool)canBecomeFocused;	// IMP=0x000000000015ca3e
@property(readonly, nonatomic) VUIAppInstallView *installView;
- (void)_layoutForIos;	// IMP=0x000000000015c211
- (void)_layoutForTvos;	// IMP=0x000000000015bcae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000015b947

@end
