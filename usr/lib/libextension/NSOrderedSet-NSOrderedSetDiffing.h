//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (NSOrderedSetDiffing)
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x0050000000611713
+ (_Bool)supportsSecureCoding;	// IMP=0x005000000061129b
- (id)orderedSetByApplyingDifference:(id)arg1;	// IMP=0x0010000000609996
- (id)differenceFromOrderedSet:(id)arg1;	// IMP=0x0010000000609982
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0010000000609267
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;	// IMP=0x00100000006091e3
- (Class)classForCoder;	// IMP=0x0010000000611702
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000061149c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000006112a3
- (id)valueForKeyPath:(id)arg1;	// IMP=0x001000000067eee8
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000067eddd
- (id)valueForKey:(id)arg1;	// IMP=0x001000000067eb81
- (id)_minForKeyPath:(id)arg1;	// IMP=0x001000000067eae9
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x001000000067ea51
- (id)_countForKeyPath:(id)arg1;	// IMP=0x001000000067ea1c
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x001000000067e9a3
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x001000000067e886
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;	// IMP=0x00100000006821c7
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;	// IMP=0x0010000000682184
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000682150
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x001000000068211c
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000006820e8
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;	// IMP=0x00100000006820b4
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000691b01
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0010000000691a95
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x0010000000691a29
- (id)filteredOrderedSetUsingPredicate:(id)arg1;	// IMP=0x00100000006e6134
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x00100000007156a9
@end

