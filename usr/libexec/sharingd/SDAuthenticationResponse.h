//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDAuthenticationResponse : PBCodable
{
    NSData *_aksToken;	// 8 = 0x8
    NSData *_awdlInfo;	// 16 = 0x10
    unsigned int _errorCode;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    unsigned int _version;	// 40 = 0x28
    CDStruct_8b9b3261 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00200000000173f5
@property(retain, nonatomic) NSData *aksToken; // @synthesize aksToken=_aksToken;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001729f
- (unsigned long long)hash;	// IMP=0x00100000000171e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000170a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000016f94
- (void)copyTo:(id)arg1;	// IMP=0x0010000000016ecd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000016e05
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000016df8
- (id)dictionaryRepresentation;	// IMP=0x00100000000169c8
- (id)description;	// IMP=0x0010000000016919
@property(readonly, nonatomic) _Bool hasAksToken;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasAwdlInfo;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end
