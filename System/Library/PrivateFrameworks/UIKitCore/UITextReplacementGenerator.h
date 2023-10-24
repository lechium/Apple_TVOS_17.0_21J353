//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacementGenerator : NSObject
{
    UITextRange *_replacementRange;	// 8 = 0x8
    NSString *_stringToReplace;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000116d6e6
@property(copy, nonatomic) NSString *stringToReplace; // @synthesize stringToReplace=_stringToReplace;
@property(retain, nonatomic) UITextRange *replacementRange; // @synthesize replacementRange=_replacementRange;
- (_Bool)isStringToReplaceMisspelled;	// IMP=0x000000000116d6aa
- (id)replacements;	// IMP=0x000000000116d5f6
- (void)addPlaceholderForEmptyReplacements:(id)arg1;	// IMP=0x000000000116d543
- (id)replacementWithText:(id)arg1;	// IMP=0x000000000116d492
- (_Bool)shouldAllowString:(id)arg1 intoReplacements:(id)arg2;	// IMP=0x000000000116d321

@end
