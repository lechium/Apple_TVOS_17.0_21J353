//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000071866
- (void).cxx_destruct;	// IMP=0x00000000000ce320
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ce26c
- (unsigned long long)hash;	// IMP=0x00000000000ce167
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce0c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ce037
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ce003
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cdf9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cdf90
- (id)dictionaryRepresentation;	// IMP=0x00000000000cdcba
- (id)description;	// IMP=0x00000000000cdc0b
- (id)exportToLegacyDictionary;	// IMP=0x0000000000071a12

@end

