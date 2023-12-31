//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSString, TVSSMenuBarAnimationContext;

@interface _TVSSMenuBarAbstractAnimationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    TVSSMenuBarAnimationContext *_animationContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002f070
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) TVSSMenuBarAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
- (void)_didComplete;	// IMP=0x001000000002ea10
- (_Bool)_canBeInterrupted;	// IMP=0x001000000002e9f0
- (void)_willFailWithReason:(id)arg1;	// IMP=0x001000000002e870
- (void)_didInterruptWithReason:(id)arg1;	// IMP=0x001000000002e6f0
- (void)_didSatisfyMilestone:(id)arg1;	// IMP=0x001000000002e510
- (void)_didBegin;	// IMP=0x001000000002e3d0
- (void)_willBegin;	// IMP=0x001000000002e250
@property(readonly, nonatomic) _Bool isBannerTransaction;
- (id)initWithAnimationContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002e0b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

