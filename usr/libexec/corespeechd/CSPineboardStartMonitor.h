//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSString;

@interface CSPineboardStartMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isPineBoardStarted;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x002000000012f5d1
- (_Bool)_checkPineBoardStarted;	// IMP=0x002000000012f464
- (_Bool)isPineboardStarted;	// IMP=0x001000000012f454
- (_Bool)isSystemShellStarted;	// IMP=0x001000000012f442
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;	// IMP=0x001000000012f3d8
- (void)_didReceivePineboardStarted:(_Bool)arg1;	// IMP=0x001000000012f386
- (void)_didReceivePineboardStartedInQueue:(_Bool)arg1;	// IMP=0x001000000012f334
- (void)_stopMonitoring;	// IMP=0x001000000012f291
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000012f146
- (id)init;	// IMP=0x001000000012f0f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

