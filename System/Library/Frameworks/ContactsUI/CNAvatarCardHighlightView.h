//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface CNAvatarCardHighlightView : UIView
{
    CALayer *_highlightLayer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000052643
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(readonly, nonatomic) _Bool highlighted;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000052573
@property(retain, nonatomic) UIColor *highlightColor;
- (void)layoutSubviews;	// IMP=0x00000000000523d3
- (void)awakeFromNib;	// IMP=0x0000000000052392
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005233a
- (void)_commonInit;	// IMP=0x000000000005225a

@end

