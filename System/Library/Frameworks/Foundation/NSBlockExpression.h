//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSBlockExpression : NSExpression
{
    CDUnknownBlockType _block;	// 24 = 0x18
    NSArray *_arguments;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000007732e0
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000077385b
- (unsigned long long)expressionType;	// IMP=0x0000000000773850
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x0000000000773660
- (id)predicateFormat;	// IMP=0x0000000000773625
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000007733da
- (id)arguments;	// IMP=0x00000000007733c9
- (CDUnknownBlockType)expressionBlock;	// IMP=0x00000000007733b8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000077337e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000077334a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007732e8
- (void)dealloc;	// IMP=0x0000000000773252
- (id)initWithType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 arguments:(id)arg3;	// IMP=0x00000000007731a7

@end

