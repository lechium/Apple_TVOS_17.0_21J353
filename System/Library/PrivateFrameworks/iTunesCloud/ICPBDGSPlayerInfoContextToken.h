//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ICPBDGSPlayerInfoContextToken : PBCodable
{
    unsigned long long _sessionID;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
    struct {
        unsigned int sessionID:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000150952
- (unsigned long long)hash;	// IMP=0x0000000000150902
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000150847
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001507ae
- (void)writeTo:(id)arg1;	// IMP=0x0000000000150748
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015073b
- (id)dictionaryRepresentation;	// IMP=0x000000000015067a
- (id)description;	// IMP=0x00000000001505cb

@end

