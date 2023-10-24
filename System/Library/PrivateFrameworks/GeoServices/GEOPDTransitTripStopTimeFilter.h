//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDDeparturePredicate, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripStopTimeFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDDeparturePredicate *_departurePredicateCountdown;	// 24 = 0x18
    GEOPDDeparturePredicate *_departurePredicateStamp;	// 32 = 0x20
    struct GEOPDTimeRange _operatingHoursRange;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 52 = 0x34
    unsigned int _readerMarkLength;	// 56 = 0x38
    struct os_unfair_lock_s _readerLock;	// 60 = 0x3c
    _Bool _includeRealTimeDepartures;	// 64 = 0x40
    CDStruct_dc7e0232 _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000d2e97c
- (unsigned long long)hash;	// IMP=0x0000000000d2e8d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2e792
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2e581
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2e376
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2e367
- (id)jsonRepresentation;	// IMP=0x0000000000d2e257
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2ddbb
- (id)description;	// IMP=0x0000000000d2dd0c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d2d4f6
- (id)init;	// IMP=0x0000000000d2d49a

@end
