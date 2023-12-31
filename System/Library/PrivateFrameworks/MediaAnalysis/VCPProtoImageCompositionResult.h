//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoLine, VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoImageCompositionResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoLine *_dominantLine;	// 16 = 0x10
    VCPProtoPoint *_vanishingPoint;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002c1af4
- (void).cxx_destruct;	// IMP=0x00000000000e504b
@property(retain, nonatomic) VCPProtoLine *dominantLine; // @synthesize dominantLine=_dominantLine;
@property(retain, nonatomic) VCPProtoPoint *vanishingPoint; // @synthesize vanishingPoint=_vanishingPoint;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e4f3c
- (unsigned long long)hash;	// IMP=0x00000000000e4e0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4d40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4c8f
- (void)copyTo:(id)arg1;	// IMP=0x00000000000e4c0d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e4b8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e4b82
- (id)dictionaryRepresentation;	// IMP=0x00000000000e4831
- (id)description;	// IMP=0x00000000000e4782
- (id)exportToLegacyDictionary;	// IMP=0x00000000002c1dc6

@end

