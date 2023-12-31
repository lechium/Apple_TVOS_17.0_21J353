//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoBounds : PBCodable
{
    double _height;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _x0;	// 24 = 0x18
    double _y0;	// 32 = 0x20
}

+ (id)boundsWithCGRect:(struct CGRect)arg1;	// IMP=0x001000000008391e
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double y0; // @synthesize y0=_y0;
@property(nonatomic) double x0; // @synthesize x0=_x0;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e3670
- (unsigned long long)hash;	// IMP=0x00000000000e32df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e321b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e3193
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e3149
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e30ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e30a0
- (id)dictionaryRepresentation;	// IMP=0x00000000000e2ccb
- (id)description;	// IMP=0x00000000000e2c1c
- (struct CGRect)rectValue;	// IMP=0x000000000008398f

@end

