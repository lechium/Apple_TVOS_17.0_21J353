//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoTimeRange : PBCodable
{
    VCPProtoTime *_duration;	// 8 = 0x8
    VCPProtoTime *_start;	// 16 = 0x10
}

+ (id)timeRangeWithCMTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x001000000001fdad
- (void).cxx_destruct;	// IMP=0x0000000000208812
@property(retain, nonatomic) VCPProtoTime *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) VCPProtoTime *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000208739
- (unsigned long long)hash;	// IMP=0x00000000002086ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000208634
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000208596
- (void)copyTo:(id)arg1;	// IMP=0x0000000000208525
- (void)writeTo:(id)arg1;	// IMP=0x00000000002084c6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002084b9
- (id)dictionaryRepresentation;	// IMP=0x0000000000208236
- (id)description;	// IMP=0x0000000000208187
- (CDStruct_e83c9415)timeRangeValue;	// IMP=0x000000000001fe76

@end

