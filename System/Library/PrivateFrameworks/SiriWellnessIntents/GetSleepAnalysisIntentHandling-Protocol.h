//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriWellnessIntents/NSObject-Protocol.h>

@class GetSleepAnalysisIntent;

@protocol GetSleepAnalysisIntentHandling <NSObject>
- (void)handleGetSleepAnalysis:(GetSleepAnalysisIntent *)arg1 completion:(void (^)(GetSleepAnalysisIntentResponse *))arg2;

@optional
- (void)confirmGetSleepAnalysis:(GetSleepAnalysisIntent *)arg1 completion:(void (^)(GetSleepAnalysisIntentResponse *))arg2;
@end

