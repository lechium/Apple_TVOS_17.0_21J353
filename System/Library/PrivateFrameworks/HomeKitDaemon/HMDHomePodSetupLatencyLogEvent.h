//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent
{
    unsigned long long _setupStartTime;	// 8 = 0x8
    unsigned long long _setupEndTime;	// 16 = 0x10
    unsigned long long _settingsCreationTime;	// 24 = 0x18
    unsigned long long _pairingIdentityCreationTime;	// 32 = 0x20
    unsigned long long _accessoryAddProcessedTime;	// 40 = 0x28
    unsigned long long _coreDataFirstCloudImportCompleteTime;	// 48 = 0x30
    unsigned long long _siriReadinessTime;	// 56 = 0x38
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x00100000005ca996
@property(readonly, nonatomic) unsigned long long siriReadinessTime; // @synthesize siriReadinessTime=_siriReadinessTime;
@property(readonly, nonatomic) unsigned long long coreDataFirstCloudImportCompleteTime; // @synthesize coreDataFirstCloudImportCompleteTime=_coreDataFirstCloudImportCompleteTime;
@property(readonly, nonatomic) unsigned long long accessoryAddProcessedTime; // @synthesize accessoryAddProcessedTime=_accessoryAddProcessedTime;
@property(readonly, nonatomic) unsigned long long pairingIdentityCreationTime; // @synthesize pairingIdentityCreationTime=_pairingIdentityCreationTime;
@property(readonly, nonatomic) unsigned long long settingsCreationTime; // @synthesize settingsCreationTime=_settingsCreationTime;
@property(readonly, nonatomic) unsigned long long setupEndTime; // @synthesize setupEndTime=_setupEndTime;
@property(readonly, nonatomic) unsigned long long setupStartTime; // @synthesize setupStartTime=_setupStartTime;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithSetupStartTime:(unsigned long long)arg1 setupEndTime:(unsigned long long)arg2 settingsCreationTime:(unsigned long long)arg3 pairingIdentityCreationTime:(unsigned long long)arg4 accessoryAddProcessedTime:(unsigned long long)arg5 coreDataFirstCloudImportCompleteTime:(unsigned long long)arg6 siriReadinessTime:(unsigned long long)arg7;	// IMP=0x00000000005ca4fb

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

