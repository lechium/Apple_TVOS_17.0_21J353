//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewResultFilterAddress : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDMapsIdentifier *_geoId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006109c3
- (unsigned long long)hash;	// IMP=0x00000000006109a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000610916
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000061088b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000610830
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000610821
- (id)jsonRepresentation;	// IMP=0x0000000000610711
- (id)dictionaryRepresentation;	// IMP=0x000000000061051e
- (id)description;	// IMP=0x000000000061046f

@end
