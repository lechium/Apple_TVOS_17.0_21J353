//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbLocationFingerprintsV1 : PBCodable
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000b64e88
- (unsigned long long)hash;	// IMP=0x0010000000b64e6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000b64e11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b64c6e
- (void)copyTo:(id)arg1;	// IMP=0x0010000000b64be4
- (void)writeTo:(id)arg1;	// IMP=0x0010000000b64ade
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000b64ad1
- (id)dictionaryRepresentation;	// IMP=0x0010000000b64737
- (id)description;	// IMP=0x0010000000b646c0
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000b646a3
- (unsigned long long)locationFingerprintsCount;	// IMP=0x0010000000b64686
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x0010000000b64639
- (void)clearLocationFingerprints;	// IMP=0x0010000000b6461c
- (void)dealloc;	// IMP=0x0010000000b645dc

@end

