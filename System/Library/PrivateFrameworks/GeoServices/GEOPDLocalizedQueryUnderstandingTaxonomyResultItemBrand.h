//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocalizedString, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocalizedQueryUnderstandingTaxonomyResultItemBrand : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_categorys;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    unsigned long long _muid;	// 40 = 0x28
    GEOLocalizedString *_prefDisplayName;	// 48 = 0x30
    NSString *_prefPhone;	// 56 = 0x38
    NSString *_prefUrl;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_countryCode:1;
        unsigned int read_prefDisplayName:1;
        unsigned int read_prefPhone:1;
        unsigned int read_prefUrl:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x000000000055e7a3
- (unsigned long long)hash;	// IMP=0x000000000055e6cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055e546
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055e1a9
- (void)writeTo:(id)arg1;	// IMP=0x000000000055de24
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055de15
- (id)jsonRepresentation;	// IMP=0x000000000055da96
- (id)dictionaryRepresentation;	// IMP=0x000000000055d47c
- (id)description;	// IMP=0x000000000055d3cd
- (id)initWithData:(id)arg1;	// IMP=0x000000000055c91e
- (id)init;	// IMP=0x000000000055c8c2

@end
