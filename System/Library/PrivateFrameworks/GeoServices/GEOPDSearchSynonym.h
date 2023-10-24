//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSynonym : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_synFeatureMaps;	// 16 = 0x10
    NSString *_synonymText;	// 24 = 0x18
    NSMutableArray *_tokenLists;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    float _confidence;	// 52 = 0x34
    int _rewriteProvider;	// 56 = 0x38
    struct {
        unsigned int has_confidence:1;
        unsigned int has_rewriteProvider:1;
        unsigned int read_synFeatureMaps:1;
        unsigned int read_synonymText:1;
        unsigned int read_tokenLists:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000b06330
- (unsigned long long)hash;	// IMP=0x0000000000b0618c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b06025
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b05bd2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b05810
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b05801
- (id)jsonRepresentation;	// IMP=0x0000000000b05583
- (id)dictionaryRepresentation;	// IMP=0x0000000000b04f15
- (id)description;	// IMP=0x0000000000b04e66
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b0427c
- (id)init;	// IMP=0x0000000000b04220

@end

