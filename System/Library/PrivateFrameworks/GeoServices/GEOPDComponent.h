//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAttribution, GEOPDSource, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponent : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDAttribution *_attribution;	// 16 = 0x10
    NSMutableArray *_commingledAttributions;	// 24 = 0x18
    GEOPDSource *_source;	// 32 = 0x20
    double _timestampFirstSeen;	// 40 = 0x28
    NSMutableArray *_values;	// 48 = 0x30
    NSMutableArray *_versionDomains;	// 56 = 0x38
    int _cacheControl;	// 64 = 0x40
    int _componentId;	// 68 = 0x44
    int _startIndex;	// 72 = 0x48
    int _status;	// 76 = 0x4c
    unsigned int _ttl;	// 80 = 0x50
    int _type;	// 84 = 0x54
    int _valuesAvailable;	// 88 = 0x58
    unsigned int _version;	// 92 = 0x5c
    struct {
        unsigned int has_timestampFirstSeen:1;
        unsigned int has_cacheControl:1;
        unsigned int has_componentId:1;
        unsigned int has_startIndex:1;
        unsigned int has_status:1;
        unsigned int has_ttl:1;
        unsigned int has_type:1;
        unsigned int has_valuesAvailable:1;
        unsigned int has_version:1;
    } _flags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000ba30e7
@property(nonatomic) _Bool hasTimestampFirstSeen;
@property(nonatomic) double timestampFirstSeen;
- (unsigned long long)hash;	// IMP=0x0000000000b9cc9f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b9c9c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b9c46b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b9bfe3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b9bfd4
- (id)jsonRepresentation;	// IMP=0x0000000000b8e678
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8d5a2
- (id)description;	// IMP=0x0000000000b8d4f3
- (_Bool)statusCodeIsValid;	// IMP=0x0000000000a3eeee

@end

