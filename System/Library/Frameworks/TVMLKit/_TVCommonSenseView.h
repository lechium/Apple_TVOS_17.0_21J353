//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, _TVCommonSenseFooterView;

__attribute__((visibility("hidden")))
@interface _TVCommonSenseView : UIView
{
    UIView *_containerView;	// 8 = 0x8
    UIView *_headerView;	// 16 = 0x10
    NSArray *_infoViews;	// 24 = 0x18
    _TVCommonSenseFooterView *_footerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d9e66
@property(retain, nonatomic) _TVCommonSenseFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *infoViews; // @synthesize infoViews=_infoViews;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)layoutSubviews;	// IMP=0x00000000000d93de
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d931d

@end

