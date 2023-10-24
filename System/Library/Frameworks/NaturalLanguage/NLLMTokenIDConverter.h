//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLTokenIDConverter.h"

@class NLLanguageModel, NLTagger;

__attribute__((visibility("hidden")))
@interface NLLMTokenIDConverter : NLTokenIDConverter
{
    NLLanguageModel *_languageModel;	// 8 = 0x8
    NLTagger *_tagger;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001fc93
@property(readonly, retain, nonatomic) NLTagger *tagger; // @synthesize tagger=_tagger;
@property(readonly, nonatomic) __weak NLLanguageModel *languageModel; // @synthesize languageModel=_languageModel;
- (void)enumerateTokenIDsForString:(id)arg1 range:(struct _NSRange)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f98f
- (id)stringForTokenIDs:(const unsigned int *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000001f838
- (id)stringForTokenID:(unsigned int)arg1;	// IMP=0x000000000001f750
- (unsigned int)tokenIDForString:(id)arg1;	// IMP=0x000000000001f670
- (id)initWithLanguageModel:(id)arg1;	// IMP=0x000000000001f538

@end

