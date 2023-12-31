//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLPedestrianFenceAnalyticsManager, CLTimer, MISSING_TYPE, NSMutableSet, NSString;

@interface CLPedestrianFenceService : CLIntersiloService
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _fenceExitDispatcher;	// 8 = 0x8
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _inertialOdometryAnalyticsDispatcher;	// 16 = 0x10
    struct map<unsigned long long, double, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, double>>> _packetStartTimes;	// 24 = 0x18
    struct map<unsigned long long, double, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, double>>> _packetStopTriggerTimes;	// 48 = 0x30
    unsigned long long _sequenceNumber;	// 72 = 0x48
    NSMutableSet *_clientsInSession;	// 80 = 0x50
    CLPedestrianFenceAnalyticsManager *_analyticsManager;	// 88 = 0x58
    CLTimer *_intervalTimer;	// 96 = 0x60
}

+ (id)getSilo;	// IMP=0x0020000000ce163e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ce1625
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000ce15c8
+ (_Bool)isAvailable;	// IMP=0x0010000000ce132b
- (id).cxx_construct;	// IMP=0x0020000000ce5e5e
- (void).cxx_destruct;	// IMP=0x0010000000ce5de3
@property(retain, nonatomic) CLTimer *intervalTimer; // @synthesize intervalTimer=_intervalTimer;
@property(retain, nonatomic) CLPedestrianFenceAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) NSMutableSet *clientsInSession; // @synthesize clientsInSession=_clientsInSession;
- (void)sendStatusForFences:(id)arg1 setBefore:(double)arg2;	// IMP=0x0010000000ce55d9
- (void)onIntervalTimerCreateEventAndIncrementPacket:(_Bool)arg1;	// IMP=0x0010000000ce5576
- (void)toggleIntervalTimer;	// IMP=0x0010000000ce5448
- (void)sessionEndPowerLog:(id)arg1;	// IMP=0x0010000000ce5323
- (id)sessionForFence:(id)arg1;	// IMP=0x0010000000ce51b5
- (id)sessionForClient:(byref id)arg1;	// IMP=0x0010000000ce507c
- (void)toggleSession:(_Bool)arg1;	// IMP=0x0010000000ce4f94
- (void)toggleSession;	// IMP=0x0010000000ce4f51
-     // Error parsing type: v24@0:8r^{InertialOdometryAnalytics=CCCCCQ[5f]f[5f]fffffffffSSS[7 ]}16, name: onInertialOdometryAnalyticsData:
-     // Error parsing type: v24@0:8r^{PedestrianFenceExit=CCBC  }16, name: onPedestrianFenceExitData:
- (void)clearFence:(id)arg1 inSession:(id)arg2;	// IMP=0x0010000000ce4083
- (int)insertFence:(id)arg1 inSession:(id)arg2;	// IMP=0x0010000000ce3834
- (void)odometryClient:(id)arg1 requestInterval:(id)arg2;	// IMP=0x0010000000ce37b7
- (void)teardownClient:(byref id)arg1;	// IMP=0x0010000000ce3433
- (void)clearFence:(id)arg1 forClient:(byref id)arg2;	// IMP=0x0010000000ce3228
- (void)forceClearAllFences;	// IMP=0x0010000000ce2e83
- (void)forceClearFence:(id)arg1;	// IMP=0x0010000000ce2cb0
- (void)simulateFence:(id)arg1 forClient:(byref id)arg2 withExitAfterDelay:(double)arg3 wake:(_Bool)arg4;	// IMP=0x0010000000ce272f
- (void)setFence:(id)arg1 forClient:(byref id)arg2 withRadius:(float)arg3 wake:(_Bool)arg4;	// IMP=0x0010000000ce20dd
- (void)setFence:(id)arg1 forClient:(byref id)arg2 withRadius:(float)arg3;	// IMP=0x0010000000ce20c8
- (void)endSessionForClient:(byref id)arg1;	// IMP=0x0010000000ce1eca
- (void)startSessionForClient:(byref id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000ce1a9c
- (void)startSessionForClient:(byref id)arg1;	// IMP=0x0010000000ce1a83
- (void)getSupportedFenceTypesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ce1a4d
- (void)endService;	// IMP=0x0010000000ce1995
- (MISSING_TYPE *)beginService;	// IMP=0x0010000000ce1765
- (void)dealloc;	// IMP=0x0010000000ce16d7
- (id)init;	// IMP=0x0010000000ce169a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

