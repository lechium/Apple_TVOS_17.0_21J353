//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSRawAttribute : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _beginIndex;	// 16 = 0x10
    unsigned int _endIndex;	// 20 = 0x14
    struct {
        unsigned int has_beginIndex:1;
        unsigned int has_endIndex:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000069f8fb
- (unsigned long long)hash;	// IMP=0x000000000069f8b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000069f804
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069f767
- (void)writeTo:(id)arg1;	// IMP=0x000000000069f6d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000069f6cc
- (id)jsonRepresentation;	// IMP=0x000000000069f5bc
- (id)dictionaryRepresentation;	// IMP=0x000000000069f37c
- (id)description;	// IMP=0x000000000069f2cd

@end
