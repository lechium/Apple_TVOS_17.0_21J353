//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMediaLinkPositionMetaData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _collectionItemIndex;	// 16 = 0x10
    int _mediaLinkPosition;	// 20 = 0x14
    struct {
        unsigned int has_collectionItemIndex:1;
        unsigned int has_mediaLinkPosition:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c73d28
- (unsigned long long)hash;	// IMP=0x0000000000c73ce2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c73c2f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c73b92
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c73b04
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c73af7
- (id)jsonRepresentation;	// IMP=0x0000000000c739e7
- (id)dictionaryRepresentation;	// IMP=0x0000000000c7378c
- (id)description;	// IMP=0x0000000000c736dd

@end
