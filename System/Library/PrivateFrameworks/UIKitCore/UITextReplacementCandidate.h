//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
{
    UITextReplacement *_replacement;	// 8 = 0x8
}

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;	// IMP=0x00600000004583f0
- (void).cxx_destruct;	// IMP=0x00000000004584d9
@property(readonly, nonatomic) UITextReplacement *replacement; // @synthesize replacement=_replacement;
- (id)label;	// IMP=0x00000000004584ab
- (id)_initWithTextReplacement:(id)arg1;	// IMP=0x000000000045843d

@end

