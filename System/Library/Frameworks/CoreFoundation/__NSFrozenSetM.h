//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenSetM : NSSet
{
    CDStruct_af6d7307 storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000014ba1b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014bb95
- (id)mutableCopy;	// IMP=0x000000000014baed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014bae8
- (id)copy;	// IMP=0x000000000014bae3
- (void)dealloc;	// IMP=0x000000000014ba20
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000014b828
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b66a
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000014b46e
- (double)clumpingInterestingThreshold;	// IMP=0x000000000014b416
- (double)clumpingFactor;	// IMP=0x000000000014b1ed
- (id)objectEnumerator;	// IMP=0x000000000014b193
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000014b07a
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000014af64
- (id)member:(id)arg1;	// IMP=0x000000000014ae53
- (unsigned long long)count;	// IMP=0x000000000014ae42

@end
