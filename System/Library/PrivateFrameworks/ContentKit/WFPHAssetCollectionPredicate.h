//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@class PHAssetCollection;

__attribute__((visibility("hidden")))
@interface WFPHAssetCollectionPredicate : NSComparisonPredicate
{
    PHAssetCollection *_assetCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008559c
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)wf_photoLibraryFilteringPredicate;	// IMP=0x0000000000085466
- (id)initForAssetsInCollection:(id)arg1;	// IMP=0x00000000000852ac

@end
