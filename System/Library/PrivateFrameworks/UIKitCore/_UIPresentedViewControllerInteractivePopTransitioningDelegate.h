//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPresentedViewControllerInteractivePopTransitioningDelegate : NSObject
{
    id <UIViewControllerAnimatedTransitioning> _animator;	// 8 = 0x8
    id <UIViewControllerInteractiveTransitioning> _interactor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004a3944
@property(retain, nonatomic) id <UIViewControllerInteractiveTransitioning> interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animator; // @synthesize animator=_animator;
- (id)interactionControllerForDismissal:(id)arg1;	// IMP=0x00000000004a38fc
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000004a38ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

