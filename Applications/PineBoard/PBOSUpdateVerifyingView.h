//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

@interface PBOSUpdateVerifyingView : UIView
{
    UILabel *_text;	// 8 = 0x8
    UILabel *_subtext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000189789
@property(readonly, nonatomic) UILabel *subtext; // @synthesize subtext=_subtext;
@property(readonly, nonatomic) UILabel *text; // @synthesize text=_text;
- (void)layoutSubviews;	// IMP=0x00100000001894ce
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000189124

@end
