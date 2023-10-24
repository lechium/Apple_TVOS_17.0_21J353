//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotosHighlight.h>

@class NSArray, NSDate, NSString, PHAssetCollection;

@interface PHPhotosHighlight (PGGraphIngestHighlight)
+ (id)fetchParentDayGroupHighlightsForDayHighlights:(id)arg1;	// IMP=0x00100000004a4e56
- (unsigned short)visibilityStateForHighlightFilter:(unsigned short)arg1;	// IMP=0x0010000000386391
- (id)keyAssetForHighlightFilter:(unsigned short)arg1;	// IMP=0x001000000038623f
@property(readonly, nonatomic) NSArray *extendedCuratedAssets;
@property(readonly, nonatomic) id modelObject;
- (unsigned long long)numberOfAssetsInExtendedForSharingFilter:(unsigned short)arg1;	// IMP=0x0010000000386112
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtendedMixed;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtendedShared;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtendedPrivate;
- (id)changeRequest;	// IMP=0x00100000004a4b68
- (double)nonDefaultCurationScorePercentageForPhotoLibrary:(id)arg1;	// IMP=0x00100000004a4a08
- (double)sceneAnalysisProgressForPhotoLibrary:(id)arg1;	// IMP=0x00100000004a49ed
- (double)faceAnalysisProgressForPhotoLibrary:(id)arg1;	// IMP=0x00100000004a49d2
@property(readonly, nonatomic) _Bool isUpToDate;
@property(readonly, nonatomic) PHAssetCollection *assetCollection;

// Remaining properties
@property(readonly, nonatomic) unsigned short category;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *endDate;
@property(nonatomic) unsigned short enrichmentState;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned short kind;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@property(readonly, nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic, getter=isRecent) _Bool recent;
@property(readonly, nonatomic) unsigned short sharingComposition;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@property(nonatomic) unsigned short type;
@property(readonly, nonatomic) NSString *uuid;
@end

