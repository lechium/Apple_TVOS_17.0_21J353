//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRatingData : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_ratings;	// 24 = 0x18
    NSString *_vendorId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_ratings:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000cd18f7
- (unsigned long long)hash;	// IMP=0x0000000000cd18a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cd17ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cd14dc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cd122d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cd121e
- (id)jsonRepresentation;	// IMP=0x0000000000cd110e
- (id)dictionaryRepresentation;	// IMP=0x0000000000cd0d2b
- (id)description;	// IMP=0x0000000000cd0c7c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cd01eb
- (id)init;	// IMP=0x0000000000cd018f

@end

