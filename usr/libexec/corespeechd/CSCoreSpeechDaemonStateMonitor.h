//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000127abc
- (void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2;	// IMP=0x0020000000127a18
- (void)_didReceiveDaemonStateChanged:(unsigned long long)arg1;	// IMP=0x001000000012793b
- (void)_stopMonitoring;	// IMP=0x0010000000127898
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000012776a
- (void)notifyDaemonStateChanged:(unsigned long long)arg1;	// IMP=0x00100000001276d9
- (id)init;	// IMP=0x0010000000127697

@end
