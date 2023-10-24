//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteLeg, MNEVChargingStateMonitor, MNNavigationSessionState, MNObserverHashTable, MNParkedVehicleDetector, NSMutableArray, NSString, _MNArrivalUpdaterDetails, _MNArrivalUpdaterState;

__attribute__((visibility("hidden")))
@interface MNArrivalUpdater : NSObject
{
    MNObserverHashTable *_safeDelegate;	// 8 = 0x8
    _MNArrivalUpdaterState *_currentState;	// 16 = 0x10
    _MNArrivalUpdaterDetails *_details;	// 24 = 0x18
    NSMutableArray *_timeoutRegions;	// 32 = 0x20
    MNEVChargingStateMonitor *_evChargingStateMonitor;	// 40 = 0x28
    MNParkedVehicleDetector *_parkedVehicleDetector;	// 48 = 0x30
    unsigned long long _stateCaptureHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000ec8bd
@property(readonly, nonatomic) MNObserverHashTable *safeDelegate; // @synthesize safeDelegate=_safeDelegate;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x00000000000ec6c6
- (void)parkedVehicleDetectorDidDetectParkedVehicle:(id)arg1;	// IMP=0x00000000000ec626
- (void)evChargingStateMonitor:(id)arg1 didChangeChargingState:(_Bool)arg2;	// IMP=0x00000000000ec5bc
- (void)evChargingStateMonitor:(id)arg1 didReachTargetBatteryCharge:(id)arg2;	// IMP=0x00000000000ec5a6
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)arg1;	// IMP=0x00000000000ec4cd
- (void)arrivalRegionTimerDidFire:(id)arg1;	// IMP=0x00000000000ec3fa
@property(readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)stopMonitoringForEV;	// IMP=0x00000000000ec2c7
- (void)startMonitoringForEV;	// IMP=0x00000000000ec0e9
- (void)changeState:(id)arg1;	// IMP=0x00000000000ebeaf
- (void)_updateTimeoutRegions;	// IMP=0x00000000000ebb66
@property(readonly, nonatomic) _Bool isApproachingWaypoint;
@property(readonly, nonatomic) _Bool isInPreArrivalRegion;
- (_Bool)_checkForParkingDetectionRegion;	// IMP=0x00000000000eb886
- (void)_updateForParkingDetectionRegion;	// IMP=0x00000000000eb78d
- (void)forceDepartureForCurrentLeg:(unsigned long long)arg1;	// IMP=0x00000000000eb734
- (void)updateForLocation:(id)arg1;	// IMP=0x00000000000eb57f
- (void)stop;	// IMP=0x00000000000eb538
- (void)start;	// IMP=0x00000000000eb4f3
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000eb468
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState;
- (void)dealloc;	// IMP=0x00000000000eb148
- (id)init;	// IMP=0x00000000000eaf3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
