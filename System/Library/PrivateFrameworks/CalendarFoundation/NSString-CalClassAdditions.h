//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CalClassAdditions)
+ (id)CalAutoCommentPrefix;	// IMP=0x0050000000014ae7
+ (id)stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x0050000000014821
+ (id)stringWithContentsOfFile:(id)arg1 usingEncoding:(unsigned long long)arg2;	// IMP=0x005000000001407f
+ (id)ellipsisString;	// IMP=0x0050000000013ee0
- (id)cal_stringWithNormalizedSpacesForUnitTesting;	// IMP=0x0010000000014d9e
- (id)CalStringWithOnlyAutoComment;	// IMP=0x0010000000014ce2
- (id)CalStringByRemovingAutoComment;	// IMP=0x0010000000014c42
- (_Bool)CalHasAutoCommentPrefix;	// IMP=0x0010000000014b60
- (id)stringByRemovingPrefixCaseInsensitive:(id)arg1;	// IMP=0x0010000000014a55
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000007d1f
- (id)stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x0010000000014a3c
- (id)stringByTrimmingWhitespaceAndRemovingNewlines;	// IMP=0x0010000000007c6c
- (id)CalSafeHFSPathComponentName;	// IMP=0x00100000000149ca
- (id)appendSlashIfNeeded;	// IMP=0x0010000000004922
- (id)removeSlashIfNeeded;	// IMP=0x001000000000ec43
- (id)CalSafeFilename;	// IMP=0x0010000000014892
- (id)searchAndReplaceString:(id)arg1 withString:(id)arg2;	// IMP=0x001000000001468f
- (id)unquote;	// IMP=0x00100000000046fa
- (id)quote;	// IMP=0x001000000000249d
- (id)trimWhiteSpace;	// IMP=0x0010000000002455
- (id)trimCommas;	// IMP=0x001000000001463f
- (id)trimFirstComma;	// IMP=0x00100000000145d6
- (id)trimFinalComma;	// IMP=0x001000000001454e
- (id)trimChar:(unsigned short)arg1;	// IMP=0x00100000000144f1
- (id)trimFirstChar:(unsigned short)arg1;	// IMP=0x0010000000014486
- (id)trimFinalChar:(unsigned short)arg1;	// IMP=0x00100000000143fc
- (_Bool)CalContainsSubstring:(id)arg1;	// IMP=0x00100000000143d4
- (_Bool)isPathToICalBookmark;	// IMP=0x0010000000014361
- (_Bool)isPathToBackupFile;	// IMP=0x00100000000142ec
- (_Bool)isPathToICalData;	// IMP=0x0010000000014277
- (_Bool)isPathToVCalData;	// IMP=0x001000000001419a
- (_Bool)isPathToAppleScript;	// IMP=0x0010000000014125
- (void)cal_enumerateCharactersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013fac
- (id)stringByDecodingSlashes;	// IMP=0x001000000000ecee
- (id)stringByEncodingSlashes;	// IMP=0x001000000000eca9
- (id)RTLString;	// IMP=0x0010000000013ebb
- (id)directionalityIsolatedString;	// IMP=0x0010000000013e96
- (_Bool)isEqualAsURL:(id)arg1;	// IMP=0x001000000000484e
- (id)CalAddressComment;	// IMP=0x001000000001392b
- (id)CalUncommentedAddress;	// IMP=0x00100000000135ee
- (id)calDataDetectedURL;	// IMP=0x00100000000133b1
- (id)phoneURL;	// IMP=0x0010000000013108
- (_Bool)cal_isPhoneNumber;	// IMP=0x0010000000012e4c
- (_Bool)isPhoneNumber;	// IMP=0x0010000000012e3a
- (id)radarLink;	// IMP=0x0010000000010145
- (_Bool)isMessagesURL;	// IMP=0x0010000000012e21
- (_Bool)isAddressBookURL;	// IMP=0x00100000000098e9
- (_Bool)isMailURL;	// IMP=0x001000000000977d
- (id)stringRemovingTel;	// IMP=0x0010000000012dc5
- (id)stringAddingTel;	// IMP=0x0010000000012d73
- (_Bool)hasTel;	// IMP=0x0010000000012d5a
- (id)stringRemovingMailto;	// IMP=0x00100000000047f2
- (id)stringAddingMailto;	// IMP=0x0010000000012d08
- (id)hostFromEmail;	// IMP=0x0010000000012c8d
- (id)userFromEmail;	// IMP=0x0010000000012c10
- (_Bool)resemblesEmailAddress;	// IMP=0x001000000000a45a
- (_Bool)hasMailto;	// IMP=0x00100000000047b1
- (_Bool)isEqualToStringCaseInsensitive:(id)arg1;	// IMP=0x0010000000012bef
- (_Bool)containsCaseAndDiacriticInsensitive:(id)arg1;	// IMP=0x0010000000012bc7
- (_Bool)containsCaseInsensitive:(id)arg1;	// IMP=0x0010000000012b9f
- (_Bool)hasSuffixCaseInsensitive:(id)arg1;	// IMP=0x0010000000012b07
- (_Bool)hasPrefixCaseAndDiacriticInsensitive:(id)arg1;	// IMP=0x001000000000b8ea
- (_Bool)hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x00100000000047ca
- (id)stringByRemovingLastPathComponent;	// IMP=0x0010000000012ab0
- (id)stringByURLUnescapingAllReservedCharacters;	// IMP=0x0010000000012a9e
- (id)stringByURLEscapingAllReservedCharacters;	// IMP=0x00100000000129cc
- (id)stringByURLQuotingPaths;	// IMP=0x0010000000012966
- (id)stringByURLQuoting;	// IMP=0x0010000000012894
- (id)stringByURLUnquoting;	// IMP=0x001000000000497b
- (id)stringByExpandingTildeToNonSandboxHome;	// IMP=0x0010000000002a8a
@end

