//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPathComputationOptions : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _pathComputationMethod;	// 16 = 0x10
    struct {
        unsigned int has_pathComputationMethod:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000001484a94
- (unsigned long long)hash;	// IMP=0x0000000001484a69
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014849d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001484957
- (void)writeTo:(id)arg1;	// IMP=0x00000000014848f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014848e6
- (id)jsonRepresentation;	// IMP=0x00000000014847d6
- (id)dictionaryRepresentation;	// IMP=0x00000000014845e7
- (id)description;	// IMP=0x0000000001484538

@end

