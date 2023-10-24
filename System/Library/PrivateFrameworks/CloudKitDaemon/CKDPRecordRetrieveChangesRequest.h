//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordZoneIdentifier, CKDPRequestedFields, NSData;

@interface CKDPRecordRetrieveChangesRequest : PBRequest
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    unsigned int _maxChanges;	// 16 = 0x10
    int _requestedChangeTypes;	// 20 = 0x14
    CKDPRequestedFields *_requestedFields;	// 24 = 0x18
    NSData *_syncContinuationToken;	// 32 = 0x20
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 40 = 0x28
    _Bool _ignoreCallingDeviceChanges;	// 48 = 0x30
    _Bool _includeMergeableDeltas;	// 49 = 0x31
    _Bool _newestFirst;	// 50 = 0x32
    struct {
        unsigned int maxChanges:1;
        unsigned int requestedChangeTypes:1;
        unsigned int ignoreCallingDeviceChanges:1;
        unsigned int includeMergeableDeltas:1;
        unsigned int newestFirst:1;
    } _has;	// 52 = 0x34
}

+ (id)options;	// IMP=0x0010000000303e78
- (void).cxx_destruct;	// IMP=0x0000000000305495
@property(nonatomic) _Bool includeMergeableDeltas; // @synthesize includeMergeableDeltas=_includeMergeableDeltas;
@property(nonatomic) _Bool ignoreCallingDeviceChanges; // @synthesize ignoreCallingDeviceChanges=_ignoreCallingDeviceChanges;
@property(nonatomic) _Bool newestFirst; // @synthesize newestFirst=_newestFirst;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(nonatomic) unsigned int maxChanges; // @synthesize maxChanges=_maxChanges;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000305245
- (unsigned long long)hash;	// IMP=0x00000000003050fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000304ef7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000304d79
- (void)copyTo:(id)arg1;	// IMP=0x0000000000304c3f
- (Class)responseClass;	// IMP=0x0000000000304c2e
- (unsigned int)requestTypeCode;	// IMP=0x0000000000304c23
- (void)writeTo:(id)arg1;	// IMP=0x0000000000304ad9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000304acc
- (id)dictionaryRepresentation;	// IMP=0x0000000000304244
- (id)description;	// IMP=0x0000000000304195
@property(nonatomic) _Bool hasIncludeMergeableDeltas;
@property(nonatomic) _Bool hasIgnoreCallingDeviceChanges;
@property(nonatomic) _Bool hasNewestFirst;
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
- (int)StringAsRequestedChangeTypes:(id)arg1;	// IMP=0x0000000000304002
- (id)requestedChangeTypesAsString:(int)arg1;	// IMP=0x0000000000303fb7
@property(nonatomic) _Bool hasRequestedChangeTypes;
@property(nonatomic) int requestedChangeTypes; // @synthesize requestedChangeTypes=_requestedChangeTypes;
@property(nonatomic) _Bool hasMaxChanges;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;

@end
