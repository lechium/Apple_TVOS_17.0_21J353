//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoImageExposureResult : PBCodable
{
    float _exposure;	// 8 = 0x8
    float _underExpose;	// 12 = 0xc
    struct {
        unsigned int underExpose:1;
    } _has;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000009dd44
@property(nonatomic) float underExpose; // @synthesize underExpose=_underExpose;
@property(nonatomic) float exposure; // @synthesize exposure=_exposure;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000163a52
- (unsigned long long)hash;	// IMP=0x0000000000163880
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001637d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016375d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000163724
- (void)writeTo:(id)arg1;	// IMP=0x00000000001636bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001636b2
- (id)dictionaryRepresentation;	// IMP=0x00000000001633f9
- (id)description;	// IMP=0x000000000016334a
@property(nonatomic) _Bool hasUnderExpose;
- (id)exportToLegacyDictionary;	// IMP=0x000000000009dee6

@end
