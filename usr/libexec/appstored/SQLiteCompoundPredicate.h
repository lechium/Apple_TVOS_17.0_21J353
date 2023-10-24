//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SQLiteCompoundPredicate
{
    NSString *_combinationOperation;	// 8 = 0x8
    NSArray *_predicates;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x0020000000146b15
+ (id)predicateMatchingAnyPredicates:(id)arg1;	// IMP=0x0010000000146a8d
+ (id)predicateMatchingAllPredicates:(id)arg1;	// IMP=0x0010000000146a05
- (void).cxx_destruct;	// IMP=0x002000000014749e
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x00100000001472bf
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000147037
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000146f2d
- (unsigned long long)hash;	// IMP=0x0010000000146e95
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0010000000146d38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000146d2d

@end
