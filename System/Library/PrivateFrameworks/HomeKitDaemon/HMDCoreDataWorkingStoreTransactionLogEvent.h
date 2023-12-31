//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCoreDataWorkingStoreTransactionLogEvent : HMMLogEvent
{
    NSString *_transactionAuthor;	// 8 = 0x8
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x0010000000b29f7c
- (void).cxx_destruct;	// IMP=0x0000000000b29f69
@property(readonly, nonatomic) NSString *transactionAuthor; // @synthesize transactionAuthor=_transactionAuthor;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithTransactionAuthor:(id)arg1;	// IMP=0x0000000000b29e1b

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

