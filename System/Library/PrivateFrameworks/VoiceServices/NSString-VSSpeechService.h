//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (VSSpeechService)
+ (_Bool)vs_isCJKCharacter:(unsigned short)arg1;	// IMP=0x008000000001fe5c
+ (unsigned long long)_vs_countPhoneticSyllables_xsampa:(id)arg1;	// IMP=0x008000000001fdce
+ (unsigned long long)_vs_countPhoneticSyllables_lhp:(id)arg1;	// IMP=0x008000000001fd40
+ (id)vs_markerStringForContext:(id)arg1;	// IMP=0x008000000001fae2
+ (id)vs_stringFrom4CC:(int)arg1;	// IMP=0x008000000002d036
- (id)vs_convertToSSML;	// IMP=0x001000000001f288
- (_Bool)vs_hasCJKCharacter;	// IMP=0x001000000001f1fe
- (id)vs_removeSpeechTags;	// IMP=0x001000000001f0f9
- (id)vs_removePhonetics;	// IMP=0x001000000001ef7c
- (unsigned long long)vs_countPhoneticSyllables;	// IMP=0x001000000001e945
- (double)vs_measurePauses;	// IMP=0x001000000001e3bd
- (id)vs_insertContextInfo:(id)arg1;	// IMP=0x001000000001e357
- (id)vs_substituteAudioWithLocalPath;	// IMP=0x001000000001dfaa
- (id)vs_textifyEmojiWithLanguage:(id)arg1;	// IMP=0x001000000001de0d
- (id)preinstalledAudioHashForLanguage:(id)arg1 name:(id)arg2;	// IMP=0x0010000000031a8d
- (id)sha256hex;	// IMP=0x00100000000319c2
@end

