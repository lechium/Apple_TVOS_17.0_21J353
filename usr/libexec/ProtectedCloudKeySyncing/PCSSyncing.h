//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSUserDefaults, PCSAccountsModel, PCSKeySyncing, PCSMobileBackup, PCSUserRegistry;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PCSSyncing : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    PCSUserRegistry *_registry;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registryQueue;	// 24 = 0x18
    PCSKeySyncing *_manager;	// 32 = 0x20
    PCSAccountsModel *_accounts;	// 40 = 0x28
    NSOperationQueue *_serialOperationQueue;	// 48 = 0x30
    NSUserDefaults *_settings;	// 56 = 0x38
    PCSMobileBackup *_mobileBackup;	// 64 = 0x40
    NSObject<OS_xpc_object> *_scheduledKeyrollActivity;	// 72 = 0x48
}

+ (id)defaultPCSSyncing;	// IMP=0x0020000000010c42
- (void).cxx_destruct;	// IMP=0x0020000000019273
@property(retain) NSObject<OS_xpc_object> *scheduledKeyrollActivity; // @synthesize scheduledKeyrollActivity=_scheduledKeyrollActivity;
@property(retain) PCSMobileBackup *mobileBackup; // @synthesize mobileBackup=_mobileBackup;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(retain) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain) PCSAccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) PCSKeySyncing *manager; // @synthesize manager=_manager;
@property(retain) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
@property(retain) PCSUserRegistry *registry; // @synthesize registry=_registry;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)getHealthSummary:(CDUnknownBlockType)arg1;	// IMP=0x00100000000190d6
- (void)keyRollPending:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018f84
- (void)manateeStatus:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000000183dc
- (void)fetchStats:(CDUnknownBlockType)arg1;	// IMP=0x001000000001838a
- (void)userDBBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018378
- (void)mobileBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018366
- (void)triggerUserRegistryCheck:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018354
- (void)restoreMobileBackup:(_Bool)arg1 dsid:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017766
- (void)fetchAllDeviceKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000176c2
- (void)checkSyncingForPeer:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000176bc
- (void)triggerDaily:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001766d
- (void)requestKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000175f5
- (void)syncKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000175de
- (void)getAllClients:(CDUnknownBlockType)arg1;	// IMP=0x00100000000173dc
- (void)queuedCheckRegistry:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001737e
- (void)notifyEvent:(id)arg1;	// IMP=0x00100000000172a9
- (void)notifyDailyEvent;	// IMP=0x0010000000017128
- (void)repairWalrus;	// IMP=0x0010000000016daf
- (struct _PCSIdentitySetData *)identityCopySet:(id)arg1;	// IMP=0x0010000000016b56
- (void)createIdentity:(id)arg1 dsid:(id)arg2 roll:(_Bool)arg3 sync:(_Bool)arg4 forceSync:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x00100000000164a6
- (void)disableWalrusForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x001000000001621b
- (void)enableWalrusForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015f19
- (void)migrateToiCDPForAccount:(id)arg1 withParameters:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015d86
- (void)setupIdentitiesForAccount:(id)arg1 withParameters:(id)arg2 optional:(_Bool)arg3;	// IMP=0x0010000000015a88
- (void)triggerSyncingWithEscrowProxy:(id)arg1 dsid:(id)arg2 publicKeys:(id)arg3 accountIdentifier:(id)arg4 settingsKeyExpirationDate:(id)arg5 settingsKeyIdentifier:(id)arg6 complete:(CDUnknownBlockType)arg7;	// IMP=0x0010000000015797
- (void)triggerCKKSSyncForService:(id)arg1 dsid:(id)arg2 publicKeys:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0010000000015228
- (_Bool)forceSyncNeeded:(id)arg1 dsid:(id)arg2;	// IMP=0x0010000000014fd5
- (void)triggerEscrowSyncWithDSID:(id)arg1 accountIdentifier:(id)arg2 settingsKeyExpirationDate:(id)arg3 settingsKeyIdentifier:(id)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x001000000001454b
- (_Bool)ensureMKExists:(struct _PCSIdentitySetData *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0010000000014393
- (void)triggerKeyRolling;	// IMP=0x00100000000135e2
- (void);	// IMP=0x00100000000133c1
- (_Bool)getServicesToRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012cb3
- (void)scheduleRollAttempt;	// IMP=0x00100000000129ba
- (_Bool)activityIsScheduled:(id)arg1;	// IMP=0x0010000000012959
- (long long)attemptTimer;	// IMP=0x00100000000127fd
- (_Bool)shouldRollStingray;	// IMP=0x00100000000124bb
- (_Bool)shouldRoll;	// IMP=0x00100000000123f7
- (void)checkForBackupStateChange;	// IMP=0x0010000000011cd1
- (void)recordEpochForKeyroll;	// IMP=0x0010000000011b8a
- (id)getRollEpoch;	// IMP=0x0010000000011982
- (void)mobileBackupStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011906
- (void)clearNextSyncNegativeCache;	// IMP=0x0010000000011702
- (void)wStateChanged;	// IMP=0x0010000000011642
- (void)notifyInternalEvent:(id)arg1;	// IMP=0x00100000000112f9
- (void)triggerWatchSyncing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000112ee
- (void)notifyKeyRegistry;	// IMP=0x00100000000112e8
- (void)triggerWatchSyncing;	// IMP=0x00100000000112e2
- (id)healthSummary;	// IMP=0x0010000000011027
- (void)setupMetrics;	// IMP=0x0010000000011021
- (id)initWithPCSKeySyncing:(id)arg1;	// IMP=0x0010000000010e4e
- (id)initForTesting;	// IMP=0x0010000000010d26

@end

