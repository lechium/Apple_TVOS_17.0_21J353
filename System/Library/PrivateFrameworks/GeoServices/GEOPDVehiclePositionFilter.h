//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVehiclePositionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d30ffd
- (unsigned long long)hash;	// IMP=0x0000000000d30ff5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d30fb2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d30f55
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d30f38
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d30f2b
- (id)jsonRepresentation;	// IMP=0x0000000000d30e1b
- (id)dictionaryRepresentation;	// IMP=0x0000000000d30cb1
- (id)description;	// IMP=0x0000000000d30c02

@end
