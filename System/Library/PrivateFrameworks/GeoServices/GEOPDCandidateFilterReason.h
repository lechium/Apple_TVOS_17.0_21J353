//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResultRefinementMetadata, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCandidateFilterReason : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDResultRefinementMetadata *_sortMetadata;	// 16 = 0x10
    int _reasonType;	// 24 = 0x18
    float _viewportExpansionFactor;	// 28 = 0x1c
    struct {
        unsigned int has_reasonType:1;
        unsigned int has_viewportExpansionFactor:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000ded3ef
- (unsigned long long)hash;	// IMP=0x0000000000ded29b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ded1ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ded0f1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ded044
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000deccfd
- (id)jsonRepresentation;	// IMP=0x0000000000dec827
- (id)dictionaryRepresentation;	// IMP=0x0000000000dec52e
- (id)description;	// IMP=0x0000000000dec47f

@end
