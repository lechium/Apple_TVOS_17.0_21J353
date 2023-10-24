//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SQLiteQuery;

@interface SQLiteContainsPredicate
{
    _Bool _negative;	// 16 = 0x10
    SQLiteQuery *_query;	// 24 = 0x18
    NSString *_queryProperty;	// 32 = 0x20
    id _values;	// 40 = 0x28
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x002000000006d1f4
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;	// IMP=0x001000000006d103
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x001000000006d042
- (void).cxx_destruct;	// IMP=0x002000000006d870
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) SQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000006d63d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006d434
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x001000000006d2c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006d2b5

@end

