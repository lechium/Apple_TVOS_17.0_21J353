//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOTimezone, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDStopInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    GEOTimezone *_timezone;	// 24 = 0x18
    unsigned int _walkingTime;	// 32 = 0x20
    struct {
        unsigned int has_muid:1;
        unsigned int has_walkingTime:1;
    } _flags;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000cf6d02
- (unsigned long long)hash;	// IMP=0x0000000000cf6c99
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf6bbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf6af6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf6a4b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf6a3c
- (id)jsonRepresentation;	// IMP=0x0000000000cf65a4
- (id)dictionaryRepresentation;	// IMP=0x0000000000cf62fd
- (id)description;	// IMP=0x0000000000cf624e

@end
