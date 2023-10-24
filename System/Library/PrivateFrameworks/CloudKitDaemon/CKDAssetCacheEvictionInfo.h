//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject
{
    _Bool _forced;	// 8 = 0x8
    _Bool _evictNow;	// 9 = 0x9
    _Bool _clearRegisteredItems;	// 10 = 0xa
    NSMutableOrderedSet *_itemIDsToUnregister;	// 16 = 0x10
    NSMutableOrderedSet *_assetHandleItemIDsToDelete;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021f926
@property(readonly, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete; // @synthesize assetHandleItemIDsToDelete=_assetHandleItemIDsToDelete;
@property(readonly, nonatomic) NSMutableOrderedSet *itemIDsToUnregister; // @synthesize itemIDsToUnregister=_itemIDsToUnregister;
@property _Bool clearRegisteredItems; // @synthesize clearRegisteredItems=_clearRegisteredItems;
@property(readonly, nonatomic) _Bool evictNow; // @synthesize evictNow=_evictNow;
@property(readonly, nonatomic) _Bool forced; // @synthesize forced=_forced;
- (id)initWithForced:(_Bool)arg1 evictNow:(_Bool)arg2;	// IMP=0x000000000021f865

@end

