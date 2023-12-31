//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSFPreferences, CSPreventSystemSleepPowerAssertion;

@interface CSDarwinPreventSystemSleepManager : NSObject
{
    double _assertionTimeoutInterval;	// 8 = 0x8
    CSPreventSystemSleepPowerAssertion *_preventSystemSleepPowerAssertion;	// 16 = 0x10
    long long _currentState;	// 24 = 0x18
    CSFPreferences *_preferences;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000013cff5
@property(retain, nonatomic) CSFPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) CSPreventSystemSleepPowerAssertion *preventSystemSleepPowerAssertion; // @synthesize preventSystemSleepPowerAssertion=_preventSystemSleepPowerAssertion;
@property(readonly, nonatomic) double assertionTimeoutInterval; // @synthesize assertionTimeoutInterval=_assertionTimeoutInterval;
- (void)dealloc;	// IMP=0x001000000013cf62
- (void)acquireAssertionForIdleUser;	// IMP=0x001000000013cc55
- (void)acquireAssertionForActiveUser;	// IMP=0x001000000013cb7a
- (void)acquireAssertion;	// IMP=0x001000000013cb22
- (void)releasePreventSystemSleepAssertion;	// IMP=0x001000000013caf0
- (void)_acquirePreventSystemSleepAssertionWithTimeout:(id)arg1;	// IMP=0x001000000013c9d9
- (id)initWithTimeout:(double)arg1;	// IMP=0x001000000013c975
- (id)initWithTimeout:(double)arg1 preferences:(id)arg2;	// IMP=0x001000000013c8fa

@end

