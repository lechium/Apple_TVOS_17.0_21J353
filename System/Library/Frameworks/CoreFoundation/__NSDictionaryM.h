//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSDictionaryM : NSMutableDictionary
{
    CDStruct_bc24fd1e storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000019cc21
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000019b745
- (double)_clumpingInterestingThreshold;	// IMP=0x000000000019d1ce
- (double)_clumpingFactor;	// IMP=0x000000000019cf9e
- (id)_cfMutableCopy;	// IMP=0x000000000019cf56
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019cead
- (id)mutableCopy;	// IMP=0x000000000019ce04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019cd15
- (id)copy;	// IMP=0x000000000019cc26
- (void)dealloc;	// IMP=0x000000000019caa2
- (void)removeAllObjects;	// IMP=0x000000000019c3d8
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000019c1d5
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000019c0b5
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000019bf87
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000019bd8a
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000019bb8f
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000019b961
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000000019b888
- (void)setObservationInfo:(void *)arg1;	// IMP=0x000000000019b748
- (void)_mutate;	// IMP=0x000000000019b69c
- (void)__setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000019ae23
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000019a94e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000019a41d
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000019a007
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000199ee7
- (id)keyEnumerator;	// IMP=0x0000000000199e8d
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000199c72
- (unsigned long long)count;	// IMP=0x0000000000199c2e

@end
