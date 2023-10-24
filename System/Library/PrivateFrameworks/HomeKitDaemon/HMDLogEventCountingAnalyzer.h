//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCounterGroup, HMDEventCountersManager, HMMDateProvider, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLogEventCountingAnalyzer
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_currentPeriodCounters;	// 24 = 0x18
    HMMDateProvider *_dateProvider;	// 32 = 0x20
    CDUnknownBlockType _tickSecondsProviderBlock;	// 40 = 0x28
    CDUnknownBlockType _periodicCountersSnapshotBlock;	// 48 = 0x30
    unsigned long long _loggingPeriodicitySeconds;	// 56 = 0x38
    unsigned long long _tickSecondsLastLogged;	// 64 = 0x40
    NSString *_serialNumber;	// 72 = 0x48
    HMDEventCountersManager *_countersManager;	// 80 = 0x50
    HMDEventCounterGroup *_currentDayCountersGroup;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000009569fe
@property(retain, nonatomic) HMDEventCounterGroup *currentDayCountersGroup; // @synthesize currentDayCountersGroup=_currentDayCountersGroup;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long tickSecondsLastLogged; // @synthesize tickSecondsLastLogged=_tickSecondsLastLogged;
@property(readonly) unsigned long long loggingPeriodicitySeconds; // @synthesize loggingPeriodicitySeconds=_loggingPeriodicitySeconds;
@property(readonly, nonatomic) CDUnknownBlockType periodicCountersSnapshotBlock; // @synthesize periodicCountersSnapshotBlock=_periodicCountersSnapshotBlock;
@property(readonly, nonatomic) CDUnknownBlockType tickSecondsProviderBlock; // @synthesize tickSecondsProviderBlock=_tickSecondsProviderBlock;
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) NSMutableDictionary *currentPeriodCounters; // @synthesize currentPeriodCounters=_currentPeriodCounters;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x0000000000956880
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x00000000009567c5
- (void)runDailyTask;	// IMP=0x0000000000956754
- (void)incrementDailyCountersForEventName:(id)arg1;	// IMP=0x0000000000956608
- (void)incrementPeriodicCountersForEventName:(id)arg1;	// IMP=0x00000000009564bb
- (id)periodicSnapshotAtCurrentTickSeconds:(unsigned long long)arg1;	// IMP=0x000000000095640d
- (void)didReceiveEventFromDispatcher:(id)arg1 withCurrentTickSeconds:(unsigned long long)arg2;	// IMP=0x00000000009562df
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000095624b
- (id)initWithEventCountersManager:(id)arg1 dailyScheduler:(id)arg2 dateProvider:(id)arg3 systemInfo:(id)arg4 queue:(id)arg5 loggingPeriodicitySeconds:(unsigned long long)arg6 tickSecondsProviderBlock:(CDUnknownBlockType)arg7 periodicCountersLoggingBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000000956034
- (id)initWithEventCountersManager:(id)arg1 dailyScheduler:(id)arg2 dateProvider:(id)arg3 systemInfo:(id)arg4 queue:(id)arg5;	// IMP=0x0000000000955f8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
