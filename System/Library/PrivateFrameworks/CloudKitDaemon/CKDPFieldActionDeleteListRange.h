//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable
{
    CKDPListRange *_range;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000021537b
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002152fd
- (unsigned long long)hash;	// IMP=0x00000000002152e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000215250
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002151d8
- (void)copyTo:(id)arg1;	// IMP=0x00000000002151ae
- (void)writeTo:(id)arg1;	// IMP=0x000000000021518a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021517d
- (id)dictionaryRepresentation;	// IMP=0x0000000000214f50
- (id)description;	// IMP=0x0000000000214ea1
@property(readonly, nonatomic) _Bool hasRange;

@end

