//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent
{
    NSString *_messageName;	// 8 = 0x8
    NSNumber *_failureType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007937a
@property(readonly, copy) NSNumber *failureType; // @synthesize failureType=_failureType;
@property(readonly, copy) NSString *messageName; // @synthesize messageName=_messageName;
- (id)attributeDescriptions;	// IMP=0x00000000000791eb
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithMessageName:(id)arg1 failureType:(long long)arg2;	// IMP=0x000000000007904b

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

