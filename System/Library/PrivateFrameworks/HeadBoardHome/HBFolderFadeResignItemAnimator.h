//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBApp, NSString, UIView;

__attribute__((visibility("hidden")))
@interface HBFolderFadeResignItemAnimator : NSObject
{
    _Bool _resignTransitionToLeft;	// 8 = 0x8
    HBApp *_transitioningApp;	// 16 = 0x10
    UIView *_transitioningView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000081502
@property(nonatomic) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
- (void)animateTransition:(id)arg1;	// IMP=0x000000000008105c
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000008104e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

