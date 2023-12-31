//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDRemoteEventRouterProcessStateChangeAssertion, NSHashTable, NSNotificationCenter, NSString;
@protocol HMETimerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterAssertionController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isPluggedIn;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    NSHashTable *_clients;	// 32 = 0x20
    id <HMETimerProvider> _timerProvider;	// 40 = 0x28
    HMDRemoteEventRouterProcessStateChangeAssertion *_appStateChangeAssertion;	// 48 = 0x30
    NSHashTable *_daemonAssertions;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x0010000000a7d0f5
- (void).cxx_destruct;	// IMP=0x0000000000a7c65e
- (void)assertionDidBecomeInactive:(id)arg1;	// IMP=0x0000000000a7c4c1
- (id)createEventRouterAssertion;	// IMP=0x0000000000a7c4af
- (id)takeEventRouterAssertion;	// IMP=0x0000000000a7c2ff
- (void)registerClient:(id)arg1;	// IMP=0x0000000000a7c26d
- (void)configure;	// IMP=0x0000000000a7becb
- (void)handleConnectionActiveStateChange:(id)arg1;	// IMP=0x0000000000a7be39
- (void)handleProcessStateChange:(id)arg1;	// IMP=0x0000000000a7bda7
- (id)initWithQueue:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x0000000000a7bcaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

