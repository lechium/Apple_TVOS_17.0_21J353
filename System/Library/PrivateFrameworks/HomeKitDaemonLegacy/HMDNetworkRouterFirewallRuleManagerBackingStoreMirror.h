//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudDatabase, HMBLocalDatabase, HMBLocalZone, HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel, NAFuture, NAPromise, NSObject, NSString;
@protocol HMBLocalZoneID, NAScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirror : HMFObject
{
    _Bool _shuttingDown;	// 8 = 0x8
    _Bool _useAnonymousRequests;	// 9 = 0x9
    id <HMBLocalZoneID> _zoneID;	// 16 = 0x10
    HMBLocalZone *_localZone;	// 24 = 0x18
    NAFuture *_lastAsyncFuture;	// 32 = 0x20
    HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *_internalState;	// 40 = 0x28
    HMBCloudDatabase *_cloudDatabase;	// 48 = 0x30
    HMBLocalDatabase *_localDatabase;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NAPromise *_startupPromise;	// 72 = 0x48
    NAPromise *_shutdownPromise;	// 80 = 0x50
    id <NAScheduler> _workQueueScheduler;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x0010000000803d46
+ (id)publicKeysFromCertificateRecord:(id)arg1;	// IMP=0x0010000000414b32
+ (id)__publicKeyFromCertificateRecord:(id)arg1 dataKey:(id)arg2 assetKey:(id)arg3;	// IMP=0x00100000004140bc
+ (id)__recordKeyCertificatePrefix:(id)arg1;	// IMP=0x0010000000413fcb
+ (id)__certificatesRecordID;	// IMP=0x0010000000413f9b
+ (id)__createSignatureVerificationPolicy;	// IMP=0x0010000000413f74
+ (unsigned long long)__maxSizeForCKRecordSignatureVerificationCertificateChain;	// IMP=0x0010000000413e8e
+ (_Bool)__errorIsNotFound:(id)arg1;	// IMP=0x0010000000649dcf
+ (id)__overrideParentModelID;	// IMP=0x0010000000649d9f
- (void).cxx_destruct;	// IMP=0x00000000008005fe
@property(readonly, nonatomic) id <NAScheduler> workQueueScheduler; // @synthesize workQueueScheduler=_workQueueScheduler;
@property(readonly, nonatomic) NAPromise *shutdownPromise; // @synthesize shutdownPromise=_shutdownPromise;
@property(readonly, nonatomic) NAPromise *startupPromise; // @synthesize startupPromise=_startupPromise;
@property(readonly, nonatomic) _Bool useAnonymousRequests; // @synthesize useAnonymousRequests=_useAnonymousRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, nonatomic) HMBCloudDatabase *cloudDatabase; // @synthesize cloudDatabase=_cloudDatabase;
@property(nonatomic, getter=isShuttingDown) _Bool shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(retain, nonatomic) HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel *internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
- (void)__saveInternalStateWithActivity:(id)arg1;	// IMP=0x00000000008000b8
- (_Bool)_removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000007ffe5f
- (_Bool)removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000007ffda5
- (_Bool)removeAllOverridesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007ffd1c
- (_Bool)removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007ffaec
- (_Bool)addOverrides:(id)arg1 replace:(_Bool)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000007ff8b1
- (id)_fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007ff645
- (id)fetchOverridesForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007ff633
- (id)fetchAllOverridesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007ff619
- (id)fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007ff2b6
- (_Bool)removeAllLocalRulesWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007ff096
- (id)fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007fefe8
- (id)fetchAllDataWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007fef50
- (id)_fetchAllDataForZoneName:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007fece4
- (id)fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000007fe981
- (void)fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000007fe889
- (id)desiredKeys;	// IMP=0x00000000007fe7a9
- (void)fetchCloudRecordIDsForZoneID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007fe6ae
- (void)_fetchCloudRecordsForZoneID:(id)arg1 recordID:(id)arg2 options:(id)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000007fe4bf
- (void)fetchCloudChangesForRecordIDs:(id)arg1 options:(id)arg2 ignoreLastSynchronizedRecords:(_Bool)arg3 xpcActivity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000007fe2d9
- (id)cloudFetchNeededForRecordIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007fe19a
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (id)shutdown;	// IMP=0x00000000007fdfc5
- (id)flush;	// IMP=0x00000000007fde90
- (id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;	// IMP=0x00000000007fde21
- (id)destroy;	// IMP=0x00000000007fddb2
- (void)startUpWithLocalZone:(id)arg1;	// IMP=0x00000000007fdcd7
@property(readonly, nonatomic) NAFuture *startUp;
- (id)__asyncFutureWithActivity:(id)arg1 ignoreErrors:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000007fdae4
@property(retain, nonatomic) NAFuture *lastAsyncFuture; // @synthesize lastAsyncFuture=_lastAsyncFuture;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithLocalDatabase:(id)arg1 cloudDatabase:(id)arg2 useAnonymousRequests:(_Bool)arg3 ownerQueue:(id)arg4;	// IMP=0x00000000007fd607
- (void)__startQueryOperation:(id)arg1 operation:(id)arg2;	// IMP=0x000000000000696d
- (void)__fetchRecordsByQuery:(id)arg1;	// IMP=0x0000000000006471
- (void)__fetchRecordByID:(id)arg1;	// IMP=0x0000000000005f49
- (void)__fetchCloudRecordsWithFetchInfo:(id)arg1;	// IMP=0x0000000000005ea0
- (_Bool)__shouldFailCloudRecordFetchError:(id)arg1 error:(id)arg2;	// IMP=0x0000000000005916
- (void)__shutdownWithActivity:(id)arg1;	// IMP=0x000000000009caaf
- (void)__startupWithLocalZone:(id)arg1 activity:(id)arg2;	// IMP=0x000000000009c7cc
- (id)__loadOrCreateInternalStateModelWithLocalZone:(id)arg1 activity:(id)arg2;	// IMP=0x000000000009c3a8
- (void)__retryFetchVerificationCertificatesWithFetchInfo:(id)arg1;	// IMP=0x000000000041342b
- (_Bool)__canRecoverFromVerificationCertificatesError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x000000000041324b
- (void)__fetchVerificationCertificatesCompleted:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x0000000000412e4a
- (void)__fetchVerificationCertificatesWithFetchInfo:(id)arg1;	// IMP=0x0000000000412cb3
- (void)fetchVerificationCertificatesRecordWithOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000412a99
- (_Bool)__removeOverridesForZoneName:(id)arg1 recordName:(id)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;	// IMP=0x00000000006494d6
- (_Bool)__removeOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006484e7
- (_Bool)__removeOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000647ced
- (_Bool)__removeAllOverridesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000064794c
- (_Bool)__addOverrides:(id)arg1 replace:(_Bool)arg2 options:(id)arg3 activity:(id)arg4 error:(id *)arg5;	// IMP=0x00000000006473c7
- (id)__fetchOverridesForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000646997
- (id)__fetchOverridesForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000064612a
- (_Bool)__removeAllLocalRulesWithOptions:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000645e0d
- (id)__fetchAllDataForZoneName:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000645545
- (id)__fetchAllDataForZoneID:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x000000000064435c
- (id)__fetchAllDataForRecordIDs:(id)arg1 options:(id)arg2 activity:(id)arg3 error:(id *)arg4;	// IMP=0x00000000006437f0
- (id)__localZonesForRecordIDs:(id)arg1 activity:(id)arg2 error:(id *)arg3;	// IMP=0x000000000064300b
- (void)__shutdownLocalZones:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000642cc0
- (id)__openLocalZoneForCloudZoneID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000642bea
- (id)__createCloudZoneIDForZoneID:(id)arg1;	// IMP=0x0000000000642af6
- (void)__updateChangeTokenWithFetchInfo:(id)arg1;	// IMP=0x000000000075123b
- (void)__removeDeletedZonesWithFetchInfo:(id)arg1;	// IMP=0x0000000000779a81
- (void)__retryFetchDatabaseChangesWithFetchInfo:(id)arg1;	// IMP=0x00000000008c467e
- (_Bool)__canRecoverFromFetchDatabaseChangesError:(id)arg1 fetchInfo:(id)arg2;	// IMP=0x00000000008c4388
- (void)__fetchDatabaseChangesCompleted:(id)arg1 error:(id)arg2;	// IMP=0x00000000008c427d
- (void)__fetchDatabaseChangesWithFetchInfo:(id)arg1;	// IMP=0x00000000008c3cc8
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;	// IMP=0x0000000000ac8787
- (void)__performCloudZonePullsWithFetchInfo:(id)arg1;	// IMP=0x0000000000ac8270
- (void)__startUpCloudZonesWithFetchInfo:(id)arg1;	// IMP=0x0000000000ac7d59
- (_Bool)__createCloudZonesForFetchInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000ac79e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

