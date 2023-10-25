//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000006846fb
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000684685
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000068461e
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000006845b7
- (void)removeLastObject;	// IMP=0x0000000000684555
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x00000000006844f5
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000006842e9
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000006841d6
- (void)addObject:(id)arg1;	// IMP=0x00000000006840d5
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000006840a1
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000068406d
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000684025
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x0000000000683fd1
- (unsigned long long)count;	// IMP=0x0000000000683f63
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x0000000000683ecc
- (void)_proxyNonGCFinalize;	// IMP=0x0000000000683e3f
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000683d6c

@end

