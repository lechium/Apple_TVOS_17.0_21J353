//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSTransportHint : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _transportType;	// 16 = 0x10
    struct {
        unsigned int has_transportType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000006af03f
- (unsigned long long)hash;	// IMP=0x00000000006af014
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006aef82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006aef02
- (void)writeTo:(id)arg1;	// IMP=0x00000000006aee9e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006aee91
- (id)jsonRepresentation;	// IMP=0x00000000006aed81
- (id)dictionaryRepresentation;	// IMP=0x00000000006aeb92
- (id)description;	// IMP=0x00000000006aeae3

@end

