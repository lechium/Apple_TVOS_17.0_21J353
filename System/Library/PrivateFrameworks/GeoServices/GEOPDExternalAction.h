//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalAction : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_externalActionDetails;	// 16 = 0x10
    int _componentType;	// 24 = 0x18
    struct {
        unsigned int has_componentType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c409f6
- (unsigned long long)hash;	// IMP=0x0000000000c409a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c408ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4070e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4058a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4057b
- (id)jsonRepresentation;	// IMP=0x0000000000c402c4
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3f8fb
- (id)description;	// IMP=0x0000000000c3f84c

@end

