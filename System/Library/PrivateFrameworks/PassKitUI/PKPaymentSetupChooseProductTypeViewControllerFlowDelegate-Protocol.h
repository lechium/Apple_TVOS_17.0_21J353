//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKPaymentDigitalIssuanceProductCredential, PKPaymentSetupChooseProductTypeViewController;

@protocol PKPaymentSetupChooseProductTypeViewControllerFlowDelegate <NSObject>
- (void)chooseProductTypeViewControllerDidTerminate:(PKPaymentSetupChooseProductTypeViewController *)arg1;
- (void)chooseProductTypeViewController:(PKPaymentSetupChooseProductTypeViewController *)arg1 didPerformPurchaseWithCredential:(PKPaymentDigitalIssuanceProductCredential *)arg2;
- (void)chooseProductTypeViewController:(PKPaymentSetupChooseProductTypeViewController *)arg1 didSelectServiceProducts:(NSArray *)arg2;
- (void)chooseProductTypeViewControllerDidSelectManualEntry:(PKPaymentSetupChooseProductTypeViewController *)arg1;
@end

