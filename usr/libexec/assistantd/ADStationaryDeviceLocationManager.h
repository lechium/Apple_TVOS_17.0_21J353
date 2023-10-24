//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation;

@interface ADStationaryDeviceLocationManager
{
    CLLocation *_stationaryDeviceCachedLocation;	// 72 = 0x48
    struct os_unfair_lock_s _stationaryDeviceCachedLocationLock;	// 80 = 0x50
    unsigned long long *_stationaryDeviceLocationMonitoringRefCount;	// 88 = 0x58
    unsigned long long *_stationaryDeviceLocationAssertionRefCount;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000029487c
- (id)_atomicCopySetStationaryDeviceCachedLocation:(id)arg1;	// IMP=0x00100000002947e9
- (id)_atomicCopyStationaryDeviceCachedLocation;	// IMP=0x001000000029479e
- (_Bool)_isStationaryDeviceCachedLocationAvailable;	// IMP=0x001000000029466c
- (void)_scheduleLocationTimerWithTimeout:(double)arg1;	// IMP=0x00100000002945a9
- (id)_locationManager;	// IMP=0x0010000000294486
- (id)lastLocation;	// IMP=0x001000000029430d
- (void)_processUpdatedLocation:(id)arg1;	// IMP=0x00100000002941ee
- (void)releaseLocationInUseAssertionForReason:(id)arg1;	// IMP=0x0010000000294161
- (void)acquireLocationInUseAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000294022
- (void)_stopMonitoringLocation;	// IMP=0x0010000000293ecb
- (void)_startMonitoringLocationWithDesiredAccuracy:(double)arg1;	// IMP=0x0010000000293ca0
- (id)_bestCachedLocation;	// IMP=0x0010000000293b26
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x0010000000293ae4

@end
