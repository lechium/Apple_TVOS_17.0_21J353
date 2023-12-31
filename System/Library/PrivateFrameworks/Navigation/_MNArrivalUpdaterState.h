//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteLeg, MNArrivalUpdater, MNLocation, _MNArrivalUpdaterDetails;

__attribute__((visibility("hidden")))
@interface _MNArrivalUpdaterState : NSObject
{
    MNArrivalUpdater *_arrivalUpdater;	// 8 = 0x8
    _MNArrivalUpdaterDetails *_details;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ee7bc
@property(retain, nonatomic) _MNArrivalUpdaterDetails *details; // @synthesize details=_details;
@property(nonatomic) __weak MNArrivalUpdater *arrivalUpdater; // @synthesize arrivalUpdater=_arrivalUpdater;
- (double)_distanceToEndOfLeg;	// IMP=0x00000000000ee632
- (_Bool)_checkForEndOfDrivingSegment;	// IMP=0x00000000000ee4c6
- (_Bool)_checkForApproachingWaypoint;	// IMP=0x00000000000ee2c1
- (_Bool)_checkForPreArrival;	// IMP=0x00000000000ee13d
- (_Bool)_checkForArrival;	// IMP=0x00000000000ed43e
- (_Bool)_updateForSearchingForParking;	// IMP=0x00000000000ed147
- (_Bool)_updateForEndOfDrivingSegment;	// IMP=0x00000000000ed071
- (void)_updateForEVMonitoring;	// IMP=0x00000000000ecf2a
- (_Bool)_updateForApproachingWaypoint;	// IMP=0x00000000000ecea3
- (_Bool)_updateForPreArrival;	// IMP=0x00000000000ece33
- (_Bool)_updateForArrival;	// IMP=0x00000000000ecdc3
- (void)sendArrivalInfo;	// IMP=0x00000000000ecc7b
- (double)parkingDetectionExcludeRadius;	// IMP=0x00000000000ecc72
- (void)updateForEVReachedTargetBatteryCharge;	// IMP=0x00000000000ecc6c
- (void)updateForEVChargingState:(_Bool)arg1;	// IMP=0x00000000000ecc03
- (void)forceDepartureWithReason:(unsigned long long)arg1;	// IMP=0x00000000000ecb95
- (void)updateForLocation;	// IMP=0x00000000000ecb8f
- (void)onLeaveState:(id)arg1;	// IMP=0x00000000000ecb89
- (void)onEnterState:(id)arg1;	// IMP=0x00000000000ecb83
@property(readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) MNLocation *location;
@property(readonly, nonatomic) long long state;

@end

