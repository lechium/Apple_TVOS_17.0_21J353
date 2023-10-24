//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface _ADPBProxyWakeUpRequest : PBRequest
{
    NSString *_streamId;	// 8 = 0x8
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x002000000013af4e
- (void).cxx_destruct;	// IMP=0x00100000000abdfe
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000abdb5
- (unsigned long long)hash;	// IMP=0x00100000000abd98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000abd08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000abc90
- (void)copyTo:(id)arg1;	// IMP=0x00100000000abc66
- (void)writeTo:(id)arg1;	// IMP=0x00100000000abc42
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000abaf9
- (id)dictionaryRepresentation;	// IMP=0x00100000000aba9d
- (id)description;	// IMP=0x00100000000ab9ee
@property(readonly, nonatomic) _Bool hasStreamId;
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x0010000000094ee3

@end

