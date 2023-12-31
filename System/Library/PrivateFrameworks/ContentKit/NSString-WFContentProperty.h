//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFContentProperty)
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;	// IMP=0x001000000000bb06
+ (id)wf_stringWithData:(id)arg1;	// IMP=0x00100000000abd8b
- (id)stringByAppendingAsNewLine:(id)arg1;	// IMP=0x001000000000b039
- (id)wf_filenameTruncatedToMaximumLengthWithFormat:(id)arg1;	// IMP=0x001000000000b5ca
- (id)wf_filenameTruncatedToMaximumLength;	// IMP=0x001000000000b5b6
- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;	// IMP=0x001000000000b550
- (id)gtm_stringByUnescapingFromHTML;	// IMP=0x001000000003bdbf
- (id)gtm_stringByEscapingForAsciiHTML;	// IMP=0x001000000003bd9b
- (id)gtm_stringByEscapingForHTML;	// IMP=0x001000000003bd7a
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;	// IMP=0x001000000003bb1e
- (_Bool)wf_hasStrongRTLCharacter;	// IMP=0x001000000003eb9f
- (id)wf_stringByReplacingNewlinesWithSpaces;	// IMP=0x001000000009fdb9
- (_Bool)wf_stringContainsNewlineCharacters;	// IMP=0x001000000009fd61
- (id)wf_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000009fcb3
- (_Bool)wf_stringContainsCharacterInSet:(id)arg1;	// IMP=0x001000000009fc90
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;	// IMP=0x001000000009fc2a
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;	// IMP=0x001000000009fbc4
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;	// IMP=0x001000000009fb2f
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x001000000009faa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

