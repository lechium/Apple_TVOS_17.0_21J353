//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor
{
    long long _alarmFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000b4a0d
- (void).cxx_destruct;	// IMP=0x00200000000b49d9
- (long long)alarmState;	// IMP=0x00100000000b4946
- (void)_stopMonitoring;	// IMP=0x00100000000b4860
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000b475f
- (void)initializeAlarmState;	// IMP=0x00100000000b4759
- (id)init;	// IMP=0x00100000000b46eb

@end
