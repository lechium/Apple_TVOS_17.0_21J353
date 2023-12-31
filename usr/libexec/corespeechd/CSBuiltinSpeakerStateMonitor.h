//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor
{
    _Bool _isSpeakerMuted;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _builtInSpeakerState;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000001291ea
- (void).cxx_destruct;	// IMP=0x0020000000128486
@property(nonatomic) _Bool isSpeakerMuted; // @synthesize isSpeakerMuted=_isSpeakerMuted;
@property(nonatomic) unsigned long long builtInSpeakerState; // @synthesize builtInSpeakerState=_builtInSpeakerState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00100000001283e0
- (void)_notifyObserver:(id)arg1 isSpeakerMuted:(_Bool)arg2;	// IMP=0x00100000001283ce
- (void)_didReceiveSpeakerMuteStateChangeNotification:(_Bool)arg1;	// IMP=0x0010000000128372
- (void)_notifyObserver:(id)arg1 withBuiltinSpeakerState:(unsigned long long)arg2;	// IMP=0x0010000000128309
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)arg1;	// IMP=0x00100000001282ab
- (void)_stopMonitoring;	// IMP=0x0010000000128172
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000127f5c
- (_Bool)isBuiltinSpeakerMuted;	// IMP=0x0010000000127ec7
- (unsigned long long)currentBuiltinSpeakerState;	// IMP=0x0010000000127e31
- (void)_fetchSpeakerStateActiveInfo;	// IMP=0x0010000000127d0c
- (void)_fetchSpeakerStateMutedInfo;	// IMP=0x0010000000127bc8
- (_Bool)_getIsSpeakerMutedDefaultVal;	// IMP=0x0010000000127bbb
- (id)init;	// IMP=0x0010000000127b11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

