//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorIDLink : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _reservationTypes;	// 24 = 0x18
    NSString *_externalItemId;	// 48 = 0x30
    NSString *_vendorId;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_reservationTypes:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000d32a42
- (unsigned long long)hash;	// IMP=0x0000000000d329d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d328e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d32726
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d3254a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d3253b
- (id)jsonRepresentation;	// IMP=0x0000000000d32363
- (id)dictionaryRepresentation;	// IMP=0x0000000000d3204f
- (id)description;	// IMP=0x0000000000d31fa0
- (void)dealloc;	// IMP=0x0000000000d314d6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d3147a
- (id)init;	// IMP=0x0000000000d3141e

@end

