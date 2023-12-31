//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieActivityLevelResult : PBCodable
{
    float _activityScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000008a3b3
- (void).cxx_destruct;	// IMP=0x000000000012bcd2
@property(nonatomic) float activityScore; // @synthesize activityScore=_activityScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012bc1e
- (unsigned long long)hash;	// IMP=0x000000000012bb16
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012ba6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012b9e2
- (void)copyTo:(id)arg1;	// IMP=0x000000000012b984
- (void)writeTo:(id)arg1;	// IMP=0x000000000012b924
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012b917
- (id)dictionaryRepresentation;	// IMP=0x000000000012b635
- (id)description;	// IMP=0x000000000012b586
- (id)exportToLegacyDictionary;	// IMP=0x000000000008a52b

@end

