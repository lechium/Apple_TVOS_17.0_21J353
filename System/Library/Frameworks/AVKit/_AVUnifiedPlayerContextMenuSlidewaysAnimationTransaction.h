//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSTransaction.h>

@class AVUnifiedPlayerContextMenuContainerViewController, AVUnifiedPlayerContextMenuViewController, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _AVUnifiedPlayerContextMenuSlidewaysAnimationTransaction : BSTransaction
{
    AVUnifiedPlayerContextMenuContainerViewController *_parentViewController;	// 8 = 0x8
    AVUnifiedPlayerContextMenuViewController *_currentViewController;	// 16 = 0x10
    AVUnifiedPlayerContextMenuViewController *_nextViewController;	// 24 = 0x18
    long long _direction;	// 32 = 0x20
    UIViewPropertyAnimator *_transformAnimator;	// 40 = 0x28
    UIViewPropertyAnimator *_opacityAnimator;	// 48 = 0x30
}

+ (id)_opacityTimingParameters;	// IMP=0x0060000000130ed2
+ (id)_transformTimingParameters;	// IMP=0x0060000000130e8b
- (void).cxx_destruct;	// IMP=0x0000000000130cbe
@property(readonly, nonatomic) UIViewPropertyAnimator *opacityAnimator; // @synthesize opacityAnimator=_opacityAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *transformAnimator; // @synthesize transformAnimator=_transformAnimator;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) AVUnifiedPlayerContextMenuViewController *nextViewController; // @synthesize nextViewController=_nextViewController;
@property(readonly, nonatomic) AVUnifiedPlayerContextMenuViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(readonly, nonatomic) __weak AVUnifiedPlayerContextMenuContainerViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)_willFailWithReason:(id)arg1;	// IMP=0x0000000000130bb6
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x0000000000130b43
- (_Bool)_canBeInterrupted;	// IMP=0x0000000000130b3b
- (void)_begin;	// IMP=0x00000000001306a7
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x0000000000130650
- (id)initWithParentViewController:(id)arg1 currentViewController:(id)arg2 nextViewController:(id)arg3 direction:(long long)arg4;	// IMP=0x0000000000130484

@end

