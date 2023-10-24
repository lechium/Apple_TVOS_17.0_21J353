//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSDictionary, NSNumber, NSPredicateOperator;

__attribute__((visibility("hidden")))
@interface AVAssetVariantRenditionSpecificAttributePredicate : NSPredicate
{
    NSNumber *_value;	// 16 = 0x10
    NSDictionary *_mediaSelectionOptionPlist;	// 24 = 0x18
    NSPredicateOperator *_operator;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000013992f
@property(readonly, nonatomic) NSDictionary *mediaSelectionOptionPlist; // @synthesize mediaSelectionOptionPlist=_mediaSelectionOptionPlist;
- (void)dealloc;	// IMP=0x0000000000139e0f
- (id)description;	// IMP=0x0000000000139d53
- (id)predicateFormat;	// IMP=0x0000000000139d46
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000139d2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139d20
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;	// IMP=0x0000000000139c9a
- (id)valueForAlternate:(id)arg1;	// IMP=0x0000000000139c67
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000139a4e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000139937
- (id)initWithValue:(id)arg1 mediaSelectionOption:(id)arg2 operatorType:(unsigned long long)arg3;	// IMP=0x00000000001397e2

@end

