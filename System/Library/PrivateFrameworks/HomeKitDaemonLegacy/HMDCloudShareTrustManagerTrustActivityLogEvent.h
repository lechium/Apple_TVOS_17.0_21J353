//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCloudShareTrustManagerTrustActivityLogEvent
{
    NSNumber *_trustActivityType;	// 8 = 0x8
    NSNumber *_privilege;	// 16 = 0x10
    NSNumber *_isPrimaryResident;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000083e9c4
@property(readonly, copy) NSNumber *isPrimaryResident; // @synthesize isPrimaryResident=_isPrimaryResident;
@property(readonly, copy) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(readonly, copy) NSNumber *trustActivityType; // @synthesize trustActivityType=_trustActivityType;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithTrustActivityType:(long long)arg1 privilege:(unsigned long long)arg2 isPrimaryResident:(_Bool)arg3;	// IMP=0x000000000083e770

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

