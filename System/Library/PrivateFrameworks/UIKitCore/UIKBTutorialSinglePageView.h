//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBTutorialSinglePageView : UIView
{
    _Bool _useAlertStyle;	// 8 = 0x8
    UIView *_visualDisplayView;	// 16 = 0x10
    UILabel *_textTitle;	// 24 = 0x18
    UILabel *_textBody;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007f74bb
@property(nonatomic) _Bool useAlertStyle; // @synthesize useAlertStyle=_useAlertStyle;
@property(retain, nonatomic) UILabel *textBody; // @synthesize textBody=_textBody;
@property(retain, nonatomic) UILabel *textTitle; // @synthesize textTitle=_textTitle;
@property(retain, nonatomic) UIView *visualDisplayView; // @synthesize visualDisplayView=_visualDisplayView;
- (void)configPageView;	// IMP=0x00000000007f623c
- (void)layoutSubviews;	// IMP=0x00000000007f622a
- (id)initWithImageView:(id)arg1;	// IMP=0x00000000007f60f2

@end

