//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbLocationFingerprints : PBCodable
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000048e926
- (unsigned long long)hash;	// IMP=0x001000000048e909
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000048e8af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000048e70c
- (void)copyTo:(id)arg1;	// IMP=0x001000000048e682
- (void)writeTo:(id)arg1;	// IMP=0x001000000048e57c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000048e56f
- (id)dictionaryRepresentation;	// IMP=0x001000000048e1d5
- (id)description;	// IMP=0x001000000048e15e
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x001000000048e141
- (unsigned long long)locationFingerprintsCount;	// IMP=0x001000000048e124
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x001000000048e0d7
- (void)clearLocationFingerprints;	// IMP=0x001000000048e0ba
- (void)dealloc;	// IMP=0x001000000048e07a

@end
