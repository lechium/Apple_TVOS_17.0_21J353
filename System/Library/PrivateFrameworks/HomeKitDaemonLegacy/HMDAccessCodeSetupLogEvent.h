//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeSetupLogEvent : HMMLogEvent
{
    _Bool _success;	// 8 = 0x8
    unsigned long long _failureReason;	// 16 = 0x10
}

@property(readonly) unsigned long long failureReason; // @synthesize failureReason=_failureReason;
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (void)submitSuccess;	// IMP=0x000000000059d7ad
- (void)submitFailureWithReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000059d71c
- (id)init;	// IMP=0x000000000059d6ed

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

