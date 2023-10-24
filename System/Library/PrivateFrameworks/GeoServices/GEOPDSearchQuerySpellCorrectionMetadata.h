//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchSpellSuggestion, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQuerySpellCorrectionMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_allSpellSuggestions;	// 16 = 0x10
    NSMutableArray *_allTokenCandidates;	// 24 = 0x18
    unsigned long long _decileId;	// 32 = 0x20
    double _misspellScore;	// 40 = 0x28
    GEOPDSearchSpellSuggestion *_spellSuggestion;	// 48 = 0x30
    NSMutableArray *_tokenCandidates;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    unsigned int _modelNumberMajor;	// 76 = 0x4c
    unsigned int _modelNumberMinor;	// 80 = 0x50
    int _resultStatus;	// 84 = 0x54
    int _spellerRankerModelType;	// 88 = 0x58
    _Bool _isFromDLCacheModel;	// 92 = 0x5c
    _Bool _isFromDLRuntimeModel;	// 93 = 0x5d
    _Bool _isConfidentSpellCorrection;	// 94 = 0x5e
    _Bool _isFromPoiSearchSpeller;	// 95 = 0x5f
    _Bool _isSpellCorrectionSameAsOrgQuery;	// 96 = 0x60
    struct {
        unsigned int has_decileId:1;
        unsigned int has_misspellScore:1;
        unsigned int has_modelNumberMajor:1;
        unsigned int has_modelNumberMinor:1;
        unsigned int has_resultStatus:1;
        unsigned int has_spellerRankerModelType:1;
        unsigned int has_isFromDLCacheModel:1;
        unsigned int has_isFromDLRuntimeModel:1;
        unsigned int has_isConfidentSpellCorrection:1;
        unsigned int has_isFromPoiSearchSpeller:1;
        unsigned int has_isSpellCorrectionSameAsOrgQuery:1;
        unsigned int read_allSpellSuggestions:1;
        unsigned int read_allTokenCandidates:1;
        unsigned int read_spellSuggestion:1;
        unsigned int read_tokenCandidates:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x0000000000af3d11
- (unsigned long long)hash;	// IMP=0x0000000000af3a1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000af36c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000af3069
- (void)writeTo:(id)arg1;	// IMP=0x0000000000af2a7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000af2a6d
- (id)jsonRepresentation;	// IMP=0x0000000000af2a5e
- (id)dictionaryRepresentation;	// IMP=0x0000000000af1dd2
- (id)description;	// IMP=0x0000000000af1d23
- (id)initWithData:(id)arg1;	// IMP=0x0000000000af06bf
- (id)init;	// IMP=0x0000000000af0663

@end

