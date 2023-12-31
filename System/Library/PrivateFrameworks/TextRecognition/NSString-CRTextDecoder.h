//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CRTextDecoder)
+ (id)_crLocaleForNLLanguage:(id)arg1;	// IMP=0x001000000005d469
+ (long long)editDistance:(id)arg1 string:(id)arg2 threshold:(long long)arg3;	// IMP=0x001000000007a9ef
+ (long long)editDistance:(id)arg1 string:(id)arg2;	// IMP=0x001000000007a8e7
- (id)combinedTokenSequenceString;	// IMP=0x001000000005c591
- (id)_crStringByRemovingParenthesizedText;	// IMP=0x001000000005daa9
- (id)_crReplacedUkrainianApostrophes;	// IMP=0x001000000005d944
- (id)_crArrayOfComposedCharacters;	// IMP=0x001000000005d848
- (id)_crStringByPreparingForLanguageRecognition;	// IMP=0x001000000005d6d3
- (id)_crPredictedLocaleUsingRecognizer:(id)arg1 resetContext:(_Bool)arg2;	// IMP=0x001000000005d275
- (id)_crStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000005d1ec
- (unsigned long long)_crCountConsecutiveCharactersAtIndex:(unsigned long long)arg1 fromSet:(id)arg2;	// IMP=0x001000000005d136
- (_Bool)_codePointIsLatinCyrillicGreek:(unsigned short)arg1;	// IMP=0x001000000005d093
- (_Bool)_codePointIsSpaceSeparatedScript:(unsigned short)arg1;	// IMP=0x001000000005d01f
- (_Bool)_crEndsWithHyphen;	// IMP=0x001000000005cf4d
- (id)_crStringByAppendingString:(id)arg1 locale:(id)arg2 mergeHyphenatedWord:(_Bool)arg3 allowWhitespaceDelimiter:(_Bool)arg4;	// IMP=0x001000000005ca6a
- (id)_crStringByAppendingString:(id)arg1 locale:(id)arg2 mergeHyphenatedWord:(_Bool)arg3;	// IMP=0x001000000005ca52
- (id)_crStringByAppendingString:(id)arg1 locale:(id)arg2;	// IMP=0x001000000005ca3d
- (_Bool)_crIsAllCaps;	// IMP=0x001000000005c9a5
- (_Bool)_crContainsCharactersInSet:(id)arg1;	// IMP=0x001000000005c982
- (_Bool)_crStartsWithCharacterInSet:(id)arg1;	// IMP=0x001000000005c969
- (_Bool)_crStartsWithLowercase;	// IMP=0x001000000005c7e2
- (_Bool)_crStartsWithUppercase;	// IMP=0x001000000005c65b
- (_Bool)_crContainsText;	// IMP=0x001000000005c603
- (long long)editDistanceFromStringIgnoringSpaces:(id)arg1 threshold:(long long)arg2;	// IMP=0x001000000007a928
- (long long)editDistanceFromString:(id)arg1 threshold:(long long)arg2;	// IMP=0x001000000007a906
- (long long)editDistanceFromString:(id)arg1;	// IMP=0x001000000007a8c2
- (id)safeSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x001000000007ad2b
- (_Bool)_crIsSentencePunctuatedIncludingWhitespace:(_Bool)arg1;	// IMP=0x00100000000965ca
- (_Bool)_crIsProgrammingStatement;	// IMP=0x001000000009633f
- (_Bool)_crIsListItemMarker;	// IMP=0x00100000000962b0
- (_Bool)_crIsStartOfSentence;	// IMP=0x0010000000096277
- (_Bool)_crEndsWithClosingPunctuation;	// IMP=0x00100000000961b5
- (_Bool)_crEndsWithMOS;	// IMP=0x00100000000960f3
- (_Bool)_crEndsWithEOS;	// IMP=0x0010000000096031
- (_Bool)_crEndsWithDigit;	// IMP=0x0010000000095f88
- (_Bool)_crStartsWithDigit;	// IMP=0x0010000000095f17
- (_Bool)_crStartsWithListItemIndicator;	// IMP=0x0010000000095efb
- (_Bool)_crStartsWithBOS;	// IMP=0x0010000000095e78
- (id)_compositeRegexForReplacing:(id)arg1 nonspaceLeft:(_Bool)arg2 nonspaceRight:(_Bool)arg3;	// IMP=0x0010000000117f43
- (id)_crDDFriendlyTextWithIndexMapping:(id *)arg1;	// IMP=0x0010000000117211
- (id)initWithCRCodableDataRepresentation:(id)arg1;	// IMP=0x001000000011dce4
- (id)crCodableDataRepresentation;	// IMP=0x001000000011dccd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

