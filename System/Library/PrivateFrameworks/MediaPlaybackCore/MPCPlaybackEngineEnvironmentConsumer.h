//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineEnvironmentConsumer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _reachability;	// 16 = 0x10
    MPCPlaybackEngine *_playbackEngine;	// 24 = 0x18
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x001000000021411a
- (void).cxx_destruct;	// IMP=0x0000000000213e90
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_snapshotNetworkTypeAtTime:(CDStruct_aee2c4da)arg1;	// IMP=0x0000000000213b9b
- (void)_snapshotNetworkTypeWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x0000000000213ac6
- (void)_snapshotNetworkReachabilityAtTime:(CDStruct_aee2c4da)arg1 force:(_Bool)arg2;	// IMP=0x00000000002138a1
- (void)_snapshotNetworkReachabilityWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x00000000002137c7
- (void)_snapshotDeviceAtTime:(CDStruct_aee2c4da)arg1;	// IMP=0x0000000000212e26
- (void)_snapshotDeviceWithEvent:(id)arg1 nudge:(int)arg2;	// IMP=0x0000000000212d51
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 atTime:(CDStruct_aee2c4da)arg3;	// IMP=0x0000000000212691
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 event:(id)arg3 nudge:(int)arg4;	// IMP=0x000000000021257d
- (void)_addEventForAccountIdentifier:(id)arg1 cursor:(id)arg2 event:(id)arg3 nudge:(int)arg4;	// IMP=0x00000000002123b3
- (void)_allowsExplicitContentDidChange:(id)arg1;	// IMP=0x00000000002121ae
- (void)_devicePrivateListeningDidChange:(id)arg1;	// IMP=0x00000000002120d8
- (void)_applicationWillTerminate:(id)arg1;	// IMP=0x0000000000212033
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000211fc0
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000211f4d
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000000211e77
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;	// IMP=0x0000000000211d9f
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000211cfe
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000002119bf
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x0000000000211767
- (void)dealloc;	// IMP=0x00000000002116f2
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000211686

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

