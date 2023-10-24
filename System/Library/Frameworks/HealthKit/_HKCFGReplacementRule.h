//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKCFGReplacementRule : NSObject
{
    NSString *_description;	// 8 = 0x8
    NSArray *_rightHandSide;	// 16 = 0x10
    CDUnknownBlockType _nodeEvaluator;	// 24 = 0x18
    unsigned long long _lengthIncrease;	// 32 = 0x20
}

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(CDUnknownBlockType)arg3;	// IMP=0x00600000000b3039
- (void).cxx_destruct;	// IMP=0x00000000000b3687
@property(readonly, nonatomic) unsigned long long lengthIncrease; // @synthesize lengthIncrease=_lengthIncrease;
@property(readonly, copy, nonatomic) CDUnknownBlockType nodeEvaluator; // @synthesize nodeEvaluator=_nodeEvaluator;
@property(copy, nonatomic) NSArray *rightHandSide; // @synthesize rightHandSide=_rightHandSide;
- (id)description;	// IMP=0x00000000000b366a

@end

