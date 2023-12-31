//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VNClusteringReadOnly><VNClusteringWritable><VNClusteringCancelling;

__attribute__((visibility("hidden")))
@interface VNClustererReadWriteContext
{
    id <VNClusteringReadOnly><VNClusteringWritable><VNClusteringCancelling> _clusterer;	// 64 = 0x40
}

+ (id)nonGroupedGroupID;	// IMP=0x0010000000030dbf
+ (id)clustererModelFileNamesFromState:(id)arg1 storedInPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000030d96
+ (id)distanceBetweenFacesWithFaceprint:(id)arg1 andFaceprint:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000030d6d
+ (id)distanceBetweenFacesWithFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000030c8e
+ (id)representativenessForFaces:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000030c65
- (void).cxx_destruct;	// IMP=0x0000000000030acb
- (id)suggestionsForClustersWithFaceIds:(id)arg1 affinityThreshold:(float)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000030837
- (id)maximumFaceIdInModelAndReturnError:(id *)arg1;	// IMP=0x000000000003081a
- (id)getDistances:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000307ed
- (id)distanceBetweenLevel1Clusters:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000307c0
- (id)distanceBetweenClustersWithFaceId:(id)arg1 andFaceId:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000030793
- (id)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030761
- (id)getAllClustersAndReturnError:(id *)arg1;	// IMP=0x0000000000030744
- (id)clusteredFaceIdsForClusterContainingFaceId:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030717
- (id)allClusteredFaceIdsAndReturnError:(id *)arg1;	// IMP=0x00000000000306fa
- (_Bool)cancelClustering:(id *)arg1;	// IMP=0x00000000000306f2
- (id)updateModelByAddingFaces:(id)arg1 andRemovingFaces:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000306b9
- (id)updateModelByRemovingFaces:(id)arg1 canceller:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003067e
- (id)updateModelByAddingFaces:(id)arg1 canceller:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000030648
- (id)_updateClustererWithOptions:(id)arg1 canceller:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000030346
- (id)updateModelByAddingPersons:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingPersons:(id)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000301e3
- (id)updateModelByAddingFaces:(id)arg1 withGroupingIdentifiers:(id)arg2 andRemovingFaces:(id)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000030062
- (id)saveAndReturnCurrentModelState:(id *)arg1;	// IMP=0x0000000000030045
- (_Bool)resetModelState:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ffc0
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 torsoprintRequestRevision:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x000000000002fe67
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x000000000002fe4b
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 torsoprintRequestRevision:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x000000000002fcfc
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x000000000002fce0

@end

