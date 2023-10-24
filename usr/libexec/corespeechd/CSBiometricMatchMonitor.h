//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor
{
    id <CSBiometricMatchMonitorDelegate> _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000671f9
- (void).cxx_destruct;	// IMP=0x0020000000067244
@property(nonatomic) __weak id <CSBiometricMatchMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;	// IMP=0x001000000006720f
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;	// IMP=0x0010000000067207
- (void)startObserving;	// IMP=0x0010000000067201

@end

