//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (Mutable)
+ (id)dictionaryToEscapedQueryString:(id)arg1;	// IMP=0x001000000002af78
+ (id)percentEncodedStringToDictionary:(id)arg1;	// IMP=0x001000000002ac3b
- (id)URLByAppendingQueryParameterKey:(id)arg1 value:(id)arg2;	// IMP=0x0010000000021ea3
- (id)URLByRemovingQueryParameters:(id)arg1;	// IMP=0x0010000000021d96
- (id)URLByAppendingQueryParameters:(id)arg1;	// IMP=0x0010000000021c89
- (id)queryAsDictionary;	// IMP=0x0010000000021c26
- (id)components;	// IMP=0x0010000000021c08
- (_Bool)isPackagedMediaObjC;	// IMP=0x001000000002c204
- (_Bool)isHLSPlaylistObjC;	// IMP=0x001000000002c1f2
- (long long)cleanUrlToChannelStoreId;	// IMP=0x001000000002c080
- (id)cleanUrlToEpisodeGuid;	// IMP=0x001000000002bf70
- (long long)cleanUrlToStoreTrackId;	// IMP=0x001000000002be6c
- (long long)cleanUrlToStoreId;	// IMP=0x001000000002bcfa
- (int)setXattr:(id)arg1 named:(id)arg2;	// IMP=0x001000000002bc1a
- (id)xattrNamed:(id)arg1;	// IMP=0x001000000002ba1c
- (id)unescapedPath;	// IMP=0x001000000002b97f
- (id)lastModifiedDateOfResource;	// IMP=0x001000000002b818
- (id)_lastModDateFormatter;	// IMP=0x001000000002b682
- (id)URLByReplacingWithScheme:(id)arg1;	// IMP=0x001000000002b510
- (id)URLByAppendingQueryString:(id)arg1;	// IMP=0x001000000002b3f7
- (id)URLByAppendingHashString:(id)arg1;	// IMP=0x001000000002b2de
- (id)href;	// IMP=0x001000000002b23c
- (id)im_jsonSerializableValue;	// IMP=0x001000000004db80
- (_Bool)isPackagedMedia;	// IMP=0x001000000005fe20
- (_Bool)isHLSPlaylist;	// IMP=0x001000000005fd30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
