//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AppleMediaServices)
+ (id)_replaceMarkupForMutableAttributedString:(id)arg1 markupType:(long long)arg2;	// IMP=0x00600000003dae8a
+ (id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)arg1;	// IMP=0x00600000003dad47
- (_Bool)ams_caseInsensitiveEquals:(id)arg1;	// IMP=0x00100000003db0d9
- (id)ams_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x00100000003dacf0
- (id)ams_sha512HashStringUsingEncoding:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000003da7b4
- (id)ams_sha256HashStringUsingEncoding:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000003da2a5
- (id)ams_replacingMarkupUsingAccount:(id)arg1 shouldUppercase:(_Bool)arg2;	// IMP=0x00100000003da13f
- (id)ams_replaceAccountPatternWithUsername:(id)arg1;	// IMP=0x00100000003d9e63
- (_Bool)ams_matchesRegex:(id)arg1;	// IMP=0x00100000003d9e3b
- (_Bool)ams_isPercentEncodedForAllowedCharacters:(id)arg1;	// IMP=0x00100000003d9da2
@end

