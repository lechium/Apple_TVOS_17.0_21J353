//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent
{
    _Bool _isConfigurationLoaded;	// 8 = 0x8
    _Bool _isTTSUInProgress;	// 9 = 0x9
    _Bool _eventSubmittedOnTimeOut;	// 10 = 0xa
    long long _submissionState;	// 16 = 0x10
    NSString *_dataSyncState;	// 24 = 0x18
    unsigned long long _systemUptimeMillisecondsAtLaunch;	// 32 = 0x20
    double _timeIntervalSincePreviousProcessLaunch;	// 40 = 0x28
    unsigned long long _homeDataLoadedMilliseconds;	// 48 = 0x30
    unsigned long long _xpcMessageTransportReadyMilliseconds;	// 56 = 0x38
    unsigned long long _millisecondsSinceLaunchToDataSyncStateGood;	// 64 = 0x40
    unsigned long long _millisecondsToAccountResolved;	// 72 = 0x48
    long long _numUncommittedRecords;	// 80 = 0x50
    long long _numUncommittedAndPushedRecords;	// 88 = 0x58
    NSString *_processExitType;	// 96 = 0x60
    NSString *_processExitReason;	// 104 = 0x68
    unsigned long long _processLaunchCount;	// 112 = 0x70
    unsigned long long _processJetsamCount;	// 120 = 0x78
    unsigned long long _processCrashCount;	// 128 = 0x80
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x0010000000676eb5
- (void).cxx_destruct;	// IMP=0x0000000000676e73
@property(readonly) _Bool eventSubmittedOnTimeOut; // @synthesize eventSubmittedOnTimeOut=_eventSubmittedOnTimeOut;
@property(readonly) _Bool isTTSUInProgress; // @synthesize isTTSUInProgress=_isTTSUInProgress;
@property(readonly) _Bool isConfigurationLoaded; // @synthesize isConfigurationLoaded=_isConfigurationLoaded;
@property(readonly) unsigned long long processCrashCount; // @synthesize processCrashCount=_processCrashCount;
@property(readonly) unsigned long long processJetsamCount; // @synthesize processJetsamCount=_processJetsamCount;
@property(readonly) unsigned long long processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property(readonly, nonatomic) NSString *processExitReason; // @synthesize processExitReason=_processExitReason;
@property(readonly, nonatomic) NSString *processExitType; // @synthesize processExitType=_processExitType;
@property(readonly) long long numUncommittedAndPushedRecords; // @synthesize numUncommittedAndPushedRecords=_numUncommittedAndPushedRecords;
@property(readonly) long long numUncommittedRecords; // @synthesize numUncommittedRecords=_numUncommittedRecords;
@property(readonly) unsigned long long millisecondsToAccountResolved; // @synthesize millisecondsToAccountResolved=_millisecondsToAccountResolved;
@property(readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood; // @synthesize millisecondsSinceLaunchToDataSyncStateGood=_millisecondsSinceLaunchToDataSyncStateGood;
@property(readonly) unsigned long long xpcMessageTransportReadyMilliseconds; // @synthesize xpcMessageTransportReadyMilliseconds=_xpcMessageTransportReadyMilliseconds;
@property(readonly) unsigned long long homeDataLoadedMilliseconds; // @synthesize homeDataLoadedMilliseconds=_homeDataLoadedMilliseconds;
@property(readonly) double timeIntervalSincePreviousProcessLaunch; // @synthesize timeIntervalSincePreviousProcessLaunch=_timeIntervalSincePreviousProcessLaunch;
@property(readonly) unsigned long long systemUptimeMillisecondsAtLaunch; // @synthesize systemUptimeMillisecondsAtLaunch=_systemUptimeMillisecondsAtLaunch;
@property(readonly, copy, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly) long long submissionState; // @synthesize submissionState=_submissionState;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithSubmissionState:(long long)arg1 dataSyncState:(id)arg2 timeIntervalSincePreviousProcessLaunch:(double)arg3 millisecondsToHomeDataLoad:(unsigned long long)arg4 millisecondsToXPCMessageTransportReady:(unsigned long long)arg5 millisecondsSinceLaunchToDataSyncStateGood:(unsigned long long)arg6 millisecondsToAccountResolved:(unsigned long long)arg7 numUncommittedRecords:(long long)arg8 numUncommittedAndPushedRecords:(long long)arg9 processExitType:(id)arg10 processExitReason:(id)arg11 processLaunchCount:(unsigned long long)arg12 processJetsamCount:(unsigned long long)arg13 processCrashCount:(unsigned long long)arg14 isConfigurationLoaded:(_Bool)arg15 isTTSUInProgress:(_Bool)arg16;	// IMP=0x0000000000676539

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

