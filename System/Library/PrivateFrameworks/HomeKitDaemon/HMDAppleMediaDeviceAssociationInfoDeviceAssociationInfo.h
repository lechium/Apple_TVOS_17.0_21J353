//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaDeviceAssociationInfoDeviceAssociationInfo : PBCodable
{
    NSString *_accessoryUUID;	// 8 = 0x8
    NSString *_idsDestination;	// 16 = 0x10
    NSString *_idsIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000525fe7
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(retain, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000525ef5
- (unsigned long long)hash;	// IMP=0x0000000000525e88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000525da8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000525ce4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000525c61
- (void)writeTo:(id)arg1;	// IMP=0x0000000000525be7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000525a5b
- (id)dictionaryRepresentation;	// IMP=0x00000000005259b1
- (id)description;	// IMP=0x0000000000525902
@property(readonly, nonatomic) _Bool hasIdsDestination;
@property(readonly, nonatomic) _Bool hasIdsIdentifier;
@property(readonly, nonatomic) _Bool hasAccessoryUUID;

@end

