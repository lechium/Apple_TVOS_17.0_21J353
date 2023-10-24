//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSData;

@interface NSString (SafariCoreExtras)
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x002000000002a333
+ (id)safari_stringAsHexWithData:(id)arg1;	// IMP=0x002000000002a29f
+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000029735
- (id)safari_fixedStringByExpandingTildeInPathToUserHomeDirectory;	// IMP=0x001000000002db74
- (id)safari_stringByDeletingTrailingSlash;	// IMP=0x001000000002db0e
- (id)safari_stringByDeletingStartingSlash;	// IMP=0x001000000002dab7
@property(readonly, nonatomic) NSString *safari_stringByRemovingWrappingParenthesis;
@property(readonly, nonatomic) NSString *safari_stringByRemovingWrappingSingleQuotes;
- (unsigned long long)safari_indexOfFirstAppearanceOfCharacter:(unsigned short)arg1;	// IMP=0x001000000002d915
@property(readonly, nonatomic) _Bool safari_containsCJKCharacters;
@property(readonly, copy, nonatomic) NSString *safari_urlStringSuppressingHTTPFamilySchemeAndWWWSubdomain;
@property(readonly, copy, nonatomic) NSString *safari_urlStringForCompletionDeduplication;
@property(readonly, nonatomic) _Bool safari_allowsLooserMatchingInSearch;
@property(readonly, nonatomic) _Bool safari_isPrefixOfWwwDot;
- (id)safari_bestURLForUserTypedString;	// IMP=0x001000000002d6bc
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForUserTypedStringWhenAddingPasswordInPasswordManager;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForPasswordManager;
- (id)safari_bundleIdentifierFromApplicationIdentifier:(id *)arg1;	// IMP=0x001000000002d443
- (unsigned long long)safari_numberOfComposedCharacters;	// IMP=0x001000000002d346
- (_Bool)_safari_looksLikeWillRedirectToURLStringAfterAuthentication:(id)arg1 orHostAfterLogin:(id)arg2;	// IMP=0x001000000002cc13
- (_Bool)safari_looksLikeWillRedirectToHostAfterAuthentication:(id)arg1;	// IMP=0x001000000002cbfc
- (_Bool)safari_looksLikeWillRedirectToURLStringAfterAuthentication:(id)arg1;	// IMP=0x001000000002cbe8
@property(readonly, copy, nonatomic) NSString *safari_suggestedFilenameFromTitleString;
@property(readonly, copy, nonatomic) NSString *safari_monogramString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingExcessWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_possibleTopLevelDomainCorrectionForUserTypedString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwAndWildcardDotPrefixes;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwDotPrefix;
- (long long)safari_localizedCompareSortingEmptyStringAndNumericPrefixToEnd:(id)arg1;	// IMP=0x001000000002bf92
@property(readonly, copy, nonatomic) NSString *safari_domainFromHost;
- (unsigned long long)safari_countOfString:(id)arg1;	// IMP=0x001000000002bd9f
@property(readonly, copy, nonatomic) NSString *safari_stringByRedactingBookmarkDAVServerID;
@property(readonly, nonatomic) _Bool safari_looksLikeEmailAddress;
@property(readonly, nonatomic) _Bool safari_looksLikeIPAddress;
- (id)safari_stringByRepeatingWithCount:(unsigned long long)arg1 joinedByString:(id)arg2;	// IMP=0x001000000002bac6
- (id)safari_setOfAllSubstringsWithMinimumLength:(unsigned long long)arg1;	// IMP=0x001000000002b9e4
- (_Bool)safari_containsAllCharactersInString:(id)arg1;	// IMP=0x001000000002b8db
- (_Bool)safari_isVersionStringBetweenVersionString:(id)arg1 andVersionString:(id)arg2;	// IMP=0x001000000002b832
- (_Bool)safari_isVersionStringGreaterThanOrEqualToVersionString:(id)arg1;	// IMP=0x001000000002b813
- (_Bool)safari_isVersionStringGreaterThanVersionString:(id)arg1;	// IMP=0x001000000002b7f4
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSafariBundleVersionFromFullVersion;
@property(readonly, copy, nonatomic) NSString *safari_stringByNormalizingVersionString;
@property(readonly, copy, nonatomic) NSString *safari_stringByReplacingHomoglyphForSpaceWithSpace;
@property(readonly, nonatomic) _Bool safari_containsPeriodOrHomoglyphForPeriod;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000002b37e
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000002b355
- (_Bool)safari_anyComponentSeparatedByString:(id)arg1 hasLocalizedCaseInsensitivePrefix:(id)arg2;	// IMP=0x001000000002b1be
- (_Bool)_safari_hasLocalizedPrefix:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x001000000002b0e1
- (_Bool)safari_hasLocalizedCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x001000000002b0ca
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;	// IMP=0x001000000002b0b3
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;	// IMP=0x001000000002b045
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x001000000002afd7
- (_Bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;	// IMP=0x001000000002af73
- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;	// IMP=0x001000000002af0f
- (_Bool)safari_isHostOrSubdomainOfHost:(id)arg1;	// IMP=0x001000000002ae63
- (id)safari_substringFromPrefix:(id)arg1;	// IMP=0x001000000002adbd
- (_Bool)safari_hasPrefix:(id)arg1;	// IMP=0x001000000002ad62
@property(readonly, copy, nonatomic) NSString *safari_separateResourceForkPath;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedSiteNameForCredentialLookup;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;	// IMP=0x001000000002a3dd
@property(readonly, nonatomic) NSData *safari_base64DecodedData;
- (id)safari_highLevelDomainFromHostComponents:(id)arg1;	// IMP=0x001000000002a1eb
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainFromHost;
@property(readonly, copy, nonatomic) NSString *safari_filenameByFixingIllegalCharacters;
@property(readonly, nonatomic) _Bool safari_containsInteriorWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_stringByTrimmingWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_effectiveTopLevelDomainForHost;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;	// IMP=0x00100000000299b8
@end

