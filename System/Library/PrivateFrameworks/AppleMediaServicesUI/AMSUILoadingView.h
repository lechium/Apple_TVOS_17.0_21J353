//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUILoadingView : AMSUICommonView
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000034e39
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000034d1e
- (void)layoutSubviews;	// IMP=0x0000000000034a27
- (void)stopAnimating;	// IMP=0x00000000000349ea
- (void)startAnimating;	// IMP=0x00000000000349ad
- (void)setLoadingText:(id)arg1;	// IMP=0x000000000003491a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000034793

@end

