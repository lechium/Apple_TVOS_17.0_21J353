//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface CalXMLSanitizer : NSObject
{
    int _nestingLevel;	// 8 = 0x8
    NSMutableArray *_cachedIndents;	// 16 = 0x10
    NSString *_textContents;	// 24 = 0x18
    NSData *_cdataContents;	// 32 = 0x20
    NSMutableData *_mutableCDATAContents;	// 40 = 0x28
    _Bool _currentElementStartTagNeedsClosing;	// 48 = 0x30
    _Bool _currentElementHasNestedTags;	// 49 = 0x31
    NSMutableDictionary *namespaceURIToLevelOfFirstElementInNamespace;	// 56 = 0x38
    NSMutableArray *elementNames;	// 64 = 0x40
    NSMutableArray *elementNamespaces;	// 72 = 0x48
    NSMutableString *_xml;	// 80 = 0x50
    struct __sFILE *_output;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000003a23c
@property(nonatomic) struct __sFILE *output; // @synthesize output=_output;
@property(readonly, nonatomic) NSString *scrubbedXML;
- (void)flushContents;	// IMP=0x0000000000039fd9
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x0000000000039e9c
- (void)parser:(id)arg1 foundCDATA:(id)arg2;	// IMP=0x0000000000039dcc
- (void)parser:(id)arg1 foundComment:(id)arg2;	// IMP=0x0000000000039d70
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x0000000000039d10
- (void)_appendNamespaceURI:(id)arg1 forElementName:(id)arg2 qualifiedName:(id)arg3;	// IMP=0x0000000000039bbf
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x000000000003998c
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00000000000392ab
- (id)currentRedactionRule;	// IMP=0x0000000000037423
- (id)getIndentation;	// IMP=0x0000000000037333
- (id)init;	// IMP=0x000000000003725d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
