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
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002f136a
- (unsigned long long)hash;	// IMP=0x00000000002f133f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f129d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f1239
- (void)copyTo:(id)arg1;	// IMP=0x00000000002f1213
- (void)writeTo:(id)arg1;	// IMP=0x00000000002f11e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002f11da
- (id)dictionaryRepresentation;	// IMP=0x00000000002f113f
- (id)description;	// IMP=0x00000000002f1090
@property(nonatomic) _Bool hasContainsValue;

@end

