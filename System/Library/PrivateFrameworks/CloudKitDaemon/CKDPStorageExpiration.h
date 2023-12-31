//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPStorageExpiration : PBCodable
{
    unsigned long long _duration;	// 8 = 0x8
    double _expirationTime;	// 16 = 0x10
    int _operationType;	// 24 = 0x18
    struct {
        unsigned int duration:1;
        unsigned int expirationTime:1;
        unsigned int operationType:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000035564a
- (unsigned long long)hash;	// IMP=0x0000000000355508
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000035542f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000355393
- (void)copyTo:(id)arg1;	// IMP=0x000000000035531a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000355285
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000355278
- (id)dictionaryRepresentation;	// IMP=0x0000000000354e68
- (id)description;	// IMP=0x0000000000354db9
@property(nonatomic) _Bool hasExpirationTime;
@property(nonatomic) _Bool hasDuration;
- (int)StringAsOperationType:(id)arg1;	// IMP=0x0000000000354c8b
- (id)operationTypeAsString:(int)arg1;	// IMP=0x0000000000354c40
@property(nonatomic) _Bool hasOperationType;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;

@end

