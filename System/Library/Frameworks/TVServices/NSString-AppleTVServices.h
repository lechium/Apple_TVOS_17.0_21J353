//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AppleTVServices)
+ (id)tvs_hexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2 lowercase:(_Bool)arg3;	// IMP=0x006000000004ff3b
+ (id)tvs_uppercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x006000000004ff26
+ (id)tvs_lowercaseHexStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x006000000004ff0e
+ (id)tvs_stringWithNumber:(id)arg1;	// IMP=0x006000000004eaab
- (id)tvs_adamIDStringFromBuyParams;	// IMP=0x0010000000050127
- (id)tvs_flatImageURLString;	// IMP=0x0010000000050020
- (unsigned long long)tvs_threePartVersionCompare:(id)arg1;	// IMP=0x001000000004fc75
- (id)tvs_MACAddressStringFromHexString;	// IMP=0x001000000004fab9
- (id)tvs_dataFromHexString;	// IMP=0x001000000004f9ce
- (unsigned long long)tvs_hexValue;	// IMP=0x001000000004f91a
- (id)tvs_stringByDecodingFriendlyHTMLCodes;	// IMP=0x001000000004f30d
- (id)tvs_componentCharacters;	// IMP=0x001000000004f22f
- (id)tvs_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000004f045
- (id)tvs_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000004ef28
- (id)tvs_subStringAfter:(unsigned long long)arg1;	// IMP=0x001000000004eee5
- (id)tvs_subStringBefore:(unsigned long long)arg1;	// IMP=0x001000000004eece
- (_Bool)tvs_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x001000000004ee67
- (id)tvs_SHA256String;	// IMP=0x001000000004eda8
- (id)tvs_SHA1String;	// IMP=0x001000000004ece7
- (id)tvs_MD5String;	// IMP=0x001000000004ec28
- (id)tvs_filenameSafeString;	// IMP=0x001000000004eb4e
- (unsigned long long)tvs_unsignedLongLongValue;	// IMP=0x001000000004eb28
@end

