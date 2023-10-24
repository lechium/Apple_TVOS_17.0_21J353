//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordZoneIdentifier;

@interface CKDPRecordRetrieveChangesResponseSyncObligation : PBCodable
{
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f8d7c
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f8cfe
- (unsigned long long)hash;	// IMP=0x00000000000f8ce1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f8c51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f8bd9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f8baf
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f8b8b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f8b7e
- (id)dictionaryRepresentation;	// IMP=0x00000000000f8951
- (id)description;	// IMP=0x00000000000f88a2
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

