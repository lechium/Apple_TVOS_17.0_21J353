//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSupportOctagonMessage : PBCodable
{
    int _supported;	// 8 = 0x8
    CDStruct_495da94c _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000f8c1
- (unsigned long long)hash;	// IMP=0x000000000000f896
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f804
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f7a2
- (void)copyTo:(id)arg1;	// IMP=0x000000000000f77e
- (void)writeTo:(id)arg1;	// IMP=0x000000000000f753
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000f746
- (id)dictionaryRepresentation;	// IMP=0x000000000000f69a
- (id)description;	// IMP=0x000000000000f5eb
- (int)StringAsSupported:(id)arg1;	// IMP=0x000000000000f554
- (id)supportedAsString:(int)arg1;	// IMP=0x000000000000f50c
@property(nonatomic) _Bool hasSupported;
@property(nonatomic) int supported; // @synthesize supported=_supported;

@end
