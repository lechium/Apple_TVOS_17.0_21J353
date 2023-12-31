//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface ARUIRingUniformsCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)cacheWithLimit:(unsigned long long)arg1;	// IMP=0x0060000000014338
+ (id)defaultCache;	// IMP=0x006000000001430a
- (void).cxx_destruct;	// IMP=0x00000000000144db
- (void)clearCache;	// IMP=0x00000000000144c5
- (id)uniformsForRing:(id)arg1 renderedInContext:(id)arg2;	// IMP=0x00000000000143df
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x000000000001436e

@end

