//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOActionComponentMapEntry : PBCodable
{
    CDStruct_95bda58d _placeDataComponents;	// 8 = 0x8
    int _actionComponent;	// 32 = 0x20
    struct {
        unsigned int has_actionComponent:1;
    } _flags;	// 36 = 0x24
}

- (unsigned long long)hash;	// IMP=0x00000000010c0466
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010c03ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010c0338
- (void)writeTo:(id)arg1;	// IMP=0x00000000010c02b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010c02ab
- (id)jsonRepresentation;	// IMP=0x00000000010bff53
- (id)dictionaryRepresentation;	// IMP=0x00000000010bfe3f
- (id)description;	// IMP=0x00000000010bfd90
- (void)dealloc;	// IMP=0x00000000010bfd50

@end

