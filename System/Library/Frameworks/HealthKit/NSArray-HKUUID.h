//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (HKUUID)
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011950a
+ (id)hk_arrayWithCount:(long long)arg1 generator:(CDUnknownBlockType)arg2;	// IMP=0x00100000001179cb
+ (id)indexableKeyPathsWithPrefix:(id)arg1;	// IMP=0x00100000001bb7e4
- (id)hk_dataForAllUUIDs;	// IMP=0x001000000006ce17
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000006cb91
- (id)hk_splitWithBucketCount:(long long)arg1;	// IMP=0x0010000000119baa
- (id)hk_mutableSubarrayWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000119b05
- (_Bool)_permutationsWithCount:(long long)arg1 permutation:(id)arg2 depth:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000001197fe
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000119633
- (id)hk_shuffled;	// IMP=0x00100000001194bd
- (id)hk_reversed;	// IMP=0x001000000011946d
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011924d
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;	// IMP=0x0010000000119015
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0010000000118da0
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000118d3d
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000118ab7
- (_Bool)hk_allElementsEqual;	// IMP=0x0010000000118a45
- (_Bool)hk_allElementsUnique;	// IMP=0x00100000001189d2
- (_Bool)hk_containsObjectsInArray:(id)arg1;	// IMP=0x001000000011892f
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;	// IMP=0x00100000001187a3
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001185f3
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011844b
- (double)hk_sumUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001182e5
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000118108
- (_Bool)hk_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117fcf
- (_Bool)hk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117f9c
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017c9d
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x0010000000117dec
- (id)hk_filter:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017077
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0010000000117b01
- (id)hk_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f133
- (id)_hk_featureAvailabilityRequirements;	// IMP=0x00100000001bad87
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001bbe29
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bb866

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

