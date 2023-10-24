//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicUI/NSObject-Protocol.h>

@class ACAccount, AMSAuthenticateRequest, AMSDialogRequest, AMSEngagementRequest, AMSMetricsLoadURLContext, AMSURLSession, NSDictionary, NSError, NSString, NSURLSessionTask;

@protocol AMSURLProtocolDelegate <NSObject>

@optional
- (_Bool)AMSURLSession:(AMSURLSession *)arg1 shouldHandleDialogDictionary:(NSDictionary *)arg2;
- (_Bool)AMSURLSession:(AMSURLSession *)arg1 shouldHandleAuthenticationForAccount:(ACAccount *)arg2 dialogDictionary:(NSDictionary *)arg3;
- (_Bool)AMSURLSession:(AMSURLSession *)arg1 shouldFailWithServerError:(NSError *)arg2;
- (void)AMSURLSession:(AMSURLSession *)arg1 handleDialogRequest:(AMSDialogRequest *)arg2 completion:(void (^)(AMSDialogResult *, NSError *))arg3;
- (void)AMSURLSession:(AMSURLSession *)arg1 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg2 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg3;
- (void)reportMetricsForContext:(AMSMetricsLoadURLContext *)arg1;
- (NSString *)presentingSceneIdentifier;
- (NSString *)presentingSceneBundleIdentifier;
- (_Bool)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 shouldFailWithServerError:(NSError *)arg3;
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleEngagementRequest:(AMSEngagementRequest *)arg3 completion:(void (^)(AMSEngagementResult *, NSError *))arg4;
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleDialogRequest:(AMSDialogRequest *)arg3 completion:(void (^)(AMSDialogResult *, NSError *))arg4;
- (void)AMSURLSession:(AMSURLSession *)arg1 task:(NSURLSessionTask *)arg2 handleAuthenticateRequest:(AMSAuthenticateRequest *)arg3 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg4;
@end

