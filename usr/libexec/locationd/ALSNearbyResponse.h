//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface ALSNearbyResponse : PBCodable
{
    NSMutableArray *_cdmaCellTowers;	// 8 = 0x8
    NSMutableArray *_cdmaEvdoTowers;	// 16 = 0x10
    NSMutableArray *_cellTowers;	// 24 = 0x18
    NSMutableArray *_lteCellTowers;	// 32 = 0x20
    NSMutableArray *_nr5GCellTowers;	// 40 = 0x28
    NSMutableArray *_scdmaCellTowers;	// 48 = 0x30
    NSMutableArray *_wirelessAPs;	// 56 = 0x38
}

+ (Class)nr5GCellTowerType;	// IMP=0x002000000098fd60
+ (Class)scdmaCellTowerType;	// IMP=0x001000000098fcab
+ (Class)lteCellTowerType;	// IMP=0x001000000098fbf6
+ (Class)cdmaEvdoTowerType;	// IMP=0x001000000098fb41
+ (Class)cdmaCellTowerType;	// IMP=0x001000000098fa8c
+ (Class)wirelessAPType;	// IMP=0x001000000098f9d7
+ (Class)cellTowerType;	// IMP=0x001000000098f922
@property(retain, nonatomic) NSMutableArray *nr5GCellTowers; // @synthesize nr5GCellTowers=_nr5GCellTowers;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(retain, nonatomic) NSMutableArray *cdmaEvdoTowers; // @synthesize cdmaEvdoTowers=_cdmaEvdoTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000099201d
- (unsigned long long)hash;	// IMP=0x0010000000991f46
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000991dec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000991582
- (void)copyTo:(id)arg1;	// IMP=0x001000000099124c
- (void)writeTo:(id)arg1;	// IMP=0x0010000000990cb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000990cac
- (id)dictionaryRepresentation;	// IMP=0x001000000098fde8
- (id)description;	// IMP=0x001000000098fd71
- (id)nr5GCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098fd43
- (unsigned long long)nr5GCellTowersCount;	// IMP=0x001000000098fd26
- (void)addNr5GCellTower:(id)arg1;	// IMP=0x001000000098fcd9
- (void)clearNr5GCellTowers;	// IMP=0x001000000098fcbc
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098fc8e
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x001000000098fc71
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x001000000098fc24
- (void)clearScdmaCellTowers;	// IMP=0x001000000098fc07
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098fbd9
- (unsigned long long)lteCellTowersCount;	// IMP=0x001000000098fbbc
- (void)addLteCellTower:(id)arg1;	// IMP=0x001000000098fb6f
- (void)clearLteCellTowers;	// IMP=0x001000000098fb52
- (id)cdmaEvdoTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098fb24
- (unsigned long long)cdmaEvdoTowersCount;	// IMP=0x001000000098fb07
- (void)addCdmaEvdoTower:(id)arg1;	// IMP=0x001000000098faba
- (void)clearCdmaEvdoTowers;	// IMP=0x001000000098fa9d
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098fa6f
- (unsigned long long)cdmaCellTowersCount;	// IMP=0x001000000098fa52
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x001000000098fa05
- (void)clearCdmaCellTowers;	// IMP=0x001000000098f9e8
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098f9ba
- (unsigned long long)wirelessAPsCount;	// IMP=0x001000000098f99d
- (void)addWirelessAP:(id)arg1;	// IMP=0x001000000098f950
- (void)clearWirelessAPs;	// IMP=0x001000000098f933
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x001000000098f905
- (unsigned long long)cellTowersCount;	// IMP=0x001000000098f8e8
- (void)addCellTower:(id)arg1;	// IMP=0x001000000098f89b
- (void)clearCellTowers;	// IMP=0x001000000098f87e
- (void)dealloc;	// IMP=0x001000000098f7dc

@end
