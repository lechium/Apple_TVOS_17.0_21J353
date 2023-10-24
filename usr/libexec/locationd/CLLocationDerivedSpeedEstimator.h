//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, CLSilo, CLTimer, NSDate, NSString;
@protocol CLIntersiloUniverse, CLVehicleStateNotifierProtocol;

@interface CLLocationDerivedSpeedEstimator : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLVehicleStateNotifierProtocol> _vehicleStateProxy;	// 16 = 0x10
    CLSilo *_silo;	// 24 = 0x18
    _Bool _showActivityVehicular;	// 32 = 0x20
    _Bool _showActivityVehicularMounted;	// 33 = 0x21
    _Bool _visualIndicatorActive;	// 34 = 0x22
    _Bool _seenNonVehicularState;	// 35 = 0x23
    _Bool _motionVehicular;	// 36 = 0x24
    NSDate *_wsbClientStartTime;	// 40 = 0x28
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 48 = 0x30
    struct unique_ptr<CLMotionState_Type::Client, std::default_delete<CLMotionState_Type::Client>> _motionStateClient;	// 56 = 0x38
    int _vehicularToken;	// 64 = 0x40
    unsigned long long _vehicularHints;	// 72 = 0x48
    unsigned long long _prevVehicularHints;	// 80 = 0x50
    unsigned long long _hintsAvailable;	// 88 = 0x58
    double _vehicularStartTime;	// 96 = 0x60
    double _vehicularLastNoHintsTime;	// 104 = 0x68
    double _vehicularLastBTHintTime;	// 112 = 0x70
    double _vehicularLastMotionHintTime;	// 120 = 0x78
    int _numMotionExitsWithBT;	// 128 = 0x80
    int _lastSeenVehicularTime;	// 132 = 0x84
    int _sequentialVehicularIndex;	// 136 = 0x88
    double _accelDetectionLatency;	// 144 = 0x90
    double _gpsDetectionLatency;	// 152 = 0x98
    double _basebandDetectionLatency;	// 160 = 0xa0
    double _wifiDetectionLatency;	// 168 = 0xa8
    double _btDetectionLatency;	// 176 = 0xb0
    double _vehicularDuration;	// 184 = 0xb8
    double _vehicularDurationExitFromNoHints;	// 192 = 0xc0
    double _vehicularDurationExitFromLastBTHint;	// 200 = 0xc8
    double _vehicularDurationLastBTHintFromLastMotionHint;	// 208 = 0xd0
    int _numConsecutiveVehicularSpeedObservations;	// 216 = 0xd8
    double _lastElapsedTime;	// 224 = 0xe0
    double _lastDistanceMoved;	// 232 = 0xe8
    _Bool _valid;	// 240 = 0xf0
    CLLocation *_prevLoc;	// 248 = 0xf8
    CLTimer *_scanTimer;	// 256 = 0x100
    CDStruct_56299a79 _currentEstimate;	// 264 = 0x108
}

+ (_Bool)isSupportedForDerivedSpeedEstimate;	// IMP=0x0020000000292fdc
+ (_Bool)isSupportedForAnalytics;	// IMP=0x0010000000292fb0
+ (_Bool)isSupported;	// IMP=0x0010000000292f67
- (id).cxx_construct;	// IMP=0x00200000002975dd
- (void).cxx_destruct;	// IMP=0x0010000000297599
@property(retain, nonatomic) CLTimer *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) CLLocation *prevLoc; // @synthesize prevLoc=_prevLoc;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) CDStruct_56299a79 currentEstimate; // @synthesize currentEstimate=_currentEstimate;
- (void)submitLatencyMetrics;	// IMP=0x0010000000297509
- (void)submitFalseDetectionMetricsWithType:(unsigned long long)arg1;	// IMP=0x0010000000297503
- (void)logLatencyMetricsInternal;	// IMP=0x00100000002974fd
- (void)clearStatusBarColorAndText;	// IMP=0x00100000002974f3
- (void)setStatusBarWithLabel:(id)arg1;	// IMP=0x00100000002974ed
- (void)updateStatusBarLabel;	// IMP=0x00100000002974e7
- (void)onMotionStateNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000297348
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000296ec1
- (void)handleMotionStateNotification:(union NotificationData *)arg1;	// IMP=0x0010000000296207
- (void)handleVehicularStateChanged;	// IMP=0x0010000000296184
- (_Bool)_feedLocation:(id)arg1;	// IMP=0x001000000029427a
- (void)_invalidateSpeedEstimate;	// IMP=0x0010000000294235
- (void)_onScanTimer;	// IMP=0x0010000000293ef2
- (_Bool)feedLocation:(const struct CLDaemonLocation *)arg1;	// IMP=0x0010000000293e5f
- (void)dealloc;	// IMP=0x0010000000293db8
- (void)invalidate;	// IMP=0x0010000000293d8a
- (void)unregisterForNotifications;	// IMP=0x0010000000293d0e
- (void)updateWsbClient:(_Bool)arg1;	// IMP=0x0010000000293cec
- (void)stopWsbClient;	// IMP=0x0010000000293b31
- (void)startWsbClient;	// IMP=0x0010000000293940
- (void)registerForNotifications;	// IMP=0x001000000029357b
- (id)initInUniverse:(id)arg1;	// IMP=0x001000000029306b
- (id)init;	// IMP=0x0010000000293000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
