//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddress : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_localizedAddress;	// 24 = 0x18
    NSMutableArray *_spokenNavigationAddress;	// 32 = 0x20
    NSMutableArray *_spokenStructuredAddress;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _knownAccuracy;	// 60 = 0x3c
    struct {
        unsigned int has_knownAccuracy:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localizedAddress:1;
        unsigned int read_spokenNavigationAddress:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000b412e1
- (unsigned long long)hash;	// IMP=0x0000000000b4123f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b41117
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b40bee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b40528
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b40519
- (id)jsonRepresentation;	// IMP=0x0000000000b3fb11
- (id)dictionaryRepresentation;	// IMP=0x0000000000b3f306
- (id)description;	// IMP=0x0000000000b3f257
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b3df56
- (id)init;	// IMP=0x0000000000b3defa

@end

