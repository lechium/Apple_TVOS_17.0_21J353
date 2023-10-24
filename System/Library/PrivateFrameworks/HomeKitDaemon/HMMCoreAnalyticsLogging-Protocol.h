//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@protocol HMMCoreAnalyticsLogging <NSObject>
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;

@optional
+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, nonatomic) NSUUID *homeUUID;
- (NSUUID *)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
@end

