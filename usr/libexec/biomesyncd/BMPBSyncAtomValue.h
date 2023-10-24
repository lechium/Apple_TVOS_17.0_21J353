//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class BMPBStoreEventAtomValue;

@interface BMPBSyncAtomValue : PBCodable
{
    int _type;	// 8 = 0x8
    BMPBStoreEventAtomValue *_value;	// 16 = 0x10
    struct {
        unsigned int type:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000187ed
- (unsigned long long)hash;	// IMP=0x0010000000018787
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000186cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000018638
- (void)writeTo:(id)arg1;	// IMP=0x00100000000185bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000185ae
- (id)dictionaryRepresentation;	// IMP=0x0010000000018278
- (id)description;	// IMP=0x00100000000181c9

@end

