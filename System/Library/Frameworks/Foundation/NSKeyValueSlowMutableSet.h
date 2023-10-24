//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptySets;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)unionSet:(id)arg1;	// IMP=0x00000000006868a4
- (void)setSet:(id)arg1;	// IMP=0x0000000000686831
- (void)removeObject:(id)arg1;	// IMP=0x00000000006867ba
- (void)removeAllObjects;	// IMP=0x0000000000686731
- (void)minusSet:(id)arg1;	// IMP=0x00000000006866ba
- (void)intersectSet:(id)arg1;	// IMP=0x0000000000686643
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000006865b3
- (void)addObject:(id)arg1;	// IMP=0x00000000006864f2
- (id)_createMutableSetValueWithSelector:(SEL)arg1;	// IMP=0x0000000000686484
- (id)objectEnumerator;	// IMP=0x0000000000686445
- (id)member:(id)arg1;	// IMP=0x0000000000686411
- (unsigned long long)count;	// IMP=0x00000000006863e3
- (id)_setValueWithSelector:(SEL)arg1;	// IMP=0x0000000000686381
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x000000000068630b
- (void)_proxyNonGCFinalize;	// IMP=0x000000000068627e
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000006861ab

@end
