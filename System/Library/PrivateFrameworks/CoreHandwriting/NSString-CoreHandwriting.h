//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (CoreHandwriting)
- (_Bool)isAllUppercase;	// IMP=0x00600000001f7f70
- (unsigned long long)cursorPositionAtIndex:(unsigned long long)arg1 usingBlockToSelectSide:(CDUnknownBlockType)arg2;	// IMP=0x00600000001f7e00
- (_Bool)isAbbreviation;	// IMP=0x00600000001f7c00
- (void)enumerateCodepointsInRange:(struct _NSRange)arg1 reverse:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00600000001f7ad0
- (void)enumerateCodepointsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000001f7ab0
- (unsigned int)codepointAtIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;	// IMP=0x00600000001f79a0
- (struct _NSRange)codepointRangeAtIndex:(unsigned long long)arg1;	// IMP=0x00600000001f7970
- (long long)countCodepoints;	// IMP=0x00600000001f7880
- (long long)countSubstringsWithOptions:(unsigned long long)arg1;	// IMP=0x00600000001f7790
- (_Bool)hasSubstringInSet:(id)arg1;	// IMP=0x00600000001f7630
- (id)ch_hasCharactersFromSets:(id)arg1;	// IMP=0x00600000001f7410
- (long long)ch_occurrencesOfCharactersInSet:(id)arg1 maxCount:(long long)arg2;	// IMP=0x00600000001f72b0
@end
