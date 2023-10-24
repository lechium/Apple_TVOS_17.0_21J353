//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchBrandDensity, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchRichBrandMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDSearchBrandDensity *_brandDensity;	// 16 = 0x10
    NSMutableArray *_brandRelationshipInfos;	// 24 = 0x18
    unsigned long long _muid;	// 32 = 0x20
    NSMutableArray *_preferredCategorys;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_muid:1;
        unsigned int read_brandDensity:1;
        unsigned int read_brandRelationshipInfos:1;
        unsigned int read_preferredCategorys:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000afff34
- (unsigned long long)hash;	// IMP=0x0000000000affe96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000affd65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aff93e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aff5b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aff5a7
- (id)jsonRepresentation;	// IMP=0x0000000000aff598
- (id)dictionaryRepresentation;	// IMP=0x0000000000afef6d
- (id)description;	// IMP=0x0000000000afeebe
- (id)initWithData:(id)arg1;	// IMP=0x0000000000afe322
- (id)init;	// IMP=0x0000000000afe2c6

@end
