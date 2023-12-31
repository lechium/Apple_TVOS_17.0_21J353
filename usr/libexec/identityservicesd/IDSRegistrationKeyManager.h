//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKTRegistrationDataManager, IDSKeychainWrapper, IDSNGMKeyLoadingErrorContainer, IDSPerServiceApplicationKeyManager, IDSRateLimiter, IDSRegistrationKeyConfig, IDSRegistrationKeyManagerIdentityDataSource, IMSystemMonitor, IMTimer, NSRecursiveLock;
@protocol IDSRegistrationKeyManagerKeyPairProvider;

@interface IDSRegistrationKeyManager : NSObject
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    _Bool _forceRoll;	// 16 = 0x10
    _Bool _loaded;	// 17 = 0x11
    _Bool _identityLoaded;	// 18 = 0x12
    _Bool _detectedMigrationNeeded;	// 19 = 0x13
    _Bool _needsReRegister;	// 20 = 0x14
    _Bool _pendingIdentityRegeneration;	// 21 = 0x15
    _Bool _hasCheckedMigrationThisLaunch;	// 22 = 0x16
    _Bool _failedToGeneratedPublicDataForNGMIdentity;	// 23 = 0x17
    IDSNGMKeyLoadingErrorContainer *_recentKeyLoadingErrors;	// 24 = 0x18
    IDSRegistrationKeyConfig *_config;	// 32 = 0x20
    IMTimer *_purgePreviousIdentityTimer;	// 40 = 0x28
    IMTimer *_regenerateIdentityTimer;	// 48 = 0x30
    IMSystemMonitor *_systemMonitor;	// 56 = 0x38
    IDSKeychainWrapper *_keychainWrapper;	// 64 = 0x40
    IDSRegistrationKeyManagerIdentityDataSource *_identityDataSource;	// 72 = 0x48
    IDSPerServiceApplicationKeyManager *_applicationKeyManager;	// 80 = 0x50
    IDSRateLimiter *_loadingRateLimiter;	// 88 = 0x58
    id <IDSRegistrationKeyManagerKeyPairProvider> _keyPairProvider;	// 96 = 0x60
    _Bool _allowPairingIdentities;	// 104 = 0x68
    _Bool _allowRegenerateRegisteredIdentity;	// 105 = 0x69
    IDSKTRegistrationDataManager *_ktRegistrationDataManager;	// 112 = 0x70
}

+ (_Bool)setupKeys;	// IMP=0x004000000001b13f
+ (id)sharedInstance;	// IMP=0x001000000001b0ea
- (void).cxx_destruct;	// IMP=0x0020000000029d77
@property(retain, nonatomic) IDSKTRegistrationDataManager *ktRegistrationDataManager; // @synthesize ktRegistrationDataManager=_ktRegistrationDataManager;
@property(retain, nonatomic) id <IDSRegistrationKeyManagerKeyPairProvider> keyPairProvider; // @synthesize keyPairProvider=_keyPairProvider;
@property(nonatomic) _Bool forceRoll; // @synthesize forceRoll=_forceRoll;
@property(retain, nonatomic) IDSRegistrationKeyConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool allowRegenerateRegisteredIdentity; // @synthesize allowRegenerateRegisteredIdentity=_allowRegenerateRegisteredIdentity;
@property(nonatomic) _Bool allowPairingIdentities; // @synthesize allowPairingIdentities=_allowPairingIdentities;
@property(retain, nonatomic) IDSRegistrationKeyManagerIdentityDataSource *identityDataSource; // @synthesize identityDataSource=_identityDataSource;
@property(retain, nonatomic) IDSRateLimiter *loadingRateLimiter; // @synthesize loadingRateLimiter=_loadingRateLimiter;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
- (id)errorContainerToReport;	// IMP=0x0010000000029c7f
- (double)_identityRegenerationDelay;	// IMP=0x0010000000029b06
- (double)_purgePreviousIdentityDelay;	// IMP=0x00100000000299c9
- (double)_notifyRegenerateDelay;	// IMP=0x00100000000299bb
- (void)_regenerateIdentityTimerFired;	// IMP=0x0010000000029822
- (void)_regenerateIdentityTimerFiredOnMain;	// IMP=0x00100000000297a3
- (void)_scheduleRegenerationOfRegisteredIdentityAfterDelay:(double)arg1;	// IMP=0x00100000000295f2
- (void)_purgePreviousIdentityTimerFired;	// IMP=0x00100000000294d0
- (void)_purgePreviousIdentityTimerFiredOnMain;	// IMP=0x0010000000029451
- (void)_schedulePurgeOfPreviousIdentityAfterDelay:(double)arg1;	// IMP=0x00100000000292a0
- (double)_randomizedIdentityRegenerationInterval;	// IMP=0x00100000000291af
- (_Bool)_shouldRegenerateRegisteredIdentity;	// IMP=0x00100000000290ae
- (void)regenerateRegisteredIdentity;	// IMP=0x0010000000028f0d
- (_Bool)_migrateIdentity:(id)arg1 toProtectionClass:(long long)arg2;	// IMP=0x0010000000028dc6
- (_Bool)migrateToSecureStorageForClassC;	// IMP=0x0010000000028d13
- (_Bool)migrateToSecureStorageForClassA;	// IMP=0x0010000000028c5d
- (_Bool)_isSecurelyStoringIdentity:(id)arg1 withExpectedProtectionClass:(long long)arg2;	// IMP=0x0010000000028b0e
- (_Bool)isUsingSecureStorageForClassC;	// IMP=0x0010000000028a5b
- (_Bool)isUsingSecureStorageForClassA;	// IMP=0x00000000000289a5
- (_Bool)requiresKeychainMigration;	// IMP=0x001000000002899c
- (_Bool)isMigratedKeyPairSignature;	// IMP=0x0010000000028946
- (id)createKTRegistrationDataForServiceTypes:(id)arg1 withPublicIdentity:(id)arg2;	// IMP=0x00100000000288a4
- (_Bool)needsPublicDataUpdatedForKeyIndex:(unsigned short)arg1 ktRegistrationKeyIndex:(unsigned short)arg2;	// IMP=0x0010000000027c7b
- (id)keyPairSignature;	// IMP=0x0010000000027c19
- (struct __SecKey *)identityPublicKey;	// IMP=0x0010000000027bc3
- (struct __SecKey *)identityPrivateKey;	// IMP=0x0010000000027b6d
- (void)regeneratePairingIdentitiesIncludingClassD:(_Bool)arg1;	// IMP=0x001000000002735f
- (void)loadPairingIdentities:(_Bool)arg1;	// IMP=0x0010000000026840
- (void)noteManateeAvailableTime;	// IMP=0x00100000000267ff
- (void)noteBuddyFinishTime;	// IMP=0x00100000000267be
- (void)noteiCloudSignInTime;	// IMP=0x001000000002677d
- (id)kvsTrustedDevices;	// IMP=0x00100000000266a6
- (void)updateKVSForKTRegistrationData;	// IMP=0x0010000000026605
- (void)_handleKVSUpdateResponseForTrustedDevices:(id)arg1 withSuccessfulKVSSync:(_Bool)arg2;	// IMP=0x00100000000264bf
- (void)fetchKTSignatureDataForServiceTypes:(id)arg1 publicIdentityData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000026414
- (void)_generateKTRegistrationData:(id)arg1;	// IMP=0x00100000000263a0
- (void)_ktDataNeedsUpdate:(id)arg1;	// IMP=0x0010000000026214
- (void)_purgePreviousIdentityFromMemoryAndKeychain;	// IMP=0x0010000000025cdf
- (void)purgeMessageProtectionIdentity;	// IMP=0x001000000002580b
- (void)notePublicIdentityDidRegisterLegacyData:(id)arg1 ngmIdentityData:(id)arg2 ngmPrekeyData:(id)arg3 keyIndexToIdentityData:(id)arg4 keyIndexToKTRegData:(id)arg5;	// IMP=0x001000000002398a
- (id)fullMessageProtectionIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000023982
- (id)previousFullMessageProtectionIdentity;	// IMP=0x00100000000238c8
- (id)fullMessageProtectionIdentity;	// IMP=0x001000000002380e
- (void)_notifyUnregisteredIdentityRegenerated;	// IMP=0x0010000000023467
- (_Bool)_migrateRegisteredIdentityFromClassDtoClassCIfNeeded;	// IMP=0x0010000000023255
- (_Bool)_generateUnregisteredIdentityWithExistingLegacyIdentity:(id)arg1 existingNGMIdentity:(id)arg2;	// IMP=0x00100000000229ce
- (void)_ensureIdentity:(id *)arg1 savedIndentity:(id *)arg2 protectionClass:(long long)arg3 didSaveIdentity:(_Bool *)arg4;	// IMP=0x001000000002290c
- (id)publicMessageProtectionData;	// IMP=0x0010000000022853
- (id)publicMessageProtectionDataToRegisterForClassD;	// IMP=0x00100000000227d1
- (id)publicMessageProtectionDataToRegisterForClassC;	// IMP=0x0010000000022752
- (id)publicMessageProtectionDataToRegisterForClassA;	// IMP=0x00100000000226d0
- (id)latestMessageProtectionFullIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000002254a
- (id)_getPublicMessageProtectionDataForIdentity:(id)arg1;	// IMP=0x0010000000022369
- (id)_generateIdentityWithExistingIdentity:(id)arg1 identifier:(long long)arg2 dataProtectionClass:(long long)arg3;	// IMP=0x0010000000022160
- (id)publicMessageProtectionDeviceIdentityContainerToRegister:(id *)arg1;	// IMP=0x0010000000021da7
- (id)keyTransparencyVersionNumberToRegisterForServiceType:(id)arg1;	// IMP=0x0010000000021d91
- (id)publicMessageProtectionIdentityDataToRegisterWithError:(id *)arg1;	// IMP=0x0010000000021042
- (void)_handleTransparencySignatureResponseForRegistration:(id)arg1 error:(id)arg2;	// IMP=0x0010000000020fb8
- (void)_handleTransparencySignatureResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000020f15
- (id)fetchRegistrationStatusProvider;	// IMP=0x0010000000020eba
- (id)copyKTRegistrationDataToRegisterForKeyIndex:(unsigned short)arg1 withError:(id *)arg2;	// IMP=0x0010000000020df4
- (struct __SecKey *)copyPublicIdentityDataToRegisterForKeyIndex:(unsigned short)arg1 withError:(id *)arg2;	// IMP=0x0010000000020d88
- (id)previousFullDeviceIdentityContainer;	// IMP=0x0010000000020ca8
- (id)fullDeviceIdentityContainerUsableForKeyType:(unsigned long long)arg1;	// IMP=0x0010000000020b5b
- (id)fullDeviceIdentityContainer;	// IMP=0x0010000000020b47
- (struct __SecKey *)fullIdentityForKeyIndex:(unsigned short)arg1;	// IMP=0x0010000000020ae2
- (id)generateCSRForUserID:(id)arg1;	// IMP=0x001000000002090a
- (void)dealloc;	// IMP=0x00100000000207bd
- (id)init;	// IMP=0x001000000002066e
- (id)initWithSystemMonitor:(id)arg1 keychainWrapper:(id)arg2 loadingRateLimiter:(id)arg3 identityDataSource:(id)arg4 allowPairingIdentities:(_Bool)arg5 allowRegenerateRegisteredIdentity:(_Bool)arg6 keyPairProvider:(id)arg7 ktRegistrationDataManager:(id)arg8;	// IMP=0x00100000000202ce
- (void)_loadIfNeeded:(_Bool)arg1;	// IMP=0x001000000001d2ab
- (_Bool)_loadClassDIdentityIfNeeded:(id *)arg1;	// IMP=0x001000000001cf10
- (_Bool)_loadClassCIdentityIfNeeded:(id *)arg1;	// IMP=0x001000000001cb78
- (_Bool)_loadClassAIdentityIfNeeded:(id *)arg1;	// IMP=0x001000000001c7dd
- (id)_loadAndDeserializeBuildOfIdentityGenerationForItemName:(id)arg1;	// IMP=0x001000000001c5da
- (void)_serializeAndPersistBuildOfIdentityGeneration:(id)arg1 itemName:(id)arg2;	// IMP=0x001000000001c33d
- (_Bool)_serializeAndPersistIdentityContainer:(id)arg1 identityIdentifier:(long long)arg2 deleteIfNull:(_Bool)arg3;	// IMP=0x001000000001bde0
- (_Bool)_serializeAndPersistKTRegistrationDataDeleteIfNull:(_Bool)arg1;	// IMP=0x001000000001bd8f
- (_Bool)_serializeAndPersistApplicationKeyIdentitiesDeleteIfNull:(_Bool)arg1;	// IMP=0x001000000001bd3e
- (_Bool)_save;	// IMP=0x001000000001b742
- (void)_saveClassXIdentity:(id *)arg1 savedIdentity:(id *)arg2 protectionClass:(long long)arg3 savedUnsavedIdentity:(_Bool *)arg4;	// IMP=0x001000000001b3a8
- (void)systemRestoreStateDidChange;	// IMP=0x001000000001b31a
- (void)systemDidLeaveDataProtectionLock;	// IMP=0x001000000001b2a1
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x001000000001b20a
- (_Bool)_isUnderFirstDataProtectionLock;	// IMP=0x001000000001b1c6

@end

