//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin
{
    NSString *_currentLanguageCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012b265
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x001000000012b1e3
- (_Bool)isLanguageCodeCurrent:(id)arg1;	// IMP=0x001000000012b10e
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;	// IMP=0x001000000012af77
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x001000000012af65
- (void)_stopMonitoring;	// IMP=0x001000000012aee6
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000012ae67
- (id)init;	// IMP=0x001000000012adba

@end
