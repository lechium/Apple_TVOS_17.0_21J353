//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (PKAdditions)
+ (id)pk_stringWithBCData:(id)arg1;	// IMP=0x006000000027897c
+ (id)pk_stringWithInteger:(unsigned long long)arg1;	// IMP=0x0060000000278957
- (id)pk_merchantTokensSanitizedBillingAgreement;	// IMP=0x0010000000278a92
- (id)pk_stringIfNotEmpty;	// IMP=0x0010000000278a67
- (id)pk_decodeURLBase64;	// IMP=0x001000000027889a
- (id)pk_decodeHexadecimal;	// IMP=0x001000000027879a
- (double)pk_normalizedLevenshteinDistanceFromString:(id)arg1 decimalPlaces:(unsigned long long)arg2;	// IMP=0x001000000027864a
- (id)pk_attributedString;	// IMP=0x0010000000278614
- (id)pk_uppercaseAttributedString;	// IMP=0x00100000002785ab
- (id)pk_uppercaseFirstStringForLocale:(id)arg1;	// IMP=0x0010000000278498
- (id)pk_uppercaseFirstStringForPreferredLocale;	// IMP=0x0010000000278432
- (id)pk_capitalizedStringForPreferredLocale;	// IMP=0x00100000002783cc
- (id)pk_lowercaseStringForPreferredLocale;	// IMP=0x0010000000278366
- (id)pk_uppercaseStringForPreferredLocale;	// IMP=0x0010000000278300
- (id)pk_zString;	// IMP=0x00100000002782dc
- (id)truncatedStringWithEllipsis;	// IMP=0x0010000000570c81
- (id)jsonStringSetValue;	// IMP=0x0010000000570b0f
- (id)jsonArrayValue;	// IMP=0x00100000005709bf
- (id)jsonNonZeroUnsignedLongLongNSNumberSetValue;	// IMP=0x001000000057095f
- (id)jsonNonZeroUnsignedLongLongNSNumberArrayValue;	// IMP=0x00100000005708aa
- (id)nonZeroUnsignedLongLongNSNumberValue;	// IMP=0x00100000005707c4
@end

