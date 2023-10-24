//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoAnimatedStickerResult : PBCodable
{
    float _stickerScore;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000213cfd
- (void).cxx_destruct;	// IMP=0x0000000000076d58
@property(nonatomic) float stickerScore; // @synthesize stickerScore=_stickerScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000076ca4
- (unsigned long long)hash;	// IMP=0x0000000000076b9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000076af2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076a68
- (void)copyTo:(id)arg1;	// IMP=0x0000000000076a0a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000769aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007699d
- (id)dictionaryRepresentation;	// IMP=0x00000000000766bb
- (id)description;	// IMP=0x000000000007660c
- (id)exportToLegacyDictionary;	// IMP=0x0000000000213e75

@end

