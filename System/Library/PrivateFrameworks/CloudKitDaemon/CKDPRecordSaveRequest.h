//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, NSString;

@interface CKDPRecordSaveRequest : PBRequest
{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;	// 8 = 0x8
    NSMutableArray *_conflictLosersToResolves;	// 16 = 0x10
    NSString *_etag;	// 24 = 0x18
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;	// 32 = 0x20
    NSString *_parentChainProtectionInfoTag;	// 40 = 0x28
    CKDPRecord *_record;	// 48 = 0x30
    NSString *_recordProtectionInfoTag;	// 56 = 0x38
    CKDPRequestedFields *_requestedFields;	// 64 = 0x40
    int _saveSemantics;	// 72 = 0x48
    NSString *_shareEtag;	// 80 = 0x50
    CKDPRecordSaveRequestShareIdUpdate *_shareIDUpdate;	// 88 = 0x58
    NSString *_zoneProtectionInfoTag;	// 96 = 0x60
    _Bool _merge;	// 104 = 0x68
    struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;	// 108 = 0x6c
}

+ (Class)conflictLosersToResolveType;	// IMP=0x001000000015c510
+ (Class)fieldsToDeleteIfExistOnMergeType;	// IMP=0x001000000015c29b
+ (id)options;	// IMP=0x001000000015c12c
- (void).cxx_destruct;	// IMP=0x000000000015e5a1
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) NSString *parentChainProtectionInfoTag; // @synthesize parentChainProtectionInfoTag=_parentChainProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate; // @synthesize shareIDUpdate=_shareIDUpdate;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(retain, nonatomic) NSMutableArray *conflictLosersToResolves; // @synthesize conflictLosersToResolves=_conflictLosersToResolves;
@property(retain, nonatomic) NSString *recordProtectionInfoTag; // @synthesize recordProtectionInfoTag=_recordProtectionInfoTag;
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // @synthesize conflictLoserUpdate=_conflictLoserUpdate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // @synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015dff5
- (unsigned long long)hash;	// IMP=0x000000000015de4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015db98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015d6c7
- (void)copyTo:(id)arg1;	// IMP=0x000000000015d403
- (Class)responseClass;	// IMP=0x000000000015d3f2
- (unsigned int)requestTypeCode;	// IMP=0x000000000015d3e7
- (void)writeTo:(id)arg1;	// IMP=0x000000000015d079
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015d06c
- (id)dictionaryRepresentation;	// IMP=0x000000000015c624
- (id)description;	// IMP=0x000000000015c575
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasParentChainProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasShareIDUpdate;
@property(readonly, nonatomic) _Bool hasShareEtag;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015c4f3
- (unsigned long long)conflictLosersToResolvesCount;	// IMP=0x000000000015c4d6
- (void)addConflictLosersToResolve:(id)arg1;	// IMP=0x000000000015c46c
- (void)clearConflictLosersToResolves;	// IMP=0x000000000015c44f
@property(readonly, nonatomic) _Bool hasRecordProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasZoneProtectionInfoTag;
- (int)StringAsSaveSemantics:(id)arg1;	// IMP=0x000000000015c388
- (id)saveSemanticsAsString:(int)arg1;	// IMP=0x000000000015c33d
@property(nonatomic) _Bool hasSaveSemantics;
@property(nonatomic) int saveSemantics; // @synthesize saveSemantics=_saveSemantics;
@property(readonly, nonatomic) _Bool hasConflictLoserUpdate;
@property(readonly, nonatomic) _Bool hasEtag;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015c27e
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;	// IMP=0x000000000015c261
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;	// IMP=0x000000000015c1f7
- (void)clearFieldsToDeleteIfExistOnMerges;	// IMP=0x000000000015c1da
@property(nonatomic) _Bool hasMerge;
@property(readonly, nonatomic) _Bool hasRecord;

@end

