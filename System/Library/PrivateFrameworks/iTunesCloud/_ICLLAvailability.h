//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface _ICLLAvailability : PBCodable
{
    CDStruct_95bda58d _repeatModes;	// 8 = 0x8
    CDStruct_95bda58d _shuffleModes;	// 32 = 0x20
    _Bool _autoPlay;	// 56 = 0x38
    struct {
        unsigned int autoPlay:1;
    } _has;	// 60 = 0x3c
}

- (unsigned long long)hash;	// IMP=0x00000000001b8e23
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b8d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8cbe
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b8c0a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b8bfd
- (id)dictionaryRepresentation;	// IMP=0x00000000001b8ae0
- (id)description;	// IMP=0x00000000001b8a31
- (void)dealloc;	// IMP=0x00000000001b89e2

@end

