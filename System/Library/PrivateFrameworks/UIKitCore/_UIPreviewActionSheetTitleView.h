//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetTitleView : UIView
{
    NSString *_title;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d66016
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0000000000d65fb2
- (void)_updateLabelFont;	// IMP=0x0000000000d65f1c
- (void)dealloc;	// IMP=0x0000000000d65e9a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000d65e86
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d65e57
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;	// IMP=0x0000000000d65abb

@end
