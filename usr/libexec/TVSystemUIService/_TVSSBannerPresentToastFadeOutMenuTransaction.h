//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIViewPropertyAnimator;

@interface _TVSSBannerPresentToastFadeOutMenuTransaction
{
    UIViewPropertyAnimator *_fadeOutAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_scaleDownAnimator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000d0a60
@property(readonly, nonatomic) UIViewPropertyAnimator *scaleDownAnimator; // @synthesize scaleDownAnimator=_scaleDownAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *fadeOutAnimator; // @synthesize fadeOutAnimator=_fadeOutAnimator;
- (void)_willFailWithReason:(id)arg1;	// IMP=0x00100000000d0930
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x00100000000d0880
- (void)_begin;	// IMP=0x00100000000cfff0

@end

