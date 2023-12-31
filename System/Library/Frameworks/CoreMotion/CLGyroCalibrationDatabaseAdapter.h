//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x001000000021f4ab
+ (id)getSilo;	// IMP=0x001000000021f0d4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000021f0bb
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000021f05e
- (int)syncgetNumTemperatures;	// IMP=0x000000000021f7c5
- (_Bool)syncgetWipeDatabase;	// IMP=0x000000000021f7a7
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000021f76e
- (_Bool)syncgetInsertWithBias:(const CDStruct_03942939 *)arg1 variance:(const CDStruct_03942939 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;	// IMP=0x000000000021f71f
- (double)syncgetLastMiniCalibration;	// IMP=0x000000000021f6e7
- (_Bool)syncgetSupportsMiniCalibration;	// IMP=0x000000000021f6c9
- (int)syncgetNonFactoryRoundCount;	// IMP=0x000000000021f6ab
- (void)getBiasFitWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000021f618
- (_Bool)syncgetBiasFit:(CDStruct_1ec9dfc5 *)arg1;	// IMP=0x000000000021f5ea
- (void)startFactoryGYTT;	// IMP=0x000000000021f5cc
- (int)syncgetMaxDynamicTemperature;	// IMP=0x000000000021f5ae
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_03942939 *)arg1 slope:(CDStruct_03942939 *)arg2 l2Error:(CDStruct_03942939 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_03942939 *)arg5 deltaSlope:(CDStruct_03942939 *)arg6 deltaError:(CDStruct_03942939 *)arg7 isDeltaDynamic:(_Bool)arg8;	// IMP=0x000000000021f4f6
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000021f483
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000021f456
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000021f42e
- (void *)adaptee;	// IMP=0x000000000021f3fb
- (void)endService;	// IMP=0x000000000021f3e0
- (void)beginService;	// IMP=0x000000000021f16d
- (id)init;	// IMP=0x000000000021f130

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

