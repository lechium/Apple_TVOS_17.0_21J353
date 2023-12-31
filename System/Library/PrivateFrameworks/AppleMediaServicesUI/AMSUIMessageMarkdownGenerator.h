//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIMarkdownParser, AMSUIMessageMarkdownConfiguration, NSDictionary, NSMutableArray, NSMutableAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIMessageMarkdownGenerator : NSObject
{
    _Bool _didParseEverything;	// 8 = 0x8
    NSMutableAttributedString *_accumulator;	// 16 = 0x10
    AMSUIMarkdownParser *_parser;	// 24 = 0x18
    NSMutableArray *_attributeStack;	// 32 = 0x20
    NSString *_symbol;	// 40 = 0x28
    NSDictionary *_symbolAttributes;	// 48 = 0x30
    AMSUIMessageMarkdownConfiguration *_configuration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003c3ec
@property(retain, nonatomic) AMSUIMessageMarkdownConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *symbolAttributes; // @synthesize symbolAttributes=_symbolAttributes;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(nonatomic) _Bool didParseEverything; // @synthesize didParseEverything=_didParseEverything;
@property(retain, nonatomic) NSMutableArray *attributeStack; // @synthesize attributeStack=_attributeStack;
@property(retain, nonatomic) AMSUIMarkdownParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSMutableAttributedString *accumulator; // @synthesize accumulator=_accumulator;
- (void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;	// IMP=0x000000000003c332
- (void)parserDidEndListElement:(id)arg1;	// IMP=0x000000000003c32c
- (void)parserDidStartListElement:(id)arg1;	// IMP=0x000000000003c326
- (void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;	// IMP=0x000000000003c320
- (void)parserDidFindNewline:(id)arg1;	// IMP=0x000000000003c307
- (void)parser:(id)arg1 didFindCharacters:(id)arg2;	// IMP=0x000000000003c2b1
- (void)parser:(id)arg1 didFindArtworkWithIdentifier:(id)arg2;	// IMP=0x000000000003c1c7
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;	// IMP=0x000000000003be88
- (void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3;	// IMP=0x000000000003b365
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x000000000003b205
- (void)parserDidEndDocument:(id)arg1;	// IMP=0x000000000003b1f3
- (void)parserDidStartDocument:(id)arg1;	// IMP=0x000000000003b100
- (id)reconcileElementAttributes:(id)arg1 withFont:(id)arg2;	// IMP=0x000000000003ab25
- (id)fontWithTraits:(unsigned int)arg1;	// IMP=0x000000000003a90e
- (id)currentFontAddingFontAttributes:(id)arg1;	// IMP=0x000000000003a82f
- (id)currentFont;	// IMP=0x000000000003a725
- (void)appendStyledString:(id)arg1;	// IMP=0x000000000003a5fa
- (void)pushAttributes:(id)arg1;	// IMP=0x000000000003a47d
- (void)popAttributes;	// IMP=0x000000000003a440
- (id)generate;	// IMP=0x000000000003a3ac
- (id)initWithMarkdownString:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000003a298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

