//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSLanguageCodeUpdateMonitorImpl
{
    int _notifyToken;	// 8 = 0x8
}

- (_Bool)isLanguageCodeCurrent:(id)arg1;	// IMP=0x0020000000042f5e
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x0010000000042f58
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x0010000000042ed6
- (void)_didReceiveLanguageCodeUpdate;	// IMP=0x0010000000042d5d
- (void)_stopMonitoring;	// IMP=0x0010000000042cbf
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000042c13
- (id)init;	// IMP=0x0010000000042bd1

@end

