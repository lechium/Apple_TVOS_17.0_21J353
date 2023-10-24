//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>
#import <PersonalizationPortrait/PPUniversalSearchSpotlightFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPTopicClientProtocol <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting>
- (void)scoredMappedTopicBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
- (void)topicExtractionsFromTextBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
- (void)topicRecordBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
- (void)topicBatch:(NSArray *)arg1 isLast:(_Bool)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(_Bool))arg5;
@end

