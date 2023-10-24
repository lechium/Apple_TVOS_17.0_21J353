//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet
{
    NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007e1cd9
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007e1b5f
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007e1acd
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007e1a2e
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007e199c
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007e187c
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007e180b
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007e177e

@end
