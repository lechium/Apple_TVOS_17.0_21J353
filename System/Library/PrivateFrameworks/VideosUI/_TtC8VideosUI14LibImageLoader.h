//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI14LibImageLoader : NSObject
{
    MISSING_TYPE *currentLoadingTasks;	// 8 = 0x8
    MISSING_TYPE *artworkResizeUtility;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003c40f1
- (id)init;	// IMP=0x00000000003c40b0
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000003c3dea
- (void)cancelLoad:(id)arg1;	// IMP=0x00000000003c385a
- (id)imageKeyForObject:(id)arg1;	// IMP=0x00000000003c372b
- (id)URLForObject:(id)arg1;	// IMP=0x00000000003c35e4
- (_Bool)hasImageCache;	// IMP=0x00000000003c35b3

@end

