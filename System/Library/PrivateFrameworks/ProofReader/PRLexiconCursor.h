//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PRLexicon;

__attribute__((visibility("hidden")))
@interface PRLexiconCursor : NSObject
{
    PRLexicon *_lexicon;	// 8 = 0x8
    struct _LXCursor *_cursor;	// 16 = 0x10
}

- (void)enumerateCompletionEntries:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000626d4
- (void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006264c
- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006251e
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000623ec
- (double)terminationProbability;	// IMP=0x00000000000623cf
- (double)prefixProbability;	// IMP=0x00000000000623b2
- (_Bool)hasChildren;	// IMP=0x0000000000062395
- (_Bool)hasEntries;	// IMP=0x0000000000062378
- (_Bool)isValid;	// IMP=0x000000000006236a
- (void)advanceWithString:(id)arg1;	// IMP=0x000000000006232c
- (void)advanceWithCombinedCharacterSequence:(id)arg1;	// IMP=0x000000000006231a
- (void)_advance:(id)arg1;	// IMP=0x00000000000622ea
- (void)dealloc;	// IMP=0x00000000000622a1
- (id)initWithLexicon:(id)arg1;	// IMP=0x000000000006222c

@end
