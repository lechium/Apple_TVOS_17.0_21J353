//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_disambiguationLabels;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004cc4ed
- (unsigned long long)hash;	// IMP=0x00000000004cc373
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cc2e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cc126
- (void)writeTo:(id)arg1;	// IMP=0x00000000004cbfc7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004cbfb8
- (id)jsonRepresentation;	// IMP=0x00000000004cb8bc
- (id)dictionaryRepresentation;	// IMP=0x00000000004cb520
- (id)description;	// IMP=0x00000000004cb471

@end

