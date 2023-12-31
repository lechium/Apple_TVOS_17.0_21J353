//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface SDAuthenticationRequest : PBRequest
{
    double _sessionStartDate;	// 8 = 0x8
    double _unlockDate;	// 16 = 0x10
    NSData *_aksToken;	// 24 = 0x18
    NSData *_awdlInfo;	// 32 = 0x20
    NSData *_rangingToken;	// 40 = 0x28
    NSString *_sessionID;	// 48 = 0x30
    unsigned int _type;	// 56 = 0x38
    unsigned int _version;	// 60 = 0x3c
    struct {
        unsigned int sessionStartDate:1;
        unsigned int unlockDate:1;
        unsigned int type:1;
        unsigned int version:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000019bed8
@property(nonatomic) double sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(retain, nonatomic) NSData *aksToken; // @synthesize aksToken=_aksToken;
@property(nonatomic) double unlockDate; // @synthesize unlockDate=_unlockDate;
@property(retain, nonatomic) NSData *rangingToken; // @synthesize rangingToken=_rangingToken;
@property(retain, nonatomic) NSData *awdlInfo; // @synthesize awdlInfo=_awdlInfo;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019bcdb
- (unsigned long long)hash;	// IMP=0x001000000019b9fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019b825
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019b6b7
- (void)copyTo:(id)arg1;	// IMP=0x001000000019b592
- (void)writeTo:(id)arg1;	// IMP=0x001000000019b469
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019b45c
- (id)dictionaryRepresentation;	// IMP=0x001000000019ae7b
- (id)description;	// IMP=0x001000000019adcc
@property(nonatomic) _Bool hasSessionStartDate;
@property(readonly, nonatomic) _Bool hasAksToken;
@property(nonatomic) _Bool hasUnlockDate;
@property(readonly, nonatomic) _Bool hasRangingToken;
@property(readonly, nonatomic) _Bool hasAwdlInfo;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasVersion;

@end

