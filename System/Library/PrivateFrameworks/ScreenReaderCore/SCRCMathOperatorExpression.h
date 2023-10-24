//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathOperatorExpression
{
    unsigned short _operatorChar;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;
- (id)mathMLString;	// IMP=0x00000000000158be
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000015812
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000015529
- (id)latexFormatStringAsOver;	// IMP=0x0000000000015481
- (_Bool)isFenceDelimiter;	// IMP=0x000000000001540d
- (_Bool)isOperationSymbol;	// IMP=0x00000000000153c4
- (_Bool)isTermSeparator;	// IMP=0x0000000000015383
- (_Bool)isEllipsis;	// IMP=0x0000000000015360
- (_Bool)isNaturalSuperscript;	// IMP=0x000000000001534e
- (_Bool)_isMinusSign;	// IMP=0x0000000000015335
- (_Bool)_isInvisibleCharacter;	// IMP=0x0000000000015318
- (_Bool)_isRingOperator;	// IMP=0x00000000000152ff
- (_Bool)canBeUsedWithRange;	// IMP=0x00000000000152b2
- (_Bool)_isSummation;	// IMP=0x0000000000015299
- (_Bool)_isUnionOrIntersection;	// IMP=0x000000000001526d
- (_Bool)_isIntegral;	// IMP=0x0000000000015250
- (id)description;	// IMP=0x00000000000151d1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000150bf

@end

