//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, GEOAlmanac, NSString;

@interface PBSystemAppearanceManager : NSObject
{
    GEOAlmanac *_almanac;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    unsigned long long _locationFailureCount;	// 24 = 0x18
    struct CLLocationCoordinate2D _locationForDaylight;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000010085b
+ (id)dependencyDescription;	// IMP=0x001000000010070c
- (void).cxx_destruct;	// IMP=0x00200000001028a1
@property(nonatomic) unsigned long long locationFailureCount; // @synthesize locationFailureCount=_locationFailureCount;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) struct CLLocationCoordinate2D locationForDaylight; // @synthesize locationForDaylight=_locationForDaylight;
@property(retain, nonatomic) GEOAlmanac *almanac; // @synthesize almanac=_almanac;
- (long long)_activeKioskUserInterfaceStyle;	// IMP=0x0010000000102670
- (id)_defaultTransitionContext;	// IMP=0x00100000001025b5
- (void)_updateUserInterfaceStyleForScenesWithUserInterfaceStyle:(long long)arg1;	// IMP=0x001000000010234d
- (long long)_systemAppearanceForUserInterfaceStyle:(long long)arg1;	// IMP=0x0010000000102331
- (long long)_userInterfaceStyleForSystemAppearance:(long long)arg1;	// IMP=0x00100000001022cb
- (void)_updateSystemAppPermissionsToMatchTimeZone;	// IMP=0x001000000010212f
- (void)_updateLocationForDaylight:(id)arg1;	// IMP=0x001000000010200a
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000101fc3
- (void)_videoPlayerNowPlayingStateDidChange:(id)arg1;	// IMP=0x0010000000101e9f
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x0010000000101e29
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000101d60
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0010000000101ca6
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0010000000101995
- (void)_setInterfaceStyleToCurrentEffectiveValue;	// IMP=0x0010000000101955
- (long long)effectiveUserInterfaceStyleForBundleIdentifier:(id)arg1;	// IMP=0x0010000000101581
- (long long)effectiveUserInterfaceStyle;	// IMP=0x0010000000101551
- (long long)reportingValueForCurrentSystemAppearance;	// IMP=0x001000000010152f
- (void)toggleSystemAppearance;	// IMP=0x00100000001014f9
@property(readonly, nonatomic, getter=isLocationAvailable) _Bool locationAvailable;
@property(readonly, nonatomic) _Bool isDaylight;
- (void)_handleLocationFailure;	// IMP=0x0010000000101394
- (void)updateAutomaticSystemAppearanceIfNeeded;	// IMP=0x001000000010127e
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x00100000001010a2
- (long long)systemAppearance;	// IMP=0x0010000000101057
- (void)setup;	// IMP=0x0010000000100d69
- (void)dealloc;	// IMP=0x0010000000100ce4
- (id)init;	// IMP=0x00100000001008e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

