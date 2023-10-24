//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionInfoQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000153fd
- (void).cxx_destruct;	// IMP=0x0020000000014b5b
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue; // @synthesize sessionInfoQueue=_sessionInfoQueue;
- (void)_deregisterAudioSessionNotifications;	// IMP=0x0010000000014a5f
- (void)_registerAudioSessionNotifications;	// IMP=0x0010000000014a31
- (void)_audioRouteChanged:(id)arg1;	// IMP=0x00100000000149a4
- (void)_handleInterruption:(id)arg1;	// IMP=0x0010000000014917
- (void)_registerAudioRouteChangeNotification;	// IMP=0x00100000000147d1
- (void)_registerInterruptionNotification;	// IMP=0x001000000001468b
- (void)_stopMonitoring;	// IMP=0x0010000000014629
- (void)_startMonitoring;	// IMP=0x00100000000145c7
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x001000000001457c
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;	// IMP=0x0010000000014531
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;	// IMP=0x00100000000142d9
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000014242
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000141ab
- (void)dealloc;	// IMP=0x001000000001416d
- (id)init;	// IMP=0x00100000000140e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

