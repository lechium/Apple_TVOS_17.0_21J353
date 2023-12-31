//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor
{
    _Bool _enabled;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001082c3
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setEnable:(_Bool)arg1;	// IMP=0x0010000000108182
- (_Bool)isEnabled;	// IMP=0x0010000000108172
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x0010000000108160
- (void)_didReceiveSelfTriggerChanged:(_Bool)arg1;	// IMP=0x0010000000108104
- (void)_stopMonitoring;	// IMP=0x0010000000108085
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000107f7f
- (id)init;	// IMP=0x0010000000107f40

@end

