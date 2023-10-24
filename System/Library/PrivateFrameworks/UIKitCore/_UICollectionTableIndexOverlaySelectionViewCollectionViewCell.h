//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface _UICollectionTableIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell
{
    UIButton *_button;	// 8 = 0x8
    double _rightMargin;	// 16 = 0x10
    _Bool _rightMarginAdjusted;	// 24 = 0x18
    id _tapTarget;	// 32 = 0x20
    SEL _tapAction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000105232a
@property(readonly) UIButton *button; // @synthesize button=_button;
@property(readonly) UILabel *label;
@property(nonatomic) double rightMargin;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000001052146
- (void)layoutSubviews;	// IMP=0x0000000001051fd1
- (void)tintColorDidChange;	// IMP=0x0000000001051ebd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001051d36

@end
