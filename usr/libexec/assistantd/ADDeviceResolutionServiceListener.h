//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFInstanceContext, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADDeviceResolutionServiceListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    AFInstanceContext *_instanceContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000026df17
- (void)getDeviceContextAndProximityMapIncludingAllReachableDevice:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000026de4a
- (_Bool)_peerIsPairedPhone:(id)arg1;	// IMP=0x001000000026ddfc
- (_Bool);	// IMP=0x001000000026ddae
- (void)meDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000026dca0
- (void)_pairedCompanionDeviceFromSharedDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000026db40
- (void)pairedCompanionDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000026d9f8
- (void)getDevicesMatchingCapabilityDescriptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000026d929
- (void)getSourceDeviceForContextWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000026d874
- (void)getAllReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000026d7e1
- (void)getContextAndProximitySnapshotForCurrentRequestForDeviceUnits:(id)arg1 serviceContexts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000026d5e3
- (void)logCrossDeviceCommandFailed:(id)arg1 action:(id)arg2 reason:(id)arg3;	// IMP=0x001000000026d479
- (void)_logAFAnalyticsCrossDeviceCommandHandledEventWithResult:(int)arg1 halActionResult:(int)arg2 contextProximityPairs:(id)arg3;	// IMP=0x001000000026d246
- (_Bool)_shouldLogAFAnalyticsCrossDeviceEvent:(id)arg1;	// IMP=0x001000000026d21c
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 actionResult:(id)arg3 homeKitTarget:(id)arg4 contextProximityPairs:(id)arg5;	// IMP=0x001000000026d009
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 homeKitTarget:(id)arg3 contextProximityPairs:(id)arg4;	// IMP=0x001000000026cfdd
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 contextProximityPairs:(id)arg3;	// IMP=0x001000000026cfb0
- (void)logCrossDeviceCommandStarted:(id)arg1 action:(id)arg2;	// IMP=0x001000000026ce7f
- (void)logCrossDeviceRequestLink:(id)arg1 halId:(id)arg2;	// IMP=0x001000000026cccd
- (void)logCrossDeviceRequestLink:(id)arg1 halRequestId:(id)arg2;	// IMP=0x001000000026ccbb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000026ca6a
- (void)setupListener;	// IMP=0x001000000026ca1f
- (id)initWithInstanceContext:(id)arg1 deviceCircleManager:(id)arg2;	// IMP=0x001000000026c83e
- (int)_halDevicePowerStateFromSystemStateSnapshot:(id)arg1;	// IMP=0x00100000002ac7b0
- (int)_halDeviceFamilyFromInterfaceIdiom:(id)arg1;	// IMP=0x00100000002ac6ba
- (int)_halMediaPlayerStateFromPlaybackState:(long long)arg1;	// IMP=0x00100000002ac69f
- (int)_halDeviceProximityFromProximity:(long long)arg1;	// IMP=0x00100000002ac654
- (double)_generalizeTimeIntervalsForPrivacy:(double)arg1;	// IMP=0x00100000002ac631
- (id)_halDeviceFromContext:(id)arg1 proximity:(long long)arg2;	// IMP=0x00100000002abcb4
- (id)_crossDeviceCommandExecutionEndedEvent:(int)arg1 actionResult:(int)arg2 halId:(id)arg3 contextProximityPairs:(id)arg4 homeKitTarget:(int)arg5;	// IMP=0x00100000002aba37
- (id)_crossDeviceCommandExecutionFailedEvent:(int)arg1 action:(int)arg2 halId:(id)arg3;	// IMP=0x00100000002ab8c1
- (id)_crossDeviceCommandExecutionStartedEvent:(int)arg1 halId:(id)arg2;	// IMP=0x00100000002ab769
- (int)_halHomeKitTargetFromTarget:(id)arg1;	// IMP=0x00100000002ab742
- (int)_halActionFromAction:(id)arg1;	// IMP=0x00100000002ab71b
- (int)_halActionResultFromActionResult:(id)arg1;	// IMP=0x00100000002ab6f4
- (id)_resultStringFromHALAction:(int)arg1 actionResult:(int)arg2;	// IMP=0x00100000002ab593

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

