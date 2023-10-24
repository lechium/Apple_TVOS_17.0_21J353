//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MADServiceVideoAsset.h"

@class NSArray, PHAsset;

__attribute__((visibility("hidden")))
@interface MADServicePhotosVideoAsset : MADServiceVideoAsset
{
    PHAsset *_photosAsset;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c9c15
- (id)animatedStickerScore;	// IMP=0x00000000001c9bf8
- (id)scoresForLabels;	// IMP=0x00000000001c9905
- (id)isSensitive;	// IMP=0x00000000001c97c3
- (CDStruct_e83c9415)trimTimeRange;	// IMP=0x00000000001c95ed
- (CDStruct_1b6d18a9)stillTime;	// IMP=0x00000000001c9588
- (id)url;	// IMP=0x00000000001c8dfc
- (id)resources;	// IMP=0x00000000001c8da0
- (id)identifier;	// IMP=0x00000000001c8d83
- (unsigned long long)assetType;	// IMP=0x00000000001c8d78
- (id)initWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;	// IMP=0x00000000001c8cf6

@end
