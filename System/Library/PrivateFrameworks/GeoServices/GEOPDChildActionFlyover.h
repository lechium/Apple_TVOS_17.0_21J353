//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionFlyover : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b82cfb
- (unsigned long long)hash;	// IMP=0x0000000000b82cf3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b82cb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b82c53
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b82c36
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b82c29
- (id)jsonRepresentation;	// IMP=0x0000000000b82b19
- (id)dictionaryRepresentation;	// IMP=0x0000000000b829af
- (id)description;	// IMP=0x0000000000b82900

@end
