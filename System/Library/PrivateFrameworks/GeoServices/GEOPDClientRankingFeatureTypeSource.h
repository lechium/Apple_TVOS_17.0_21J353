//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeSource : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _serverEntryType;	// 16 = 0x10
    int _suggestionType;	// 20 = 0x14
    struct {
        unsigned int has_serverEntryType:1;
        unsigned int has_suggestionType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000068b415
- (unsigned long long)hash;	// IMP=0x000000000068b3cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000068b31c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000068b27f
- (void)writeTo:(id)arg1;	// IMP=0x000000000068b1f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000068b1e4
- (id)jsonRepresentation;	// IMP=0x000000000068ab87
- (id)dictionaryRepresentation;	// IMP=0x000000000068a90d
- (id)description;	// IMP=0x000000000068a85e

@end
