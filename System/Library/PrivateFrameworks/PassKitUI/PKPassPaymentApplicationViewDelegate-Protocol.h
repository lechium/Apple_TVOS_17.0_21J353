//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPassPaymentApplicationView, PKPaymentApplication;

@protocol PKPassPaymentApplicationViewDelegate <NSObject>

@optional
- (void)paymentApplicationView:(PKPassPaymentApplicationView *)arg1 didSelectApplication:(PKPaymentApplication *)arg2 completion:(void (^)(_Bool))arg3;
@end

