//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDActionDataFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _linkTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b3c4c3
- (unsigned long long)hash;	// IMP=0x0000000000b3c4b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b3c44c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3c3dc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b3c365
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b3c358
- (id)jsonRepresentation;	// IMP=0x0000000000b3beea
- (id)dictionaryRepresentation;	// IMP=0x0000000000b3bc73
- (id)description;	// IMP=0x0000000000b3bbc4
- (void)dealloc;	// IMP=0x0000000000b3bb84

@end

