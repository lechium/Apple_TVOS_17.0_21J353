//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCaptionButtonPresentationProperties, LPTextViewStyle, UIButton;

__attribute__((visibility("hidden")))
@interface LPSubtitleButtonView
{
    LPCaptionButtonPresentationProperties *_buttonProperties;	// 8 = 0x8
    LPTextViewStyle *_style;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077087
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000077072
- (void)buttonPressed:(id)arg1;	// IMP=0x0000000000076f89
- (void)sizeToFit;	// IMP=0x0000000000076f22
- (struct CGSize)_layoutButtonForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x0000000000076ea0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000076e54
- (void)layoutComponentView;	// IMP=0x0000000000076df4
- (void)_buildSubviewsIfNeeded;	// IMP=0x000000000007670e
- (id)initWithHost:(id)arg1 buttonProperties:(id)arg2 style:(id)arg3;	// IMP=0x0000000000076639
- (id)initWithHost:(id)arg1;	// IMP=0x000000000007662b

@end

