//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface VUIContentRatingTextBadgeView : UIView
{
    NSAttributedString *_contentRatingAttributedText;	// 8 = 0x8
    UILayoutGuide *_contentGuide;	// 16 = 0x10
}

+ (struct UIEdgeInsets)_paddingEdgeInsets;	// IMP=0x006000000000ced6
+ (void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 color:(id)arg4;	// IMP=0x006000000000cd83
+ (struct CGSize)_badgeSizeForAttributedRatingText:(id)arg1;	// IMP=0x006000000000cbf9
+ (id)_attributedRatingTextForText:(id)arg1 color:(id)arg2;	// IMP=0x006000000000ca07
+ (id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2;	// IMP=0x006000000000c5c0
- (void).cxx_destruct;	// IMP=0x000000000000cf23
@property(retain, nonatomic) UILayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(copy, nonatomic) NSAttributedString *contentRatingAttributedText; // @synthesize contentRatingAttributedText=_contentRatingAttributedText;
- (struct CGSize)_intrinsicContentSize;	// IMP=0x000000000000c998
- (void)_updateContentRatingAttributedText:(id)arg1;	// IMP=0x000000000000c8f7
- (void)tintColorDidChange;	// IMP=0x000000000000c879
- (id)lastBaselineAnchor;	// IMP=0x000000000000c867
- (id)firstBaselineAnchor;	// IMP=0x000000000000c80b
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000000c755
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000c743
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000c731
@property(copy, nonatomic) NSString *contentRatingText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000c460
- (id)initWithBaselineOffsetFromBottom:(double)arg1;	// IMP=0x000000000000c1d0

@end
