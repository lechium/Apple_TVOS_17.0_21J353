//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

__attribute__((visibility("hidden")))
@interface SCRCMathRadicalExpression : SCRCMathExpression
{
    SCRCMathExpression *_radicand;	// 24 = 0x18
    SCRCMathExpression *_rootIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016a4b
@property(retain, nonatomic) SCRCMathExpression *rootIndex; // @synthesize rootIndex=_rootIndex;
@property(retain, nonatomic) SCRCMathExpression *radicand; // @synthesize radicand=_radicand;
- (id)latexMathModeDescription;	// IMP=0x0000000000016926
- (id)mathMLString;	// IMP=0x000000000001679a
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000016306
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x0000000000015ef0
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000015d0a
- (unsigned long long)fractionLevel;	// IMP=0x0000000000015cf8
- (_Bool)_isCubeRoot;	// IMP=0x0000000000015c6e
- (_Bool)_isSquareRoot;	// IMP=0x0000000000015bba
- (id)subExpressions;	// IMP=0x0000000000015b34
- (id)description;	// IMP=0x0000000000015a6a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000015926

@end

