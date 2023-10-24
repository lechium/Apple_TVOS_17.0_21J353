//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMConditionalExpression : NSObject
{
    _Bool _isNegated;	// 8 = 0x8
    NSArray *_operations;	// 16 = 0x10
    NSSet *_dependentPathStrings;	// 24 = 0x18
}

+ (id)expressionFromString:(id)arg1;	// IMP=0x0060000000010bb4
+ (id)parseExpressionsFromString:(id)arg1;	// IMP=0x00600000000109b0
- (void).cxx_destruct;	// IMP=0x0000000000011519
@property(readonly, copy, nonatomic) NSSet *dependentPathStrings; // @synthesize dependentPathStrings=_dependentPathStrings;
- (_Bool)passesForDataItem:(id)arg1;	// IMP=0x0000000000011396
- (id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(_Bool)arg3;	// IMP=0x00000000000112d4

@end

