//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewPropertyAnimator;

@interface _TVSSBannerPresentToastSubTransaction
{
    UIViewPropertyAnimator *_fadeAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_scaleAnimator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a4780
@property(readonly, nonatomic) UIViewPropertyAnimator *scaleAnimator; // @synthesize scaleAnimator=_scaleAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *fadeAnimator; // @synthesize fadeAnimator=_fadeAnimator;
- (void)_willFailWithReason:(id)arg1;	// IMP=0x00100000000a4690
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x00100000000a45e0
- (void)_begin;	// IMP=0x00100000000a3580

@end

