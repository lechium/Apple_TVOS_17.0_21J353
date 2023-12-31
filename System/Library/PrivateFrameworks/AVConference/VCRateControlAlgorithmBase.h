//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmBase : NSObject
{
    struct tagVCRateControlAlgorithmVTable _vTable;	// 8 = 0x8
    struct tagVCRateControlAlgorithmConfig _config;	// 40 = 0x28
    VCRateControlMediaController *_mediaController;	// 800 = 0x320
    _Atomic _Bool _paused;	// 808 = 0x328
    double _pauseStartTime;	// 816 = 0x330
    int _state;	// 824 = 0x338
    int _rampUpStatus;	// 828 = 0x33c
    int _rampDownStatus;	// 832 = 0x340
    int _currentTierIndex;	// 836 = 0x344
    int _previousTierIndex;	// 840 = 0x348
    double _targetBitrateContinuous;	// 848 = 0x350
    unsigned int _targetBitrate;	// 856 = 0x358
    unsigned int _actualBitrate;	// 860 = 0x35c
    unsigned int _rateChangeCounter;	// 864 = 0x360
    unsigned int _rateControlCounter;	// 868 = 0x364
    double _rateControlTime;	// 872 = 0x368
    double _rampUpFrozenTime;	// 880 = 0x370
    _Bool _isCongested;	// 888 = 0x378
    _Bool _isNewRateSentOut;	// 889 = 0x379
    _Bool _isSendBitrateLimited;	// 890 = 0x37a
    _Bool _isFirstInitialRampUpDone;	// 891 = 0x37b
    _Bool _isFirstTimestampArrived;	// 892 = 0x37c
    unsigned int _consecutiveRampDown;	// 896 = 0x380
    double _lastTimeStartRampingDown;	// 904 = 0x388
    double _lastCongestionTime;	// 912 = 0x390
    double _lastRampDownTimeDueToFeedback;	// 920 = 0x398
    double _lastRampDownTimeDueToBaseband;	// 928 = 0x3a0
    double _stabilizationTime;	// 936 = 0x3a8
    unsigned int _remoteBandwidthEstimation;	// 944 = 0x3b0
    unsigned int _localBandwidthEstimation;	// 948 = 0x3b4
    double _lastNoOvershootBWEstimationTime;	// 952 = 0x3b8
    double _firstBelowNoRampUpBandwidthTime;	// 960 = 0x3c0
    _Bool _belowNoRampUpBandwidth;	// 968 = 0x3c8
    _Bool _isOvershoot;	// 969 = 0x3c9
    struct {
        double time[100];
        double owrd[100];
        int frontIndex;
        int rearIndex;
        unsigned int size;
        double nowrd;
        double nowrdShort;
        double nowrdAcc;
        _Bool isOWRDListTooShortDuringInitialRampUp;
    } _owrdList;	// 976 = 0x3d0
    _Bool _isOWRDListReady;	// 2624 = 0xa40
    _Bool _isOWRDConstant;	// 2625 = 0xa41
    double _owrd;	// 2632 = 0xa48
    double _nowrd;	// 2640 = 0xa50
    double _nowrdShort;	// 2648 = 0xa58
    double _nowrdAcc;	// 2656 = 0xa60
    double _lastOWRDChangeTime;	// 2664 = 0xa68
    struct tagVCRateControlLossEvent _lossEventBuffer[64];	// 2672 = 0xa70
    unsigned int _lossEventBufferIndex;	// 4720 = 0x1270
    double _lastLossEventRampDownTime;	// 4728 = 0x1278
    double _firstLossEventRampDownTime;	// 4736 = 0x1280
    int _packetLossRateBadTrendCount;	// 4744 = 0x1288
    unsigned int _lossEventBandwidthLimit;	// 4748 = 0x128c
    unsigned int _lossEventBandwidthConfidence;	// 4752 = 0x1290
    struct tagVCStatisticsECNStats _currentECNStats;	// 4756 = 0x1294
    unsigned int _mostBurstLoss;	// 4760 = 0x1298
    double _packetLossRate;	// 4768 = 0x12a0
    double _previousPacketLossRate;	// 4776 = 0x12a8
    double _packetLossRateThreshold;	// 4784 = 0x12b0
    double _packetLossRateAvgLong;	// 4792 = 0x12b8
    double _packetLossRateAvgLongPrevious;	// 4800 = 0x12c0
    double _packetLossRateAvgLongAtLBAStart;	// 4808 = 0x12c8
    double _packetLossRateAvgLongAtLBAExit;	// 4816 = 0x12d0
    double _packetLossRateAudio;	// 4824 = 0x12d8
    double _packetLossRateVideo;	// 4832 = 0x12e0
    double _roundTripTime;	// 4840 = 0x12e8
    double _worstRecentRoundTripTime;	// 4848 = 0x12f0
    unsigned int _worstRecentBurstLoss;	// 4856 = 0x12f8
    unsigned int _totalPacketReceived;	// 4860 = 0x12fc
    _Bool _shouldConsiderVideoInLossEvent;	// 4864 = 0x1300
    unsigned int _rateSharingCount;	// 4868 = 0x1304
    void *_logDump;	// 4872 = 0x1308
    void *_logBasebandDump;	// 4880 = 0x1310
    _Bool _isPeriodicLoggingEnabled;	// 4888 = 0x1318
    _Bool _didMBLRampDown;	// 4889 = 0x1319
    struct tagVCRateControlAlgorithmReportStats _reportStatistics;	// 4896 = 0x1320
}

@property(readonly, nonatomic) struct tagVCRateControlAlgorithmReportStats reportStatistics; // @synthesize reportStatistics=_reportStatistics;
@property(nonatomic) _Bool isFirstTimestampArrived; // @synthesize isFirstTimestampArrived=_isFirstTimestampArrived;
@property(nonatomic) unsigned int rateSharingCount; // @synthesize rateSharingCount=_rateSharingCount;
@property(readonly, nonatomic) _Bool isFirstInitialRampUpDone; // @synthesize isFirstInitialRampUpDone=_isFirstInitialRampUpDone;
@property(readonly, nonatomic) _Bool isSendBitrateLimited; // @synthesize isSendBitrateLimited=_isSendBitrateLimited;
@property(nonatomic) _Bool didMBLRampDown; // @synthesize didMBLRampDown=_didMBLRampDown;
@property(readonly, nonatomic) unsigned int actualBitrate; // @synthesize actualBitrate=_actualBitrate;
@property(readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property(readonly, nonatomic) unsigned int remoteBandwidthEstimation; // @synthesize remoteBandwidthEstimation=_remoteBandwidthEstimation;
@property(nonatomic) unsigned int localBandwidthEstimation; // @synthesize localBandwidthEstimation=_localBandwidthEstimation;
@property(readonly, nonatomic) _Bool isNewRateSentOut; // @synthesize isNewRateSentOut=_isNewRateSentOut;
@property(readonly, nonatomic) unsigned int worstRecentBurstLoss; // @synthesize worstRecentBurstLoss=_worstRecentBurstLoss;
@property(readonly, nonatomic) double worstRecentRoundTripTime; // @synthesize worstRecentRoundTripTime=_worstRecentRoundTripTime;
@property(readonly, nonatomic) double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property(readonly, nonatomic) unsigned int totalPacketReceived; // @synthesize totalPacketReceived=_totalPacketReceived;
@property(readonly, nonatomic) double packetLossRateVideo; // @synthesize packetLossRateVideo=_packetLossRateVideo;
@property(readonly, nonatomic) double packetLossRateAudio; // @synthesize packetLossRateAudio=_packetLossRateAudio;
@property(readonly, nonatomic) double packetLossRate; // @synthesize packetLossRate=_packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss; // @synthesize mostBurstLoss=_mostBurstLoss;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(readonly, nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool isCongested; // @synthesize isCongested=_isCongested;
@property(readonly, nonatomic) struct tagVCRateControlAlgorithmConfig config; // @synthesize config=_config;
@property(readonly, nonatomic) _Bool isLossBasedAdaptationOn;
- (void)dealloc;	// IMP=0x0000000000218003
- (_Bool)setUpVTable;	// IMP=0x0000000000217ef3
- (id)init;	// IMP=0x0000000000217e06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

