//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet
{
    NSManagedObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSMutableOrderedSet *_mutableOrderedSet;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000024ca07
- (Class)classForCoder;	// IMP=0x000000000024c9f6
- (_Bool)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000024c9d9
- (id)_orderedObjectsAndKeys;	// IMP=0x000000000024c9bc
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000024c4ce
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000024c4aa
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000024c486
- (void)unionSet:(id)arg1;	// IMP=0x000000000024c38f
- (void)minusSet:(id)arg1;	// IMP=0x000000000024c165
- (void)intersectSet:(id)arg1;	// IMP=0x000000000024bf3b
- (void)unionOrderedSet:(id)arg1;	// IMP=0x000000000024be44
- (void)minusOrderedSet:(id)arg1;	// IMP=0x000000000024bc2a
- (void)intersectOrderedSet:(id)arg1;	// IMP=0x000000000024b9f5
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x000000000024b7db
- (void)removeObject:(id)arg1;	// IMP=0x000000000024b7ac
- (void)removeAllObjects;	// IMP=0x000000000024b6d2
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000024b629
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x000000000024b54f
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x000000000024b520
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000024b27e
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000024b24f
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000024b199
- (void)insertObjects:(id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000024b0b7
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000024affe
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;	// IMP=0x000000000024af45
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000024ae49
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000024ac77
- (void)addObject:(id)arg1;	// IMP=0x000000000024ab76
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000024aa7f
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024a9cd
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000024a88c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000024a86f
- (unsigned long long)count;	// IMP=0x000000000024a852
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000024a835
- (id)valueForKey:(id)arg1;	// IMP=0x000000000024a818
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000024a7fb
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000000024a7de
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000024a7c1
- (id)description;	// IMP=0x000000000024a7a4
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a787
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000024a76a
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;	// IMP=0x000000000024a74d
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000024a730
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a713
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000024a6f6
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000024a6d9
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a6bc
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000024a69f
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000024a682
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000024a665
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000024a648
- (id)set;	// IMP=0x000000000024a62b
- (id)array;	// IMP=0x000000000024a60e
- (id)reversedOrderedSet;	// IMP=0x000000000024a5f1
- (id)reverseObjectEnumerator;	// IMP=0x000000000024a5d4
- (id)objectEnumerator;	// IMP=0x000000000024a5b7
- (_Bool)isSubsetOfOrderedSet:(id)arg1;	// IMP=0x000000000024a59a
- (_Bool)isSubsetOfSet:(id)arg1;	// IMP=0x000000000024a57d
- (_Bool)intersectsSet:(id)arg1;	// IMP=0x000000000024a560
- (_Bool)intersectsOrderedSet:(id)arg1;	// IMP=0x000000000024a543
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000024a526
- (_Bool)isEqualToOrderedSet:(id)arg1;	// IMP=0x000000000024a509
- (id)lastObject;	// IMP=0x000000000024a4ec
- (id)firstObject;	// IMP=0x000000000024a4cf
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000024a4b2
- (void)getObjects:(id *)arg1;	// IMP=0x000000000024a465
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000024a448
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024a42b
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000024a40e
- (id)allObjects;	// IMP=0x000000000024a304
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024a2cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024a294
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3;	// IMP=0x000000000024a1fb
- (void)dealloc;	// IMP=0x000000000024a17e

@end

