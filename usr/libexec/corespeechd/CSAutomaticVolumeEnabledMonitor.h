//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CSAutomaticVolumeEnabledMonitor : CSEventMonitor
{
    _Bool _isAutomaticVolumeEnabled;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000a73f1
- (void).cxx_destruct;	// IMP=0x00200000000a71c5
- (void)_stopMonitoring;	// IMP=0x00100000000a71a4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000a7125
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x00100000000a70bb
- (void)_didReceiveAutomaticVolumeToggled:(_Bool)arg1;	// IMP=0x00100000000a7069
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000a6fcb
- (id)init;	// IMP=0x00100000000a6f9c

@end
