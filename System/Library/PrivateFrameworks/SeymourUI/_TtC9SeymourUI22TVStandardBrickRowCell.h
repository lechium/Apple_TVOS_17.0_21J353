//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI22TVStandardBrickRowCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 12 = 0xc
    MISSING_TYPE *layout;	// 24 = 0x18
    MISSING_TYPE *tvArtworkView;	// 51970048 = 0x3190000
    MISSING_TYPE *titleLabel;	// 1920169263 = 0x7273752f
    MISSING_TYPE *subtitleLabel;	// 1769435951 = 0x6977732f
}

- (void).cxx_destruct;	// IMP=0x00000000005dca00
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000005dc890
- (void)prepareForReuse;	// IMP=0x00000000005dc720
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005dc580
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005dc550

@end

