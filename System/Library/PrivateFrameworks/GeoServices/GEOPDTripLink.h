//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTripLink : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_linkGeometry;	// 16 = 0x10
    unsigned long long _linkId;	// 24 = 0x18
    struct {
        unsigned int has_linkId:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000d2f051
- (unsigned long long)hash;	// IMP=0x0000000000d2f007
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2ef4b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2eea2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2ee21
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2ee14
- (id)jsonRepresentation;	// IMP=0x0000000000d2ed04
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2eaa9
- (id)description;	// IMP=0x0000000000d2e9fa

@end
