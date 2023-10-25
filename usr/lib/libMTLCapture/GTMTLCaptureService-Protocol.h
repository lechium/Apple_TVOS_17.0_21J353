//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTCaptureDescriptor, GTCaptureRequestBatch, GTCaptureRequestToken;
@protocol GTMTLCaptureServiceObserver;

@protocol GTMTLCaptureService
- (void)deregisterObserver:(unsigned long long)arg1;
- (unsigned long long)registerObserver:(id <GTMTLCaptureServiceObserver>)arg1;
- (void)stop;
- (GTCaptureRequestToken *)startWithDescriptor:(GTCaptureDescriptor *)arg1 completionHandler:(void (^)(GTCaptureCompletionState *))arg2;
- (GTCaptureRequestToken *)update:(GTCaptureRequestBatch *)arg1;
- (GTCaptureRequestToken *)query:(GTCaptureRequestBatch *)arg1;
- (unsigned long long)nextRequestID;
@end

