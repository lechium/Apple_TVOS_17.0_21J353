//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchMultiMapRegion : PBCodable
{
    NSMutableArray *_mapRegions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000041c245
- (unsigned long long)hash;	// IMP=0x000000000041c228
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041c198
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041bffa
- (void)writeTo:(id)arg1;	// IMP=0x000000000041bec4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041beb5
- (id)jsonRepresentation;	// IMP=0x000000000041bea6
- (id)dictionaryRepresentation;	// IMP=0x000000000041bc26
- (id)description;	// IMP=0x000000000041bb77

@end

