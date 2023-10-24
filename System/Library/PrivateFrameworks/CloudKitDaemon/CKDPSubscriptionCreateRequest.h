//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest
{
    CKDPSubscription *_subscription;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00100000001c6b9e
- (void).cxx_destruct;	// IMP=0x00000000001c70f9
@property(retain, nonatomic) CKDPSubscription *subscription; // @synthesize subscription=_subscription;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c707b
- (unsigned long long)hash;	// IMP=0x00000000001c705e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c6fce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c6f56
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c6f2c
- (Class)responseClass;	// IMP=0x00000000001c6f1b
- (unsigned int)requestTypeCode;	// IMP=0x00000000001c6f10
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c6eec
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c6edf
- (id)dictionaryRepresentation;	// IMP=0x00000000001c6cb2
- (id)description;	// IMP=0x00000000001c6c03
@property(readonly, nonatomic) _Bool hasSubscription;

@end
