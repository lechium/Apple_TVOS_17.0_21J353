//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AMSUIWebContainerViewController, UIColor, UINavigationController;

@interface UIViewController (AppleMediaServices)
- (void)ams_willMoveToParentViewController:(id)arg1;	// IMP=0x00300000000c1caf
- (void)ams_transitionFromViewController:(id)arg1 toViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00300000000c1bdf
- (void)ams_setChildViewController:(id)arg1;	// IMP=0x00300000000c1b20
- (void)ams_removeFromParentViewController;	// IMP=0x00300000000c1a85
- (_Bool)ams_hasDescendentChildViewController:(id)arg1;	// IMP=0x00300000000c1905
- (void)ams_dismissViewControllerAnimated:(_Bool)arg1 includePresented:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00300000000c1676
- (void)ams_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00300000000c1664
- (void)ams_didMoveToParentViewController:(id)arg1;	// IMP=0x00300000000c1652
@property(retain, nonatomic, setter=ams_setBackgroundColor:) UIColor *ams_backgroundColor;
@property(readonly, nonatomic) UIViewController *ams_navigationItemViewController;
@property(readonly, nonatomic) AMSUIWebContainerViewController *ams_parentContainer;
@property(readonly, nonatomic) unsigned long long ams_navigationIndex;
@property(readonly, nonatomic) UINavigationController *ams_navigationController;
@property(readonly, nonatomic) UIViewController *ams_frontmostController;
@end

