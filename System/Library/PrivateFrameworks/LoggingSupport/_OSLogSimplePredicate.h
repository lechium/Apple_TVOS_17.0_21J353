//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPredicate, NSSet;

__attribute__((visibility("hidden")))
@interface _OSLogSimplePredicate : NSObject
{
    NSSet *_keys;	// 8 = 0x8
    NSSet *_operators;	// 16 = 0x10
    NSMutableArray *_stack;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002dab4
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x000000000002daae
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000002daad
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000002d9ee
- (void)processCompoundPredicate:(id)arg1;	// IMP=0x000000000002d6c9
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x000000000002d55f
- (_Bool)isSupportedExpression:(id)arg1;	// IMP=0x000000000002d4d6
- (id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3;	// IMP=0x000000000002d36f

@end

