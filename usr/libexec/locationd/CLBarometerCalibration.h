//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLBarometerCalibrationAbsoluteAltitude, CLBarometerCalibrationBiasEstimator, CLBarometerCalibrationSourceAggregator, CLElevationThresholdManager, CLTimer, CLWaterStateInterface, MISSING_TYPE, NSMutableSet, NSString;
@protocol CLRoutineMonitorServiceProtocol;

@interface CLBarometerCalibration : CLIntersiloService
{
    array_c343414b fDataBuffers;	// 8 = 0x8
    struct array<CLBarometerCalibrationContextManager *, 10UL> _contextManagers;	// 440 = 0x1b8
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 520 = 0x208
    NSMutableSet *_clientSets[5];	// 528 = 0x210
    CLElevationThresholdManager *_thresholdManager;	// 568 = 0x238
    CLBarometerCalibrationBiasEstimator *_biasEstimator;	// 576 = 0x240
    CLTimer *_releaseAltimeterContextTimer;	// 584 = 0x248
    CLBarometerCalibrationAbsoluteAltitude *_latestAbsoluteAltitude;	// 592 = 0x250
    double _lastEstimatedBias;	// 600 = 0x258
    double _lastEstimatedBiasTimestamp;	// 608 = 0x260
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::default_delete<CLOdometerNotifier_Type::Client>> fOdometerClient;	// 616 = 0x268
    _Bool _isSensorWet;	// 624 = 0x270
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> fMotionStateObserverClient;	// 632 = 0x278
    unsigned long long _wetState;	// 640 = 0x280
    _Bool _isCompanionConnected;	// 648 = 0x288
    unsigned int _prevElevationAscended;	// 652 = 0x28c
    unsigned int _prevElevationDescended;	// 656 = 0x290
    int _sameElevationCounter;	// 660 = 0x294
    id <CLRoutineMonitorServiceProtocol> _routineMonitorProxy;	// 664 = 0x298
    _Bool _inVisit;	// 672 = 0x2a0
    _Bool _logLois;	// 673 = 0x2a1
    _Bool _logElevationThresholds;	// 674 = 0x2a2
    _Bool _logWorkoutActivity;	// 675 = 0x2a3
    double _lastAltimeterClientRegisterTime;	// 680 = 0x2a8
    CLTimer *_fetchRoutineVisitsTimer;	// 688 = 0x2b0
    struct unique_ptr<CLDaemonStatus_Type::Client, std::default_delete<CLDaemonStatus_Type::Client>> fStatusClient;	// 696 = 0x2b8
    _Bool _charging;	// 704 = 0x2c0
    CLWaterStateInterface *waterStateInterface;	// 712 = 0x2c8
    _Bool _lastWaterStateSent;	// 720 = 0x2d0
    _Bool _inOutdoorWorkout;	// 721 = 0x2d1
    double _lastAltitude;	// 728 = 0x2d8
    double _lastAltitudeAccuracy;	// 736 = 0x2e0
    double _lastAltitudeTime;	// 744 = 0x2e8
}

+ (_Bool)isNotificationSupported:(unsigned long long)arg1;	// IMP=0x0020000000611c46
+ (_Bool)isSupported;	// IMP=0x0010000000611bcc
+ (id)getSilo;	// IMP=0x0010000000611b33
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000611b1a
+ (MISSING_TYPE *)becameFatallyBlocked:index: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000611abd
- (id);	// IMP=0x0010000000617ef8
- (void).cxx_destruct;	// IMP=0x0010000000617e6f
@property(nonatomic, getter=getLastAltitudeTime) double lastAltitudeTime; // @synthesize lastAltitudeTime=_lastAltitudeTime;
@property(nonatomic, getter=getLastAltitudeAccuracy) double lastAltitudeAccuracy; // @synthesize lastAltitudeAccuracy=_lastAltitudeAccuracy;
@property(nonatomic, getter=getLastAltitude) double lastAltitude; // @synthesize lastAltitude=_lastAltitude;
@property(nonatomic, getter=isInOutdoorWorkout) _Bool inOutdoorWorkout; // @synthesize inOutdoorWorkout=_inOutdoorWorkout;
- (void)writeThresholdToMsl:(float)arg1 withTimestamp:(double)arg2 andClientId:(byref id)arg3 active:(_Bool)arg4;	// IMP=0x0010000000617b8d
- (void)sendInVisit:(_Bool)arg1;	// IMP=0x0010000000617b68
- (void)alertElevationAlertClientsOnChange;	// IMP=0x0010000000617870
- (void)fetchLoiFromId:(id)arg1 atTimestamp:(double)arg2;	// IMP=0x0010000000616a95
- (_Bool)isIHAAuthorized;	// IMP=0x0010000000616a49
- (void)fetchVisitStatusAtStart;	// IMP=0x00100000006160dc
- (void)sendClientRegisterAnalyticsWithCurrentUncertainty:(double)arg1 andTime:(double)arg2;	// IMP=0x0010000000615d1a
- (_Bool)isInVisit;	// IMP=0x0010000000615d0a
- (void)announceMostRecentForcedGPS:(double)arg1;	// IMP=0x0010000000615ced
- (void)onVisit:(id)arg1;	// IMP=0x00100000006156d2
- (id)latestAbsoluteAltitude;	// IMP=0x00100000006156c1
- (void)setAltimeterReleaseTimer;	// IMP=0x001000000061569c
- (void)setupAltimeterReleaseTimer;	// IMP=0x0010000000615490
- (_Bool)inOutdoorWorkout;	// IMP=0x001000000061547e
- (void)updateWetState;	// IMP=0x0010000000615268
- (void)updateCompanionConnected:(_Bool)arg1;	// IMP=0x00100000006150b0
- (void)onDaemonStatusNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000614e83
- (void)onMotionStateObserverNotification:(int)arg1 data:(NotificationData_6024acef)arg2;	// IMP=0x00100000006148b2
- (void)onOdometerNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x001000000061443d
- (void)updateEstimatedWeatherWithCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;	// IMP=0x0010000000614420
- (void)updateBiasUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;	// IMP=0x0010000000614403
- (id)copyCurrentBias;	// IMP=0x00100000006143e6
- (void)logBuffers;	// IMP=0x0010000000613a49
- (void)submersionMeasurementUpdate:(id)arg1;	// IMP=0x001000000061392c
- (void)submersionStateUpdate:(id)arg1;	// IMP=0x001000000061380f
- (void)absoluteAltitudeUpdate:(id)arg1;	// IMP=0x00100000006135ba
- (void)stopTrack:(id)arg1;	// IMP=0x0010000000613155
- (void)startTrack:(id)arg1;	// IMP=0x0010000000613054
- (void)didUpdateDataBuffer:(unsigned long long)arg1;	// IMP=0x0010000000613003
- (void)unregisterClient:(byref id)arg1 forElevationThreshold:(struct CLBarometerCalibrationElevationThreshold)arg2;	// IMP=0x0010000000612f86
- (void)registerClient:(byref id)arg1 forElevationThreshold:(struct CLBarometerCalibrationElevationThreshold)arg2;	// IMP=0x0010000000612f10
- (void)queryElevationsFromDate:(id)arg1 toDate:(id)arg2 withBatchSize:(id)arg3 fromRecordId:(id)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000612cfe
- (void)acknowledgeNotification:(unsigned long long)arg1;	// IMP=0x0010000000612cad
- (void)unregisterClient:(byref id)arg1 forNotification:(unsigned long long)arg2;	// IMP=0x0010000000612b55
- (void)registerClient:(byref id)arg1 forNotification:(unsigned long long)arg2;	// IMP=0x001000000061278d
- (void)initAllDayContextManagers;	// IMP=0x00100000006125ee
- (void)releaseAllContextManagers;	// IMP=0x001000000061259c
- (void)releaseContextManagersForNotification:(unsigned long long)arg1;	// IMP=0x0010000000612563
- (void)initContextManagersForNotification:(unsigned long long)arg1;	// IMP=0x001000000061248b
- (void)releaseAndClearManager:(id *)arg1;	// IMP=0x0010000000612456
- (void)endService;	// IMP=0x001000000061233d
- (void)beginService;	// IMP=0x0010000000611dc4
- (id)init;	// IMP=0x0010000000611b8f
- (void)updateElevationBiasBetweenStartTime:(double)arg1 andEndTime:(double)arg2 andNextTrackStartTime:(double)arg3;	// IMP=0x00100000002cbad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
