//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol PBPowerManagementImplementor;

@interface PBPowerManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <PBPowerManagementImplementor> _implementor;	// 16 = 0x10
    NSMutableArray *_observerWrappers;	// 24 = 0x18
    NSMutableArray *_liveObservers;	// 32 = 0x20
    NSMutableArray *_sleepCompletionBlocks;	// 40 = 0x28
    NSMutableArray *_wakeCompletionBlocks;	// 48 = 0x30
    unsigned long long _reason;	// 56 = 0x38
    long long _powerState;	// 64 = 0x40
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000006bd6
+ (id)sharedInstance;	// IMP=0x00100000000069da
+ (id)dependencyDescription;	// IMP=0x00100000000068b3
- (void).cxx_destruct;	// IMP=0x002000000000973b
- (void)powerManagerDidWakeSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000000968c
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000093d9
- (void)powerManagerDidSleepSystem:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000092ba
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008f85
- (void)finishInitialization;	// IMP=0x0010000000008f78
- (void)_locked_changeStateWithReason:(unsigned long long)arg1;	// IMP=0x001000000000844a
- (void)_automaticSleepDevice:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007ec7
- (id)_stringFromReason:(unsigned long long)arg1;	// IMP=0x0010000000007e8c
- (id)_stringFromWakeReason:(long long)arg1;	// IMP=0x0010000000007e62
- (id)_stringFromSleepReason:(long long)arg1;	// IMP=0x0010000000007e3e
- (id)_locked_extractObserverList;	// IMP=0x0010000000007d47
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x0010000000007c21
- (void)wakeSystemWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007757
- (void)wakeSystemWithReason:(long long)arg1;	// IMP=0x0010000000007742
- (void)sleepSystemWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000725f
- (void)sleepSystemWithReason:(long long)arg1;	// IMP=0x001000000000724a
- (void)__dumpObservers;	// IMP=0x0010000000007027
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000006e6a
- (void)addObserver:(id)arg1;	// IMP=0x0010000000006c75
- (long long)powerState;	// IMP=0x0010000000006c6b
- (id)init;	// IMP=0x0010000000006c40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

