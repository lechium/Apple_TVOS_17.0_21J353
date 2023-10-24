//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLVO2MaxService : CLIntersiloService
{
    struct shared_ptr<CLVO2MaxInputCache> fInputCache;	// 8 = 0x8
    struct shared_ptr<CLVO2MaxInputStore> fInputStore;	// 24 = 0x18
    struct unique_ptr<CLVO2MaxStagingOutputStore, std::default_delete<CLVO2MaxStagingOutputStore>> fStagingOutputStore;	// 40 = 0x28
    struct unique_ptr<CLVO2MaxRetrocomputeRecorderDb, std::default_delete<CLVO2MaxRetrocomputeRecorderDb>> fRetrocomputeDb;	// 48 = 0x30
    struct unique_ptr<CLVO2MaxRetrocomputeBodyMetricsDb, std::default_delete<CLVO2MaxRetrocomputeBodyMetricsDb>> fRetrocomputeBodyMetricsDb;	// 56 = 0x38
    int fDeleteHealthKitSamplesAttempts;	// 64 = 0x40
    _Bool fDeleteHealthKitSamplesSuccess;	// 68 = 0x44
    int fUpdateRetrocomputedDataAttempts;	// 72 = 0x48
    _Bool fUpdateRetrocomputedDataSuccess;	// 76 = 0x4c
    _Bool fTriggerRetrocomputeInProgress;	// 77 = 0x4d
    _Bool fShouldBypassMinDelta;	// 78 = 0x4e
    _Bool fShouldBypassPreviousSampleInternal;	// 79 = 0x4f
    _Bool fShouldBypassMinEstimatesUpdatedRatio;	// 80 = 0x50
    struct unique_ptr<CLNatalimetryNotifier_Type::Client, std::default_delete<CLNatalimetryNotifier_Type::Client>> fUserInfoClient;	// 88 = 0x58
    struct CLBodyMetrics fUserInfo;	// 96 = 0x60
    struct CLBodyMetrics fOriginalBodyMetrics;	// 156 = 0x9c
    struct vector<VO2MaxStagingOutput, std::allocator<VO2MaxStagingOutput>> fPendingHealthKitWrites;	// 216 = 0xd8
    NSMutableSet *_retrocomputeStatusClients;	// 240 = 0xf0
}

+ (_Bool)isSupported;	// IMP=0x0020000000232d2d
+ (id)getSilo;	// IMP=0x0010000000232536
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000023251d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002324c0
- (id).cxx_construct;	// IMP=0x002000000023d426
- (void).cxx_destruct;	// IMP=0x001000000023d370
@property(retain, nonatomic) NSMutableSet *retrocomputeStatusClients; // @synthesize retrocomputeStatusClients=_retrocomputeStatusClients;
- (void)onUserInfoUpdate:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x001000000023cf3a
- (_Bool)validateBodyMetrics;	// IMP=0x001000000023cbfc
- (_Bool)updateRetrocomputeLastTimestampToHealthKit:(double)arg1;	// IMP=0x001000000023cb3b
- (void)updateRetrocomputeStatus:(int)arg1 unavailableReasons:(unsigned int)arg2;	// IMP=0x001000000023c872
- (void)deleteSessionsFromHealthKit:(vector_c99c8e88)arg1 withRetry:(_Bool)arg2;	// IMP=0x001000000023c86c
- (void)handleRetryHealthKitDeleteSamples:(id)arg1;	// IMP=0x001000000023c437
- (void)onRetryHealthKitDeleteSamples:(id)arg1;	// IMP=0x001000000023c0e7
- (void)retryHealthKitDeleteSamples;	// IMP=0x001000000023bc73
- (void)deleteHealthKitSamples:(_Bool)arg1;	// IMP=0x001000000023b726
- (void)handleRetryTriggerRetrocompute:(id)arg1;	// IMP=0x001000000023abf2
- (void)onRetryTriggerRetrocompute:(id)arg1;	// IMP=0x001000000023a8cf
- (void)retryTriggerRetrocompute;	// IMP=0x001000000023a3d1
- (void)promoteStagingData:(id)arg1;	// IMP=0x001000000023a199
- (void)onRetrocomputeHealthKitSampleFailed:(id)arg1;	// IMP=0x001000000023a174
- (void)onRetrocomputeHealthKitSampleSavedWithStartTime:(double)arg1 activity:(id)arg2;	// IMP=0x0010000000239c77
- (void)saveStagingOutputToHealthKit:(struct VO2MaxStagingOutput)arg1 activity:(id)arg2;	// IMP=0x0010000000239c71
- (void)triggerRetrocomputeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000239644
- (unsigned int)updateRetrocomputeHistoryPostProcessing:(struct VO2MaxRetrocomputeHistory *)arg1;	// IMP=0x00100000002388e2
- (void)updateRetrocomputeHistory:(struct VO2MaxRetrocomputeHistory *)arg1 withResult:(struct VO2MaxRetrocomputeSessionResult)arg2;	// IMP=0x00100000002383fe
- (void)persistLostEstimateToStagingTables:(const void *)arg1;	// IMP=0x0010000000238396
- (void)persistRetrocomputeResultsToStagingTables:(struct VO2MaxRetrocomputeSessionResult)arg1;	// IMP=0x001000000023808b
- (unsigned int)retrocomputeSession:(const struct VO2MaxSessionAttributes *)arg1 withHealthKitSample:(struct VO2MaxHealthKitSample)arg2 withRetrocomputeHistory:(struct VO2MaxRetrocomputeHistory *)arg3;	// IMP=0x00100000002364ec
- (int)getIndexInHealthKitSamples:(const void *)arg1 forSessionAttributes:(const struct VO2MaxSessionAttributes *)arg2 withStartIndex:(int)arg3;	// IMP=0x0010000000236133
- (unsigned int)retrocomputeForSamples:(const void *)arg1 withRetrocomputeHistory:(struct VO2MaxRetrocomputeHistory *)arg2;	// IMP=0x00100000002356f4
- (_Bool)isEligibleForPreProcessing:(struct VO2MaxRetrocomputeHistory *)arg1;	// IMP=0x00100000002356d1
- (void)runAggregationForStagingTables;	// IMP=0x00100000002356bc
- (void)markXpcActivityDone:(id)arg1;	// IMP=0x0010000000235506
- (void)executeRetrocomputePreprocessing:(id)arg1;	// IMP=0x0010000000235500
- (void)queryVO2MaxRetrocomputeStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000235053
- (void)onRetrocomputePreprocessingActivity:(id)arg1;	// IMP=0x0010000000234c43
- (void)resetRetrocomputePreProcessingActivity:(id)arg1 withDelay:(long long)arg2;	// IMP=0x00100000002349b0
- (void)scheduleRetrocomputePreprocessing;	// IMP=0x0010000000233ef7
- (void)sendRetroComputeAnalytics;	// IMP=0x00100000002337b8
- (void)unregisterForRetrocomputeStatusUpdates:(byref id)arg1;	// IMP=0x0010000000233787
- (void)registerForRetrocomputeStatusUpdates:(byref id)arg1;	// IMP=0x00100000002335ab
- (void)endService;	// IMP=0x001000000023340a
- (void)beginService;	// IMP=0x0010000000232d73
- (id)init;	// IMP=0x0010000000232cf0
- (void)forceClearHistoryDatabase;	// IMP=0x0010000000232b4e
- (void)updateBypassParameters;	// IMP=0x0010000000232592

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
