//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, UIView, _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI15TitleHeaderView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *detailLabel;	// 16 = 0x10
    MISSING_TYPE *style;	// 78 = 0x4e
    MISSING_TYPE *accessoryView;	// 4216304 = 0x4055f0
    MISSING_TYPE *iconArtworkView;	// 0 = 0x0
    MISSING_TYPE *accessory;	// 2 = 0x2
    MISSING_TYPE *accessoryAction;	// 0 = 0x0
    MISSING_TYPE *separatorLineView;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *separatorInset;	// 1769435999 = 0x6977735f
    MISSING_TYPE *allowsAccessibilityLayouts;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *avoidanceRegion;	// 0 = 0x0
    MISSING_TYPE *state;	// 4216384 = 0x405640
}

- (void).cxx_destruct;	// IMP=0x00000000001ee0b6
@property(nonatomic, readonly) UIView *accessibilityAccessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;	// IMP=0x00000000001ed654
- (void)layoutSubviews;	// IMP=0x00000000001ed1c3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ebf39
- (void)didTapWithAccessoryView:(id)arg1;	// IMP=0x00000000001ebc76
@property(nonatomic, retain) _TtC12GameCenterUI11ArtworkView *iconArtworkView; // @synthesize iconArtworkView;
@property(nonatomic, retain) UIView *accessoryView; // @synthesize accessoryView;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *titleLabel; // @synthesize titleLabel;
- (_Bool)_disableRasterizeInAnimations;	// IMP=0x00000000001eb48e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eb476
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001eb2e7

@end

