//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AMSSQLiteComparisonPredicate
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x0010000000378f43
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x0010000000378f2b
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x0010000000378ea4
- (void).cxx_destruct;	// IMP=0x00000000003793b9
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;	// IMP=0x000000000037936a
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000003792aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000379170
- (unsigned long long)hash;	// IMP=0x00000000003790e4
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0000000000379041
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000379036

@end

