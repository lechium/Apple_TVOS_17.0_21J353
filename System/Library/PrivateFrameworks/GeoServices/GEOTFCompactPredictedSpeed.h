//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTFCompactPredictedSpeed : PBCodable
{
    unsigned int _deltaMinutesInFuture;	// 8 = 0x8
    unsigned int _speedKph;	// 12 = 0xc
    struct {
        unsigned int has_deltaMinutesInFuture:1;
        unsigned int has_speedKph:1;
    } _flags;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x000000000031ea30
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031e97d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031e900
- (void)writeTo:(id)arg1;	// IMP=0x000000000031e88d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031e880
- (id)jsonRepresentation;	// IMP=0x000000000031e5e3
- (id)dictionaryRepresentation;	// IMP=0x000000000031e4ab
- (id)description;	// IMP=0x000000000031e3fc

@end

