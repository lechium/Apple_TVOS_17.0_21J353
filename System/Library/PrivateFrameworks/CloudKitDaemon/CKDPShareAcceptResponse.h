//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShare;

@interface CKDPShareAcceptResponse : PBCodable
{
    CKDPShare *_share;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018c8f5
@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018c877
- (unsigned long long)hash;	// IMP=0x000000000018c85a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018c7ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018c752
- (void)copyTo:(id)arg1;	// IMP=0x000000000018c728
- (void)writeTo:(id)arg1;	// IMP=0x000000000018c704
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000018c6f7
- (id)dictionaryRepresentation;	// IMP=0x000000000018c4ca
- (id)description;	// IMP=0x000000000018c41b
@property(readonly, nonatomic) _Bool hasShare;

@end

