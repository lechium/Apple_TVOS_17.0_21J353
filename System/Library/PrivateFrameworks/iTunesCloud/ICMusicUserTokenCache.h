//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICMusicUserTokenCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSMutableDictionary *_cachedUserTokens;	// 24 = 0x18
}

+ (void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0040000000171c56
+ (id)_decodeDeveloperTokenPart:(id)arg1;	// IMP=0x00400000001718d4
+ (id)sharedCache;	// IMP=0x00400000001718a4
- (void).cxx_destruct;	// IMP=0x0000000000171019
- (void)_postLocalChangeNotification;	// IMP=0x0000000000170fb6
- (void)_persistCache;	// IMP=0x0000000000170f4c
- (void)_loadPersistedCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000170db8
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1;	// IMP=0x0000000000170ce4
- (void)setCachedUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000170bdc
- (void)getCachedUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000170b07
- (void)dealloc;	// IMP=0x0000000000170a88
- (id)_init;	// IMP=0x0000000000170964

@end

