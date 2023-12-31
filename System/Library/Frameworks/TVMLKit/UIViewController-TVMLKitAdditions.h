//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (TVMLKitAdditions)
- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig)arg1;	// IMP=0x003000000000237d
- (void)_cancelImpressionsUpdate;	// IMP=0x0030000000002377
- (void)tv_updateViewLayout;	// IMP=0x00300000000022cb
@property(copy, nonatomic, setter=tv_setIdentifier:) NSString *tvIdentifier;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x0030000000042f1b
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x0030000000042f13
- (id)tv_impressionableElementsForDocument:(id)arg1;	// IMP=0x0030000000191414
@end

