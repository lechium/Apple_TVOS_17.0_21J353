//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIView;

@interface TVSSBannerTemplate : NSObject
{
    NSAttributedString *_title;	// 8 = 0x8
    NSAttributedString *_subtitle;	// 16 = 0x10
    NSAttributedString *_footer;	// 24 = 0x18
    UIView *_leadingView;	// 32 = 0x20
    UIView *_trailingView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000fb2f0
@property(readonly, nonatomic) UIView *trailingView; // @synthesize trailingView=_trailingView;
@property(readonly, nonatomic) UIView *leadingView; // @synthesize leadingView=_leadingView;
@property(readonly, nonatomic) NSAttributedString *footer; // @synthesize footer=_footer;
@property(readonly, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 footer:(id)arg3 leadingView:(id)arg4 trailingView:(id)arg5;	// IMP=0x00100000000fb0b0

@end
