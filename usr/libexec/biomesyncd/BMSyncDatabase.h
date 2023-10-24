//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

@interface BMSyncDatabase : NSObject
{
    _bmFMDatabase *_fmdb;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    NSString *__error_ivar;	// 32 = 0x20
    unsigned long long __internal_state_ivar;	// 40 = 0x28
    CDUnknownBlockType _corruptionHandler;	// 48 = 0x30
}

+ (id)defaultDatabaseWALPath;	// IMP=0x004000000003d3ad
+ (id)defaultDatabasePath;	// IMP=0x001000000003d34f
- (void).cxx_destruct;	// IMP=0x001000000003ef31
@property(copy, nonatomic) CDUnknownBlockType corruptionHandler; // @synthesize corruptionHandler=_corruptionHandler;
@property(readonly, nonatomic) unsigned long long internalState; // @synthesize internalState=__internal_state_ivar;
@property(readonly, nonatomic) NSString *error; // @synthesize error=__error_ivar;
- (_Bool)migration_Schema20ToSchema21;	// IMP=0x001000000003ed89
- (_Bool)migration_StarSkySchema11ToSydRoSchema12;	// IMP=0x001000000003ea65
@property(readonly, nonatomic) unsigned int version;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;	// IMP=0x001000000003ea2d
- (id)valueForMetadataKey:(id)arg1;	// IMP=0x001000000003e9ac
- (void)disableStatementCachingForBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003e918
- (void)clearCachedStatements;	// IMP=0x001000000003e902
- (_Bool)rollback;	// IMP=0x001000000003e8ec
- (_Bool)commit;	// IMP=0x001000000003e8d6
- (_Bool)isInTransaction;	// IMP=0x001000000003e8c0
- (_Bool)beginTransaction;	// IMP=0x001000000003e8aa
- (void)close;	// IMP=0x001000000003e7fc
@property(readonly, nonatomic) unsigned long long state;
- (_Bool)open;	// IMP=0x001000000003e728
- (_Bool)_tryOpen:(unsigned long long)arg1;	// IMP=0x001000000003d8a8
- (void)setState:(unsigned long long)arg1 errorFormat:(id)arg2;	// IMP=0x001000000003d786
- (void)setState:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x001000000003d5ee
- (id)initWithPath:(id)arg1 queue:(id)arg2;	// IMP=0x001000000003d48e
- (id)initWithPath:(id)arg1;	// IMP=0x001000000003d47a
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000003d404
- (int)CRDTLocationCount;	// IMP=0x0010000000004c1f
- (id)highestDeletedLocationForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000004aa2
- (id)highestDeletedLocationsForStream:(id)arg1;	// IMP=0x00100000000048d0
- (id)locationsWithState:(unsigned long long)arg1;	// IMP=0x0010000000004700
- (id)previousLocationRowBeforeLocationRow:(id)arg1;	// IMP=0x00100000000044a6
- (_Bool)removeAllDeletedLocationsBeforeHighestDeletedLocation:(id)arg1;	// IMP=0x00100000000042bb
- (_Bool)upsertLocation:(id)arg1;	// IMP=0x0010000000003e75
- (id)insertLocationIfNotExists:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x0010000000003be6
- (_Bool)updateAllLocationsAtOrBefore:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x00100000000038f1
- (_Bool)updateLocationState:(unsigned long long)arg1 forLocation:(id)arg2;	// IMP=0x00100000000037b3
- (id)locationRowWithLocationID:(id)arg1;	// IMP=0x001000000000367a
- (id)locationRowWithLocation:(id)arg1;	// IMP=0x0010000000003478
- (id)allPeers;	// IMP=0x0010000000007277
- (_Bool)setLastSyncDate:(id)arg1 forDeviceWithIdentifier:(id)arg2;	// IMP=0x0010000000007143
- (id)lastSyncDateOfDeviceWithIdentifier:(id)arg1;	// IMP=0x0010000000007006
- (id)lastSyncDateFromAnyDevice;	// IMP=0x0010000000006f4b
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x0010000000006e09
- (_Bool)upsertSyncDevicePeer:(id)arg1 isMe:(_Bool)arg2;	// IMP=0x001000000000684a
- (id)localDevice;	// IMP=0x001000000000678c
- (void)enumerateZonesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019272
- (_Bool)ckZoneSetAttemptedRecoveryDate:(id)arg1 state:(int)arg2 forZoneName:(id)arg3;	// IMP=0x0010000000019004
- (_Bool)ckZoneSetZoneVersionUUID:(id)arg1 forZoneName:(id)arg2;	// IMP=0x0010000000018dee
- (_Bool)ckZoneSetAttemptingRecoveryForZoneName:(id)arg1 state:(int)arg2;	// IMP=0x0010000000018b95
- (id)ckZoneForZoneName:(id)arg1;	// IMP=0x0010000000018a63
- (_Bool)ckZoneExists:(id)arg1;	// IMP=0x0010000000018959
- (id)SELECT_ATOMS_WHERE:(id)arg1 ORDER_BY:(id)arg2 LIMIT:(id)arg3;	// IMP=0x001000000002458a
- (id)highestLocationWithBufferedAtomsOlderThan:(double)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x00100000000243f8
- (id)computeHighestLocationToDeleteUpToBookmark:(id)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3 offsetsIncrease:(_Bool)arg4;	// IMP=0x00100000000240e8
- (void)atomRowsInTimestampClockVector:(id)arg1 forLocation:(id)arg2 inStream:(id)arg3 enumerateWithBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000023868
- (void)locationsInClockVector:(id)arg1 inStream:(id)arg2 enumerateWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002302c
- (_Bool)deleteAllAtomsAtOrBeforeLocation:(id)arg1;	// IMP=0x0010000000022b9e
- (void)atomsAtOrBeforeLocation:(id)arg1 ofType:(unsigned long long)arg2 enumerateWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002283d
- (void)atomRowsNotOnDiskReferencingSiteIdentifier:(id)arg1 inStream:(id)arg2 enumerateWithBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000225e1
- (id)CKAtomRowSiteIdentifiers;	// IMP=0x00100000000224f5
- (_Bool)containsCKAtomRowWithSegment:(id)arg1 inStream:(id)arg2;	// IMP=0x00100000000223c4
- (id)latestDistributedTimestampForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x00100000000221e1
- (id)ckAtomRowForAtomWithBookmark:(id)arg1 type:(unsigned long long)arg2 forSiteIdentifier:(id)arg3 inStream:(id)arg4;	// IMP=0x0010000000021f9d
- (MISSING_TYPE *)updateCKAtomRow:inStream: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000021a09
- (_Bool)containsCKAtomRowWithTimestamp:(id)arg1 inStream:(id)arg2 onDisk:(_Bool)arg3;	// IMP=0x0010000000021776
- (_Bool)containsCKAtomRowWithTimestamp:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000021544
- (int)ckAtomCount;	// IMP=0x0010000000021495
- (id)latestCKAtomRowOfType:(unsigned long long)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x00100000000212c0
- (id)stateVectorForLocationRow:(id)arg1;	// IMP=0x0010000000020d64
- (id)timestampClockVectorForStreamName:(id)arg1;	// IMP=0x0010000000020ac6
- (id)latestCKAtomRowForSiteIdentifier:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000020953
- (id)ckAtomRowWithTimestamp:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000020734
- (_Bool)addCKAtomRow:(id)arg1 inStream:(id)arg2;	// IMP=0x001000000001fd72
@property(retain, nonatomic) NSString *mergeableRecordValueKey;
- (void)clearCKSyncEngineMetaData;	// IMP=0x00100000000285de
- (void)saveCKSyncEngineMetaData:(id)arg1;	// IMP=0x00100000000285c5
- (id)ckSyncEngineMetaData;	// IMP=0x00100000000285ac
@property(retain, nonatomic) NSDate *lastCloudKitSyncDate;
@property(retain, nonatomic) NSDate *lastCloudKitSyncAttemptDate;
@property(retain, nonatomic) NSDate *lastRapportSyncDate;
@property(retain, nonatomic) NSDate *lastRapportSyncAttemptDate;
- (void)enumerateMergeableRecordValuesForRecordName:(id)arg1 zoneName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002897a
- (_Bool)clearCKMergeableRecordValueServerMergeableValuesForZoneName:(id)arg1;	// IMP=0x001000000002889c
- (_Bool)clearCKMergeableRecordValueServerMergeableValuesForRecordName:(id)arg1 zoneName:(id)arg2;	// IMP=0x0010000000028795
- (_Bool)saveCKMergeableRecordValueRecordName:(id)arg1 zoneName:(id)arg2 mergeableRecordValueData:(id)arg3;	// IMP=0x001000000002866a
- (_Bool)saveLatestTombstoneBookmark:(id)arg1 forSiteIdentifier:(id)arg2 inStream:(id)arg3;	// IMP=0x0010000000028c8f
- (_Bool)getLatestTombstoneBookmarkForSiteIdentifier:(id)arg1 inStream:(id)arg2 segmentName:(id *)arg3 segmentOffset:(unsigned long long *)arg4;	// IMP=0x0010000000028b12
- (_Bool)enableAllCKSyncRecordsPreviouslyDisabledForSite:(id)arg1 stream:(id)arg2;	// IMP=0x001000000003a4b1
- (_Bool)disableAllCKSyncRecordsForSite:(id)arg1 stream:(id)arg2;	// IMP=0x001000000003a294
- (_Bool)upsertCKRecordWithLocation:(id)arg1 inStream:(id)arg2;	// IMP=0x0010000000039e61
- (unsigned long long)ckRecordCountForRecordType:(unsigned long long)arg1;	// IMP=0x0010000000039d23
- (void)deleteAllCKRecordsInZone:(id)arg1;	// IMP=0x0010000000039bd7
- (id)gatherAllCKSyncRecordRecordsToBeDeleted;	// IMP=0x0010000000039a6d
- (void)enumerateCKSyncRecordRecordsSetForDeletingUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000398a6
- (void)deleteCKRecordAtLocation:(id)arg1;	// IMP=0x001000000003971f
- (void)deleteCKRecordsForStreamName:(id)arg1;	// IMP=0x0010000000039604
- (void)deleteCKRecordsAtOrBeforeLocation:(id)arg1;	// IMP=0x0010000000039414
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000392f8
- (void)markCKRecordsAtOrBeforeLocationToBeDeletedOnSync:(id)arg1;	// IMP=0x0010000000039072
- (void)updateAllCKRecordsAtOrBeforeLocationToBeDeletedOnSync:(id)arg1;	// IMP=0x0010000000038e7b
- (_Bool)ckRecordExists:(id)arg1 zoneName:(id)arg2 recordType:(unsigned long long)arg3;	// IMP=0x0010000000038d0c
- (id)ckRecordForRecordName:(id)arg1 zoneName:(id)arg2 recordType:(unsigned long long)arg3;	// IMP=0x0010000000038b71
- (_Bool)clearCKRecordLocalMergeableValueAndSetToSyncForZone:(id)arg1;	// IMP=0x0010000000038987
- (_Bool)saveCKRecordLocalMergeableValue:(id)arg1 recordName:(id)arg2 zoneName:(id)arg3 locationRow:(id)arg4;	// IMP=0x00100000000385d7
- (_Bool)saveCKRecordHighestDeletedLocationRow:(id)arg1 recordName:(id)arg2 zoneName:(id)arg3 recordExists:(_Bool)arg4;	// IMP=0x00100000000382ff
- (_Bool)saveCKRecordServerMergeableValue:(id)arg1 recordName:(id)arg2 zoneName:(id)arg3 locationRow:(id)arg4;	// IMP=0x001000000003805c
- (void)resetMetadataForRecord:(id)arg1 zoneName:(id)arg2;	// IMP=0x0010000000037e5c
- (_Bool)resetCKRecordsMetaDataAndSetToSyncForZone:(id)arg1;	// IMP=0x0010000000037c76
- (id)getSystemFieldsDataForRecordName:(id)arg1 zoneName:(id)arg2 recordType:(unsigned long long)arg3;	// IMP=0x0010000000037ae0
- (void)saveSystemFieldsDataForRecord:(id)arg1 syncToCloudKit:(id)arg2 recordType:(unsigned long long)arg3 crdtDeleted:(id)arg4;	// IMP=0x0010000000037406
- (id)createCKRecordFromRecordID:(id)arg1 newRecord:(_Bool *)arg2 recordType:(unsigned long long)arg3;	// IMP=0x0010000000037219
- (id)recordFromSystemFieldsData:(id)arg1;	// IMP=0x0010000000037121
- (id)ckRecordsToSyncToCloudKitForZone:(id)arg1;	// IMP=0x0010000000036e7f
- (void)compactAndDeleteSessionLogs;	// IMP=0x00100000000402c1
- (id)computeAggregatedSessionLogs;	// IMP=0x00100000000401cf
- (void)recordAtomMergeResult:(unsigned long long)arg1 inStream:(id)arg2 sessionID:(id)arg3 messageID:(unsigned long long)arg4 ownerSite:(id)arg5 originatingSite:(id)arg6 eventCreatedAt:(double)arg7;	// IMP=0x001000000003febb
- (void)recordMessageToDeviceIdentifier:(id)arg1 sessionID:(id)arg2 messageID:(unsigned long long)arg3 reachable:(_Bool)arg4 bytes:(unsigned long long)arg5 isReciprocal:(_Bool)arg6;	// IMP=0x001000000003fbd6
- (void)recordSessionEnd:(id)arg1 timeSincePreviousSync:(double)arg2;	// IMP=0x001000000003f9e6
- (void)recordSessionStart:(id)arg1 transport:(unsigned long long)arg2 reason:(unsigned long long)arg3 isReciprocal:(_Bool)arg4;	// IMP=0x001000000003f782
- (unsigned long long)sizeOfTableInKilobytes:(id)arg1;	// IMP=0x00100000000412e0
- (unsigned long long)numRowsInTable:(id)arg1;	// IMP=0x0010000000040f7a
- (unsigned long long)_sizeOfFileInKilobytes:(id)arg1;	// IMP=0x0010000000040de0
- (unsigned long long)walSizeInKilobytes;	// IMP=0x0010000000040d85
- (unsigned long long)databaseSizeInKilobytes;	// IMP=0x0010000000040d2a
- (_Bool)vacuumWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000407b8
- (unsigned long long)_numPagesToVacuum;	// IMP=0x001000000004043a
@property(retain, nonatomic) NSDate *dateOfLastVacuum;

@end

