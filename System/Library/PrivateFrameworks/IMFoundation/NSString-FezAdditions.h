//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// IMP=0x0020000000002a3d
+ (id)randomString;	// IMP=0x00200000000029d3
+ (id)copyStringGUIDForObject:(id)arg1;	// IMP=0x00200000000029c1
+ (id)stringGUIDForObject:(id)arg1;	// IMP=0x00200000000029a7
+ (id)stringGUID;	// IMP=0x002000000000298d
+ (id)copyStringGUID;	// IMP=0x0020000000002927
- (_Bool)roomNameIsProbablyAutomaticallyGenerated;	// IMP=0x00100000000043f6
- (id)stringByRemovingCharactersFromSet:(id)arg1;	// IMP=0x00100000000042cc
- (id)stringWithLTREmbedding;	// IMP=0x00100000000042a7
- (id)pathStringForDisplay;	// IMP=0x0010000000004202
- (id)__stringByStrippingAttachmentAndControlCharacters;	// IMP=0x0010000000004190
- (id)__stringByStrippingControlCharacters;	// IMP=0x00100000000040ef
- (id)uniqueSavePath;	// IMP=0x0010000000003ffb
- (id)stringByRemovingWhitespace;	// IMP=0x0010000000003f95
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;	// IMP=0x0010000000003f1a
- (id)stringByResolvingAndStandardizingPath;	// IMP=0x0010000000003dfa
- (_Bool)_appearsToBeHardwareID;	// IMP=0x0010000000003de1
- (_Bool)_appearsToBePseudonymID;	// IMP=0x0010000000003dc8
- (_Bool)_appearsToBeTemporaryID;	// IMP=0x0010000000003daf
- (_Bool)_appearsToBeBusinessID;	// IMP=0x0010000000003d3e
- (_Bool)_appearsToBeDSID;	// IMP=0x0010000000003ce4
- (_Bool)_appearsToBePhoneNumber;	// IMP=0x0010000000003cda
- (id)_md5Hash;	// IMP=0x0010000000003a40
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;	// IMP=0x00100000000038f2
- (_Bool)_appearsToBeEmail;	// IMP=0x00100000000038e8
- (id)_IDFromFZIDType:(long long)arg1;	// IMP=0x0010000000003845
- (id)_URIFromFZIDType:(long long)arg1;	// IMP=0x001000000000380a
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;	// IMP=0x00100000000037cf
- (long long)_FZBestGuessFZIDType;	// IMP=0x0010000000003702
- (id)_im_normalizedURIString;	// IMP=0x00100000000036a3
- (id)_bestGuessURIFromCanicalizedID;	// IMP=0x0010000000003672
- (id)_URIFromCanonicalizedHardwareID;	// IMP=0x0010000000003660
- (id)_URIFromCanonicalizedPseudonymID;	// IMP=0x001000000000364e
- (id)_URIFromCanonicalizedTemporaryID;	// IMP=0x001000000000363c
- (id)_URIFromCanonicalizedBusinessID;	// IMP=0x001000000000362a
- (id)_URIFromCanonicalizedDSID;	// IMP=0x001000000000360e
- (id)_URIFromCanonicalizedPhoneNumber;	// IMP=0x00100000000035f2
- (id)_URIFromCanonicalizedEmail;	// IMP=0x00100000000035d6
- (id)_bestGuessURI;	// IMP=0x00100000000035a5
- (id)_URIFromHardwareID;	// IMP=0x001000000000354c
- (id)_URIFromPseudonymID;	// IMP=0x00100000000034f3
- (id)_URIFromTemporaryID;	// IMP=0x001000000000349a
- (id)_URIFromBusinessID;	// IMP=0x00100000000033d0
- (id)_URIFromDSID;	// IMP=0x0010000000003339
- (id)_URIFromPhoneNumber;	// IMP=0x00100000000032da
- (id)_URIFromEmail;	// IMP=0x001000000000326e
- (long long)_FZIDType;	// IMP=0x00100000000030c6
- (id)_FZIDFromPhoneNumber;	// IMP=0x0010000000003067
- (id)_FZIDFromEmail;	// IMP=0x0010000000003042
- (id)_stripFZIDPrefix;	// IMP=0x0010000000002f2c
- (id)urlFromString;	// IMP=0x0010000000002de6
- (id)stringByAddingURLEscapes;	// IMP=0x0010000000002d80
- (id)stringByRemovingURLEscapes;	// IMP=0x0010000000002d62
- (id)trimmedString;	// IMP=0x0010000000002d36
- (long long)localizedCompareToString:(id)arg1;	// IMP=0x0010000000002c9c
- (unsigned int)unsignedIntValue;	// IMP=0x0010000000002c58
- (unsigned int)hexValue;	// IMP=0x0010000000002b66
- (_Bool)isDirectory;	// IMP=0x0010000000002afd
- (_Bool)isEqualToIgnoringCase:(id)arg1;	// IMP=0x0010000000002adc
- (id)_imInitWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;	// IMP=0x0010000000010d12
@property(readonly, nonatomic) NSString *stripMobileMSuffixIfPresent;
@property(readonly, nonatomic) _Bool hasMobileMeSuffix;
@property(readonly, nonatomic) NSString *mobileMeDomain;
@end

