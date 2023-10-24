//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIView;

@interface PREStackViewController : UIViewController
{
    NSArray *_viewControllers;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006213
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)didReceiveMemoryWarning;	// IMP=0x00100000000061d3
- (void)viewDidLoad;	// IMP=0x0010000000006061
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000005ff9
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000005f3b
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000005eb1
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000005e43
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000005de2
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000005d6b
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005ce5
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004f26
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000004f11
- (void)loadView;	// IMP=0x0010000000004e32
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0010000000004dd0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000004d74

@end

