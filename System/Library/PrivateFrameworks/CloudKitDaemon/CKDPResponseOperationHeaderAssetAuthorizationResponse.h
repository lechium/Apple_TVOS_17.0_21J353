//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponse : PBCodable
{
    NSData *_authGetResponseBody;	// 8 = 0x8
    NSMutableArray *_responseHeaders;	// 16 = 0x10
    NSString *_responseUUID;	// 24 = 0x18
}

+ (Class)responseHeadersType;	// IMP=0x00100000001a2fa9
- (void).cxx_destruct;	// IMP=0x00000000001a3ca5
@property(retain, nonatomic) NSMutableArray *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSData *authGetResponseBody; // @synthesize authGetResponseBody=_authGetResponseBody;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a3aa2
- (unsigned long long)hash;	// IMP=0x00000000001a3a35
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a3955
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a3750
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a364c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a34dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a34d0
- (id)dictionaryRepresentation;	// IMP=0x00000000001a3069
- (id)description;	// IMP=0x00000000001a2fba
- (id)responseHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a2f8c
- (unsigned long long)responseHeadersCount;	// IMP=0x00000000001a2f6f
- (void)addResponseHeaders:(id)arg1;	// IMP=0x00000000001a2f05
- (void)clearResponseHeaders;	// IMP=0x00000000001a2ee8
@property(readonly, nonatomic) _Bool hasAuthGetResponseBody;
@property(readonly, nonatomic) _Bool hasResponseUUID;

@end

