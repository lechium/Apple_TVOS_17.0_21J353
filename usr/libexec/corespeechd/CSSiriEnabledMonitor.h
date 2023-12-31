//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSSiriEnabledMonitor : CSEventMonitor
{
    _Bool _isSiriEnabled;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000007891b
- (_Bool)fetchIsEnabled;	// IMP=0x002000000007880c
- (_Bool)isEnabled;	// IMP=0x00100000000787fc
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x0010000000078792
- (void)_didReceiveSiriSettingChanged:(_Bool)arg1;	// IMP=0x0010000000078736
- (void)_stopMonitoring;	// IMP=0x0010000000078698
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000785b3
- (id)init;	// IMP=0x0010000000078574

@end

