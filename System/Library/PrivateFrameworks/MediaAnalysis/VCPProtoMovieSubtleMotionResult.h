//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieSubtleMotionResult : PBCodable
{
    float _actionScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000125c20
- (void).cxx_destruct;	// IMP=0x00000000000827bc
@property(nonatomic) float actionScore; // @synthesize actionScore=_actionScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000082708
- (unsigned long long)hash;	// IMP=0x0000000000082600
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000082556
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000824cc
- (void)copyTo:(id)arg1;	// IMP=0x000000000008246e
- (void)writeTo:(id)arg1;	// IMP=0x000000000008240e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000082401
- (id)dictionaryRepresentation;	// IMP=0x000000000008211f
- (id)description;	// IMP=0x0000000000082070
- (id)exportToLegacyDictionary;	// IMP=0x0000000000125d98

@end

