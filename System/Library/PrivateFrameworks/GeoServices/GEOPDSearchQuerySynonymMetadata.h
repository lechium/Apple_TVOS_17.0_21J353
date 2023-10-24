//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQuerySynonymMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_countryCode;	// 16 = 0x10
    NSMutableArray *_featureMaps;	// 24 = 0x18
    NSMutableArray *_geoHashes;	// 32 = 0x20
    unsigned long long _identifier;	// 40 = 0x28
    NSString *_key;	// 48 = 0x30
    NSString *_language;	// 56 = 0x38
    NSString *_originalQueryDisplayString;	// 64 = 0x40
    NSMutableArray *_refinementQueries;	// 72 = 0x48
    NSString *_synonymQueryDisplayString;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    float _confidence;	// 100 = 0x64
    int _originalProvider;	// 104 = 0x68
    int _rewriteProvider;	// 108 = 0x6c
    _Bool _hardRewrite;	// 112 = 0x70
    _Bool _isOrgQueryPrefixOfRefinement;	// 113 = 0x71
    _Bool _isWeakLexicalMatch;	// 114 = 0x72
    _Bool _useGeoHashes;	// 115 = 0x73
    struct {
        unsigned int has_identifier:1;
        unsigned int has_confidence:1;
        unsigned int has_originalProvider:1;
        unsigned int has_rewriteProvider:1;
        unsigned int has_hardRewrite:1;
        unsigned int has_isOrgQueryPrefixOfRefinement:1;
        unsigned int has_isWeakLexicalMatch:1;
        unsigned int has_useGeoHashes:1;
        unsigned int read_countryCode:1;
        unsigned int read_featureMaps:1;
        unsigned int read_geoHashes:1;
        unsigned int read_key:1;
        unsigned int read_language:1;
        unsigned int read_originalQueryDisplayString:1;
        unsigned int read_refinementQueries:1;
        unsigned int read_synonymQueryDisplayString:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 116 = 0x74
}

- (void).cxx_destruct;	// IMP=0x0000000000af8047
- (unsigned long long)hash;	// IMP=0x0000000000af7d60
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af79e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af7333
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af6d65
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af6d56
- (id)jsonRepresentation;	// IMP=0x0000000000af5e86
- (id)dictionaryRepresentation;	// IMP=0x0000000000af5308
- (id)description;	// IMP=0x0000000000af5259
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af3dd1
- (id)init;	// IMP=0x0000000000af3d75

@end

