//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSBluetoothSpeakerStateMonitor : CSEventMonitor
{
    _Bool _isActive;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000001a11e
- (void).cxx_destruct;	// IMP=0x002000000001982d
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x0010000000019723
- (void)_didReceiveBluetoothSpeakerStateChangeNotification:(_Bool)arg1;	// IMP=0x00100000000196cd
- (void)_stopMonitoring;	// IMP=0x001000000001959d
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000001938f
- (void)_fetchSpeakerStateActiveInfo;	// IMP=0x00100000000191d5
- (void)start;	// IMP=0x00100000000191c3
- (id)init;	// IMP=0x0010000000019159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

