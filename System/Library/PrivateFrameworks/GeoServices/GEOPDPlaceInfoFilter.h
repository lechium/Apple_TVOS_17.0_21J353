//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cb51b0
- (unsigned long long)hash;	// IMP=0x0000000000cb51a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb5165
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb5108
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb50eb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb50de
- (id)jsonRepresentation;	// IMP=0x0000000000cb4fce
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb4e64
- (id)description;	// IMP=0x0000000000cb4db5

@end
