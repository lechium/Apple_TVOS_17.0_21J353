//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLPredictedWalkDistanceServiceCompanion : CLIntersiloService
{
    struct shared_ptr<CLPredictedWalkDistanceBoutRecorderDb> fBoutDb;	// 8 = 0x8
    struct unique_ptr<CLActivityAggregator<CLPredictedWalkDistanceBoutEntry>, std::default_delete<CLActivityAggregator<CLPredictedWalkDistanceBoutEntry>>> fBoutAggregator;	// 24 = 0x18
    NSObject<OS_dispatch_source> *fAggregationTimer;	// 32 = 0x20
    struct unique_ptr<CLPredictedWalkDistanceEstimator, std::default_delete<CLPredictedWalkDistanceEstimator>> fP6MWDEstimator;	// 40 = 0x28
    struct shared_ptr<CLMobility::GaitMetricsRecorderDb> fGaitMetricsDb;	// 48 = 0x30
    struct list<CLPredictedWalkDistanceBoutEntry, std::allocator<CLPredictedWalkDistanceBoutEntry>> fPendingWatchBouts;	// 64 = 0x40
    struct shared_ptr<CLWalkingSpeedCalRecorderDb> fWalkingSpeedCalDb;	// 88 = 0x58
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fUserInfoClient;	// 104 = 0x68
    struct CLBodyMetrics fUserInfo;	// 112 = 0x70
    long long fP6MWDPredictionInterval;	// 176 = 0xb0
}

+ (_Bool)isSupported;	// IMP=0x002000000014f72f
+ (id)getSilo;	// IMP=0x001000000014f696
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000014f67d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000014f620
- (id).cxx_construct;	// IMP=0x00200000001531fc
- (void).cxx_destruct;	// IMP=0x0010000000153165
- (_Bool)isWheelchairMode;	// IMP=0x0010000000153150
- (void)sendToCoreAnalyticsWeeklyEstimate:(const struct CLPredictedWalkDistanceEstimateAnalytics *)arg1;	// IMP=0x001000000015282c
- (void)sendAnalyticsWeeklyEstimate:(struct CLPredictedWalkDistanceEstimate)arg1 strideCalInfo:(struct StrideCalInfo)arg2 walkingWorkoutPaceStats:(struct CLRunningStat)arg3 runningWorkoutPaceStats:(struct CLRunningStat)arg4 userInfo:(struct CLBodyMetrics)arg5;	// IMP=0x001000000015266b
- (void)onUserInfoUpdate:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x001000000015231e
- (void)receivePredictedWalkDistanceBout:(id)arg1;	// IMP=0x0010000000151c6b
- (void)writeToHealthKitPrediction:(double)arg1 estimateTime:(double)arg2 earliestTimeUsed:(double)arg3 calibrationStatus:(_Bool)arg4;	// IMP=0x0010000000151c65
- (void)completeActivity:(id)arg1 withNextEstimateTime:(double)arg2;	// IMP=0x00100000001519ed
- (void)getSixMinuteWalkDistancePrediction:(id)arg1;	// IMP=0x00100000001519e7
- (void)onP6MWDActivity:(id)arg1;	// IMP=0x00100000001515d7
- (void)setUpAggregationOnTimer;	// IMP=0x0010000000150a70
- (void)scheduleEstimate;	// IMP=0x001000000014ff71
- (void)endService;	// IMP=0x001000000014ff3c
- (void)beginService;	// IMP=0x001000000014f775
- (id)init;	// IMP=0x001000000014f6f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

