//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIFavoriteBannerLayout, VUIFavoriteBannerView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerCollectionViewCell
{
    VUIFavoriteBannerView *_bannerView;	// 16 = 0x10
    VUIFavoriteBannerLayout *_bannerLayout;	// 24 = 0x18
    double _width;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000baf4d
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout; // @synthesize bannerLayout=_bannerLayout;
@property(retain, nonatomic) VUIFavoriteBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)prepareForReuse;	// IMP=0x00000000000baea3
- (void)_updateBackgroundAndHighlightColor;	// IMP=0x00000000000bada1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000bad4c
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000bad2b
- (void)layoutSubviews;	// IMP=0x00000000000bac23
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ba910

@end

