//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class _UIPageIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorProgressView : UIView
{
    _UIPageIndicatorView *_indicatorView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIView *_filledView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000070dad4
@property(readonly, nonatomic) UIView *filledView; // @synthesize filledView=_filledView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _UIPageIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)layoutSubviews;	// IMP=0x000000000070d549
- (void)prepare;	// IMP=0x000000000070d3fd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000070d3b1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000070d354

@end

