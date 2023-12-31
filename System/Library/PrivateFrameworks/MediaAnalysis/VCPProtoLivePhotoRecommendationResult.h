//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoRecommendationResult : PBCodable
{
    float _qualityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001d868e
- (void).cxx_destruct;	// IMP=0x00000000002073bc
@property(nonatomic) float qualityScore; // @synthesize qualityScore=_qualityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000207308
- (unsigned long long)hash;	// IMP=0x0000000000207200
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000207156
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002070cc
- (void)copyTo:(id)arg1;	// IMP=0x000000000020706e
- (void)writeTo:(id)arg1;	// IMP=0x000000000020700e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000207001
- (id)dictionaryRepresentation;	// IMP=0x0000000000206d1f
- (id)description;	// IMP=0x0000000000206c70
- (id)exportToLegacyDictionary;	// IMP=0x00000000001d8806

@end

