//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8VideosUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMarkupStringGenerator : NSObject
{
    MISSING_TYPE *parser;	// 8 = 0x8
    MISSING_TYPE *logger;	// 16 = 0x10
    MISSING_TYPE *accumulator;	// 48 = 0x30
    MISSING_TYPE *fontTraitsStack;	// 56 = 0x38
    MISSING_TYPE *didParseEverything;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000025c1d3
- (id)init;	// IMP=0x000000000025c1a0
- (void)parserDidFindNewline:(id)arg1;	// IMP=0x000000000025c870
- (void)parser:(id)arg1 didFindCharacters:(id)arg2;	// IMP=0x000000000025c7e1
- (void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;	// IMP=0x000000000025c4fc
- (void)parser:(id)arg1 didStartElement:(unsigned long long)arg2;	// IMP=0x000000000025c466
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;	// IMP=0x000000000025c384
- (void)parserDidEndDocument:(id)arg1;	// IMP=0x000000000025c23e
- (void)parserDidStartDocument:(id)arg1;	// IMP=0x000000000025c238

@end

