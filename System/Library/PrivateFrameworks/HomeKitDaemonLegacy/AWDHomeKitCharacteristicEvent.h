//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCharacteristicEvent : PBCodable
{
    _Bool _containsValue;	// 8 = 0x8
    struct {
        unsigned int containsValue:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool containsValue; // @synthesize containsValue=_containsValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002acea5
- (unsigned long long)hash;	// IMP=0x00000000002ace7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002acdd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002acd74
- (void)copyTo:(id)arg1;	// IMP=0x00000000002acd4e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002acd22
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002acd15
- (id)dictionaryRepresentation;	// IMP=0x00000000002acc7a
- (id)description;	// IMP=0x00000000002acbcb
@property(nonatomic) _Bool hasContainsValue;

@end

