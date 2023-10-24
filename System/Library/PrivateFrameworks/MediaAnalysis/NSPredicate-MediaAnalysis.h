//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (MediaAnalysis)
+ (id)mad_internalPredicateNeedsProcessingForTaskID:(unsigned long long)arg1;	// IMP=0x008000000024cffa
+ (id)mad_internalPredicateWithPriority:(unsigned long long)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x008000000024ce22
+ (id)mad_internalPredicateForTaskID:(unsigned long long)arg1;	// IMP=0x008000000024cdc2
+ (id)mad_nonPrioritizedAssetsForFaceDetectionInternalPredicate;	// IMP=0x008000000024cd77
+ (id)mad_prioritizedAssetsForFaceDetectionInternalPredicate;	// IMP=0x008000000024cd2c
+ (float)_peopleThreshold;	// IMP=0x008000000024cd1e
+ (id)vcp_fullAnalysisPredatesVersionInternalPredicate:(int)arg1;	// IMP=0x008000000024ccfa
+ (id)vcp_moviesPredicate:(_Bool)arg1;	// IMP=0x008000000024cca1
+ (id)vcp_nonPanoPredicate:(_Bool)arg1;	// IMP=0x008000000024cc42
+ (id)vcp_livePhotosPredicate:(_Bool)arg1;	// IMP=0x008000000024cbe3
+ (id)vcp_stillImagesPredicate:(_Bool)arg1;	// IMP=0x008000000024cb7b
+ (id)vcp_imagesPredicate:(_Bool)arg1;	// IMP=0x008000000024cb25
@end

