//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointEnablementLogEvent : HMMHomeLogEvent
{
    unsigned long long _numCapableSiriEndpointAccessories;	// 8 = 0x8
    unsigned long long _numEnabledSiriEndpointAccessories;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000cf3124
@property(readonly, nonatomic) unsigned long long numEnabledSiriEndpointAccessories; // @synthesize numEnabledSiriEndpointAccessories=_numEnabledSiriEndpointAccessories;
@property(readonly, nonatomic) unsigned long long numCapableSiriEndpointAccessories; // @synthesize numCapableSiriEndpointAccessories=_numCapableSiriEndpointAccessories;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;	// IMP=0x0000000000cf30f0
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)serializedMetric;	// IMP=0x0000000000cf2e80
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000cf2c91
- (id)initWithHomeUUID:(id)arg1 numCapableSiriEndpoints:(unsigned long long)arg2 numEnabledSiriEndpoints:(unsigned long long)arg3;	// IMP=0x0000000000cf2c3b
- (id)initWithConfigurationDataSource:(id)arg1;	// IMP=0x0000000000cf28e9

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

