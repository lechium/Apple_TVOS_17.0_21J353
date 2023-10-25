//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@interface NSLocale (Foundation)
+ (id)_localeIdentifierByAddingLikelySubtags:(id)arg1;	// IMP=0x002000000033a170
+ (id)_localeIdentifierByReplacingLanguageCodeAndScriptCodeForLangCode:(id)arg1 desiredComponents:(id)arg2;	// IMP=0x002000000033a0f0
+ (id)_validNumberingSystemsForLocaleIdentifier:(id)arg1;	// IMP=0x002000000033a0a0
+ (id)_numberingSystemForLocaleIdentifier:(id)arg1;	// IMP=0x002000000033a040
+ (unsigned long long)_lineDirectionForLanguage:(id)arg1;	// IMP=0x0020000000339fe0
+ (unsigned long long)_characterDirectionForLanguage:(id)arg1;	// IMP=0x0020000000339fa0
+ (unsigned int)_windowsLocaleCodeFromLocaleIdentifier:(id)arg1;	// IMP=0x0020000000339f30
+ (id)_localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;	// IMP=0x0020000000339ee0
+ (id)_canonicalLanguageIdentifierFromString:(id)arg1;	// IMP=0x0020000000339e30
+ (id)_canonicalLocaleIdentifierFromString:(id)arg1;	// IMP=0x0020000000339d80
+ (id)_localeIdentifierFromComponents:(id)arg1;	// IMP=0x0020000000339d20
+ (id)_componentsFromLocaleIdentifier:(id)arg1;	// IMP=0x0020000000339c60
+ (id)_preferredLanguages;	// IMP=0x0020000000339b90
+ (id)_commonISOCurrencyCodes;	// IMP=0x0020000000339b50
+ (id)_isoCurrencyCodes;	// IMP=0x0020000000339b20
+ (id)_isoCountryCodes;	// IMP=0x0020000000339a60
+ (id)_isoLanguageCodes;	// IMP=0x0020000000339a20
+ (id)_availableLocaleIdentifiers;	// IMP=0x0020000000339a00
+ (id)_preferredLanguagesForCurrentUser:(_Bool)arg1;	// IMP=0x00200000003399b0
+ (void)_resetCurrent;	// IMP=0x0020000000339940
+ (id)_currentLocaleWithBundleLocalizations:(id)arg1 disableBundleMatching:(_Bool)arg2;	// IMP=0x0020000000339900
+ (id)_newLocaleAsIfCurrent:(id)arg1 overrides:(const struct __CFDictionary *)arg2 disableBundleMatching:(_Bool)arg3;	// IMP=0x0020000000339880
+ (id)_newLocaleWithIdentifier:(id)arg1;	// IMP=0x00200000003397e0
+ (id)_system;	// IMP=0x0020000000339740
+ (id)_current;	// IMP=0x0020000000339700
+ (id)_autoupdatingCurrent;	// IMP=0x00200000003396e0
+ (id)autoupdatingCurrentLocale;	// IMP=0x00200000006a9640
+ (id)_preferredTemperatureUnit;	// IMP=0x00200000006aa31f
+ (void)_setPreferredTemperatureUnit:(id)arg1;	// IMP=0x00200000006aa312
+ (id)_preferredMeasurementSystem;	// IMP=0x00200000006aa300
+ (void)_setPreferredMeasurementSystem:(id)arg1;	// IMP=0x00200000006aa2f3
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;	// IMP=0x00200000006a9dfd
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x00200000006a9da9
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;	// IMP=0x00200000006a9c60
+ (void)setPreferredLanguages:(id)arg1;	// IMP=0x00200000006a9998
+ (id)systemLanguages;	// IMP=0x00200000006a998b
+ (id)preferredLocale;	// IMP=0x00200000006a9979
+ (id)__effectiveLanguageForBundle:(id)arg1;	// IMP=0x00200000006a988c
+ (id)_deviceLanguage;	// IMP=0x00200000006a9861
- (_Bool)_doesNotRequireSpecialCaseHandling;	// IMP=0x001000000033a2e0
- (id)_localeWithNewCalendarIdentifier:(id)arg1;	// IMP=0x001000000033a1f0
- (Class)classForCoder;	// IMP=0x00100000006a9787
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000006a96e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000006a9659
- (id)debugDescription;	// IMP=0x00100000006a95a6
@property(readonly) long long _calendarDirection;
- (id)_numberingSystem;	// IMP=0x00100000006aa33b
@end
