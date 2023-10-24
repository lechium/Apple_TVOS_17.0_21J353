//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (SafariCoreExtras)
+ (id)safari_arrayWithObjectsUnlessNil:(id)arg1;	// IMP=0x002000000000d022
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x002000000000c1d4
+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;	// IMP=0x0020000000009aa3
+ (id)safari_arrayWithArray:(id)arg1 copyAction:(long long)arg2;	// IMP=0x002000000000983c
- (id)_safari_generatePermutations:(id)arg1 withPosition:(unsigned long long)arg2 permutationsArray:(id)arg3;	// IMP=0x001000000000d746
@property(readonly, nonatomic) NSArray *safari_allPermutations;
- (id)safari_dictionaryOfArraysByMappingObjectsToKeysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d4bd
- (id)safari_dictionaryByMappingObjectsAsKeysToObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d34c
- (id)safari_dictionaryByMappingObjectsToKeysUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d1db
- (id)safari_longestIncreasingSubsequenceUsingValues:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c9a3
- (id)safari_partionedArrayUsingCondition:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c7a4
- (id)safari_splitArrayUsingCondition:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c5aa
- (id)safari_objectAfter:(id)arg1;	// IMP=0x001000000000c53b
- (id)safari_objectBefore:(id)arg1;	// IMP=0x001000000000c4bd
- (id)safari_prefixWithMaxLength:(unsigned long long)arg1;	// IMP=0x001000000000c477
- (id)safari_flattenedArray;	// IMP=0x001000000000c247
- (id)safari_arrayByRemovingObject:(id)arg1;	// IMP=0x001000000000c154
- (id)safari_arrayByAddingObjectsFromArrayIfNotDuplicates:(id)arg1;	// IMP=0x001000000000c0ba
- (_Bool)safari_noObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bf81
- (_Bool)safari_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000be48
- (_Bool)safari_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bd50
- (id)safari_lastObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bc12
- (id)safari_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bad9
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4;	// IMP=0x001000000000b693
- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;	// IMP=0x001000000000b28d
- (id)safari_diffWithArray:(id)arg1;	// IMP=0x001000000000b19f
- (id)safari_minimumUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b0e5
- (id)safari_maximumUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x001000000000afc3
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000adf3
- (id)safari_reduceObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000addc
- (id)safari_filterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ac84
- (id)safari_mapObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ac72
- (id)safari_orderedSetByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000aae7
- (id)safari_setByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a875
- (void)safari_enumerateAsynchronouslyOnQueue:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a6cd
- (void)safari_enumerateOutwardFromIndex:(unsigned long long)arg1 otherIndex:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a357
- (void)safari_enumerateOutwardFromIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a1fa
- (void)safari_enumerateZippedValuesWithArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a058
- (id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009e28
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009d5e
- (id)safari_arrayAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000009d07
- (id)safari_dictionaryAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000009cb0
- (id)safari_URLAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000009c59
- (id)safari_stringAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000009c02
- (id)safari_numberAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000009bab
@end
