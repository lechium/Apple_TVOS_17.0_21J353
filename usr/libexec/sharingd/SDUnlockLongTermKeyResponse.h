//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SDUnlockLongTermKeyResponse : PBCodable
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _keyFailed;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int keyFailed:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000157b27
@property(nonatomic) _Bool keyFailed; // @synthesize keyFailed=_keyFailed;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000157a16
- (unsigned long long)hash;	// IMP=0x001000000015796c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000157851
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000157770
- (void)copyTo:(id)arg1;	// IMP=0x00100000001576c9
- (void)writeTo:(id)arg1;	// IMP=0x001000000015761d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000157610
- (id)dictionaryRepresentation;	// IMP=0x001000000015721f
- (id)description;	// IMP=0x0010000000157170
@property(nonatomic) _Bool hasKeyFailed;
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end
