//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate, CKDPZoneCapabilities;

@interface CKDPZoneSaveResponse : PBCodable
{
    CKDPZoneCapabilities *_capabilities;	// 8 = 0x8
    CKDPDate *_expirationTime;	// 16 = 0x10
    _Bool _expired;	// 24 = 0x18
    struct {
        unsigned int expired:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000039164c
@property(retain, nonatomic) CKDPDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000391543
- (unsigned long long)hash;	// IMP=0x00000000003914cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003913df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039131c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000391299
- (void)writeTo:(id)arg1;	// IMP=0x0000000000391215
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000391208
- (id)dictionaryRepresentation;	// IMP=0x0000000000390e5d
- (id)description;	// IMP=0x0000000000390dae
@property(readonly, nonatomic) _Bool hasExpirationTime;
@property(nonatomic) _Bool hasExpired;
@property(readonly, nonatomic) _Bool hasCapabilities;

@end

