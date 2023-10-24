//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ALSLocationResponse : PBCodable
{
    NSMutableArray *_cdmaCellTowers;	// 8 = 0x8
    NSMutableArray *_cellTowers;	// 16 = 0x10
    NSMutableArray *_lteCellTowers;	// 24 = 0x18
    NSMutableArray *_nr5GCellTowers;	// 32 = 0x20
    NSMutableArray *_scdmaCellTowers;	// 40 = 0x28
    NSMutableArray *_wirelessAPs;	// 48 = 0x30
}

+ (Class)nr5GCellTowerType;	// IMP=0x002000000095c94c
+ (Class)scdmaCellTowerType;	// IMP=0x001000000095c897
+ (Class)lteCellTowerType;	// IMP=0x001000000095c7e2
+ (Class)cdmaCellTowerType;	// IMP=0x001000000095c72d
+ (Class)wirelessAPType;	// IMP=0x001000000095c678
+ (Class)cellTowerType;	// IMP=0x001000000095c5c3
@property(retain, nonatomic) NSMutableArray *nr5GCellTowers; // @synthesize nr5GCellTowers=_nr5GCellTowers;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000095e790
- (unsigned long long)hash;	// IMP=0x001000000095e6d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000095e5a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000095de5f
- (void)copyTo:(id)arg1;	// IMP=0x001000000095db9b
- (void)writeTo:(id)arg1;	// IMP=0x001000000095d6c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000095d6bc
- (id)dictionaryRepresentation;	// IMP=0x001000000095c9d4
- (id)description;	// IMP=0x001000000095c95d
- (id)nr5GCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000095c92f
- (unsigned long long)nr5GCellTowersCount;	// IMP=0x001000000095c912
- (void)addNr5GCellTower:(id)arg1;	// IMP=0x001000000095c8c5
- (void)clearNr5GCellTowers;	// IMP=0x001000000095c8a8
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000095c87a
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x001000000095c85d
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x001000000095c810
- (void)clearScdmaCellTowers;	// IMP=0x001000000095c7f3
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000095c7c5
- (unsigned long long)lteCellTowersCount;	// IMP=0x001000000095c7a8
- (void)addLteCellTower:(id)arg1;	// IMP=0x001000000095c75b
- (void)clearLteCellTowers;	// IMP=0x001000000095c73e
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000095c710
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x001000000095c6f3
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x001000000095c6a6
- (void)clearCdmaCellTowers;	// IMP=0x001000000095c689
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x001000000095c65b
- (unsigned long long)wirelessAPsCount;	// IMP=0x001000000095c63e
- (void)addWirelessAP:(id)arg1;	// IMP=0x001000000095c5f1
- (void)clearWirelessAPs;	// IMP=0x001000000095c5d4
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000095c5a6
- (unsigned long long)cellTowersCount;	// IMP=0x001000000095c589
- (void)addCellTower:(id)arg1;	// IMP=0x001000000095c53c
- (void)clearCellTowers;	// IMP=0x001000000095c51f
- (void)dealloc;	// IMP=0x001000000095c48c

@end

