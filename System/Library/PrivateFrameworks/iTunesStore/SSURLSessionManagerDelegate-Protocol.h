//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSNumber, NSString, NSURLAuthenticationChallenge, NSURLCache, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionTask, SSBag, SSHTTPArchive, SSMetricsLoadURLEvent, SSURLRequestProperties;

@protocol SSURLSessionManagerDelegate <NSObject>

@optional
@property(readonly, nonatomic) NSString *URLCacheID;
@property(readonly, nonatomic) NSURLCache *URLCache;
@property(readonly, nonatomic) NSString *sourceAppBundleID;
@property(readonly, nonatomic) NSData *sourceAppAuditTokenData;
@property(readonly, nonatomic) _Bool shouldSetCookies;
@property(readonly, nonatomic) _Bool shouldRequireCellular;
@property(readonly, nonatomic) _Bool shouldDisableCellular;
@property(readonly, nonatomic) SSURLRequestProperties *requestProperties;
@property(readonly, nonatomic) NSData *rawResponseData;
@property(readonly, nonatomic) _Bool isURLBagRequest;
@property(readonly, nonatomic) SSBag *bag;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg3 newRequest:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *))arg5;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 needNewBodyStream:(void (^)(NSInputStream *))arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg3 completionHandler:(void (^)(long long, NSURLCredential *))arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didFinishCreatingHTTPArchive:(SSHTTPArchive *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithEvent:(SSMetricsLoadURLEvent *)arg3 error:(NSError *)arg4;
- (NSData *)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 decodedDataForResponseData:(NSData *)arg3;
@end

