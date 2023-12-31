//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface CKDPAnonymousShareRemoveRequest : PBRequest
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
    NSData *_encryptedShareTuple;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00100000000a6fcd
- (void).cxx_destruct;	// IMP=0x00000000000a761c
@property(retain, nonatomic) NSData *encryptedShareTuple; // @synthesize encryptedShareTuple=_encryptedShareTuple;
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a756f
- (unsigned long long)hash;	// IMP=0x00000000000a7522
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a746a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a73cc
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a7369
- (Class)responseClass;	// IMP=0x00000000000a7358
- (unsigned int)requestTypeCode;	// IMP=0x00000000000a734d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a72f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a72e3
- (id)dictionaryRepresentation;	// IMP=0x00000000000a70f6
- (id)description;	// IMP=0x00000000000a7047
@property(readonly, nonatomic) _Bool hasEncryptedShareTuple;
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

