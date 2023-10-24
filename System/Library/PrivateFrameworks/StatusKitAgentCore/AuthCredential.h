//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SharedOwnershipAuth;

__attribute__((visibility("hidden")))
@interface AuthCredential : PBCodable
{
    int _authCredentialOneof;	// 8 = 0x8
    SharedOwnershipAuth *_sharedOwnershipAuth;	// 16 = 0x10
    NSString *_simpleJwt;	// 24 = 0x18
    struct {
        unsigned int authCredentialOneof:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004c1a4
@property(retain, nonatomic) SharedOwnershipAuth *sharedOwnershipAuth; // @synthesize sharedOwnershipAuth=_sharedOwnershipAuth;
@property(retain, nonatomic) NSString *simpleJwt; // @synthesize simpleJwt=_simpleJwt;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004c0e9
- (unsigned long long)hash;	// IMP=0x000000000004c069
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004bf86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004bec3
- (void)copyTo:(id)arg1;	// IMP=0x000000000004be40
- (void)writeTo:(id)arg1;	// IMP=0x000000000004bde3
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004bdd6
- (id)dictionaryRepresentation;	// IMP=0x000000000004ba20
- (id)description;	// IMP=0x000000000004b971
- (void)clearOneofValuesForAuthCredentialOneof;	// IMP=0x000000000004b911
- (int)StringAsAuthCredentialOneof:(id)arg1;	// IMP=0x000000000004b87a
- (id)authCredentialOneofAsString:(int)arg1;	// IMP=0x000000000004b831
@property(nonatomic) _Bool hasAuthCredentialOneof;
@property(nonatomic) int authCredentialOneof; // @synthesize authCredentialOneof=_authCredentialOneof;
@property(readonly, nonatomic) _Bool hasSharedOwnershipAuth;
@property(readonly, nonatomic) _Bool hasSimpleJwt;

@end
