//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieObstructionResult : PBCodable
{
    float _obstructionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002d9836
- (void).cxx_destruct;	// IMP=0x0000000000204777
@property(nonatomic) float obstructionScore; // @synthesize obstructionScore=_obstructionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002046c3
- (unsigned long long)hash;	// IMP=0x00000000002045bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000204511
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000204487
- (void)copyTo:(id)arg1;	// IMP=0x0000000000204429
- (void)writeTo:(id)arg1;	// IMP=0x00000000002043c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002043bc
- (id)dictionaryRepresentation;	// IMP=0x00000000002040da
- (id)description;	// IMP=0x000000000020402b
- (id)exportToLegacyDictionary;	// IMP=0x00000000002d99ae

@end

