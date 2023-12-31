//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMDistributedSyncMultiStreamManager, BMSyncDatabase, BMSyncSessionContext, BMSyncSessionMetricsCollector, CKContainer, CKSyncEngine, CKSyncEngineConfiguration, NSMutableSet, NSOperationQueue, NSString;
@protocol CKSyncEngineDataSource, OS_dispatch_queue;

@interface BMCloudKitSyncEngine : NSObject
{
    BMDistributedSyncMultiStreamManager *_syncManager;	// 8 = 0x8
    BMSyncDatabase *_db;	// 16 = 0x10
    NSMutableSet *_dataReceivedFromSiteIdentifiers;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    BMSyncSessionMetricsCollector *_metricsCollector;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <CKSyncEngineDataSource> _dataSource;	// 56 = 0x38
    CKContainer *_container;	// 64 = 0x40
    CKSyncEngineConfiguration *_configuration;	// 72 = 0x48
    CKSyncEngine *_ckSyncEngine;	// 80 = 0x50
    NSString *_mergeableRecordValueKey;	// 88 = 0x58
    BMSyncSessionContext *_sessionContext;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000034571
@property(retain, nonatomic) BMSyncSessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(readonly, nonatomic) NSString *mergeableRecordValueKey; // @synthesize mergeableRecordValueKey=_mergeableRecordValueKey;
@property(retain, nonatomic) CKSyncEngine *ckSyncEngine; // @synthesize ckSyncEngine=_ckSyncEngine;
@property(retain, nonatomic) CKSyncEngineConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id <CKSyncEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BMSyncSessionMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
- (void)syncEngineDidEndModifyingPendingChanges:(id)arg1;	// IMP=0x00100000000341dd
- (void)syncEngineWillBeginModifyingPendingChanges:(id)arg1;	// IMP=0x0010000000034176
- (void)syncEngineDidEndFetchingChanges:(id)arg1;	// IMP=0x001000000003307c
- (void)syncEngineWillBeginFetchingChanges:(id)arg1;	// IMP=0x0010000000033015
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;	// IMP=0x0010000000032ea4
- (void)handleRecordWithIDDeletedSyncRecord:(id)arg1;	// IMP=0x0010000000032c21
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;	// IMP=0x0010000000032a36
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;	// IMP=0x0010000000032555
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;	// IMP=0x001000000003238c
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;	// IMP=0x00100000000321f6
- (id)handleSyncRecordRecordToSaveForRecordID:(id)arg1;	// IMP=0x00100000000315e2
- (id)handleZoneVersionRecordToSaveForRecordID:(id)arg1;	// IMP=0x0010000000031423
- (id)handleHighestDeletedLocationRecordToSaveForRecordID:(id)arg1;	// IMP=0x0010000000030f78
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;	// IMP=0x0010000000030c35
- (void)handleServerRecordChangedForHighestDeletedLocationError:(id)arg1;	// IMP=0x0000000000030a4f
- (void)resaveRecord:(id)arg1;	// IMP=0x001000000003079c
- (_Bool)resaveRecordOnError:(long long)arg1;	// IMP=0x0010000000030788
- (void)handleFailedToSaveRecordHighestDeletedLocation:(id)arg1 error:(id)arg2;	// IMP=0x0010000000030600
- (void)handleFailedToSaveRecordZoneVersion:(id)arg1 error:(id)arg2;	// IMP=0x001000000003049c
- (void)handleFailedToSaveRecordSyncRecord:(id)arg1 error:(id)arg2;	// IMP=0x00100000000303a7
- (void)handleFailedToSaveSyncRecordServerManateeDecryptionError:(id)arg1 error:(id)arg2;	// IMP=0x00100000000301ac
- (void)handleFailedToSaveSyncRecordServerRecordChanged:(id)arg1 error:(id)arg2;	// IMP=0x001000000002f9de
- (void)handleFailedToSaveSyncRecordResaveRecord:(id)arg1;	// IMP=0x001000000002f634
- (void)handleFailedToSaveSyncRecordUnknownItem:(id)arg1;	// IMP=0x001000000002f4ab
- (void)handleZoneReset:(id)arg1;	// IMP=0x001000000002f39f
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;	// IMP=0x001000000002f0fa
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x001000000002efc6
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;	// IMP=0x001000000002ef01
- (void)syncEngine:(id)arg1 didSaveRecordZone:(id)arg2;	// IMP=0x001000000002ed21
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;	// IMP=0x001000000002ea69
- (void)handleDidSaveRecordSyncRecord:(id)arg1;	// IMP=0x001000000002e262
- (void)handleDidSaveRecordHighestDeletedLocation:(id)arg1;	// IMP=0x001000000002e192
- (void)handleDidSaveRecordZoneVersionRecord:(id)arg1;	// IMP=0x001000000002dfc2
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x001000000002de11
- (void)handleHighestDeletedLocationDidFetchRecord:(id)arg1;	// IMP=0x001000000002da3f
- (void)handleZoneVersionDidFetchRecord:(id)arg1;	// IMP=0x001000000002d82f
- (void)handleSyncRecordDidFetchRecord:(id)arg1;	// IMP=0x001000000002d1e0
- (_Bool)isRecordNewerThanMostRecentDeleteForSiteIdentifier:(id)arg1;	// IMP=0x001000000002cede
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;	// IMP=0x001000000002cc5d
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;	// IMP=0x001000000002caee
- (void)syncEngine:(id)arg1 failedToFetchChangesForRecordZoneID:(id)arg2 error:(id)arg3;	// IMP=0x001000000002ca1a
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;	// IMP=0x001000000002c946
- (void)syncSessionDidEnd;	// IMP=0x001000000002c864
- (void)syncSessionDidStartWithReason:(unsigned long long)arg1;	// IMP=0x001000000002c7a9
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c244
- (_Bool)isManateeAvailable:(id)arg1;	// IMP=0x001000000002bfe9
- (void)uploadChangesWithError:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b251
- (void)handleTransitionToNewMergeableValueRecordValueKey;	// IMP=0x001000000002ae7f
- (void)fetchChangesWithError:(CDUnknownBlockType)arg1;	// IMP=0x001000000002abea
- (void)syncNowWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a662
- (id)newZoneVersionRecordIDForZone:(id)arg1;	// IMP=0x001000000002a612
- (id)newHighestDeletedLocationRecordIDFor:(id)arg1 stream:(id)arg2;	// IMP=0x001000000002a363
- (id)streamConfigurationFromSyncIdentifier:(id)arg1;	// IMP=0x001000000002a2c1
- (id)streamConfigurationForZoneID:(id)arg1;	// IMP=0x001000000002a25f
- (id)initWithQueue:(id)arg1 multiStreamManager:(id)arg2 database:(id)arg3;	// IMP=0x001000000002a114
- (id)db;	// IMP=0x001000000002a106
- (_Bool)isSiriCloudSyncEnabled;	// IMP=0x0010000000029f82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

