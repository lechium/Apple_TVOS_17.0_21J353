//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeSeparatorWrapperView
{
    UIView *_upperSeparator;	// 8 = 0x8
    UILabel *_orLabel;	// 16 = 0x10
    UIView *_lowerSeparator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000047a5f
@property(retain, nonatomic) UIView *lowerSeparator; // @synthesize lowerSeparator=_lowerSeparator;
@property(retain, nonatomic) UILabel *orLabel; // @synthesize orLabel=_orLabel;
@property(retain, nonatomic) UIView *upperSeparator; // @synthesize upperSeparator=_upperSeparator;
- (void)setupLocalizedStrings;	// IMP=0x0000000000047947
- (void)setupLayout;	// IMP=0x0000000000047105
- (void)setupViews;	// IMP=0x0000000000046e90
- (id)init;	// IMP=0x0000000000046e22

@end

