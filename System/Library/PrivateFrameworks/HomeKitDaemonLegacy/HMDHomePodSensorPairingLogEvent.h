//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomePodSensorPairingLogEvent : HMMLogEvent
{
    _Bool _pairingSuccess;	// 8 = 0x8
    unsigned long long _failureReason;	// 16 = 0x10
}

@property(readonly) unsigned long long failureReason; // @synthesize failureReason=_failureReason;
@property(readonly) _Bool pairingSuccess; // @synthesize pairingSuccess=_pairingSuccess;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithPairingSuccess:(_Bool)arg1 failureReason:(unsigned long long)arg2;	// IMP=0x0000000000393de9

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

