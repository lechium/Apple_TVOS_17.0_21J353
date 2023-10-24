//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchBarPromptContainerView : UIView
{
    long long _barMetrics;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025e2d0
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
- (id)description;	// IMP=0x000000000025e072
- (void)layoutSubviews;	// IMP=0x000000000025de74
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000025dde2
- (_Bool)useMini;	// IMP=0x000000000025ddcd
- (_Bool)_isKnownUISearchBarComponentContainer;	// IMP=0x0000000000971ba5

@end
