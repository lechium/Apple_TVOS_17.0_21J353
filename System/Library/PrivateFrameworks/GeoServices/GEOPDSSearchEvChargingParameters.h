//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchEvChargingParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _preferredBrands;	// 24 = 0x18
    NSMutableArray *_networks;	// 48 = 0x30
    NSMutableArray *_ports;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_preferredBrands:1;
        unsigned int read_networks:1;
        unsigned int read_ports:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x00000000006a397e
- (unsigned long long)hash;	// IMP=0x00000000006a3422
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a3333
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a2f48
- (void)writeTo:(id)arg1;	// IMP=0x00000000006a2ba8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006a2b99
- (id)jsonRepresentation;	// IMP=0x00000000006a201d
- (id)dictionaryRepresentation;	// IMP=0x00000000006a1be3
- (id)description;	// IMP=0x00000000006a1b34
- (void)dealloc;	// IMP=0x00000000006a0d71
- (id)initWithData:(id)arg1;	// IMP=0x00000000006a0d15
- (id)init;	// IMP=0x00000000006a0cb9

@end
