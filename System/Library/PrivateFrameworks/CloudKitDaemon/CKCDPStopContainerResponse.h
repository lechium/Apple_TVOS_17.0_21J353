//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKCDPStopContainerResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d82e2
- (unsigned long long)hash;	// IMP=0x00000000001d82b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d8215
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d81b1
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d818b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d815f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d7fa7
- (id)dictionaryRepresentation;	// IMP=0x00000000001d7f0c
- (id)description;	// IMP=0x00000000001d7e5d
@property(nonatomic) _Bool hasSuccess;

@end

