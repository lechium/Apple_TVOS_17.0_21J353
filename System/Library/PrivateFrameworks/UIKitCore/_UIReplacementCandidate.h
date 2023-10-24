//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface _UIReplacementCandidate : NSObject
{
    NSString *_displayedText;	// 8 = 0x8
    NSString *_revertText;	// 16 = 0x10
    NSArray *_textChoices;	// 24 = 0x18
    NSArray *_underlines;	// 32 = 0x20
    UITextRange *_rangeInDocument;	// 40 = 0x28
    long long _underlineStyle;	// 48 = 0x30
    long long _preferredPromptStyle;	// 56 = 0x38
    long long _preferredPromptButton;	// 64 = 0x40
}

+ (id)candidateForFinalText:(id)arg1 revertText:(id)arg2 range:(id)arg3 underlineStyle:(long long)arg4 promptStyle:(long long)arg5 promptButton:(long long)arg6;	// IMP=0x0060000000776ef5
+ (id)candidateForAutocorrection:(id)arg1 range:(id)arg2 underlineStyle:(long long)arg3 promptStyle:(long long)arg4 promptButton:(long long)arg5;	// IMP=0x0060000000776dcf
+ (id)candidateForAutocorrectionCandidate:(id)arg1 range:(id)arg2;	// IMP=0x0060000000776cbf
- (void).cxx_destruct;	// IMP=0x00000000007770b5
@property(nonatomic) long long preferredPromptButton; // @synthesize preferredPromptButton=_preferredPromptButton;
@property(nonatomic) long long preferredPromptStyle; // @synthesize preferredPromptStyle=_preferredPromptStyle;
@property(nonatomic) long long underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(retain, nonatomic) UITextRange *rangeInDocument; // @synthesize rangeInDocument=_rangeInDocument;
@property(retain, nonatomic) NSArray *underlines; // @synthesize underlines=_underlines;
@property(retain, nonatomic) NSArray *textChoices; // @synthesize textChoices=_textChoices;
@property(retain, nonatomic) NSString *revertText; // @synthesize revertText=_revertText;
@property(retain, nonatomic) NSString *displayedText; // @synthesize displayedText=_displayedText;
- (id)initWithText:(id)arg1;	// IMP=0x0000000000776c54

@end
