//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI21TVShelfLargeTitleView : UICollectionReusableView
{
    MISSING_TYPE *indexPath;	// 1836672339 = 0x6d796553
    MISSING_TYPE *delegate;	// 6648431 = 0x65726f
    MISSING_TYPE *shelf;	// 12 = 0xc
    MISSING_TYPE *titleLabel;	// 24 = 0x18
    MISSING_TYPE *subtitleLabel;	// 0 = 0x0
    MISSING_TYPE *textStackView;	// 1937330991 = 0x7379532f
}

- (void).cxx_destruct;	// IMP=0x0000000000320900
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
- (void)prepareForReuse;	// IMP=0x0000000000320790
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000320670
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000320650
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000320620

@end
