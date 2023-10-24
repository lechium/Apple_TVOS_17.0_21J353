//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableString, NSString;

@interface EpubRightsDataParser : NSObject
{
    NSData *_sinfData;	// 8 = 0x8
    NSMutableString *_buffer;	// 16 = 0x10
    _Bool _isSinfElement;	// 24 = 0x18
}

@property(readonly, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x00100000000b736a
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00100000000b7322
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00100000000b72f8
- (void)dealloc;	// IMP=0x00100000000b72ae
- (id)initWithXMLData:(id)arg1;	// IMP=0x00100000000b721b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

