//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (DYKVCMutableCollectionPropertySupport)
+ (void)dy_synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;	// IMP=0x00800000000213aa
+ (void)dy_synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;	// IMP=0x008000000002136a
+ (id)_dy_mutableCollectionPropertyInfo;	// IMP=0x0080000000021314
- (id)dy_mutableSetPrimitiveMember:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021c86
- (id)dy_mutableSetPrimitiveObjectEnumeratorForProperty:(id)arg1;	// IMP=0x0010000000021c2c
- (unsigned long long)dy_mutableSetPrimitiveCountForProperty:(id)arg1;	// IMP=0x0010000000021bd2
- (void)dy_mutableSetPrimitiveIntersectObjects:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021b73
- (void)dy_mutableSetPrimitiveRemoveObjects:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021b14
- (void)dy_mutableSetPrimitiveAddObjects:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021ab5
- (void)dy_mutableSetPrimitiveRemoveObject:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021a56
- (void)dy_mutableSetPrimitiveAddObject:(id)arg1 forProperty:(id)arg2;	// IMP=0x00100000000219f7
- (void)dy_mutableSetPrimitiveSetValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021998
- (id)dy_mutableSetPrimitiveGetValueForProperty:(id)arg1;	// IMP=0x001000000002194b
- (id)dy_mutableSetPrimitiveGetMutableValueForProperty:(id)arg1;	// IMP=0x00100000000218f1
- (void)dy_mutableArrayPrimitiveGetObjects:(id *)arg1 range:(struct _NSRange)arg2 forProperty:(id)arg3;	// IMP=0x001000000002187e
- (id)dy_mutableArrayPrimitiveObjectsAtIndexes:(id)arg1 forProperty:(id)arg2;	// IMP=0x001000000002181f
- (id)dy_mutableArrayPrimitiveObjectAtIndex:(unsigned long long)arg1 forProperty:(id)arg2;	// IMP=0x00100000000217c0
- (unsigned long long)dy_mutableArrayPrimitiveCountForProperty:(id)arg1;	// IMP=0x0010000000021766
- (void)dy_mutableArrayPrimitiveReplaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 forProperty:(id)arg3;	// IMP=0x00100000000216f8
- (void)dy_mutableArrayPrimitiveRemoveObjectsAtIndexes:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021699
- (void)dy_mutableArrayPrimitiveInsertObjects:(id)arg1 atIndexes:(id)arg2 forProperty:(id)arg3;	// IMP=0x001000000002162b
- (void)dy_mutableArrayPrimitiveReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 forProperty:(id)arg3;	// IMP=0x00100000000215bd
- (void)dy_mutableArrayPrimitiveRemoveObjectAtIndex:(unsigned long long)arg1 forProperty:(id)arg2;	// IMP=0x001000000002155e
- (void)dy_mutableArrayPrimitiveInsertObject:(id)arg1 atIndex:(unsigned long long)arg2 forProperty:(id)arg3;	// IMP=0x00100000000214f0
- (void)dy_mutableArrayPrimitiveSetValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000021491
- (id)dy_mutableArrayPrimitiveGetValueForProperty:(id)arg1;	// IMP=0x0010000000021444
- (id)dy_mutableArrayPrimitiveGetMutableValueForProperty:(id)arg1;	// IMP=0x00100000000213ea
- (id)_dy_mutableCollectionPropertyInfo;	// IMP=0x001000000002133f
@end

