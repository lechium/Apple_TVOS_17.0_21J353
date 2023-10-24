//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, NSString;
@protocol CLIntersiloUniverse;

@interface CLZoneRelevanceTracker : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationClient;	// 16 = 0x10
    struct CLDaemonLocation _currentLocation;	// 24 = 0x18
    void *_clientManager;	// 200 = 0xc8
    CLLocationManager *_locationManager;	// 208 = 0xd0
    _Bool _valid;	// 216 = 0xd8
}

- (id).cxx_construct;	// IMP=0x0020000000476427
- (void).cxx_destruct;	// IMP=0x0010000000476406
- (void)onLeechedNotification:(int)arg1 withData:(struct NotificationData)arg2;	// IMP=0x0010000000475df9
- (struct CLDaemonLocation)currentLocation;	// IMP=0x0010000000475dd8
- (void)stopCircularZoneMonitoringForClient:(id)arg1 withZoneId:(id)arg2;	// IMP=0x0010000000475db2
- (void)startCircularZoneMonitoringForClient:(id)arg1 withZoneId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5;	// IMP=0x0010000000475d97
- (void)startStopCircularZoneMonitoringForClient:(id)arg1 withZoneId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 shouldStart:(_Bool)arg6;	// IMP=0x001000000047593f
- (void)handleEntryExitDelegateCallbackForRegion:(id)arg1 withState:(long long)arg2;	// IMP=0x0010000000475605
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000047546c
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x001000000047535d
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x001000000047525e
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x001000000047515f
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000474f6e
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;	// IMP=0x0010000000474e8e
- (void)invalidate;	// IMP=0x0010000000474e81
- (void)dealloc;	// IMP=0x0010000000474df4
- (id)initWithClientManagerPointer:(void *)arg1 andUniverse:(id)arg2;	// IMP=0x0010000000474b30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
