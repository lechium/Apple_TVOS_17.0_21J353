//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class TVSSMenuItem;

@interface TVSSMenuItemPanelHostingViewController : UIViewController
{
    TVSSMenuItem *_menuItem;	// 8 = 0x8
    UIViewController *_hostedViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000007e7b0
@property(retain, nonatomic) UIViewController *hostedViewController; // @synthesize hostedViewController=_hostedViewController;
@property(retain, nonatomic) TVSSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void)_updateHostedViewControllerWithPresentationContext:(id)arg1 focusHeading:(unsigned long long)arg2;	// IMP=0x001000000007e6b0
- (void)setHostedViewController:(id)arg1 focusHeading:(unsigned long long)arg2;	// IMP=0x001000000007ddd0
- (id)preferredFocusEnvironments;	// IMP=0x001000000007dcb0
- (void)setMenuItem:(id)arg1 presentationContext:(id)arg2 focusHeading:(unsigned long long)arg3;	// IMP=0x001000000007dbf0
- (void)setMenuItem:(id)arg1 presentationContext:(id)arg2;	// IMP=0x001000000007db60
- (void)viewDidLoad;	// IMP=0x001000000007d9f0

@end
