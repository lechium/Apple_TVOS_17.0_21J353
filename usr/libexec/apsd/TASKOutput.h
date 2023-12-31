//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKEdgeDnsOutput;

@interface TASKOutput : PBCodable
{
    TASKEdgeDnsOutput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008139a
@property(retain, nonatomic) TASKEdgeDnsOutput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008131c
- (unsigned long long)hash;	// IMP=0x00100000000812ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008126f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000811f7
- (void)copyTo:(id)arg1;	// IMP=0x00100000000811cd
- (void)writeTo:(id)arg1;	// IMP=0x00100000000811a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008119c
- (id)dictionaryRepresentation;	// IMP=0x0010000000080f6f
- (id)description;	// IMP=0x0010000000080ec0
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

