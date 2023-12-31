//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVImageLayout, UIImage, UIView, VUILabel, VUIRentalExpirationLabel, VUIStackingPosterView;

__attribute__((visibility("hidden")))
@interface VUITVLockupViewCell
{
    VUIStackingPosterView *_stackingPosterView;	// 8 = 0x8
    UIImage *_placeholderImage;	// 16 = 0x10
    NSString *_placeholderImageString;	// 24 = 0x18
    TVImageLayout *_imageLayout;	// 32 = 0x20
    VUILabel *_titleLabel;	// 40 = 0x28
    VUIRentalExpirationLabel *_rentalExpirationLabel;	// 48 = 0x30
    UIView *_imageStackView;	// 56 = 0x38
    NSString *_artworkTemplateURLString;	// 64 = 0x40
    struct CGSize _imageSize;	// 72 = 0x48
}

+ (void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 artworkDictionary:(id)arg4 forMetrics:(_Bool)arg5;	// IMP=0x0010000000013a32
- (void).cxx_destruct;	// IMP=0x0000000000014eaf
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSString *artworkTemplateURLString; // @synthesize artworkTemplateURLString=_artworkTemplateURLString;
@property(retain, nonatomic) UIView *imageStackView; // @synthesize imageStackView=_imageStackView;
@property(retain, nonatomic) VUIRentalExpirationLabel *rentalExpirationLabel; // @synthesize rentalExpirationLabel=_rentalExpirationLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(retain, nonatomic) NSString *placeholderImageString; // @synthesize placeholderImageString=_placeholderImageString;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) VUIStackingPosterView *stackingPosterView; // @synthesize stackingPosterView=_stackingPosterView;
- (id)_rentalExpirationLabelForMediaEntity:(id)arg1;	// IMP=0x0000000000014ba6
- (id)_titleLabelForMediaEntity:(id)arg1;	// IMP=0x0000000000014a4d
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x000000000001491b
- (id)_placeholderImageWithLayout:(id)arg1;	// IMP=0x000000000001482b
- (id)selectingView;	// IMP=0x0000000000014816
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x0000000000014804
- (void)layoutSubviews;	// IMP=0x0000000000014753
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001473c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001464c
- (void)updateArtworkWithDictionary:(id)arg1;	// IMP=0x0000000000013fe9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

