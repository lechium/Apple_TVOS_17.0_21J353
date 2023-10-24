//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class GEOMapRegion, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataBatchesRequest : PBRequest
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOMapRegion *_region;	// 16 = 0x10
    NSMutableArray *_supportedLanguages;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    CDStruct_4ee04138 _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x001000000142321b
+ (Class)supportedLanguageType;	// IMP=0x0010000001422aa9
- (void).cxx_destruct;	// IMP=0x0000000001423dae
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001423c12
- (unsigned long long)hash;	// IMP=0x0000000001423bb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001423ad5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014237ec
- (void)copyTo:(id)arg1;	// IMP=0x00000000014236a8
- (Class)responseClass;	// IMP=0x0000000001423697
- (unsigned int)requestTypeCode;	// IMP=0x000000000142368c
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000142365d
- (void)writeTo:(id)arg1;	// IMP=0x00000000014233d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014233c8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001422fd4
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001422fc2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001422cbb
- (id)jsonRepresentation;	// IMP=0x0000000001422cac
- (id)dictionaryRepresentation;	// IMP=0x0000000001422b69
- (id)description;	// IMP=0x0000000001422aba
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001422a78
- (unsigned long long)supportedLanguagesCount;	// IMP=0x0000000001422a4c
- (void)addSupportedLanguage:(id)arg1;	// IMP=0x0000000001422996
- (void)clearSupportedLanguages;	// IMP=0x000000000142296e
@property(retain, nonatomic) NSMutableArray *supportedLanguages;
@property(retain, nonatomic) GEOMapRegion *region;
@property(readonly, nonatomic) _Bool hasRegion;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001422251
- (id)init;	// IMP=0x00000000014221f5

@end
