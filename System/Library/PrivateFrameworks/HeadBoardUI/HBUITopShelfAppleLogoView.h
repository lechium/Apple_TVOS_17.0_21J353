//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface HBUITopShelfAppleLogoView : UIView
{
    UIImageView *_logoImageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e40d
@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001e340
- (void)_updateLogoImageViewTintColor;	// IMP=0x000000000001e28f
- (void)layoutSubviews;	// IMP=0x000000000001e1f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001e0d8

@end

