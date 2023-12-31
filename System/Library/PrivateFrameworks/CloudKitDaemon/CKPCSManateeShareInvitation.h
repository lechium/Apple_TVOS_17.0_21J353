//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKPCSManateeShareInvitation : PBCodable
{
    NSData *_exportedPCSData;	// 8 = 0x8
    NSData *_shareePublicKeyData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000210d92
@property(retain, nonatomic) NSData *shareePublicKeyData; // @synthesize shareePublicKeyData=_shareePublicKeyData;
@property(retain, nonatomic) NSData *exportedPCSData; // @synthesize exportedPCSData=_exportedPCSData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000210ce5
- (unsigned long long)hash;	// IMP=0x0000000000210c98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000210be0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000210b42
- (void)copyTo:(id)arg1;	// IMP=0x0000000000210adf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000210a82
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000210918
- (id)dictionaryRepresentation;	// IMP=0x0000000000210895
- (id)description;	// IMP=0x00000000002107e6
@property(readonly, nonatomic) _Bool hasShareePublicKeyData;
@property(readonly, nonatomic) _Bool hasExportedPCSData;

@end

