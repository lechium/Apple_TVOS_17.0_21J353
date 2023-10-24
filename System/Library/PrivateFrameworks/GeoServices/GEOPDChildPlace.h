//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildPlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDMapsIdentifier *_mapsId;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mapsId:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000b875a4
- (unsigned long long)hash;	// IMP=0x0000000000b8754d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8747b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b872cd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b87126
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b87117
- (id)jsonRepresentation;	// IMP=0x0000000000b86e36
- (id)dictionaryRepresentation;	// IMP=0x0000000000b86bfd
- (id)description;	// IMP=0x0000000000b86b4e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b862e1
- (id)init;	// IMP=0x0000000000b86285

@end

