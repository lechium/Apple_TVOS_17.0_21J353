//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SiriUIContentButton;

@interface SRBigButtonView : UIView
{
    SiriUIContentButton *_button;	// 8 = 0x8
    struct UIEdgeInsets _edgeInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000009e2c
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) SiriUIContentButton *button; // @synthesize button=_button;
- (void)viewInsetsInConversationView:(struct UIEdgeInsets)arg1;	// IMP=0x0010000000009ddd
- (_Bool)suppressVibrantBackground;	// IMP=0x0010000000009dd5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000009d9b
- (void)layoutSubviews;	// IMP=0x0010000000009cbe
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000009c10

@end

