//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSArray, NSString;

@interface NSLocale (InternationalSupportExtensions)
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;	// IMP=0x002000000000741e
+ (id)_supportedKeyboardLanguages;	// IMP=0x002000000000740d
+ (id)_regionLanguageData;	// IMP=0x00200000000073fc
+ (id)_regionLanguageDataForRegionCode:(id)arg1 subdivisionCode:(id)arg2;	// IMP=0x0020000000007378
+ (id)_languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3;	// IMP=0x0020000000006b3c
+ (id)_languagesToExemplarStrings;	// IMP=0x0020000000006b2b
+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames *)arg2;	// IMP=0x0020000000006a5e
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;	// IMP=0x0020000000006937
+ (id)_minimizeSubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x0020000000006726
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;	// IMP=0x0020000000006661
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3 length:(unsigned long long)arg4;	// IMP=0x00200000000061fa
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;	// IMP=0x002000000000615d
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;	// IMP=0x00200000000060c0
+ (id)abbreviationsForLanguages:(id)arg1 minimizeVariants:(_Bool)arg2;	// IMP=0x00200000000058ed
+ (id)spokenLanguagesForLanguages:(id)arg1 includeLanguagesForRegion:(_Bool)arg2;	// IMP=0x0020000000004670
+ (id)spokenLanguagesForLanguage:(id)arg1;	// IMP=0x0020000000004489
+ (id)availableSpokenLanguages;	// IMP=0x0020000000004193
+ (id)languagesByAddingRelatedLanguagesToLanguages:(id)arg1;	// IMP=0x0020000000003d01
+ (id)relatedLanguagesForLanguage:(id)arg1;	// IMP=0x0020000000003859
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;	// IMP=0x0020000000003388
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;	// IMP=0x00200000000030e8
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 length:(unsigned long long)arg4;	// IMP=0x0020000000002f69
+ (id)minimizedLanguagesFromLanguages:(id)arg1;	// IMP=0x0020000000002a62
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;	// IMP=0x00200000000028f0
+ (id)scriptCodeFromLanguage:(id)arg1;	// IMP=0x0020000000002823
+ (id)baseLanguageFromLanguage:(id)arg1;	// IMP=0x002000000000263d
+ (id)containingRegionOfRegion:(id)arg1;	// IMP=0x00200000000025b0
+ (id)_containingRegionOfType:(int)arg1 forRegion:(id)arg2;	// IMP=0x0020000000002516
+ (id)containingContinentOfRegion:(id)arg1;	// IMP=0x00200000000024fc
+ (id)_availableRegionsOfType:(int)arg1;	// IMP=0x0020000000002419
+ (id)availableContinents;	// IMP=0x0020000000002402
+ (id)exemplarRegionForLanguage:(id)arg1;	// IMP=0x002000000000229b
+ (id)supportedRegions;	// IMP=0x00200000000021b2
+ (id)regionsForLanguage:(id)arg1 withThreshold:(long long)arg2;	// IMP=0x0020000000001f96
+ (id)languagesForRegion:(id)arg1 subdivision:(id)arg2 withThreshold:(long long)arg3 filter:(long long)arg4;	// IMP=0x0020000000001e91
+ (id)exemplarForLanguage:(id)arg1;	// IMP=0x0020000000001d96
+ (id)supportedLanguages;	// IMP=0x0020000000001d12
+ (id)_deviceLanguages;	// IMP=0x0020000000001aca
+ (id)baseSystemLanguages;	// IMP=0x0020000000001882
+ (id)_globalPreferredLanguages;	// IMP=0x0020000000001723
+ (id)deviceLanguage;	// IMP=0x002000000000170a
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(_Bool)arg4;	// IMP=0x001000000000616f
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;	// IMP=0x00100000000060d5
- (long long)positionOfDayPeriodInFormattedTime;	// IMP=0x00100000000057ef
- (id)countryCodeTopLevelDomainsUsingPunycode:(_Bool)arg1;	// IMP=0x001000000000542f
- (id)localizedStringForNumberingSystem:(id)arg1 short:(_Bool)arg2;	// IMP=0x00100000000052cc
@property(readonly, copy) NSArray *availableNumberingSystems;
@property(readonly, copy) NSString *numberingSystem;
- (_Bool)isEquivalentTo:(id)arg1;	// IMP=0x0010000000004c32
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(_Bool)arg3;	// IMP=0x001000000000304e
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2 length:(unsigned long long)arg3;	// IMP=0x0010000000002ecf
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;	// IMP=0x0010000000002eba
@end

