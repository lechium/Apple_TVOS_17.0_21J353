//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKCDPStopAllContainerResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000159a01
- (unsigned long long)hash;	// IMP=0x00000000001599d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000159934
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001598d0
- (void)copyTo:(id)arg1;	// IMP=0x00000000001598aa
- (void)writeTo:(id)arg1;	// IMP=0x000000000015987e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001596c6
- (id)dictionaryRepresentation;	// IMP=0x000000000015962b
- (id)description;	// IMP=0x000000000015957c
@property(nonatomic) _Bool hasSuccess;

@end

