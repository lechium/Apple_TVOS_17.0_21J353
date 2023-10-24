//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataBatchesResponse : PBCodable
{
    NSMutableArray *_layerBatchs;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x001000000142504c
+ (Class)layerBatchType;	// IMP=0x0010000001423eda
- (void).cxx_destruct;	// IMP=0x0000000001425de8
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001425c7c
- (unsigned long long)hash;	// IMP=0x0000000001425c41
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001425b88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014259c4
- (void)copyTo:(id)arg1;	// IMP=0x00000000014258ee
- (void)writeTo:(id)arg1;	// IMP=0x00000000014257b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014255d4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001424e1d
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001424e0b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001424238
- (id)jsonRepresentation;	// IMP=0x0000000001424229
- (id)dictionaryRepresentation;	// IMP=0x0000000001423f9a
- (id)description;	// IMP=0x0000000001423eeb
- (id)layerBatchAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001423ebd
- (unsigned long long)layerBatchsCount;	// IMP=0x0000000001423ea0
- (void)addLayerBatch:(id)arg1;	// IMP=0x0000000001423e36
- (void)clearLayerBatchs;	// IMP=0x0000000001423e19
@property(retain, nonatomic) NSMutableArray *layerBatchs;

@end
