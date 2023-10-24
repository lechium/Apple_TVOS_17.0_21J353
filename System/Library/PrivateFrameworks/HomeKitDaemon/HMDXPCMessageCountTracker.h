//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageCountTracker : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_acceptedRequests;	// 16 = 0x10
    NSMutableDictionary *_erroredRequests;	// 24 = 0x18
    NSMutableDictionary *_sentNotifications;	// 32 = 0x20
    NSDate *_lastResetDate;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000005b3ea8
+ (id)xpcCounterTracker;	// IMP=0x00100000005b3e78
- (void).cxx_destruct;	// IMP=0x00000000005b3dc6
@property(retain, nonatomic) NSDate *lastResetDate; // @synthesize lastResetDate=_lastResetDate;
- (id)dumpState;	// IMP=0x00000000005b3b4d
- (void)submitCounters;	// IMP=0x00000000005b3608
- (id)sampleCountersAndReset:(_Bool)arg1;	// IMP=0x00000000005b3410
- (void)_incrementCounterOfType:(long long)arg1 identifier:(id)arg2;	// IMP=0x00000000005b32ee
- (void)incrementCounterOfType:(long long)arg1 identifier:(id)arg2;	// IMP=0x00000000005b32d5
- (id)countersOfType:(long long)arg1;	// IMP=0x00000000005b3250
- (id)_countersOfType:(long long)arg1;	// IMP=0x00000000005b322b
- (void)_resetCounters;	// IMP=0x00000000005b31b8
- (id)__init;	// IMP=0x00000000005b30d3
- (id)init;	// IMP=0x00000000005b30c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

