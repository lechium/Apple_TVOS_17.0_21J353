//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDApplication, NSMutableArray, NSString, NSURLSessionTask, __NSCFURLSessionTaskInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NDTaskMonitor : NSObject
{
    NSURLSessionTask *_task;	// 8 = 0x8
    __NSCFURLSessionTaskInfo *_taskInfo;	// 16 = 0x10
    NSString *_clientBundleIdentifier;	// 24 = 0x18
    NSString *_clientSecondaryIdentifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_throughputTimer;	// 48 = 0x30
    NSMutableArray *_progressTimestamps;	// 56 = 0x38
    NSMutableArray *_progressValues;	// 64 = 0x40
    unsigned long long _throughputInterval;	// 72 = 0x48
    NDApplication *_monitoredApplication;	// 80 = 0x50
    double _throughputMonitoringStartTime;	// 88 = 0x58
    _Bool _connectionIsCellular;	// 96 = 0x60
    _Bool _hasTransferredData;	// 97 = 0x61
    _Bool _discretionary;	// 98 = 0x62
    _Bool _explicitlyDiscretionary;	// 99 = 0x63
    _Bool _performsNonDiscretionaryThrougputMonitoring;	// 100 = 0x64
    _Bool _mayBeDemotedToDiscretionary;	// 101 = 0x65
    int _powerMonitorToken;	// 104 = 0x68
    long long _basePriority;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000003f1ae
@property long long basePriority; // @synthesize basePriority=_basePriority;
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x001000000003f14f
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x001000000003f104
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x001000000003f0b9
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x001000000003f02c
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x001000000003ef9f
- (void)cancel;	// IMP=0x001000000003ef5d
- (void)taskWillSuspend;	// IMP=0x001000000003ef4b
- (void)startThroughputMonitoringIfAppropriate;	// IMP=0x001000000003eef5
- (void)taskWillResume;	// IMP=0x001000000003ee58
- (void)stopThroughputMonitoring;	// IMP=0x001000000003ee03
- (void)startThroughputMonitoring;	// IMP=0x001000000003ed4b
- (void)taskTransferredData:(long long)arg1 countOfBytesReceived:(long long)arg2;	// IMP=0x001000000003eaac
- (void)setThroughputTimerForCurrentInterval;	// IMP=0x001000000003ea1e
- (void)calculateThroughput;	// IMP=0x001000000003e67f
- (long long)currentIntervalEndDelta;	// IMP=0x001000000003e63d
- (double)currentThroughputThreshold;	// IMP=0x001000000003e61f
- (id)initWithTask:(id)arg1 taskInfo:(id)arg2 clientBundleIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 monitoredApplication:(id)arg5 priority:(long long)arg6 options:(unsigned long long)arg7 queue:(id)arg8;	// IMP=0x001000000003e452

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

