//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSiriAssertionMonitor, NSHashTable, NSMutableSet;

@interface CSVoiceTriggerXPCServiceProxy : NSObject
{
    _Bool _isPhraseSpotterBypassed;	// 8 = 0x8
    _Bool _isRaiseToSpeakBypassed;	// 9 = 0x9
    NSMutableSet *_activationAssertions;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    CSSiriAssertionMonitor *_assertionMonitor;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x004000000000db7e
- (void).cxx_destruct;	// IMP=0x002000000000cccf
@property(retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor; // @synthesize assertionMonitor=_assertionMonitor;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isRaiseToSpeakBypassed; // @synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed;
@property(nonatomic) _Bool isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
- (id)fetchVoiceTriggerStats;	// IMP=0x001000000000cc03
- (void)notifyServiceConnectionLost;	// IMP=0x001000000000c989
- (void)notifyVoiceTriggeredSiriSessionCancelled;	// IMP=0x001000000000c90a
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x001000000000c83c
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x001000000000c76e
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;	// IMP=0x001000000000c5a1
- (id)_fetchAssertionMonitor;	// IMP=0x001000000000c567
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000000c551
- (void)registerObserver:(id)arg1;	// IMP=0x001000000000c53b
- (id)initWithAssertionMonitor:(id)arg1;	// IMP=0x001000000000c46a
- (id)init;	// IMP=0x001000000000c456

@end

