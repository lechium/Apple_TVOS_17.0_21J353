//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUser;

@interface CKDPUserQueryResponse : PBCodable
{
    CKDPUser *_user;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000035937d
@property(retain, nonatomic) CKDPUser *user; // @synthesize user=_user;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003592ff
- (unsigned long long)hash;	// IMP=0x00000000003592e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000359252
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003591da
- (void)copyTo:(id)arg1;	// IMP=0x00000000003591b0
- (void)writeTo:(id)arg1;	// IMP=0x000000000035918c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000035917f
- (id)dictionaryRepresentation;	// IMP=0x0000000000358f52
- (id)description;	// IMP=0x0000000000358ea3
@property(readonly, nonatomic) _Bool hasUser;

@end

