//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDProcessMemoryPressureNotificationLogEvent : HMMLogEvent
{
    NSString *_processMemoryState;	// 8 = 0x8
    NSString *_dataSyncState;	// 16 = 0x10
}

+ (id)createEventWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2;	// IMP=0x00100000005a77a0
- (void).cxx_destruct;	// IMP=0x00000000005a776f
@property(readonly, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly, nonatomic) NSString *processMemoryState; // @synthesize processMemoryState=_processMemoryState;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2;	// IMP=0x00000000005a7550

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

