//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMCountersManager, NSArray, NSMutableArray, NSMutableDictionary, NSObject;
@protocol HMDEventCountersStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventCountersManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    NSMutableDictionary *_counterGroups;	// 16 = 0x10
    NSMutableArray *_saveHooks;	// 24 = 0x18
    double _lastSaveTime;	// 32 = 0x20
    _Bool _pendingSave;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <HMDEventCountersStoring> _counterStorage;	// 56 = 0x38
    double _saveInterval;	// 64 = 0x40
    CDUnknownBlockType _timeSourceBlock;	// 72 = 0x48
    HMMCountersManager *_bridgedCountersManager;	// 80 = 0x50
}

+ (id)allowedSpecifierClasses;	// IMP=0x00100000009b1d95
- (void).cxx_destruct;	// IMP=0x00000000009b152d
@property(readonly, nonatomic) HMMCountersManager *bridgedCountersManager; // @synthesize bridgedCountersManager=_bridgedCountersManager;
@property(readonly, nonatomic) CDUnknownBlockType timeSourceBlock; // @synthesize timeSourceBlock=_timeSourceBlock;
@property(readonly, nonatomic) double saveInterval; // @synthesize saveInterval=_saveInterval;
@property(readonly, nonatomic) id <HMDEventCountersStoring> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)unarchiveEventCounters;	// IMP=0x00000000009b1327
- (void)_save;	// IMP=0x00000000009b12b9
- (void)counterChanged;	// IMP=0x00000000009b1234
- (void)forceSave;	// IMP=0x00000000009b11d9
- (id)_fetchAllEventCounters;	// IMP=0x00000000009b1101
- (void)resetAllEventCounters;	// IMP=0x00000000009b0f44
- (void)resetEventCountersForRequestGroup:(id)arg1;	// IMP=0x00000000009b0f07
- (void)resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x00000000009b0e8f
- (id)fetchAllEventCounters;	// IMP=0x00000000009b0dfa
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;	// IMP=0x00000000009b0db6
- (id)fetchEventCountersForRequestGroup:(id)arg1;	// IMP=0x00000000009b0d66
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x00000000009b0ce9
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x00000000009b0c71
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;	// IMP=0x00000000009b0bf7
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;	// IMP=0x00000000009b0b69
- (void)_removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x00000000009b0b10
- (void)removeCounterGroupsBasedOnPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000009b093b
- (void)removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x00000000009b08cd
- (void)removeCounterGroupForName:(id)arg1;	// IMP=0x00000000009b087a
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000009b0868
- (id)counterGroupsForPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000009b0740
- (id)counterGroupForSpecifier:(id)arg1;	// IMP=0x00000000009b027e
- (id)counterGroupForName:(id)arg1;	// IMP=0x00000000009b0218
@property(readonly, nonatomic) NSArray *saveHooks;
- (void)addSaveHook:(CDUnknownBlockType)arg1;	// IMP=0x00000000009b0129
- (id)initWithBridgedCountersManager:(id)arg1;	// IMP=0x00000000009b0112
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 saveInterval:(double)arg3 timeSourceBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000009afee8
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2;	// IMP=0x00000000009afdda
- (id)init;	// IMP=0x00000000009afd4d

@end
