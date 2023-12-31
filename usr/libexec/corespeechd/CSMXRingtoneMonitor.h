//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface CSMXRingtoneMonitor : CSEventMonitor
{
    NSTimer *_ringtoneTimeoutTimer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_eventMonitorQueue;	// 16 = 0x10
    _Bool _isAnyRingtoneCurrentlyPlaying;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000079e7c
- (void).cxx_destruct;	// IMP=0x0020000000079e32
- (void);	// IMP=0x0010000000079e22
@property _Bool isAnyRingtoneCurrentlyPlaying; // @synthesize isAnyRingtoneCurrentlyPlaying=_isAnyRingtoneCurrentlyPlaying;
- (void)_notifyObserversOfRingtoneChange;	// IMP=0x0010000000079dc4
- (void)_startTimeoutTimer;	// IMP=0x0010000000079dbe
- (void)_cancelTimeoutTimer;	// IMP=0x0010000000079db8
- (void)_timerCallback;	// IMP=0x0010000000079db2
- (void)_handleEndRingtone;	// IMP=0x0010000000079dac
- (void)_handleStartRingtone;	// IMP=0x0010000000079da6
- (void)mxSessionMonitorSomeClientWentActive:(id)arg1;	// IMP=0x0010000000079da0
- (void)_stopMonitoring;	// IMP=0x0010000000079ccf
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000079cc9
- (id)init;	// IMP=0x0010000000079c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

