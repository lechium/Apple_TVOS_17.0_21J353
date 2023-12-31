//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCountdown, IDSNRDeviceManager, IDSPairedDeviceRepository, NSData, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IDSPairingManager : NSObject
{
    NSHashTable *_delegateMap;	// 8 = 0x8
    _Bool _hasLoadedPairedDevices;	// 16 = 0x10
    int _pairingStateToken;	// 20 = 0x14
    CDUnknownBlockType _block;	// 24 = 0x18
    _Bool _isPendingResetOfKeyRegenerationFlag;	// 32 = 0x20
    IDSCountdown *_pairedDeviceInfoRequestCountdown;	// 40 = 0x28
    NSMutableDictionary *_cbuuidToBTOutOfBandKeyDictionary;	// 48 = 0x30
    _Bool _shouldQuickSwitchAfterIPSecConnected;	// 56 = 0x38
    IDSNRDeviceManager *_nrDeviceManager;	// 64 = 0x40
    IDSPairedDeviceRepository *_pairedDeviceRepository;	// 72 = 0x48
    NSMutableArray *_registeredPairedDeviceDidConnectBlockPairs;	// 80 = 0x50
}

+ (void)devicePairingProtocolVersion:(unsigned int *)arg1 minCompatibilityVersion:(unsigned int *)arg2 maxCompatibilityVersion:(unsigned int *)arg3;	// IMP=0x002000000018c3c6
+ (_Bool)_isTinkerPairedInCapabilityFlags:(unsigned long long)arg1;	// IMP=0x00100000001860c1
+ (_Bool)_isIPsecSupportedByCapabilityFlags:(unsigned long long)arg1;	// IMP=0x00100000001860b2
+ (_Bool)_isEncryptionKeyRegenerationSupportedByCapabilityFlags:(unsigned long long)arg1;	// IMP=0x00100000001860a3
+ (id)sharedInstance;	// IMP=0x00100000001852e2
- (void).cxx_destruct;	// IMP=0x002000000018cad8
@property(nonatomic) _Bool shouldQuickSwitchAfterIPSecConnected; // @synthesize shouldQuickSwitchAfterIPSecConnected=_shouldQuickSwitchAfterIPSecConnected;
@property(readonly, nonatomic) NSMutableArray *registeredPairedDeviceDidConnectBlockPairs; // @synthesize registeredPairedDeviceDidConnectBlockPairs=_registeredPairedDeviceDidConnectBlockPairs;
@property(readonly, nonatomic) IDSPairedDeviceRepository *pairedDeviceRepository; // @synthesize pairedDeviceRepository=_pairedDeviceRepository;
@property(readonly, nonatomic) IDSNRDeviceManager *nrDeviceManager; // @synthesize nrDeviceManager=_nrDeviceManager;
- (id)_nrDeviceIdentifierWithCBUUID:(id)arg1;	// IMP=0x001000000018c9d0
- (void)deliveryController:(id)arg1 foundNearbyIPsecCapableDeviceWithUniqueID:(id)arg2;	// IMP=0x001000000018c4aa
- (void)refreshPairedDeviceEncryptionKeys;	// IMP=0x001000000018c1d0
- (_Bool)updatePairedDeviceiCloudURIs:(id)arg1 pushToken:(id)arg2;	// IMP=0x001000000018bf00
- (_Bool)updatePairedDeviceBuildVersion:(id)arg1 productVersion:(id)arg2 productName:(id)arg3 pairingProtocolVersion:(unsigned int)arg4 minCompatibilityVersion:(unsigned int)arg5 maxCompatibilityVersion:(unsigned int)arg6 serviceMinCompatibilityVersion:(unsigned short)arg7 capabilityFlags:(unsigned long long)arg8 deviceUniqueID:(id)arg9;	// IMP=0x001000000018bde8
- (_Bool)_isIPSecLinkEnabled;	// IMP=0x001000000018bdde
- (void)_networkRelayRegisterDeviceWithCBUUID:(id)arg1 properties:(id)arg2 shouldPairDirectlyOverIPsec:(_Bool)arg3;	// IMP=0x001000000018b949
- (void)_networkRelayRegisterDeviceWithCBUUID:(id)arg1 wasInitiallySetupUsingIDSPairing:(_Bool)arg2 maxCompatibilityVersion:(id)arg3 BTOutOfBandKey:(id)arg4 supportsIPsecWithSPPLink:(_Bool)arg5 bluetoothMACAddress:(id)arg6;	// IMP=0x001000000018b8ac
- (id)_createRegistrationProperties:(_Bool)arg1 maxCompatibilityVersion:(id)arg2 BTOutOfBandKey:(id)arg3 supportsIPsecWithSPPLink:(_Bool)arg4 bluetoothMACAddress:(id)arg5;	// IMP=0x001000000018b7a9
- (_Bool)isMissingAnyPublicKeyForPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000018b713
- (_Bool)setPairedDeviceInfo:(id)arg1;	// IMP=0x001000000018b524
- (_Bool)updateLocalPairedDevice:(id)arg1 pairingType:(long long)arg2;	// IMP=0x001000000018b3ac
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x001000000018b333
- (void)_clearPairedDeviceDidConnectBlocksForUniqueID:(id)arg1;	// IMP=0x001000000018b054
- (void)_callPairedDeviceDidConnectBlocksForUniqueID:(id)arg1 withError:(id)arg2;	// IMP=0x001000000018ad6b
- (void)registerPairedDeviceWithUniqueID:(id)arg1 didConnectBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000018ac23
- (_Bool)shouldUseIPsecLinkForDefaultPairedDeviceAndLogQuery:(_Bool)arg1;	// IMP=0x001000000018aad2
- (_Bool)shouldUseIPsecLinkForDefaultPairedDevice;	// IMP=0x001000000018aabe
- (id)_cbuuidsWithIsPairingValue:(_Bool)arg1;	// IMP=0x001000000018a887
- (id)pairedDeviceRecords;	// IMP=0x001000000018a432
- (id)localDeviceRecord;	// IMP=0x001000000018a37a
- (id)_identityDataErrorPairForDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000018a28d
- (id)uniqueIDToCbuuidsOfPairingDevicesDictionary;	// IMP=0x0010000000189ff9
- (id)cbuuidsOfPairedDevices;	// IMP=0x0010000000189fe5
- (id)cbuuidsOfPairingDevices;	// IMP=0x0010000000189fce
- (_Bool)isTraditionalDevicePairedOrPairing;	// IMP=0x0010000000189f5b
- (_Bool)isCurrentDevicePairedOrPairing;	// IMP=0x0010000000189eea
- (void)ensureCommunicationWithActivePairedDeviceIsPossible;	// IMP=0x0010000000189ce2
- (void)updateNetworkRelayStateForAllPairedDevices;	// IMP=0x00100000001896cf
- (void)deactivatePairedDevices;	// IMP=0x00100000001892ee
- (long long)activatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x00100000001890da
- (void);	// IMP=0x001000000018903d
- (_Bool)removeLocalPairedDevice:(id)arg1;	// IMP=0x0010000000188f9e
- (_Bool)addLocalPairedDevice:(id)arg1 BTOutOfBandKey:(id)arg2 shouldPairDirectlyOverIPsec:(_Bool)arg3 pairingType:(long long)arg4 bluetoothMACAddress:(id)arg5;	// IMP=0x0010000000188eff
- (void)removeDelegate:(id)arg1;	// IMP=0x0010000000188eb2
- (void)addDelegate:(id)arg1;	// IMP=0x0010000000188e30
- (void)_updateActiveStateForAllPairedDevices:(_Bool)arg1;	// IMP=0x00100000001889f3
- (void)_updateActiveStateForAllPairedDevices;	// IMP=0x00100000001889df
- (void)_updatePairedState:(_Bool)arg1;	// IMP=0x00100000001888fe
- (_Bool)_hasAllEncryptionKeys;	// IMP=0x00100000001887f2
- (id)pairedDeviceForUniqueID:(id)arg1;	// IMP=0x00100000001885c6
@property(readonly, nonatomic) NSSet *allTraditionallyPairedUniqueIDs;
@property(readonly, nonatomic) NSSet *allPairedUniqueIDs;
- (_Bool)_isPairedToDevice:(id)arg1;	// IMP=0x00100000001880eb
@property(readonly, nonatomic) _Bool isPaired;
@property(readonly, nonatomic) NSDictionary *pairedDevicePrivateData;
- (long long)pairedDevicePairingType;	// IMP=0x0010000000187f91
- (id)pairedDeviceiCloudURIs;	// IMP=0x0010000000187f17
@property(readonly, nonatomic) NSData *pairedDevicePushToken;
@property(readonly, nonatomic) NSData *pairedDevicePublicClassCKey;
@property(readonly, nonatomic) NSData *pairedDevicePublicClassAKey;
@property(readonly, nonatomic) NSData *pairedDevicePublicKey;
@property(readonly, nonatomic) NSDictionary *pairedDevice;
- (id)pairedDeviceHandlesWithPairingType:(long long)arg1;	// IMP=0x0010000000187a5c
- (id)allPairedDevicesWithType:(long long)arg1;	// IMP=0x00100000001879fd
@property(readonly, nonatomic) NSSet *allPairedDevices;
@property(readonly, nonatomic) _Bool isCurrentDeviceTinkerConfiguredWatch;
- (_Bool)activePairedDeviceHasPairingType:(long long)arg1;	// IMP=0x0010000000187932
@property(readonly, nonatomic) unsigned short pairedDeviceServiceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairedDeviceMaxCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairedDeviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairedDevicePairingProtocolVersion;
- (id)pairedDeviceProductName;	// IMP=0x00100000001876ff
- (id)pairedDeviceProductVersion;	// IMP=0x0010000000187685
- (id)pairedDeviceBuildVersion;	// IMP=0x001000000018760b
@property(readonly, nonatomic) NSString *pairedDeviceUniqueID;
@property(readonly, nonatomic) NSString *pairedDeviceUUIDString;
- (id)_activePairedDeviceCBUUID;	// IMP=0x0010000000187505
- (void)gatherLocalDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000186eaf
- (id)_localDevicePrivateData;	// IMP=0x0010000000186990
@property(readonly, nonatomic) NSDictionary *localDevice;
- (_Bool)_purgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x00100000001865d4
- (void)_suspendOTRSessionsWithProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000186203
- (void)_regenerateSecuredEncryptionKeys;	// IMP=0x00100000001860d0
- (_Bool)_markSecuredEncryptionKeysAsRegenerated:(_Bool)arg1;	// IMP=0x0010000000185ebd
- (unsigned long long)_hasRegeneratedSecuredEncryptionKeys;	// IMP=0x0010000000185c1e
- (long long)_migrateSecuredEncryptionKeys;	// IMP=0x0010000000185c13
- (void)_loadPairedDevicePropertiesIfNeeded;	// IMP=0x0010000000185c0d
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0010000000185bfb
- (id)init;	// IMP=0x0010000000185b60
- (id)initWithNRDeviceManager:(id)arg1 pairedDeviceRepository:(id)arg2;	// IMP=0x0010000000185b31
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000185a7c
- (void)_requestPairedDeviceInfo;	// IMP=0x00100000001859df
- (void)_requestPairedDeviceInfoAfterDelay:(double)arg1;	// IMP=0x00100000001858cd
- (void)_notifyDelegatesDeviceUnpairedFromDevice:(id)arg1;	// IMP=0x00100000001856d6
- (void)_notifyDelegatesDevicePairedToDevice:(id)arg1;	// IMP=0x00100000001854df
- (void)_notifyDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000185337

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

