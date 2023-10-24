//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    int _gibraltarMacNotifyToken;	// 12 = 0xc
    int _darwinNotifyToken;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000010b020
- (void)_notifyObserver:(id)arg1;	// IMP=0x002000000010af5c
- (void)_didInstalledNewVoiceTriggerAsset;	// IMP=0x001000000010ae95
- (void)_stopMonitoring;	// IMP=0x001000000010ad05
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000010aa94
- (const char *)_notificationKey;	// IMP=0x001000000010a9e1
- (id)init;	// IMP=0x001000000010a98a

@end

