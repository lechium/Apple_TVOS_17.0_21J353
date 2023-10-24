//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMiniBrowseCategories : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_miniBrowseCategorys;	// 24 = 0x18
    NSMutableArray *_topChildNames;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_miniBrowseCategorys:1;
        unsigned int read_topChildNames:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000c7861f
- (unsigned long long)hash;	// IMP=0x0000000000c785c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c784f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c78121
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c77db5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c77da6
- (id)jsonRepresentation;	// IMP=0x0000000000c7799b
- (id)dictionaryRepresentation;	// IMP=0x0000000000c7759d
- (id)description;	// IMP=0x0000000000c774ee
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c76a58
- (id)init;	// IMP=0x0000000000c769fc

@end
