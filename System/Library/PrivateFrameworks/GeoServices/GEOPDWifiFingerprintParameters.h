//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_measurements;	// 16 = 0x10
    unsigned int _maxLabels;	// 24 = 0x18
    struct {
        unsigned int has_maxLabels:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000653ba7
- (unsigned long long)hash;	// IMP=0x0000000000653b55
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000653a9b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006538c0
- (void)writeTo:(id)arg1;	// IMP=0x00000000006534cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006534be
- (id)jsonRepresentation;	// IMP=0x0000000000653207
- (id)dictionaryRepresentation;	// IMP=0x0000000000652e0d
- (id)description;	// IMP=0x0000000000652d5e

@end

