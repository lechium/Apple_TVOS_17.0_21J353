//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantBrandLookupResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _abstractOfBrandMuids;	// 24 = 0x18
    CDStruct_62a50c50 _childBrandMuids;	// 48 = 0x30
    CDStruct_62a50c50 _variantBrandMuids;	// 72 = 0x48
    NSMutableArray *_geoHashs;	// 96 = 0x60
    unsigned long long _muid;	// 104 = 0x68
    unsigned long long _relatedGlobalBrandMuid;	// 112 = 0x70
    NSString *_scope;	// 120 = 0x78
    unsigned int _readerMarkPos;	// 128 = 0x80
    unsigned int _readerMarkLength;	// 132 = 0x84
    struct os_unfair_lock_s _readerLock;	// 136 = 0x88
    _Bool _isPrimaryVariant;	// 140 = 0x8c
    struct {
        unsigned int has_muid:1;
        unsigned int has_relatedGlobalBrandMuid:1;
        unsigned int has_isPrimaryVariant:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abstractOfBrandMuids:1;
        unsigned int read_childBrandMuids:1;
        unsigned int read_variantBrandMuids:1;
        unsigned int read_geoHashs:1;
        unsigned int read_scope:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 144 = 0x90
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000005711cc
+ (Class)geoHashType;	// IMP=0x001000000056f84c
- (void).cxx_destruct;	// IMP=0x0000000000572893
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000572840
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000572468
- (unsigned long long)hash;	// IMP=0x0000000000572357
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000572192
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000571dd7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000571ae5
- (void)writeTo:(id)arg1;	// IMP=0x000000000057171b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000057170c
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000570f73
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000570f61
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000057064b
- (id)jsonRepresentation;	// IMP=0x000000000057053b
- (id)dictionaryRepresentation;	// IMP=0x0000000000570119
- (id)description;	// IMP=0x000000000057006a
- (void)setAbstractOfBrandMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000570046
- (unsigned long long)abstractOfBrandMuidAtIndex:(unsigned long long)arg1;	// IMP=0x000000000056ff70
- (void)addAbstractOfBrandMuid:(unsigned long long)arg1;	// IMP=0x000000000056ff35
- (void)clearAbstractOfBrandMuids;	// IMP=0x000000000056ff17
@property(readonly, nonatomic) unsigned long long *abstractOfBrandMuids;
@property(readonly, nonatomic) unsigned long long abstractOfBrandMuidsCount;
@property(nonatomic) _Bool hasRelatedGlobalBrandMuid;
@property(nonatomic) unsigned long long relatedGlobalBrandMuid;
@property(nonatomic) _Bool hasIsPrimaryVariant;
@property(nonatomic) _Bool isPrimaryVariant;
- (void)setVariantBrandMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000056fd11
- (unsigned long long)variantBrandMuidAtIndex:(unsigned long long)arg1;	// IMP=0x000000000056fc3b
- (void)addVariantBrandMuid:(unsigned long long)arg1;	// IMP=0x000000000056fc00
- (void)clearVariantBrandMuids;	// IMP=0x000000000056fbe2
@property(readonly, nonatomic) unsigned long long *variantBrandMuids;
@property(readonly, nonatomic) unsigned long long variantBrandMuidsCount;
- (void)setChildBrandMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000056faa5
- (unsigned long long)childBrandMuidAtIndex:(unsigned long long)arg1;	// IMP=0x000000000056f9cf
- (void)addChildBrandMuid:(unsigned long long)arg1;	// IMP=0x000000000056f994
- (void)clearChildBrandMuids;	// IMP=0x000000000056f976
@property(readonly, nonatomic) unsigned long long *childBrandMuids;
@property(readonly, nonatomic) unsigned long long childBrandMuidsCount;
- (id)geoHashAtIndex:(unsigned long long)arg1;	// IMP=0x000000000056f81b
- (unsigned long long)geoHashsCount;	// IMP=0x000000000056f7ef
- (void)addGeoHash:(id)arg1;	// IMP=0x000000000056f737
- (void)clearGeoHashs;	// IMP=0x000000000056f70d
@property(retain, nonatomic) NSMutableArray *geoHashs;
@property(retain, nonatomic) NSString *scope;
@property(readonly, nonatomic) _Bool hasScope;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
- (void)dealloc;	// IMP=0x000000000056e5e4
- (id)initWithData:(id)arg1;	// IMP=0x000000000056e588
- (id)init;	// IMP=0x000000000056e52c

@end

