//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveChangesResponse : PBCodable
{
    NSMutableArray *_changedZones;	// 8 = 0x8
    int _status;	// 16 = 0x10
    NSData *_syncContinuationToken;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 32 = 0x20
}

+ (Class)changedZonesType;	// IMP=0x0010000000363295
- (void).cxx_destruct;	// IMP=0x00000000003641e1
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedZones; // @synthesize changedZones=_changedZones;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000363ffd
- (unsigned long long)hash;	// IMP=0x0000000000363f87
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000363ea5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000363c73
- (void)copyTo:(id)arg1;	// IMP=0x0000000000363b6f
- (void)writeTo:(id)arg1;	// IMP=0x00000000003639e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003639dc
- (id)dictionaryRepresentation;	// IMP=0x0000000000363492
- (id)description;	// IMP=0x00000000003633e3
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000363378
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000363322
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;
- (id)changedZonesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000363278
- (unsigned long long)changedZonesCount;	// IMP=0x000000000036325b
- (void)addChangedZones:(id)arg1;	// IMP=0x00000000003631f1
- (void)clearChangedZones;	// IMP=0x00000000003631d4

@end
