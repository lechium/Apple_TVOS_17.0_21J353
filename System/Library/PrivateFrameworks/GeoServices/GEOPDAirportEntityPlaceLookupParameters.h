//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAirportEntityPlaceLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_airportCode;	// 24 = 0x18
    NSString *_gateCode;	// 32 = 0x20
    NSString *_terminalCode;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_airportCode:1;
        unsigned int read_gateCode:1;
        unsigned int read_terminalCode:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000004cda29
- (unsigned long long)hash;	// IMP=0x00000000004cd9b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cd8b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cd6dd
- (void)writeTo:(id)arg1;	// IMP=0x00000000004cd515
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004cd506
- (id)jsonRepresentation;	// IMP=0x00000000004cd187
- (id)dictionaryRepresentation;	// IMP=0x00000000004ccd49
- (id)description;	// IMP=0x00000000004ccc9a
- (id)initWithData:(id)arg1;	// IMP=0x00000000004cc57a
- (id)init;	// IMP=0x00000000004cc51e

@end

