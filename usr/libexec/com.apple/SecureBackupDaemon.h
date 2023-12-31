//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSURL, SBEscrowOperationLogger;
@protocol OS_dispatch_queue;

@interface SecureBackupDaemon : NSObject
{
    _Bool _needInitialBackup;	// 8 = 0x8
    _Bool _pendingNotification;	// 9 = 0x9
    int _cachedPassphraseFD;	// 12 = 0xc
    int _cachedRecordIDPassphraseFD;	// 16 = 0x10
    int _cachedRecoveryKeyFD;	// 20 = 0x14
    SBEscrowOperationLogger *_operationsLogger;	// 24 = 0x18
    NSURL *_cacheDirURL;	// 32 = 0x20
    NSData *_iCDPKeybag;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_backupQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_kvsQueue;	// 64 = 0x40
    NSString *_cachedRecordID;	// 72 = 0x48
    NSString *_iCloudEnvironment;	// 80 = 0x50
    NSMutableDictionary *_ignoredNotifications;	// 88 = 0x58
    NSMutableDictionary *_handledNotifications;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00100000000469ac
@property(retain, nonatomic) NSMutableDictionary *handledNotifications; // @synthesize handledNotifications=_handledNotifications;
@property(retain, nonatomic) NSMutableDictionary *ignoredNotifications; // @synthesize ignoredNotifications=_ignoredNotifications;
@property _Bool pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(copy, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
@property int cachedRecoveryKeyFD; // @synthesize cachedRecoveryKeyFD=_cachedRecoveryKeyFD;
@property int cachedRecordIDPassphraseFD; // @synthesize cachedRecordIDPassphraseFD=_cachedRecordIDPassphraseFD;
@property int cachedPassphraseFD; // @synthesize cachedPassphraseFD=_cachedPassphraseFD;
@property(copy, nonatomic) NSString *cachedRecordID; // @synthesize cachedRecordID=_cachedRecordID;
@property _Bool needInitialBackup; // @synthesize needInitialBackup=_needInitialBackup;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *kvsQueue; // @synthesize kvsQueue=_kvsQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSData *iCDPKeybag; // @synthesize iCDPKeybag=_iCDPKeybag;
@property(retain, nonatomic) NSURL *cacheDirURL; // @synthesize cacheDirURL=_cacheDirURL;
@property(readonly, nonatomic) SBEscrowOperationLogger *operationsLogger; // @synthesize operationsLogger=_operationsLogger;
- (void)knownICDPFederations:(CDUnknownBlockType)arg1;	// IMP=0x00100000000467bd
- (void)moveToFederationAllowed:(id)arg1 altDSID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046706
- (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046626
- (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000046421
- (void)getCertificatesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000461c5
- (void)daemonPasscodeRequestOpinion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045e39
- (id)fetchPRK:(id *)arg1;	// IMP=0x0010000000045d36
- (void)prepareHSA2EscrowRecordContents:(id)arg1 usesComplexPassphrase:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044f07
- (int)getPasscodeRequestFlag:(unsigned long long *)arg1;	// IMP=0x0010000000044eba
- (int)setPasscodeRequestFlag:(unsigned long long)arg1;	// IMP=0x0010000000044e6d
- (void)clearNotifyToken;	// IMP=0x0010000000044e13
- (int)notifyToken;	// IMP=0x0010000000044d03
- (void)beginHSA2PasscodeRequest:(id)arg1 desirePasscodeImmediately:(_Bool)arg2 uuid:(id)arg3 reason:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000044696
- (id)getPendingEscrowRequest:(id *)arg1;	// IMP=0x0010000000044630
- (void)stateCaptureWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000445cb
- (void)notificationInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000044497
- (void)changeSMSTargetWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000438b7
- (void)getCountrySMSCodesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043298
- (void)startSMSChallengeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042c01
- (void)uncachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x0010000000042bed
- (void)uncacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042962
- (void)cacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000426ef
- (void)uncachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042464
- (void)cachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x0010000000042450
- (void)cachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000421dd
- (void)uncacheRecordIDPassphrase;	// IMP=0x001000000004209d
- (id)cachedRecoveryKey;	// IMP=0x001000000004206d
@property(copy, nonatomic) NSString *cachedRecordIDPassphrase;
@property(copy, nonatomic) NSString *cachedPassphrase;
- (id)cachedPassphraseForFD:(int)arg1;	// IMP=0x0010000000041cc0
- (void)setCachedRecoveryKey:(id)arg1;	// IMP=0x0010000000041c90
- (int)storeCachedPassphrase:(id)arg1;	// IMP=0x0010000000041642
- (void)updateMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000040ae0
- (void)disableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003fed6
- (void)setBackOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f5bd
- (void)backOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f249
- (void)deleteAlliCDPRecordsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ea53
- (void)createICDPRecordWithRequest:(id)arg1 recordContents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e0b5
- (void)recoverRecordContentsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dd21
- (void)restoreKeychainAsyncWithPasswordInDaemon:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003db72
- (void)isRecoveryKeySetInDaemon:(CDUnknownBlockType)arg1;	// IMP=0x001000000003dac7
- (_Bool)verifyRecoveryKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003d195
- (void)verifyRecoveryKeyInDaemon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d118
- (void)restoreKeychainWithBackupPasswordInDaemon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d099
- (void)recoverSilentWithCDPContextInDaemon:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003cf9a
- (void)recoverWithCDPContextInDaemon:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003ce9b
- (void)recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003cdc4
- (void)_recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a5d5
- (void)_restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000003a25c
- (void)_recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039c66
- (void)_recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003894b
- (void)sortForMatchingPassphraseLengthAndPlatform:(id)arg1 secureBackups:(id)arg2 passphraseLength:(unsigned long long)arg3 platform:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000037c43
- (long long)compare:(id)arg1 with:(id)arg2 backups:(id)arg3;	// IMP=0x00100000000374e4
- (long long)compareEscrowDatesBetweenCurrentRecord:(id)arg1 andCandidateRecord:(id)arg2;	// IMP=0x0010000000037318
- (id)keysOfEntriesContainingObject:(id)arg1 backups:(id)arg2;	// IMP=0x001000000003725a
- (void)recoverEscrowWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035708
- (id)restoreEMCSBackup:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000003522f
- (id)restoreEMCSBackup:(id)arg1 keybag:(id)arg2 password:(id)arg3;	// IMP=0x0010000000034e7e
- (void)recordIDAndMetadataForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long)arg2 platform:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003478e
- (id)secureBackups;	// IMP=0x00100000000344e3
- (_Bool)_restoreKeychainWithBackupPassword:(id)arg1 keybagDigest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000033a47
- (void)_restoreKeychainAsyncWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4 restoredViews:(id)arg5 viewsNotToBeRestored:(id)arg6;	// IMP=0x00100000000330b2
- (_Bool)_restoreView:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 restoredViews:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000032d12
- (id)encodedStatsForViews:(id)arg1;	// IMP=0x0010000000032a71
- (id)restoreBackup:(id)arg1 withName:(id)arg2 keybagDigest:(id)arg3 keybag:(id)arg4 password:(id)arg5;	// IMP=0x00100000000322e6
- (void)backupWithInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000322cf
- (void)backupForRecoveryKeyWithInfoInDaemon:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000322b8
- (void)backupWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000321ed
- (void)backupForRecoveryKeyWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000032122
@property(nonatomic) _Bool backupAllowed;
- (void)handleEscrowStoreResults:(id)arg1 escrowError:(id)arg2 request:(id)arg3 peerID:(id)arg4 newRecordMetadata:(id)arg5 backupKeybag:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000031c65
- (void)enableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f515
- (void)stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f43e
- (void)_stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f159
- (id)massageOutgoingMetadataFromRequest:(id)arg1;	// IMP=0x001000000002ef89
- (void)getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ebf9
- (void)synchronizeKVSWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e449
- (void)doSynchronize;	// IMP=0x001000000002e396
- (id)sortRecordsByBottleID:(id)arg1;	// IMP=0x001000000002d5cc
- (id)tagStaleBottleRecords:(id)arg1 suggestedBottles:(id)arg2;	// IMP=0x001000000002d25d
- (void)_getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a8b0
- (id)_recordIDFromLabel:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;	// IMP=0x001000000002a7cb
- (void)getStingrayMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a150
- (_Bool)hasRecoveryKeyInKVS:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000029e4e
- (id)filteriCDPRecords:(id)arg1;	// IMP=0x00100000000296ff
- (id)massageIncomingMetadataFromInfo:(id)arg1;	// IMP=0x00100000000293c0
- (void)notificationOccurred:(id)arg1;	// IMP=0x001000000002901a
- (void)handleNotification:(id)arg1;	// IMP=0x0010000000028c2a
- (void)recordNotification:(id)arg1 handled:(_Bool)arg2;	// IMP=0x0010000000028b4e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000002871c
@property(readonly, nonatomic) _Bool forceICDP;
@property(readonly, retain, nonatomic) NSURL *cachedManifestURL;
@property(readonly, retain, nonatomic) NSURL *cachedKeychainURL;
- (struct os_state_data_s *)_stateCapture;	// IMP=0x00100000000281e4
- (id)copyKVSState;	// IMP=0x0010000000027c4c
- (void)setupNotifyEvents;	// IMP=0x0010000000027ac5
- (id)initWithOperationsLogger:(id)arg1;	// IMP=0x001000000002784d
- (id)normalizeSMSTarget:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000275cb
- (id)_gestaltValueForKey:(struct __CFString *)arg1;	// IMP=0x0010000000027464
- (void)unregisterForNotifyEvent:(id)arg1;	// IMP=0x001000000002742f
- (void)registerForNotifyEvent:(id)arg1;	// IMP=0x00100000000273c4
- (void)disableiCDPBackup;	// IMP=0x0010000000027382
- (void)_disableBackup;	// IMP=0x0010000000027306
- (id)_consumeBackupJournal;	// IMP=0x001000000002619a
- (id)_consumeFullBackupForRecordID:(id)arg1;	// IMP=0x0010000000025df7
- (id)_consumeViewBackup:(id)arg1 recordID:(id)arg2;	// IMP=0x0010000000024a6f
- (void)_backupCloudIdentityKeychainViewAndPushToKVSCheckBackupEnabled:(_Bool)arg1;	// IMP=0x00100000000243db
- (void)_backupCloudIdentityKeychainViewAndPushToKVS;	// IMP=0x00100000000243c4
- (void)_backupCloudIdentityKeychainViewAndPushToKVSForRecoveryKey;	// IMP=0x00100000000243b0
- (void)_backupKeychainFully:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023e15
- (void)_backupKeychain;	// IMP=0x0010000000023dff
- (void)_backupFullKeychain;	// IMP=0x0010000000023de6
- (void)_backupFullKeychainWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023dcc
- (void)_setAutobackupEnabled;	// IMP=0x0010000000023db8
- (void)_setAutobackupEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023d4e
- (int)_checkEscrowTrust;	// IMP=0x001000000002398d
- (void)_removeKVSKeybag;	// IMP=0x0010000000023859
- (void)garbageCollectEMCSBackupsExcluding:(id)arg1;	// IMP=0x00100000000235ee
- (id)_EMCSBackupDictForKeybagDigest:(id)arg1;	// IMP=0x0010000000023178
- (id)_EMCSBackup;	// IMP=0x0010000000023121
- (void)_setEMCSBackup:(id)arg1 keybag:(id)arg2;	// IMP=0x0010000000022e09
- (id)_KVSKeybag;	// IMP=0x0010000000022db2
- (void)_setKVSKeybag:(id)arg1;	// IMP=0x0010000000022be7
- (void)_removeMetadata;	// IMP=0x0010000000022aca
- (id)_metadata;	// IMP=0x0010000000022a70
- (void)_setMetadata:(id)arg1;	// IMP=0x001000000002292b
- (void)_removeUsesEscrow;	// IMP=0x00100000000228ce
- (_Bool)_usesEscrow;	// IMP=0x0010000000022883
- (void)_setUsesEscrow:(_Bool)arg1;	// IMP=0x0010000000022770
- (_Bool)_backupEnabled;	// IMP=0x001000000002268e
- (void)_setBackupEnabled:(_Bool)arg1 iCDP:(_Bool)arg2;	// IMP=0x00100000000224b6
- (id)_getLastBackupTimestamp;	// IMP=0x001000000002242e
- (id)_getDERBackupFromKVS;	// IMP=0x00100000000222f9
- (void)_removeVeeTwoBackup;	// IMP=0x00100000000221c1
- (void)_enumerateICDPBackupsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000021dba
- (id)_getICDPBackupFromKVS:(id)arg1 forView:(id)arg2;	// IMP=0x0010000000021d0d
- (id)_getProtectedKeychainAndKeybagDigestFromKVS:(id *)arg1;	// IMP=0x0010000000021b97
- (void)_removeProtectedKeychain;	// IMP=0x0010000000021a56
- (id)_pushCachedKeychainToKVS;	// IMP=0x001000000002148b
- (id)_pushCachedKeychainToKVSForView:(id)arg1 recordID:(id)arg2;	// IMP=0x0010000000020fa2
- (void)storeDERBackupInKVS:(id)arg1;	// IMP=0x0010000000020ddb
- (id)derDataFromDict:(id)arg1;	// IMP=0x0010000000020bd4
- (void)_removeCachedKeychain;	// IMP=0x0010000000020a72
- (void)_storeVeeTwoBackupInKVS:(id)arg1 forViewName:(id)arg2 withKeyStore:(id)arg3 manifestDigest:(id)arg4 keybagDigest:(id)arg5;	// IMP=0x0010000000020598
- (void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2;	// IMP=0x00100000000203a2
- (id)_getKeychainItemForKey:(id)arg1 status:(int *)arg2;	// IMP=0x00100000000201fe
- (void)_removeKeychainItemForKey:(id)arg1;	// IMP=0x00100000000200a0
- (void)_saveKeychainItem:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000001fee4
- (id)_createBackupKeybagWithPassword:(id)arg1;	// IMP=0x001000000001fedc
- (id)createiCloudRecoveryPasswordWithError:(id *)arg1;	// IMP=0x001000000005b1af
- (id)createPlistFromDERData:(id)arg1;	// IMP=0x001000000005b13b
- (id)createDERDataFromPlist:(id)arg1;	// IMP=0x001000000005b0c8
- (_Bool)backupSliceKeybagHasRecoveryKey:(id)arg1;	// IMP=0x001000000005b080
- (id)createEncodedDirectBackupSliceKeybagFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005af1f
- (id)circleChangedNotification;	// IMP=0x001000000005aec3
- (id)currentViews;	// IMP=0x001000000005ae5d
- (id)allViews;	// IMP=0x001000000005ade7
- (id)copyOSVersion:(id)arg1;	// IMP=0x001000000005adc0
- (id)copySerialNumber:(id)arg1;	// IMP=0x001000000005ada9
- (id)createPeerInfoFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ad60
- (_Bool)registerSingleRecoverySecret:(id)arg1 iCDP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005ad14
- (id)copyEncodedData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005accc
- (id)copyMyPeerWithNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ac86
- (id)copyBackupKeyForNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ac40
- (id)copyBackupKey:(id)arg1;	// IMP=0x001000000005ac33
- (id)copyMyPeerIDWithError:(id *)arg1;	// IMP=0x001000000005aba5
- (id)copyMyPeerID;	// IMP=0x001000000005aaeb
- (id)copyPeerID:(id)arg1;	// IMP=0x001000000005aacb
- (id)copyMyPeerInfo:(id *)arg1;	// IMP=0x001000000005aa88
- (_Bool)backupWithChanges:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a77d
- (_Bool)backupSetConfirmedManifest:(id)arg1 digest:(id)arg2 manifest:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005a5e0
- (_Bool)backupWithRegisteredBackupViewWithError:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a4b9
- (_Bool)backupWithRegisteredBackupsWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a1ee
- (_Bool)verifyRKWithKeyBag:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005a0b7
- (void)restoreBackupName:(id)arg1 peerID:(id)arg2 keybag:(id)arg3 password:(id)arg4 backup:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000059d02
- (id)kvs;	// IMP=0x0010000000059c88
- (id)makeRecordCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d49c
- (void)setPasscodeMetadata:(id)arg1 passphraseType:(int)arg2;	// IMP=0x001000000005d333
- (void)doEnableEscrowMultiICSCWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b468

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

