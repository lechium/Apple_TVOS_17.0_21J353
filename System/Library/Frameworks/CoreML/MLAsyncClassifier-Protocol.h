//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLClassifier-Protocol.h>

@class MLPredictionOptions;
@protocol MLFeatureProvider;

@protocol MLAsyncClassifier <MLClassifier>
- (void)classify:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 completionHandler:(void (^)(MLClassifierResult *, NSError *))arg3;
@end

