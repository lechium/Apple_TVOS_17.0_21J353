//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCBasebandMetrics : NSObject
{
    VCRateControlMediaController *_mediaController;	// 8 = 0x8
    CDStruct_b203c80d _lastBasebandNotification;	// 16 = 0x10
    double _bdcd;	// 6064 = 0x17b0
    double _normalizedBDCD;	// 6072 = 0x17b8
    double _normalizedDelay;	// 6080 = 0x17c0
    _Bool _isBDCDListReady;	// 6088 = 0x17c8
    _Bool _useAverageQueueDepthForDelay;	// 6089 = 0x17c9
    struct {
        double time[15];
        double bdcd[15];
        double delay[15];
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _bdcdList;	// 6096 = 0x17d0
    struct {
        double time[15];
        unsigned int transmittedBytes[15];
        unsigned int nonFlushableQueueDepth[15];
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _infoList;	// 6472 = 0x1948
    unsigned int _targetBitrate;	// 6728 = 0x1a48
    unsigned int _txBitrate;	// 6732 = 0x1a4c
    unsigned int _averageBitrate;	// 6736 = 0x1a50
    unsigned int _previousAverageBitrate;	// 6740 = 0x1a54
    unsigned int _averageBitrateShort;	// 6744 = 0x1a58
    unsigned int _averageBitrateLong;	// 6748 = 0x1a5c
    double _averageQueueDepth;	// 6752 = 0x1a60
    double _expectedQueuingDelay;	// 6760 = 0x1a68
    double _expectedQueuingDelayLong;	// 6768 = 0x1a70
    double _averageBitrateMovingAverageFactor;	// 6776 = 0x1a78
    _Bool _isTargetBitrateStabilized;	// 6784 = 0x1a80
    _Bool _resetAverageBitrateLong;	// 6785 = 0x1a81
    void *_logBasebandDump;	// 6792 = 0x1a88
}

@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) _Bool isTargetBitrateStabilized; // @synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
- (void)enableBasebandLogDump:(void *)arg1;	// IMP=0x00000000001c8d14
- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;	// IMP=0x00000000001c8c08
- (void)resetBBNoteHistoryList;	// IMP=0x00000000001c8bed
- (void)resetBDCDList;	// IMP=0x00000000001c8bd2
- (void)normalizeBDCD:(double)arg1;	// IMP=0x00000000001c8996
- (double)updateTotalQueueDepth:(unsigned int)arg1;	// IMP=0x00000000001c8927
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)arg1;	// IMP=0x00000000001c867b
- (void)addInfoListWithNotification:(CDStruct_b203c80d *)arg1;	// IMP=0x00000000001c85b8
- (struct tagVCStatisticsMessage)getBasebandMetricsWithNotification:(CDStruct_b203c80d *)arg1;	// IMP=0x00000000001c8344
- (void)dealloc;	// IMP=0x00000000001c82e6
- (id)init;	// IMP=0x00000000001c823f

@end
