//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface AVTResourceLocator : NSObject
{
    NSMutableDictionary *_imageCache;	// 8 = 0x8
    NSURL *_resourcesURL;	// 16 = 0x10
    NSURL *_environmentResourcesURL;	// 24 = 0x18
    NSURL *_memojiResourcesURL;	// 32 = 0x20
    NSURL *_animojiResourcesURL;	// 40 = 0x28
    NSURL *_stickerResourcesURL;	// 48 = 0x30
    NSURL *_poseResourcesURL;	// 56 = 0x38
    NSURL *_memojiAssetsURL;	// 64 = 0x40
    NSURL *_rootCacheURL;	// 72 = 0x48
    NSURL *_subdivDataCacheURL;	// 80 = 0x50
}

+ (id)_resourcePathInDirectoryURL:(id)arg1 subDirectory:(id)arg2 name:(id)arg3 ofType:(id)arg4;	// IMP=0x004000000001bd7c
+ (id)sharedResourceLocator;	// IMP=0x004000000001bcf7
- (void).cxx_destruct;	// IMP=0x000000000001d349
- (void)deleteLegacyCache;	// IMP=0x000000000001ce1b
- (void)deleteObsoleteVersionsInCache:(id)arg1 currentVersion:(unsigned long long)arg2;	// IMP=0x000000000001c6f5
@property(readonly) NSURL *subdivDataCacheURL;
@property(readonly) NSURL *rootCacheURL;
- (void)initCaches;	// IMP=0x000000000001c230
- (struct CGImage *)imageWithPath:(id)arg1;	// IMP=0x000000000001c052
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x000000000001c026
- (id)pathForPoseResource:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000001c011
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x000000000001bfe5
- (id)pathForStickerResource:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000001bfd0
- (id)urlForStickerResourceAtPath:(id)arg1;	// IMP=0x000000000001bfba
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x000000000001bf8e
- (id)pathForAnimojiResource:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000001bf79
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x000000000001bf4d
- (id)pathForMemojiResource:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000001bf38
- (id)urlForMemojiResourceAtPath:(id)arg1;	// IMP=0x000000000001bf22
- (id)urlForMemojiAssetAtPath:(id)arg1;	// IMP=0x000000000001bf0c
- (id)pathForEnvironmentResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;	// IMP=0x000000000001bee0
- (id)pathForEnvironmentResource:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000001becb
- (id)urlForFrameworkResourceAtPath:(id)arg1;	// IMP=0x000000000001beb5
- (id)init;	// IMP=0x000000000001b759

@end

