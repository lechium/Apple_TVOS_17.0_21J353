//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UpdateResponseParserDelegate : NSObject
{
    _Bool _hasAddToPlaylistBehavior;	// 8 = 0x8
    unsigned char _addToPlaylistBehavior;	// 9 = 0x9
    unsigned int _serverRevision;	// 12 = 0xc
}

- (void)setAddToPlaylistBehavior:(unsigned char)arg1;	// IMP=0x002000000001e76b
- (unsigned char)addToPlaylistBehavior;	// IMP=0x001000000001e761
@property(nonatomic) _Bool hasAddToPlaylistBehavior; // @synthesize hasAddToPlaylistBehavior=_hasAddToPlaylistBehavior;
@property(nonatomic) unsigned int serverRevision; // @synthesize serverRevision=_serverRevision;
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x001000000001e713
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x001000000001e704
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x001000000001e6e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

