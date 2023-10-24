//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, HMDHomeManager, HMFTimer, NSDate, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDLogEventProcessLaunchAnalyzer
{
    long long _launchInfoSubmissionState;	// 8 = 0x8
    NSDate *_processLaunchTime;	// 16 = 0x10
    NSDate *_processLastExitTime;	// 24 = 0x18
    NSString *_processExitType;	// 32 = 0x20
    NSString *_processExitReason;	// 40 = 0x28
    unsigned long long _numUncommittedRecords;	// 48 = 0x30
    unsigned long long _numUncommittedAndPushedRecords;	// 56 = 0x38
    NSString *_dataSyncStateAsString;	// 64 = 0x40
    double _timeIntervalSincePreviousProcessLaunch;	// 72 = 0x48
    unsigned long long _systemUptimeMillisecondsRecordedAtLaunch;	// 80 = 0x50
    unsigned long long _xpcMessageTransportReadyMilliseconds;	// 88 = 0x58
    unsigned long long _homeDataLoadedMilliseconds;	// 96 = 0x60
    unsigned long long _accountResolvedMilliseconds;	// 104 = 0x68
    unsigned long long _millisecondsSinceLaunchToDataSyncStateGood;	// 112 = 0x70
    _Bool _configurationLoaded;	// 120 = 0x78
    _Bool _processLaunchInfoEventSubmitted;	// 121 = 0x79
    HMDHomeManager *_homeManager;	// 128 = 0x80
    HMDEventCountersManager *_eventCountersManager;	// 136 = 0x88
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 144 = 0x90
    HMFTimer *_submitProcessLaunchInfoTimer;	// 152 = 0x98
    double _processRelaunchEventTimeIntervalThreshold;	// 160 = 0xa0
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00100000008ec628
- (void).cxx_destruct;	// IMP=0x00000000008ec4b2
@property(readonly) double processRelaunchEventTimeIntervalThreshold; // @synthesize processRelaunchEventTimeIntervalThreshold=_processRelaunchEventTimeIntervalThreshold;
@property(readonly) HMFTimer *submitProcessLaunchInfoTimer; // @synthesize submitProcessLaunchInfoTimer=_submitProcessLaunchInfoTimer;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000008ec3ed
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000008ec1f2
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008ec172
- (void)submitProcessLaunchEventWithCurrentAnalysis;	// IMP=0x00000000008ebf2d
- (void)handleExitContextForHomed:(id)arg1;	// IMP=0x00000000008eb99e
- (void)updateProcessLaunchInfoFromDisk;	// IMP=0x00000000008eb7d5
- (void)submitProcessLaunchInfoEventPendingAllConditions;	// IMP=0x00000000008eb71e
- (void)handleArchiveReplayLogEvent:(id)arg1;	// IMP=0x00000000008eb6b5
- (void)handleAccountResolvedEvent:(id)arg1;	// IMP=0x00000000008eb679
- (void)handleXPCMessageTransportStartedEvent:(id)arg1;	// IMP=0x00000000008eb63d
- (void)handleDataSyncStateUpdateLogEvent:(id)arg1;	// IMP=0x00000000008eb559
- (void)submitMigrationLogEvent;	// IMP=0x00000000008eb466
- (void)handleProcessLaunchLogEvent:(id)arg1;	// IMP=0x00000000008eb312
- (void)homeKitConfigurationChangedWithHomeManager:(id)arg1;	// IMP=0x00000000008eb294
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000008eb0a0
- (id)initWithProcessLaunchInfoTimer:(id)arg1 eventCountersManager:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x00000000008eafc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
