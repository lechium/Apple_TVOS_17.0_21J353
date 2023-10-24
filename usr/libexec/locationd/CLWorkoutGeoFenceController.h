//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLDispatchSilo, CLLocationManager, CLRegion, NSString;
@protocol CLWorkoutGeoFenceControllerDelegate, OS_dispatch_source;

@interface CLWorkoutGeoFenceController : NSObject
{
    CLDispatchSilo *_silo;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_geoFenceTimer;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_locationUpdateTimer;	// 32 = 0x20
    long long _regionState;	// 40 = 0x28
    int _authorizationStatus;	// 48 = 0x30
    double _fenceRadius;	// 56 = 0x38
    _Bool _isFenceInstalled;	// 64 = 0x40
    _Bool _isAttemptingFenceInstall;	// 65 = 0x41
    _Bool _isMonitoringRegion;	// 66 = 0x42
    _Bool _inWorkout;	// 67 = 0x43
    id <CLWorkoutGeoFenceControllerDelegate> _delegate;	// 72 = 0x48
    NSString *_fenceIdentifier;	// 80 = 0x50
    CLRegion *_installedRegion;	// 88 = 0x58
}

@property(copy, nonatomic) CLRegion *installedRegion; // @synthesize installedRegion=_installedRegion;
@property(copy, nonatomic) NSString *fenceIdentifier; // @synthesize fenceIdentifier=_fenceIdentifier;
@property(nonatomic) id <CLWorkoutGeoFenceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0010000000d1dc89
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x0010000000d1dadf
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;	// IMP=0x0010000000d1d8bb
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000d1d701
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000d1d578
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x0010000000d1d3c9
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0010000000d1cf67
- (void)onLocationUpdateTimerFire;	// IMP=0x0010000000d1cdc5
- (void)onGeoFenceTimerFire;	// IMP=0x0010000000d1cc0d
- (void)cancelTimers;	// IMP=0x0010000000d1c75b
- (void)installFenceWithCenter:(id)arg1;	// IMP=0x0010000000d1c51d
- (void)uninstallCurrentFence;	// IMP=0x0010000000d1c14d
- (_Bool)isGeoFenceAuthorizedAndPossible;	// IMP=0x0010000000d1c10f
- (void)reset;	// IMP=0x0010000000d1c0ec
- (void)stopGeoFence;	// IMP=0x0010000000d1bf0b
- (void)startGeoFenceWithRadius:(double)arg1;	// IMP=0x0010000000d1b911
- (void)dealloc;	// IMP=0x0010000000d1b83f
- (id)initWithDelegate:(id)arg1 withSilo:(id)arg2;	// IMP=0x0010000000d1b67f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
