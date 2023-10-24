//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalTransitLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_externalTransitStationCodes;	// 24 = 0x18
    NSString *_sourceId;	// 32 = 0x20
    GEOLocation *_transactionLocation;	// 40 = 0x28
    double _transactionTimestamp;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_transactionTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_externalTransitStationCodes:1;
        unsigned int read_sourceId:1;
        unsigned int read_transactionLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000054142a
- (unsigned long long)hash;	// IMP=0x00000000005412bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000541185
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000540e39
- (void)writeTo:(id)arg1;	// IMP=0x00000000005409ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000054099d
- (id)jsonRepresentation;	// IMP=0x000000000054061e
- (id)dictionaryRepresentation;	// IMP=0x000000000054004d
- (id)description;	// IMP=0x000000000053ff9e
- (id)initWithData:(id)arg1;	// IMP=0x000000000053f40f
- (id)init;	// IMP=0x000000000053f3b3

@end

