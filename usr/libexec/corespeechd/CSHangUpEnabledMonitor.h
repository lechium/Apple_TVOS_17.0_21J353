//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isEnabled;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000a6cb8
- (void).cxx_destruct;	// IMP=0x00200000000a6b7b
- (void)_voiceTriggerDuringCallEnabledDidChange;	// IMP=0x00100000000a6b29
- (_Bool)_checkCanUseVoiceTriggerDuringCallEnabled;	// IMP=0x00100000000a6a96
- (_Bool)isEnabled;	// IMP=0x00100000000a6a86
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00100000000a6a74
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(_Bool)arg1;	// IMP=0x00100000000a6a22
- (void)_stopMonitoring;	// IMP=0x00100000000a6a1c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000a69f5
- (id)init;	// IMP=0x00100000000a6952

@end
