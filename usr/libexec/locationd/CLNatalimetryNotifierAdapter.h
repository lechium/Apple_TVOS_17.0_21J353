//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLNatalimetryNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000bd4bcb
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bd4bb2
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000bd4b55
+ (_Bool)isSupported;	// IMP=0x0010000000bd73ac
- (void)onCalorieAggregationActivity:(id)arg1;	// IMP=0x0020000000bd6f7c
- (void)queryVO2MaxInputsFromRecord:(struct VO2MaxInput)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bd6d19
- (void)queryWorkoutMets:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bd6ab3
- (void)queryMetMinutesInTimeRange:(CDStruct_2c43369c)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bd68cb
- (int)syncgetQueryExerciseMinuteDataSince:(struct CLExerciseMinuteData *)arg1 records:(void *)arg2;	// IMP=0x0010000000bd6899
- (int)syncgetQueryNatalieDataSince:(struct CLNatalieData *)arg1 records:(void *)arg2;	// IMP=0x0010000000bd6868
- (void)resetUserProfileForKeys:(id)arg1;	// IMP=0x0010000000bd6262
- (void)setUserProfile:(id)arg1 merge:(_Bool)arg2;	// IMP=0x0010000000bd622a
- (void)setUserProfileFromCMNatalimeter:(id)arg1;	// IMP=0x0010000000bd6007
- (id)syncgetUserProfileInternal;	// IMP=0x0010000000bd5ce6
- (id)syncgetUserProfile;	// IMP=0x0010000000bd5ad2
- (void)setActiveVo2maxOverride:(_Bool)arg1;	// IMP=0x0010000000bd58e6
- (void)refreshMetrics;	// IMP=0x0010000000bd4f6a
- (void)resume;	// IMP=0x0010000000bd4f48
- (void)pause;	// IMP=0x0010000000bd4f27
- (void)updatePAL:(double)arg1;	// IMP=0x0010000000bd4de0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bd4db8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bd4d8b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bd4d63
- (void *)adaptee;	// IMP=0x0010000000bd4d30
- (void)endService;	// IMP=0x0010000000bd4d15
- (void)beginService;	// IMP=0x0010000000bd4c64
- (id)init;	// IMP=0x0010000000bd4c27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

