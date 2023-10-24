//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, AMSPurchaseSIWA;

@protocol _TtP9storekitd14DialogProtocol_ <NSObject>
- (void)handlePurchase:(AMSPurchaseSIWA *)arg1 completionHandler:(void (^)(AMSPurchaseSIWAResult *, NSError *))arg2;
- (void)handleEngagementRequest:(AMSEngagementRequest *)arg1 completionHandler:(void (^)(AMSEngagementResult *, NSError *))arg2;
- (void)handleDialogRequest:(AMSDialogRequest *)arg1 completionHandler:(void (^)(AMSDialogResult *, NSError *))arg2;
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 completionHandler:(void (^)(AMSAuthenticateResult *, NSError *))arg2;
@end

