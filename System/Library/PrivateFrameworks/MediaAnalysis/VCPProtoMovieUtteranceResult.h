//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieUtteranceResult : PBCodable
{
    VCPProtoTimeRange *_timeRange;	// 8 = 0x8
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000208016
- (void).cxx_destruct;	// IMP=0x00000000000cc3c8
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000cc34a
- (unsigned long long)hash;	// IMP=0x00000000000cc32d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cc29d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cc225
- (void)copyTo:(id)arg1;	// IMP=0x00000000000cc202
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cc1e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cc1d8
- (id)dictionaryRepresentation;	// IMP=0x00000000000cbfab
- (id)description;	// IMP=0x00000000000cbefc
- (id)exportToLegacyDictionary;	// IMP=0x00000000002080ea

@end
