//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCRegisterAppMessage : PBCodable
{
    NSMutableArray *_metadatas;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001a689b
- (unsigned long long)hash;	// IMP=0x00100000001a687e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a67ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a6650
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a651a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a637e
- (id)dictionaryRepresentation;	// IMP=0x00100000001a614e
- (id)description;	// IMP=0x00100000001a609f

@end

