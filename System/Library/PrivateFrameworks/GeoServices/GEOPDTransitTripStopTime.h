//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStopTime : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_departureSequences;	// 16 = 0x10
}

+ (id)transitTripStopTimeForPlaceData:(id)arg1;	// IMP=0x0010000000a35ae8
- (void).cxx_destruct;	// IMP=0x0000000000d2d469
- (unsigned long long)hash;	// IMP=0x0000000000d2d44c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2d3bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2d1ff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2d0a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2d091
- (id)jsonRepresentation;	// IMP=0x0000000000d2cf81
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2cbe5
- (id)description;	// IMP=0x0000000000d2cb36

@end
