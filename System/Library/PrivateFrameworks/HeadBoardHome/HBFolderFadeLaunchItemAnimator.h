//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBApp, NSString, UIView;

__attribute__((visibility("hidden")))
@interface HBFolderFadeLaunchItemAnimator : NSObject
{
    HBApp *_transitioningApp;	// 8 = 0x8
    UIView *_transitioningView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000081026
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000080bc9
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000080bbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
