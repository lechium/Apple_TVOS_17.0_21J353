//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
    NSMutableDictionary *_appStates;	// 24 = 0x18
    NSMutableSet *_monitoredBundleIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedSpringBoard;	// IMP=0x00400000000060a7
- (void).cxx_destruct;	// IMP=0x002000000000710d
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x0010000000007017
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x0010000000006ffe
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0010000000006dc5
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0010000000006cb4
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0010000000006b38
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000006a20
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000006893
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x00100000000062fc
- (void)setupMonitor;	// IMP=0x0010000000006225
- (id)init;	// IMP=0x0010000000006110

@end

