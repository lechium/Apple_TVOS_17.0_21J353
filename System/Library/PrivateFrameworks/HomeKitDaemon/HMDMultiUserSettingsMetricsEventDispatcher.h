//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEventDailyScheduler, NSString, NSUUID;
@protocol HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject
{
    id <HMDMultiUserSettingsMetricsEventDispatcherDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    HMDLogEventDailyScheduler *_dailyScheduler;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000002a3e56
- (void).cxx_destruct;	// IMP=0x00000000002a3e05
@property(readonly) HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMultiUserSettingsMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000002a3d46
- (void)runDailyTask;	// IMP=0x00000000002a3d34
- (void)submitMultiUserSettingsDailyEvent;	// IMP=0x00000000002a39ff
- (void)registerForDailyMultiUserSettingsEvents;	// IMP=0x00000000002a39b3
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;	// IMP=0x00000000002a38e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

