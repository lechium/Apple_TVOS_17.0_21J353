//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDAuthenticationPairingCreateSecret : PBCodable
{
    NSString *_sessionID;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000001cb8b
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001caae
- (unsigned long long)hash;	// IMP=0x001000000001ca2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001c94c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001c889
- (void)copyTo:(id)arg1;	// IMP=0x001000000001c806
- (void)writeTo:(id)arg1;	// IMP=0x001000000001c783
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001c776
- (id)dictionaryRepresentation;	// IMP=0x001000000001c488
- (id)description;	// IMP=0x001000000001c3d9
@property(readonly, nonatomic) _Bool hasToken;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

