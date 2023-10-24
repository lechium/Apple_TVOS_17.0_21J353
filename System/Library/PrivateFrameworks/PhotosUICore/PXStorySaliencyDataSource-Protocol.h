//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray;
@protocol PXDisplayAsset;

@protocol PXStorySaliencyDataSource <NSObject>
- (NSArray *)saliencyAreasForDisplayAsset:(id <PXDisplayAsset>)arg1;

@optional
- (NSArray *)rawSaliencyAreasForDisplayAsset:(id <PXDisplayAsset>)arg1;
@end
