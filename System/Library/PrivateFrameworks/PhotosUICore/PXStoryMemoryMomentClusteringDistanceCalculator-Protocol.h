//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXDisplayAssetFetchResult;

@protocol PXStoryMemoryMomentClusteringDistanceCalculator <NSObject>
@property(readonly, nonatomic) double faceWeight;
@property(readonly, nonatomic) double locationWeight;
@property(readonly, nonatomic) double timeWeight;
- (void)clusteringDistanceForAssets:(id <PXDisplayAssetFetchResult>)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 resultHandler:(void (^)(double, double, double, double))arg4;
@end

