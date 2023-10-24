//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCConnectionManager, VCRecommendedNetworkSettings, VCWCMClient, WRMClient;
@protocol VCNetworkFeedbackControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCNetworkFeedbackController : NSObject
{
    id <VCNetworkFeedbackControllerDelegate> _weakDelegate;	// 8 = 0x8
    VCWCMClient *_WCMClient;	// 16 = 0x10
    WRMClient *_WRMClient;	// 24 = 0x18
    VCConnectionManager *_connectionManager;	// 32 = 0x20
    VCRecommendedNetworkSettings *_recommendedSettings;	// 40 = 0x28
    unsigned int _clientTargetBitrate;	// 48 = 0x30
    unsigned int _clientTargetBitrateCap;	// 52 = 0x34
    double _wrmReportingInterval;	// 56 = 0x38
    struct tagWRMMetricsInfo *_wrmInfo;	// 64 = 0x40
    CDStruct_7f1d3621 *_wrmContext;	// 72 = 0x48
    unsigned int _downlinkTargetBitrate;	// 80 = 0x50
    unsigned int _downlinkTargetCellBitrateCap;	// 84 = 0x54
    int _wrmPendingBitrateCapDelta;	// 88 = 0x58
    _Bool _isWRMNotificationPending;	// 92 = 0x5c
    CDStruct_cd8cfafa _savedWRMNotification;	// 96 = 0x60
    unsigned int _callID;	// 256 = 0x100
    _Bool _isLocalCellular;	// 260 = 0x104
    _Bool _isVideoPaused;	// 261 = 0x105
    _Bool _shouldSendFeedbackControllerReport;	// 262 = 0x106
    _Bool _isStarted;	// 263 = 0x107
}

@property _Bool shouldSendFeedbackControllerReport; // @synthesize shouldSendFeedbackControllerReport=_shouldSendFeedbackControllerReport;
@property(nonatomic) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(nonatomic) _Bool isLocalCellular; // @synthesize isLocalCellular=_isLocalCellular;
@property unsigned int callID; // @synthesize callID=_callID;
@property(readonly) CDStruct_7f1d3621 *wrmContext; // @synthesize wrmContext=_wrmContext;
@property(readonly) struct tagWRMMetricsInfo *wrmInfo; // @synthesize wrmInfo=_wrmInfo;
@property(nonatomic) unsigned int downlinkTargetCellBitrateCap; // @synthesize downlinkTargetCellBitrateCap=_downlinkTargetCellBitrateCap;
@property(nonatomic) unsigned int downlinkTargetBitrate; // @synthesize downlinkTargetBitrate=_downlinkTargetBitrate;
@property unsigned int clientTargetBitrateCap; // @synthesize clientTargetBitrateCap=_clientTargetBitrateCap;
@property unsigned int clientTargetBitrate; // @synthesize clientTargetBitrate=_clientTargetBitrate;
- (void)cleanupWRMClient;	// IMP=0x00000000001b1d56
- (void)setupWRMClientWithMetricsConfig:(CDStruct_21a0265e)arg1;	// IMP=0x00000000001b1bff
- (void)cleanupWCMClient;	// IMP=0x00000000001b1bf9
- (void)setupWCMClient;	// IMP=0x00000000001b1bf3
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;	// IMP=0x00000000001b1ada
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;	// IMP=0x00000000001b1992
- (void)setPreWarmState:(_Bool)arg1;	// IMP=0x00000000001b1953
- (void)setWRMCoexMetrics:(id)arg1;	// IMP=0x00000000001b1842
- (void)setWRMNotification:(CDStruct_cd8cfafa *)arg1;	// IMP=0x00000000001b170a
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;	// IMP=0x00000000001b16a4
- (void)reportWRMMetrics:(const CDStruct_dea828ac *)arg1;	// IMP=0x00000000001b1683
- (void)reportImmediateWRMMetric:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x00000000001b1662
- (void)requestWRMNotification;	// IMP=0x00000000001b158f
- (void)sendStatusUpdate:(const CDStruct_8aeecdac *)arg1;	// IMP=0x00000000001b1579
- (void)sendFeedbackControllerReport:(CDStruct_4b4d87a1)arg1;	// IMP=0x00000000001b1488
- (void)cleanupWRMData;	// IMP=0x00000000001b144c
- (void)setRSSIThresholdEnabled:(_Bool)arg1;	// IMP=0x00000000001b1436
- (void)updateMetricsConfig:(CDStruct_21a0265e)arg1;	// IMP=0x00000000001b1420
@property(readonly) unsigned int recommendedTargetBitrateCap;
- (id)strongDelegate;	// IMP=0x00000000001b13cc
- (void)stop;	// IMP=0x00000000001b12b0
- (void)startWithMetricsConfig:(CDStruct_21a0265e)arg1;	// IMP=0x00000000001b119a
- (void)initializeWRMInfo;	// IMP=0x00000000001b1077
- (void)dealloc;	// IMP=0x00000000001b0fe1
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2;	// IMP=0x00000000001b0f48

@end

