//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AWDHomeKitMessageLocation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDHomeKitMessageHomeLocationReport : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDHomeKitMessageLocation *_nearestLOI;	// 16 = 0x10
    unsigned int _numIterationToConverge;	// 24 = 0x18
    NSMutableArray *_rawLocations;	// 32 = 0x20
    AWDHomeKitMessageLocation *_selectedHomeLocation;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
        unsigned int numIterationToConverge:1;
    } _has;	// 48 = 0x30
}

+ (Class)rawLocationsType;	// IMP=0x00100000008e507f
- (void).cxx_destruct;	// IMP=0x00000000008e503d
@property(retain, nonatomic) AWDHomeKitMessageLocation *nearestLOI; // @synthesize nearestLOI=_nearestLOI;
@property(nonatomic) unsigned int numIterationToConverge; // @synthesize numIterationToConverge=_numIterationToConverge;
@property(retain, nonatomic) AWDHomeKitMessageLocation *selectedHomeLocation; // @synthesize selectedHomeLocation=_selectedHomeLocation;
@property(retain, nonatomic) NSMutableArray *rawLocations; // @synthesize rawLocations=_rawLocations;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008e4d89
- (unsigned long long)hash;	// IMP=0x00000000008e4ccc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008e4b8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008e490c
- (void)copyTo:(id)arg1;	// IMP=0x00000000008e47c0
- (void)writeTo:(id)arg1;	// IMP=0x00000000008e45f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008e42be
- (id)dictionaryRepresentation;	// IMP=0x00000000008e3f2a
- (id)description;	// IMP=0x00000000008e3e7b
@property(readonly, nonatomic) _Bool hasNearestLOI;
@property(nonatomic) _Bool hasNumIterationToConverge;
@property(readonly, nonatomic) _Bool hasSelectedHomeLocation;
- (id)rawLocationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008e3deb
- (unsigned long long)rawLocationsCount;	// IMP=0x00000000008e3dce
- (void)addRawLocations:(id)arg1;	// IMP=0x00000000008e3d64
- (void)clearRawLocations;	// IMP=0x00000000008e3d47
@property(nonatomic) _Bool hasTimestamp;

@end

