//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (NSKeyValueCoding)
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x005000000070ee19
+ (_Bool)supportsSecureCoding;	// IMP=0x005000000070e9f3
- (id)valueForKeyPath:(id)arg1;	// IMP=0x001000000067fe68
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000067fd5d
- (id)valueForKey:(id)arg1;	// IMP=0x001000000067fb01
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;	// IMP=0x001000000067f989
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;	// IMP=0x001000000067f81b
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;	// IMP=0x001000000067f6a3
- (id)_minForKeyPath:(id)arg1;	// IMP=0x001000000067f546
- (id)_maxForKeyPath:(id)arg1;	// IMP=0x001000000067f3e9
- (id)_countForKeyPath:(id)arg1;	// IMP=0x001000000067f3b4
- (id)_avgForKeyPath:(id)arg1;	// IMP=0x001000000067f33b
- (id)_sumForKeyPath:(id)arg1;	// IMP=0x001000000067f17b
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000691c45
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x0010000000691bd9
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x0010000000691b6d
- (id)filteredSetUsingPredicate:(id)arg1;	// IMP=0x00100000006e5dc1
- (Class)classForCoder;	// IMP=0x001000000070ee08
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000070e9fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000070e646
- (id)sortedArrayUsingDescriptors:(id)arg1;	// IMP=0x0010000000714c70
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000007a4b3a
@end
