//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSpellerResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_debugResponse;	// 16 = 0x10
    unsigned long long _decileId;	// 24 = 0x18
    double _latencyMs;	// 32 = 0x20
    double _misspellScore;	// 40 = 0x28
    NSMutableArray *_spellSuggestions;	// 48 = 0x30
    NSMutableArray *_tokenCandidates;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    unsigned int _modelNumberMajor;	// 76 = 0x4c
    unsigned int _modelNumberMinor;	// 80 = 0x50
    int _rankerModelType;	// 84 = 0x54
    int _resultStatus;	// 88 = 0x58
    _Bool _isFromDLCacheModel;	// 92 = 0x5c
    _Bool _isFromDLRuntimeModel;	// 93 = 0x5d
    struct {
        unsigned int has_decileId:1;
        unsigned int has_latencyMs:1;
        unsigned int has_misspellScore:1;
        unsigned int has_modelNumberMajor:1;
        unsigned int has_modelNumberMinor:1;
        unsigned int has_rankerModelType:1;
        unsigned int has_resultStatus:1;
        unsigned int has_isFromDLCacheModel:1;
        unsigned int has_isFromDLRuntimeModel:1;
        unsigned int read_debugResponse:1;
        unsigned int read_spellSuggestions:1;
        unsigned int read_tokenCandidates:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 96 = 0x60
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000011892e3
+ (Class)tokenCandidatesType;	// IMP=0x00100000011875a1
+ (Class)spellSuggestionType;	// IMP=0x00100000011870b1
- (void).cxx_destruct;	// IMP=0x000000000118b2a7
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000118aedd
- (unsigned long long)hash;	// IMP=0x000000000118ab7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000118a8b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000118a346
- (void)copyTo:(id)arg1;	// IMP=0x000000000118a059
- (void)writeTo:(id)arg1;	// IMP=0x0000000001189ba1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001189b94
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001188e2d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001188e1a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000011883bc
- (id)jsonRepresentation;	// IMP=0x00000000011883ad
- (id)dictionaryRepresentation;	// IMP=0x0000000001187af1
- (id)description;	// IMP=0x0000000001187a42
@property(nonatomic) _Bool hasModelNumberMinor;
@property(nonatomic) unsigned int modelNumberMinor;
@property(nonatomic) _Bool hasModelNumberMajor;
@property(nonatomic) unsigned int modelNumberMajor;
@property(nonatomic) _Bool hasIsFromDLRuntimeModel;
@property(nonatomic) _Bool isFromDLRuntimeModel;
@property(nonatomic) _Bool hasIsFromDLCacheModel;
@property(nonatomic) _Bool isFromDLCacheModel;
- (int)StringAsRankerModelType:(id)arg1;	// IMP=0x000000000118781a
- (id)rankerModelTypeAsString:(int)arg1;	// IMP=0x00000000011877d1
@property(nonatomic) _Bool hasRankerModelType;
@property(nonatomic) int rankerModelType;
@property(retain, nonatomic) NSString *debugResponse;
@property(readonly, nonatomic) _Bool hasDebugResponse;
@property(nonatomic) _Bool hasMisspellScore;
@property(nonatomic) double misspellScore;
- (id)tokenCandidatesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001187570
- (unsigned long long)tokenCandidatesCount;	// IMP=0x0000000001187544
- (void)addTokenCandidates:(id)arg1;	// IMP=0x000000000118748d
- (void)clearTokenCandidates;	// IMP=0x0000000001187464
@property(retain, nonatomic) NSMutableArray *tokenCandidates;
@property(nonatomic) _Bool hasLatencyMs;
@property(nonatomic) double latencyMs;
@property(nonatomic) _Bool hasDecileId;
@property(nonatomic) unsigned long long decileId;
- (int)StringAsResultStatus:(id)arg1;	// IMP=0x0000000001187185
- (id)resultStatusAsString:(int)arg1;	// IMP=0x000000000118713a
@property(nonatomic) _Bool hasResultStatus;
@property(nonatomic) int resultStatus;
- (id)spellSuggestionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001187080
- (unsigned long long)spellSuggestionsCount;	// IMP=0x0000000001187054
- (void)addSpellSuggestion:(id)arg1;	// IMP=0x0000000001186f9d
- (void)clearSpellSuggestions;	// IMP=0x0000000001186f74
@property(retain, nonatomic) NSMutableArray *spellSuggestions;
- (id)initWithData:(id)arg1;	// IMP=0x0000000001186012
- (id)init;	// IMP=0x0000000001185fb6

@end
