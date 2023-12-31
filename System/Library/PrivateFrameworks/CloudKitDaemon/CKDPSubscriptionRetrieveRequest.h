//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPIdentifier;

@interface CKDPSubscriptionRetrieveRequest : PBRequest
{
    CKDPIdentifier *_identifier;	// 8 = 0x8
}

+ (id)options;	// IMP=0x0010000000204ebb
- (void).cxx_destruct;	// IMP=0x0000000000205416
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000205398
- (unsigned long long)hash;	// IMP=0x000000000020537b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002052eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000205273
- (void)copyTo:(id)arg1;	// IMP=0x0000000000205249
- (Class)responseClass;	// IMP=0x0000000000205238
- (unsigned int)requestTypeCode;	// IMP=0x000000000020522d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000205209
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002051fc
- (id)dictionaryRepresentation;	// IMP=0x0000000000204fcf
- (id)description;	// IMP=0x0000000000204f20
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

