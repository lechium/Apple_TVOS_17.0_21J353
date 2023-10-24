//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHighlightScoreResult : PBCodable
{
    float _highlightScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000e400f
- (void).cxx_destruct;	// IMP=0x000000000003d503
@property(nonatomic) float highlightScore; // @synthesize highlightScore=_highlightScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003d44f
- (unsigned long long)hash;	// IMP=0x000000000003d347
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d29d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d213
- (void)copyTo:(id)arg1;	// IMP=0x000000000003d1b5
- (void)writeTo:(id)arg1;	// IMP=0x000000000003d155
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003d148
- (id)dictionaryRepresentation;	// IMP=0x000000000003ce66
- (id)description;	// IMP=0x000000000003cdb7
- (id)exportToLegacyDictionary;	// IMP=0x00000000000e4187

@end

