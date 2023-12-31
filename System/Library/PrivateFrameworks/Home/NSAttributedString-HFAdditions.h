//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class NSString;

@interface NSAttributedString (HFAdditions)
+ (id)hf_attributedStringWithInflectableAccessoryStatus:(id)arg1 accessoryName:(id)arg2 forcePluralAgreement:(_Bool)arg3;	// IMP=0x00100000001bcc62
+ (id)hf_attributedStringWithInflectableAccessoryStatus:(id)arg1 accessoryName:(id)arg2;	// IMP=0x00100000001bcc46
+ (id)hf_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(_Bool)arg3;	// IMP=0x00100000001bca18
+ (id)hf_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;	// IMP=0x00100000001bc33a
+ (id)hf_loadFromHTMLWithString:(id)arg1 options:(id)arg2;	// IMP=0x00100000001bc0ff
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;	// IMP=0x00100000001bb8ea
+ (id)hf_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00100000001bb6e2
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00100000001bb6b5
+ (id)hf_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;	// IMP=0x00100000001bb613
+ (id)hf_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;	// IMP=0x00100000001bb4a5
- (id)hf_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;	// IMP=0x00100000001bc045
- (id)hf_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;	// IMP=0x00100000001bbf3e
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00100000001bbb4a
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1;	// IMP=0x00100000001bbae0
- (id)hf_scaledAttributedStringWithBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x00100000001bb42b
- (id)hf_attributedStringScaledByFactor:(double)arg1;	// IMP=0x00100000001bb3e6
- (double)hf_scaleFactorForBoundingSize:(struct CGSize)arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;	// IMP=0x00100000001bb338
- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;	// IMP=0x00100000002aa9c8
- (_Bool)prefersDynamicString;	// IMP=0x00100000002aa9c0
- (id)stringWithAttributes:(id)arg1;	// IMP=0x00100000002aa956
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;	// IMP=0x00100000002aa944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

