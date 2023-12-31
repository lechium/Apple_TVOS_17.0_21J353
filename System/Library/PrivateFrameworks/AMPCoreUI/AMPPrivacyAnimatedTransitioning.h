//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AMPPrivacyAnimatedTransitioning : NSObject
{
    _Bool _presentation;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008c26
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(getter=isPresentation) _Bool presentation; // @synthesize presentation=_presentation;
- (void)_animateTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000880a
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000008743
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000008735
- (id)_presentedViewControllerForContext:(id)arg1;	// IMP=0x0000000000008680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

