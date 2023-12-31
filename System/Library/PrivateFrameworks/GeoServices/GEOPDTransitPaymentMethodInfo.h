//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitPaymentMethodInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _cachingRadiusMeters;	// 24 = 0x18
    NSMutableArray *_paymentMethodSuggestions;	// 32 = 0x20
    NSMutableArray *_paymentMethods;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_cachingRadiusMeters:1;
        unsigned int read_unknownFields:1;
        unsigned int read_paymentMethodSuggestions:1;
        unsigned int read_paymentMethods:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000d21c4d
- (unsigned long long)hash;	// IMP=0x0000000000d21af3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d219ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d215d7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d21243
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d21234
- (id)jsonRepresentation;	// IMP=0x0000000000d2105c
- (id)dictionaryRepresentation;	// IMP=0x0000000000d20a58
- (id)description;	// IMP=0x0000000000d209a9
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d1fc4b
- (id)init;	// IMP=0x0000000000d1fbef

@end

