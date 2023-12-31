//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface _NSSwiftLocale
{
    MISSING_TYPE *locale;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000033ace0
- (void).cxx_destruct;	// IMP=0x000000000033fe70
- (_Bool)_doesNotRequireSpecialCaseHandling;	// IMP=0x000000000033fe00
- (id)_localeWithNewCalendarIdentifier:(id)arg1;	// IMP=0x000000000033fb20
- (id)_numberingSystem;	// IMP=0x000000000033f9c0
- (id)_prefForKey:(id)arg1;	// IMP=0x000000000033f820
- (id)localizedStringForCollatorIdentifier:(id)arg1;	// IMP=0x000000000033f670
- (id)localizedStringForCurrencySymbol:(id)arg1;	// IMP=0x000000000033f590
- (id)localizedStringForCurrencyCode:(id)arg1;	// IMP=0x000000000033f570
- (id)localizedStringForCollationIdentifier:(id)arg1;	// IMP=0x000000000033f550
- (id)localizedStringForCalendarIdentifier:(id)arg1;	// IMP=0x000000000033f4c0
- (id)localizedStringForVariantCode:(id)arg1;	// IMP=0x000000000033f440
- (id)localizedStringForScriptCode:(id)arg1;	// IMP=0x000000000033f420
- (id)localizedStringForCountryCode:(id)arg1;	// IMP=0x000000000033f400
- (id)localizedStringForLanguageCode:(id)arg1;	// IMP=0x000000000033f3e0
- (id)localizedStringForLocaleIdentifier:(id)arg1;	// IMP=0x000000000033f320
@property(nonatomic, readonly) _Bool usesMetricSystem;
@property(nonatomic, readonly) NSCharacterSet *exemplarCharacterSet;
@property(nonatomic, readonly) NSString *alternateQuotationEndDelimiter;
@property(nonatomic, readonly) NSString *alternateQuotationBeginDelimiter;
@property(nonatomic, readonly) NSString *quotationEndDelimiter;
@property(nonatomic, readonly) NSString *quotationBeginDelimiter;
@property(nonatomic, readonly) NSString *collatorIdentifier;
@property(nonatomic, readonly) NSString *currencyCode;
@property(nonatomic, readonly) NSString *currencySymbol;
@property(nonatomic, readonly) NSString *groupingSeparator;
@property(nonatomic, readonly) NSString *decimalSeparator;
@property(nonatomic, readonly) NSString *collationIdentifier;
@property(nonatomic, readonly) NSString *calendarIdentifier;
@property(nonatomic, readonly) NSString *variantCode;
@property(nonatomic, readonly) NSString *scriptCode;
@property(nonatomic, readonly) NSString *regionCode;
@property(nonatomic, readonly) NSString *countryCode;
@property(nonatomic, readonly) NSString *languageIdentifier;
@property(nonatomic, readonly) NSString *languageCode;
@property(nonatomic, readonly) NSString *localeIdentifier;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000033d350
- (id)objectForKey:(id)arg1;	// IMP=0x000000000033c8b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033b8a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033b400
- (id)initWithLocaleIdentifier:(id)arg1;	// IMP=0x000000000033acb0
@property(nonatomic, readonly) Class classForCoder;

@end

