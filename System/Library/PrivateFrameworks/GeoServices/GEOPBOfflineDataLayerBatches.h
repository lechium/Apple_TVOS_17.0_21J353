//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataLayerBatches : PBCodable
{
    struct GEOPBOfflineDataLayerVersion _layerVersion;	// 8 = 0x8
    NSMutableArray *_batchReferences;	// 32 = 0x20
    CDStruct_4b81633f _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000142a611
- (unsigned long long)hash;	// IMP=0x000000000142a5be
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000142a4dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000142a309
- (void)writeTo:(id)arg1;	// IMP=0x000000000142a14c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000142a13f
- (id)jsonRepresentation;	// IMP=0x0000000001429f17
- (id)dictionaryRepresentation;	// IMP=0x0000000001429c38
- (id)description;	// IMP=0x0000000001429b89

@end
