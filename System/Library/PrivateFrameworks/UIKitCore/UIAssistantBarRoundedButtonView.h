//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIAssistantBarRoundedButtonViewButton;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonView : UIView
{
    UIView *_shadowView;	// 8 = 0x8
    _Bool _dropShadow;	// 16 = 0x10
    UIAssistantBarRoundedButtonViewButton *_button;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c3a826
@property(readonly, nonatomic) UIAssistantBarRoundedButtonViewButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool dropShadow; // @synthesize dropShadow=_dropShadow;
- (void)layoutSubviews;	// IMP=0x0000000000c3a660
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000c3a469
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000c3a34b

@end

