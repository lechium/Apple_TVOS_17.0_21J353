//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isSoftwareUpdateCheckingRunning;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00400000001399b4
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;	// IMP=0x00200000001398c5
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;	// IMP=0x0010000000139873
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;	// IMP=0x0010000000139821
- (_Bool)isSoftwareUpdateCheckingRunning;	// IMP=0x0010000000139811
- (unsigned char)_softwareUpdateCheckingState;	// IMP=0x00100000001397b7
- (_Bool)_checkSoftwareUpdateCheckingState;	// IMP=0x00100000001396ff
- (void)_stopMonitoring;	// IMP=0x001000000013965c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000139511
- (id)init;	// IMP=0x00100000001394c4

@end
