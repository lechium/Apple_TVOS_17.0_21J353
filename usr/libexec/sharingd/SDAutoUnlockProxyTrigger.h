//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDAutoUnlockProxyTrigger : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000005953b
- (unsigned long long)hash;	// IMP=0x0010000000059511
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005947f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005941d
- (void)copyTo:(id)arg1;	// IMP=0x00100000000593f9
- (void)writeTo:(id)arg1;	// IMP=0x00100000000593ce
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000593c1
- (id)dictionaryRepresentation;	// IMP=0x0010000000059173
- (id)description;	// IMP=0x00100000000590c4
@property(nonatomic) _Bool hasVersion;

@end

