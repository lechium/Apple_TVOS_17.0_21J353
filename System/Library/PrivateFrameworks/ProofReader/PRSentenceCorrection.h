//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PRSentenceCorrection : NSObject
{
    int _category;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
    NSString *_word;	// 32 = 0x20
    NSArray *_corrections;	// 40 = 0x28
}

- (_Bool)presentAsGrammarError;	// IMP=0x00000000000689ed
- (_Bool)presentAsAutocorrection;	// IMP=0x00000000000689db
- (_Bool)presentAsSpellingError;	// IMP=0x00000000000689d3
- (id)corrections;	// IMP=0x00000000000689c9
- (id)word;	// IMP=0x00000000000689bf
- (struct _NSRange)range;	// IMP=0x00000000000689b1
- (int)category;	// IMP=0x00000000000689a8
- (id)description;	// IMP=0x000000000006892b
- (void)dealloc;	// IMP=0x00000000000688e1
- (id)initWithCategory:(int)arg1 range:(struct _NSRange)arg2 word:(id)arg3 corrections:(id)arg4;	// IMP=0x0000000000068854

@end

