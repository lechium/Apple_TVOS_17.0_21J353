//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRemoteTimerManager, AFClockAlarmSnapshot, AFClockTimerSnapshot, NSDictionary, NSString, SOClockAlarmManager, SOClockTimerManager;
@protocol MTTimerManagerIntentSupport, OS_dispatch_group, OS_dispatch_queue;

@interface ADClockService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    AFClockAlarmSnapshot *_localClockAlarmSnapshot;	// 24 = 0x18
    AFClockTimerSnapshot *_localClockTimerSnapshot;	// 32 = 0x20
    NSDictionary *_remoteClockAlarmSnapshotsByDeviceIdentifier;	// 40 = 0x28
    NSDictionary *_remoteClockTimerSnapshotsByDeviceIdentifier;	// 48 = 0x30
    AFClockAlarmSnapshot *_mergedClockAlarmSnapshot;	// 56 = 0x38
    AFClockTimerSnapshot *_mergedClockTimerSnapshot;	// 64 = 0x40
    ADRemoteTimerManager *_remoteTimerManager;	// 72 = 0x48
    SOClockAlarmManager *_localAlarmManager;	// 80 = 0x50
    SOClockTimerManager *_localTimerManager;	// 88 = 0x58
}

+ (id)sharedService;	// IMP=0x00200000002fd402
+ (void)initialize;	// IMP=0x00100000002fd3b4
- (void).cxx_destruct;	// IMP=0x00200000002fb9b1
@property(readonly, nonatomic) SOClockTimerManager *localTimerManager; // @synthesize localTimerManager=_localTimerManager;
@property(readonly, nonatomic) SOClockAlarmManager *localAlarmManager; // @synthesize localAlarmManager=_localAlarmManager;
@property(readonly, nonatomic) ADRemoteTimerManager *remoteTimerManager; // @synthesize remoteTimerManager=_remoteTimerManager;
- (void)_dismissFiringItemsWithOptions:(unsigned long long)arg1;	// IMP=0x00100000002fb82e
- (id)_mergedClockTimerSnapshot;	// IMP=0x00100000002fb53f
- (id)_mergedClockAlarmSnapshot;	// IMP=0x00100000002fb250
- (void)_enumerateTimersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002fb1c4
- (void)_enumerateTimerSnapshotsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002fb124
- (void)_enumerateAlarmsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002fb098
- (void)_enumerateAlarmSnapshotsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002faff8
- (void)_mutateMergedClockTimerSnapshotUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002faeb5
- (void)_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002fae94
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000002fadfd
- (id)queue;	// IMP=0x00100000002fadef
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002fad4f
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002fad49
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00100000002fac3c
- (void)getSnapshotsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002fab37
- (void)getFiringStatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002faa32
- (id)init;	// IMP=0x00100000002fa7e0
@property(readonly, nonatomic) id <MTTimerManagerIntentSupport> timerManagerProxyForIntentSupport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
