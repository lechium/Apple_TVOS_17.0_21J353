//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface SDAuthenticationPairingRequest : PBRequest
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    unsigned int _type;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    struct {
        unsigned int type:1;
        unsigned int version:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b2e64
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b2d5a
- (unsigned long long)hash;	// IMP=0x00100000000b2cbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b2bb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b2ace
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b2a2e
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b2981
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b2974
- (id)dictionaryRepresentation;	// IMP=0x00100000000b2583
- (id)description;	// IMP=0x00100000000b24d4
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasVersion;

@end
