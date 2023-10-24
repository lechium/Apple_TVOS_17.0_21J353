//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSError, PKApplePayTrustSignatureRequest, PKPaymentAuthorizationResult, PKPaymentMerchantSession, PKPaymentRequest, PKPaymentRequestCouponCodeUpdate, PKPaymentRequestMerchantSessionUpdate, PKPaymentRequestPaymentMethodUpdate, PKPaymentRequestShippingContactUpdate, PKPaymentRequestShippingMethodUpdate;

@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
- (void)handleDismissWithCompletion:(void (^)(void))arg1;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(PKPaymentRequestCouponCodeUpdate *)arg1;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(PKPaymentRequestPaymentMethodUpdate *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(PKPaymentRequestShippingContactUpdate *)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(PKPaymentRequestShippingMethodUpdate *)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(PKPaymentRequestPaymentMethodUpdate *)arg1 signatureRequest:(PKApplePayTrustSignatureRequest *)arg2;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(PKPaymentAuthorizationResult *)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(PKPaymentRequestMerchantSessionUpdate *)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationWillResignActive:(_Bool)arg1;

@optional
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(NSArray *)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(NSArray *)arg2 paymentSummaryItems:(NSArray *)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(NSArray *)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(PKPaymentMerchantSession *)arg1 error:(NSError *)arg2;
- (void)prepareWithPaymentRequest:(PKPaymentRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)handleHostApplicationDidCancel;
@end

