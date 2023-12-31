//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoPoint : PBCodable
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
}

+ (id)pointWithPoint:(struct CGPoint)arg1;	// IMP=0x0010000000249f99
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000027602a
- (unsigned long long)hash;	// IMP=0x0000000000275e58
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000275dc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000275d58
- (void)copyTo:(id)arg1;	// IMP=0x0000000000275d30
- (void)writeTo:(id)arg1;	// IMP=0x0000000000275cc9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000275cbc
- (id)dictionaryRepresentation;	// IMP=0x0000000000275a1f
- (id)description;	// IMP=0x0000000000275970
- (struct CGPoint)pointValue;	// IMP=0x0000000000249ff8

@end

