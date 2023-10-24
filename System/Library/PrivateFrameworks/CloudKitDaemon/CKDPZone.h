//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPProtectionInfo, CKDPRecordStableUrl, CKDPRecordZoneIdentifier, CKDPShareIdentifier, CKDPStorageExpiration, NSMutableArray;

@interface CKDPZone : PBCodable
{
    CKDPProtectionInfo *_protectionInfo;	// 8 = 0x8
    NSMutableArray *_protectionInfoKeysToRemoves;	// 16 = 0x10
    CKDPProtectionInfo *_recordProtectionInfo;	// 24 = 0x18
    CKDPShareIdentifier *_shareId;	// 32 = 0x20
    CKDPRecordStableUrl *_stableUrl;	// 40 = 0x28
    CKDPStorageExpiration *_storageExpiration;	// 48 = 0x30
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 56 = 0x38
}

+ (Class)protectionInfoKeysToRemoveType;	// IMP=0x001000000012d4f2
- (void).cxx_destruct;	// IMP=0x000000000012e777
@property(retain, nonatomic) CKDPStorageExpiration *storageExpiration; // @synthesize storageExpiration=_storageExpiration;
@property(retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves; // @synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) CKDPRecordStableUrl *stableUrl; // @synthesize stableUrl=_stableUrl;
@property(retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo; // @synthesize recordProtectionInfo=_recordProtectionInfo;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000012e3d8
- (unsigned long long)hash;	// IMP=0x000000000012e301
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012e171
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012deb9
- (void)copyTo:(id)arg1;	// IMP=0x000000000012dd35
- (void)writeTo:(id)arg1;	// IMP=0x000000000012db45
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012db38
- (id)dictionaryRepresentation;	// IMP=0x000000000012d5c7
- (id)description;	// IMP=0x000000000012d518
@property(readonly, nonatomic) _Bool hasStorageExpiration;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012d4d5
- (unsigned long long)protectionInfoKeysToRemovesCount;	// IMP=0x000000000012d4b8
- (void)addProtectionInfoKeysToRemove:(id)arg1;	// IMP=0x000000000012d44e
- (void)clearProtectionInfoKeysToRemoves;	// IMP=0x000000000012d431
@property(readonly, nonatomic) _Bool hasShareId;
@property(readonly, nonatomic) _Bool hasStableUrl;
@property(readonly, nonatomic) _Bool hasRecordProtectionInfo;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

