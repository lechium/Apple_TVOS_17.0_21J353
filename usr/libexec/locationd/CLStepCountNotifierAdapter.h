//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStepCountNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000dd59eb
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000dd59d2
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000dd5975
+ (_Bool)isSupported;	// IMP=0x0010000000dd6739
- (void)resumeAfterPendingStepCountNotifications;	// IMP=0x0020000000dd65c5
- (void)getPedometerBinsAndHistoryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000dd6495
- (void)getPedometerCalibrationBins:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000dd62a0
- (_Bool)syncgetIsStrideCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x0010000000dd6267
- (id)syncgetStepCadenceToStrideLengthDefaultBins;	// IMP=0x0010000000dd621b
- (id)syncgetRawSpeedToKValueDefaultBins;	// IMP=0x0010000000dd61cf
- (void)setStepCadenceToStrideLengthBins:(id)arg1;	// IMP=0x0010000000dd618d
- (void)setRawSpeedToKValueBins:(id)arg1;	// IMP=0x0010000000dd614b
- (id)syncgetCopyStepCadenceToStrideLengthBins;	// IMP=0x0010000000dd6110
- (id)syncgetCopyRawSpeedToKValueBins;	// IMP=0x0010000000dd60d5
- (int)syncgetQueryPedometerDataSince:(struct CLStepCountEntry)arg1 withResponseArray:(void *)arg2;	// IMP=0x0010000000dd60a3
- (id)syncgetDbUUID;	// IMP=0x0010000000dd6073
- (void)reset;	// IMP=0x0010000000dd6030
- (struct CLStepDistance)syncgetQueryStartTime:(double *)arg1 andStopTime:(double *)arg2;	// IMP=0x0010000000dd5d39
- (_Bool)syncgetEnabled;	// IMP=0x0010000000dd5d0d
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0010000000dd5c35
- (void)strideCalibratorSetSession:(long long)arg1;	// IMP=0x0010000000dd5c00
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000dd5bd8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000dd5bab
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000dd5b83
- (void *)adaptee;	// IMP=0x0010000000dd5b50
- (void)endService;	// IMP=0x0010000000dd5b35
- (void)beginService;	// IMP=0x0010000000dd5a84
- (id)init;	// IMP=0x0010000000dd5a47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

