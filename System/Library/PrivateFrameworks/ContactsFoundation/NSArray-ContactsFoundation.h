//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (ContactsFoundation)
+ (id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x005000000000b30c
- (id)_cn_lazy;	// IMP=0x001000000000b387
- (id)_cn_arrayByRotatingRange:(struct _NSRange)arg1 by:(long long)arg2;	// IMP=0x001000000000b2b5
- (_Bool)_cn_isNonEmpty;	// IMP=0x001000000000b294
- (_Bool)_cn_isIdenticalToArray:(id)arg1;	// IMP=0x001000000000b0d7
- (id)_cn_safeSortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b0a8
- (id)_cn_reversed;	// IMP=0x001000000000b028
- (void)_cn_zip:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000af2d
- (id)_cn_zip:(id)arg1;	// IMP=0x001000000000ae05
- (id)_cn_indexBy:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ac42
- (id)_cn_groupBy:(CDUnknownBlockType)arg1;	// IMP=0x001000000000aa05
- (id)_cn_takeLast:(unsigned long long)arg1;	// IMP=0x001000000000a996
- (id)_cn_take:(unsigned long long)arg1;	// IMP=0x001000000000a943
- (id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a8be
- (id)_cn_skipLast:(unsigned long long)arg1;	// IMP=0x001000000000a854
- (id)_cn_skip:(unsigned long long)arg1;	// IMP=0x001000000000a7e7
- (id)_cn_reduce:(CDUnknownBlockType)arg1 initialValue:(id)arg2;	// IMP=0x001000000000a646
- (id)_cn_reduce:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a5a2
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a484
- (id)_cn_flatten;	// IMP=0x001000000000a353
- (id)_cn_distinctObjects;	// IMP=0x001000000000a2f9
- (id)_cn_indicesForObjects:(id)arg1;	// IMP=0x001000000000a14b
- (_Bool)_cn_containsObject:(id)arg1;	// IMP=0x001000000000a128
- (_Bool)_cn_none:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009fef
- (_Bool)_cn_any:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009eb5
- (_Bool)_cn_all:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009d7c
- (id)_cn_tail;	// IMP=0x0010000000009d65
- (unsigned long long)_cn_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009c8b
- (id)_cn_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009b35
- (id)_cn_balancedSlicesWithMaximumCount:(unsigned long long)arg1;	// IMP=0x0010000000009a5a
- (id)_cn_slicesWithMaximumCount:(unsigned long long)arg1;	// IMP=0x001000000000997f
- (id)_cn_partition:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009785
- (id)_cn_filter:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096ab
- (id)_cn_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009173
- (id)_cn_concurrentMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009003
- (id)_cn_map:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008bf7
- (id)_cn_joinWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008a71
- (id)_cn_join:(id)arg1;	// IMP=0x00100000000089b7
- (void)_cn_each_reverse:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008913
- (void)_cn_each:(CDUnknownBlockType)arg1 untilCancelled:(id)arg2;	// IMP=0x0010000000008863
- (void)_cn_each:(CDUnknownBlockType)arg1 until:(CDUnknownBlockType)arg2;	// IMP=0x00100000000086f6
- (void)_cn_each:(CDUnknownBlockType)arg1;	// IMP=0x00100000000085cf
@end

