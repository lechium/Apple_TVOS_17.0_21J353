//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBurstThumbnailCluster : NSObject
{
    NSMutableArray *burstImages;	// 8 = 0x8
    CDUnknownBlockType completionBlock;	// 16 = 0x10
    NSMutableDictionary *imageProps;	// 24 = 0x18
    CIBurstYUVImage *image;	// 32 = 0x20
}

@property CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property CIBurstYUVImage *image; // @synthesize image;
@property NSMutableDictionary *imageProps; // @synthesize imageProps;
@property NSMutableArray *burstImages; // @synthesize burstImages;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;	// IMP=0x000000000003a74c
- (void)addItemsFromCluster:(id)arg1;	// IMP=0x000000000003a732
- (void)releaseImage;	// IMP=0x000000000003a6f4
- (void)dealloc;	// IMP=0x000000000003a69c
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000003a2d5
- (id)init;	// IMP=0x000000000003a279

@end
