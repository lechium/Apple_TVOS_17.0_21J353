//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchAttribute, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchStructuredAttribute : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDSearchAttribute *_attribute;	// 16 = 0x10
    NSMutableArray *_nestedAttributes;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _operator;	// 44 = 0x2c
    struct {
        unsigned int has_operator:1;
        unsigned int read_attribute:1;
        unsigned int read_nestedAttributes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000b041de
- (unsigned long long)hash;	// IMP=0x0000000000b04160
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b0405f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b03d74
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b03ad0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b03ac1
- (id)jsonRepresentation;	// IMP=0x0000000000b02fca
- (id)dictionaryRepresentation;	// IMP=0x0000000000b02ba2
- (id)description;	// IMP=0x0000000000b02af3
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b02241
- (id)init;	// IMP=0x0000000000b021e5

@end

