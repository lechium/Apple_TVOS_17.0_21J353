//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionDirections : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b824df
- (unsigned long long)hash;	// IMP=0x0000000000b824d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b82494
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b82437
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8241a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8240d
- (id)jsonRepresentation;	// IMP=0x0000000000b822fd
- (id)dictionaryRepresentation;	// IMP=0x0000000000b82193
- (id)description;	// IMP=0x0000000000b820e4

@end

