//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (NSArray)
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00600000005f0680
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;	// IMP=0x00600000005f04e3
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00600000005f04af
+ (id)arrayWithContentsOfURL:(id)arg1;	// IMP=0x00600000005f0480
+ (id)arrayWithContentsOfFile:(id)arg1;	// IMP=0x00600000005f0451
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00600000005eff02
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005f0d06
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x00100000005f0c03
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;	// IMP=0x00100000005f0aac
- (id)_stringToWrite;	// IMP=0x00100000005f0a52
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005f089c
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x00100000005f0865
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00100000005f082e
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;	// IMP=0x00100000005f0382
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;	// IMP=0x00100000005f006a
- (id)sortedArrayHint;	// IMP=0x00100000005eff0a
- (Class)classForCoder;	// IMP=0x00100000005efef1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005efaf0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000005ef695
- (id)debugDescription;	// IMP=0x00100000005ef492
- (id)valueForKeyPath:(id)arg1;	// IMP=0x001000000067e219
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000067e10e
- (id)valueForKey:(id)arg1;	// IMP=0x001000000067de7b
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;	// IMP=0x001000000067ddd8
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;	// IMP=0x001000000067dd96
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;	// IMP=0x001000000067dd54
- (id)_unionOfSetsForKeyPath:(id)arg1;	// IMP=0x001000000067dca8
- (id)_unionOfArraysForKeyPath:(id)arg1;	// IMP=0x001000000067dc11
- (id)_unionOfObjectsForKeyPath:(id)arg1;	// IMP=0x001000000067db7a
- (id)_minForKeyPath:(id)arg1;	// IMP=0x001000000067dae2
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x001000000067da4a
- (id)_countForKeyPath:(id)arg1;	// IMP=0x001000000067da15
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x001000000067d99c
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x001000000067d87f
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;	// IMP=0x001000000068206c
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;	// IMP=0x0010000000682029
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000681ff5
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000681fc1
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000681f8d
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000681f59
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00100000006919bd
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0010000000691951
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00100000006918e5
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;	// IMP=0x00100000006917ba
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void *)arg4;	// IMP=0x001000000069157c
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;	// IMP=0x0010000000691435
- (id)arrayByApplyingDifference:(id)arg1;	// IMP=0x00100000006ba5cb
- (id)differenceFromArray:(id)arg1;	// IMP=0x00100000006ba5b7
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00100000006ba59e
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;	// IMP=0x00100000006b9207
- (id)stringsByAppendingPathComponent:(id)arg1;	// IMP=0x00100000006d6010
- (id)pathsMatchingExtensions:(id)arg1;	// IMP=0x00100000006d5f25
- (id)filteredArrayUsingPredicate:(id)arg1;	// IMP=0x00100000006e582c
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x001000000071524c
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000007a47a8
@end

