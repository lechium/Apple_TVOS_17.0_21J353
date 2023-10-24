//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOAddress, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocalizedAddress : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOAddress *_address;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_language:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000c67c01
- (unsigned long long)hash;	// IMP=0x0000000000c67baa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c67ad8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6792a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c67785
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c67776
- (id)jsonRepresentation;	// IMP=0x0000000000c674fb
- (id)dictionaryRepresentation;	// IMP=0x0000000000c67228
- (id)description;	// IMP=0x0000000000c67179
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c6695e
- (id)init;	// IMP=0x0000000000c66902

@end

