//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CPLRemappedBy : PBCodable
{
    NSMutableArray *_remappedBys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c7470
- (unsigned long long)hash;	// IMP=0x00100000000c743a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c73aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c720c
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c70d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c70c9
- (id)dictionaryRepresentation;	// IMP=0x00100000000c6cfd
- (id)description;	// IMP=0x00100000000c6c4e

@end

