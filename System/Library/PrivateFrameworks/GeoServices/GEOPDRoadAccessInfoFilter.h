//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRoadAccessInfoFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ce08ff
- (unsigned long long)hash;	// IMP=0x0000000000ce08f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce08b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce0857
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce083a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce082d
- (id)jsonRepresentation;	// IMP=0x0000000000ce071d
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce05b3
- (id)description;	// IMP=0x0000000000ce0504

@end

