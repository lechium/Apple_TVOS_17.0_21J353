//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent
{
    NSNumber *_matchingIdentifiersCount;	// 8 = 0x8
    NSNumber *_expectedRemovalCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069657
@property(readonly, copy) NSNumber *expectedRemovalCount; // @synthesize expectedRemovalCount=_expectedRemovalCount;
@property(readonly, copy) NSNumber *matchingIdentifiersCount; // @synthesize matchingIdentifiersCount=_matchingIdentifiersCount;
- (id)attributeDescriptions;	// IMP=0x000000000006950d
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithMatchingIdentifiersCount:(long long)arg1;	// IMP=0x000000000006935b

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

