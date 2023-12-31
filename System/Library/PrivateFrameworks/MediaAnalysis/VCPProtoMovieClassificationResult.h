//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieClassificationResult : PBCodable
{
    NSMutableArray *_classifications;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (Class)classificationType;	// IMP=0x00100000000a65c0
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000e507c
- (void).cxx_destruct;	// IMP=0x00000000000a71c3
@property(retain, nonatomic) NSMutableArray *classifications; // @synthesize classifications=_classifications;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a6fef
- (unsigned long long)hash;	// IMP=0x00000000000a6fa2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a6eea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a6d12
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a6c38
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a6aea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a6add
- (id)dictionaryRepresentation;	// IMP=0x00000000000a6680
- (id)description;	// IMP=0x00000000000a65d1
- (id)classificationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a65a3
- (unsigned long long)classificationsCount;	// IMP=0x00000000000a6586
- (void)addClassification:(id)arg1;	// IMP=0x00000000000a651c
- (void)clearClassifications;	// IMP=0x00000000000a64ff
- (id)exportToLegacyDictionary;	// IMP=0x00000000000e5327

@end

