//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDLegacyPrimaryElectionLogEvent : HMMLogEvent
{
    NSString *_reason;	// 8 = 0x8
    NSString *_criteria;	// 16 = 0x10
    unsigned long long _availableResidentCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008460ec
@property unsigned long long availableResidentCount; // @synthesize availableResidentCount=_availableResidentCount;
@property(copy) NSString *criteria; // @synthesize criteria=_criteria;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

