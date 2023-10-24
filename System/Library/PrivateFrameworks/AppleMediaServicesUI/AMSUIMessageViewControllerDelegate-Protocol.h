//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class AMSDelegateAction, AMSDialogRequest, AMSDialogResult, NSDictionary, NSError, NSString, UIViewController;
@protocol AMSUIMessageViewController;

@protocol AMSUIMessageViewControllerDelegate <NSObject>
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didFailWithError:(NSError *)arg2;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didSelectActionWithDialogResult:(AMSDialogResult *)arg2;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didUpdateSize:(struct CGSize)arg2;

@optional
- (_Bool)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 shouldEnqueueMetricsForDialogResult:(AMSDialogResult *)arg2;
- (_Bool)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 handleDelegateAction:(AMSDelegateAction *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)messageViewControllerDidDismiss:(UIViewController<AMSUIMessageViewController> *)arg1;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 enqueueEventWithFields:(NSDictionary *)arg2 inTopic:(NSString *)arg3;
- (void)messageViewController:(UIViewController<AMSUIMessageViewController> *)arg1 didLoadDialogRequest:(AMSDialogRequest *)arg2;
@end

