//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@class NSArray, NSString, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet
{
    int _cd_rc;	// 8 = 0x8
    NSArray *_underlyingArray;	// 16 = 0x10
    _PFWeakReference *_weakmoc;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0010000000070166
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006fe22
+ (id)alloc;	// IMP=0x001000000006fe16
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x001000000006fbdb
- (id)newArrayFromObjectIDs;	// IMP=0x0000000000070432
- (id)arrayFromObjectIDs;	// IMP=0x0000000000070415
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;	// IMP=0x00000000000703f8
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000703db
- (id)allObjects;	// IMP=0x00000000000703bd
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000007038f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070347
- (_Bool)isEqualToOrderedSet:(id)arg1;	// IMP=0x0000000000070177
- (Class)classForCoder;	// IMP=0x0000000000070155
- (void)getObjects:(id *)arg1;	// IMP=0x0000000000070108
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000700eb
- (id)objectEnumerator;	// IMP=0x00000000000700ce
- (id)array;	// IMP=0x00000000000700b0
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070093
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000070076
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000070059
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000007003c
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000007001f
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070002
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000006ffe5
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ffc8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000006ffab
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000006ff8e
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006ff71
- (unsigned long long)count;	// IMP=0x000000000006ff54
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ff1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ff13
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000006fee3
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000006fe2e
- (_Bool)_isDeallocating;	// IMP=0x000000000006fdf6
- (_Bool)_tryRetain;	// IMP=0x000000000006fdb9
- (unsigned long long)retainCount;	// IMP=0x000000000006fda1
- (oneway void)release;	// IMP=0x000000000006fd63
- (id)retain;	// IMP=0x000000000006fd42
- (id)initWithArray:(id)arg1 andContext:(id)arg2;	// IMP=0x000000000006fbe3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
