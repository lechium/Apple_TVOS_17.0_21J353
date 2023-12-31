//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSService, MISSING_TYPE, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

@interface SDAutoUnlockTransport
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    IDSService *_autoUnlockService;	// 32 = 0x20
    id <SDAutoUnlockTransportClient> _primaryClient;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
    IDSService *_activityService;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_transportQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_clientQueue;	// 72 = 0x48
    NSMapTable *_clientMap;	// 80 = 0x50
    NSMutableDictionary *_completionHandlers;	// 88 = 0x58
    NSMutableDictionary *_sendIdentifierToSessionID;	// 96 = 0x60
    NSMutableDictionary *_sendDates;	// 104 = 0x68
    NSDate *_lastSendDate;	// 112 = 0x70
    NSMutableDictionary *_autoUnlockDeviceCache;	// 120 = 0x78
    NSMutableDictionary *_cloudPairRetryRecords;	// 128 = 0x80
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 136 = 0x88
    NSSet *_cachedApproveBluetoothIDs;	// 144 = 0x90
}

+ (id)sharedTransport;	// IMP=0x0020000000113466
- (void).cxx_destruct;	// IMP=0x002000000011b150
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDAutoUnlockTransportClient> primaryClient; // @synthesize primaryClient=_primaryClient;
- (id)autoUnlockService;	// IMP=0x001000000011af2d
- (id)state;	// IMP=0x001000000011aabb
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x001000000011a843
- (_Bool)disableEncryption;	// IMP=0x001000000011a82a
- (_Bool)showOtherDevices;	// IMP=0x001000000011a811
- (_Bool)showIDInName;	// IMP=0x001000000011a7f8
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x001000000011a12a
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0010000000119ddf
- (MISSING_TYPE *)service:account:incomingUnhandledProtobuf:fromID:context: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000119404
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000011925b
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000119136
- (id)dataFromUUID:(id)arg1;	// IMP=0x00100000001190b6
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000118fce
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000118f75
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000118f39
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000118e65
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000118e39
- (void)loadCloudPairRetries;	// IMP=0x0010000000118d72
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x0010000000118b13
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x0010000000118740
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x001000000011873a
- (void)handleSuccessfulMessageSentWithIdentifier:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000011860a
- (id)stableBluetoothIdentifierForIDSDevice:(id)arg1;	// IMP=0x00100000001185f5
- (id)connectionCacheDevices;	// IMP=0x0010000000118470
- (_Bool)localDeviceIDSRegistered;	// IMP=0x0010000000118241
- (_Bool)activityServiceHasWatch;	// IMP=0x0010000000117fea
- (id)placeholderDevice;	// IMP=0x0010000000117ec4
- (void)updateBluetoothIDCache;	// IMP=0x0010000000117ac8
- (void)logBluetoothIDCache;	// IMP=0x0010000000117a16
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x001000000011799c
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x0010000000117745
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x001000000011754c
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x0010000000117353
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x0010000000117261
- (id)nameForDevice:(id)arg1;	// IMP=0x0010000000117175
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x0010000000116e35
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x0010000000116d26
- (id)modelNameForDevice:(id)arg1;	// IMP=0x0010000000116cf4
- (void)updateApproveBluetoothIDs;	// IMP=0x00100000001169a7
- (id)approveBluetoothIDs;	// IMP=0x0010000000116903
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x001000000011624d
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x0010000000116233
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x0010000000115e49
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x0010000000115cef
- (id)enabledAutoUnlockDevices;	// IMP=0x0010000000115cdb
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1 deviceType:(long long)arg2;	// IMP=0x001000000011541d
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1 deviceType:(long long)arg2;	// IMP=0x00100000001152b4
- (id)autoUnlockEligibleWatchesWithCloudPairing:(_Bool)arg1;	// IMP=0x001000000011529d
- (id)autoUnlockEligibleWatches;	// IMP=0x0010000000115286
- (id)onqueue_devicesWithLTKs;	// IMP=0x0010000000115023
- (id)devicesWithLTKs;	// IMP=0x0010000000114ed7
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x0010000000114e66
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x0010000000114e52
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x0010000000114df3
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x0010000000114da3
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x0010000000114c27
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x0010000000114bd4
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x0010000000114b84
- (id)idsMacDeviceIDs;	// IMP=0x0010000000114913
- (id)idsDevicesIDs;	// IMP=0x001000000011474a
- (_Bool)deviceNearby;	// IMP=0x0010000000114706
- (_Bool)isDeviceSatellitePaired;	// IMP=0x00100000001146fe
- (id)activeDevice;	// IMP=0x0010000000114581
- (id)pairedAutoUnlockDevice;	// IMP=0x0010000000114522
- (id)pairedDeviceID;	// IMP=0x00100000001144d2
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x00100000001142d0
- (id)bluetoothDeviceIdentifiers;	// IMP=0x001000000011418e
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x0010000000113f45
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x0010000000113d28
- (void)clearAutoUnlockDeviceCache;	// IMP=0x0010000000113c8b
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x0010000000113c54
- (void)logDevices;	// IMP=0x0010000000113b74
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x001000000011380c
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x00100000001136d9
- (id)init;	// IMP=0x00100000001134bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

