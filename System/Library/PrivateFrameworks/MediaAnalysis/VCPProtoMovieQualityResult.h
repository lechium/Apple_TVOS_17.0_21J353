//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieQualityResult : PBCodable
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002af2d0
- (void).cxx_destruct;	// IMP=0x000000000007c8cf
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007c81b
- (unsigned long long)hash;	// IMP=0x000000000007c713
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007c669
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c5df
- (void)copyTo:(id)arg1;	// IMP=0x000000000007c581
- (void)writeTo:(id)arg1;	// IMP=0x000000000007c521
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007c514
- (id)dictionaryRepresentation;	// IMP=0x000000000007c232
- (id)description;	// IMP=0x000000000007c183
- (id)exportToLegacyDictionary;	// IMP=0x00000000002af448

@end

