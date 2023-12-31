//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable
{
    CKDPLocationBound *_bounds;	// 8 = 0x8
    CKDPLocationCoordinate *_coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000158a34
@property(retain, nonatomic) CKDPLocationBound *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CKDPLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015895b
- (unsigned long long)hash;	// IMP=0x000000000015890e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000158856
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001587b8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000158755
- (void)writeTo:(id)arg1;	// IMP=0x00000000001586f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015851b
- (id)dictionaryRepresentation;	// IMP=0x0000000000158446
- (id)description;	// IMP=0x0000000000158397
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasCoordinate;

@end

