//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKCurrencyAmount, PKPaymentAutoReloadSetupController, UIViewController;

@protocol PKPaymentAutoReloadSetupControllerDelegate <NSObject>
- (void)autoReloadSetupControllerDidCompleteWithAmount:(PKCurrencyAmount *)arg1 threshold:(PKCurrencyAmount *)arg2;

@optional
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsPopViewController:(UIViewController *)arg2;
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsDismissViewController:(UIViewController *)arg2;
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsPushViewController:(UIViewController *)arg2;
- (void)autoReloadSetupController:(PKPaymentAutoReloadSetupController *)arg1 requestsPresentViewController:(UIViewController *)arg2;
- (void)autoReloadSetupControllerDidCancel:(PKPaymentAutoReloadSetupController *)arg1;
@end
