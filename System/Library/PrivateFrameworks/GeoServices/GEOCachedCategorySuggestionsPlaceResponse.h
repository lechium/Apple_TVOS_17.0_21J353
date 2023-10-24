//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPlaceResponse, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    GEOPDPlaceResponse *_response;	// 40 = 0x28
    NSString *_sourceURL;	// 48 = 0x30
    double _timestamp;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_language:1;
        unsigned int read_response:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x001000000103778d
- (void).cxx_destruct;	// IMP=0x00000000010385ff
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000103858e
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010383b3
- (unsigned long long)hash;	// IMP=0x0000000001038228
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010380b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001037e65
- (void)copyTo:(id)arg1;	// IMP=0x0000000001037d35
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000001037d06
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000001037c0e
- (void)writeTo:(id)arg1;	// IMP=0x00000000010379d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010379c4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001037546
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001037534
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001037252
- (id)jsonRepresentation;	// IMP=0x0000000001037142
- (id)dictionaryRepresentation;	// IMP=0x0000000001036e37
- (id)description;	// IMP=0x0000000001036d88
@property(retain, nonatomic) NSString *language;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(retain, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(retain, nonatomic) GEOPDPlaceResponse *response;
@property(readonly, nonatomic) _Bool hasResponse;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001035fdc
- (id)init;	// IMP=0x0000000001035f80

@end

