//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMActionSetBuilder, HMHome, HMTriggerPolicy, NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMTimerTriggerBuilder
{
    NSDate *_fireDate;	// 24 = 0x18
    NSTimeZone *_timeZone;	// 32 = 0x20
    NSDateComponents *_recurrence;	// 40 = 0x28
    NSString *_significantEvent;	// 48 = 0x30
    NSDateComponents *_significantEventOffset;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00100000000b2717
- (void).cxx_destruct;	// IMP=0x00000000000b26a2
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b24bb
- (void)_setSignificantEventOffset:(id)arg1;	// IMP=0x00000000000b243e
@property(copy, nonatomic) NSDateComponents *significantEventOffset;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b2124
@property(copy, nonatomic) NSString *significantEvent;
- (void)updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1e53
@property(copy, nonatomic) NSDateComponents *recurrence;
- (void)updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b1b95
@property(copy, nonatomic) NSTimeZone *timeZone;
- (void)updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b186b
@property(copy, nonatomic) NSDate *fireDate;
@property(readonly, copy, nonatomic) NSDate *fireDateIfSet;
- (Class)class;	// IMP=0x00000000000b16ee
- (id)recurrenceCalendar;	// IMP=0x00000000000b2771

// Remaining properties
@property(copy, nonatomic) NSArray *actionSets;
@property(readonly, copy, nonatomic) NSString *configuredName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMHome *home;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool nameIsConfigured;
@property(retain, nonatomic) HMTriggerPolicy *policy;
@property(nonatomic) unsigned long long recurrenceDays;
@property(copy, nonatomic) NSArray *recurrences;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

