//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class ASCLockupView, ASCMetricsActivity, NSError, NSString, UIViewController;
@protocol ASCOffer;

@protocol ASCLockupViewDelegate <NSObject>
- (UIViewController *)presentingViewControllerForLockupView:(ASCLockupView *)arg1;

@optional
- (void)lockupViewDidInvalidateIntrinsicContentSize:(ASCLockupView *)arg1;
- (ASCMetricsActivity *)metricsActivityForLockupView:(ASCLockupView *)arg1 toPerformActionOfOffer:(id <ASCOffer>)arg2;
- (void)lockupView:(ASCLockupView *)arg1 appStateDidChange:(NSString *)arg2;
- (void)lockupView:(ASCLockupView *)arg1 didFailRequestWithError:(NSError *)arg2;
- (void)lockupViewDidFinishRequest:(ASCLockupView *)arg1;
- (void)lockupViewDidBeginRequest:(ASCLockupView *)arg1;
@end

