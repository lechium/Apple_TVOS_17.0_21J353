//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface SDAutoUnlockDeviceRegistrationRequest : PBRequest
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014dad9
- (unsigned long long)hash;	// IMP=0x001000000014daaf
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014da1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014d9bb
- (void)copyTo:(id)arg1;	// IMP=0x001000000014d997
- (void)writeTo:(id)arg1;	// IMP=0x001000000014d96c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000014d95f
- (id)dictionaryRepresentation;	// IMP=0x001000000014d711
- (id)description;	// IMP=0x001000000014d662
@property(nonatomic) _Bool hasVersion;

@end

