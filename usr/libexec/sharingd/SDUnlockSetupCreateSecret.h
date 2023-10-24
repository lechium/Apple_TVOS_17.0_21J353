//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDUnlockSetupCreateSecret : PBCodable
{
    unsigned int _sessionID;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_6358cc24 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000000c502
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000c43d
- (unsigned long long)hash;	// IMP=0x001000000000c3d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000c2f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000c246
- (void)copyTo:(id)arg1;	// IMP=0x001000000000c1c6
- (void)writeTo:(id)arg1;	// IMP=0x001000000000c136
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000c129
- (id)dictionaryRepresentation;	// IMP=0x001000000000bd99
- (id)description;	// IMP=0x001000000000bcea
@property(readonly, nonatomic) _Bool hasToken;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

