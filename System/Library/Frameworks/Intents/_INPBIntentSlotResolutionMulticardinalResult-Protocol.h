//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentSlotResolutionResult;

@protocol _INPBIntentSlotResolutionMulticardinalResult <NSObject>
+ (Class)resolutionResultsType;
@property(readonly, nonatomic) unsigned long long resolutionResultsCount;
@property(copy, nonatomic) NSArray *resolutionResults;
- (_INPBIntentSlotResolutionResult *)resolutionResultsAtIndex:(unsigned long long)arg1;
- (void)addResolutionResults:(_INPBIntentSlotResolutionResult *)arg1;
- (void)clearResolutionResults;
@end

