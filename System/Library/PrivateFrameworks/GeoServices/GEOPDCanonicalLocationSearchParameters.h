//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCanonicalLocationSearchParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_queryString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000052514d
- (unsigned long long)hash;	// IMP=0x0000000000525130
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005250a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000525015
- (void)writeTo:(id)arg1;	// IMP=0x0000000000524fba
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000524fad
- (id)jsonRepresentation;	// IMP=0x0000000000524cbb
- (id)dictionaryRepresentation;	// IMP=0x0000000000524b1c
- (id)description;	// IMP=0x0000000000524a6d

@end
