//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDate, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisNotificationReceivedLogEvent : HMMLogEvent
{
    unsigned long long _reason;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSDate *_notificationSentDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a9ad96
@property(readonly, nonatomic) NSDate *notificationSentDate; // @synthesize notificationSentDate=_notificationSentDate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property(readonly) double latency;
- (id)initWithReason:(unsigned long long)arg1 state:(unsigned long long)arg2 notificationSentDate:(id)arg3;	// IMP=0x0000000000a9aac3

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

