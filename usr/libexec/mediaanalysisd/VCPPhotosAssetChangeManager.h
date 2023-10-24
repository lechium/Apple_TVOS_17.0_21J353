//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary;

@interface VCPPhotosAssetChangeManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    unsigned long long _pendingResourceChangeCount;	// 24 = 0x18
}

+ (short)sensitivityFromAnalysis:(id)arg1;	// IMP=0x00400000000b9a4e
+ (id)managerForPhotoLibrary:(id)arg1;	// IMP=0x00100000000b99e9
- (void).cxx_destruct;	// IMP=0x00200000000c3142
- (int)publishPendingChanges;	// IMP=0x00100000000c2d91
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000c2b26
- (int)updateLegacyAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000c26fa
- (int)updateMovieAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000beeec
- (int)updateImageAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x00100000000bd365
- (int)associateTraitsForAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x00100000000bba9c
- (int)associateTraitsWithFaceTorspPrints:(id)arg1 forAsset:(id)arg2 withAnalysis:(id)arg3 results:(id)arg4;	// IMP=0x00100000000baf4d
- (int)associateTraitsForMovieAsset:(id)arg1 withAnalysis:(id)arg2 result:(id)arg3;	// IMP=0x00100000000ba192
- (id)matchPerson:(struct CGRect)arg1 withPHFaces:(id)arg2 withMinIOU:(float)arg3 iou:(float *)arg4;	// IMP=0x00100000000b9c44
- (void)dealloc;	// IMP=0x00100000000b9bd1
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000b9924

@end

