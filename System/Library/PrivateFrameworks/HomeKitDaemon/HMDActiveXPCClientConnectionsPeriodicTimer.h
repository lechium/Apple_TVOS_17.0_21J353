//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSHashTable, NSObject, NSSet, NSString;
@protocol HMDActiveXPCClientConnectionsPeriodicTimerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject
{
    NSString *_logIdentifier;	// 8 = 0x8
    double _timeInterval;	// 16 = 0x10
    id <HMDActiveXPCClientConnectionsPeriodicTimerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSHashTable *_mutableClientConnections;	// 40 = 0x28
    HMFTimer *_timer;	// 48 = 0x30
    CDUnknownBlockType _timerFactory;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000692250
- (void).cxx_destruct;	// IMP=0x0000000000691f46
@property(copy) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(retain) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) NSHashTable *mutableClientConnections; // @synthesize mutableClientConnections=_mutableClientConnections;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDActiveXPCClientConnectionsPeriodicTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000691d0b
- (void)handleClientConnectionDidDeactivate:(id)arg1;	// IMP=0x0000000000691c53
- (void)handleClientConnectionDidActivate:(id)arg1;	// IMP=0x0000000000691b9b
- (void)_updateTimer;	// IMP=0x0000000000691855
- (void)removeClientConnection:(id)arg1;	// IMP=0x000000000069167e
- (void)addClientConnection:(id)arg1;	// IMP=0x0000000000691496
@property(readonly, copy) NSSet *clientConnections;
- (id)initWithTimeInterval:(double)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3;	// IMP=0x000000000069127c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
