//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitTripGeometryFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000d2bcc5
- (unsigned long long)hash;	// IMP=0x0000000000d2bcbd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2bc7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2bc1d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2bc00
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2bbf3
- (id)jsonRepresentation;	// IMP=0x0000000000d2bae3
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2b979
- (id)description;	// IMP=0x0000000000d2b8ca

@end

