//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleAccountManager, HMDBulletinBoard, HMDCameraBulletinNotificationManager, HMDCameraProfileSettingsCoreDataAdapter, HMDCameraProfileSettingsDerivedPropertiesModel, HMDCameraProfileSettingsModel, HMDCharacteristicsAvailabilityListener, HMDFeaturesDataSource, HMDHAPAccessory, HMFMessageDispatcher, NSNotificationCenter, NSNumber, NSObject, NSString, NSUUID, _HMCameraUserSettings;
@protocol HMDCameraProfileSettingsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraProfileSettingsManager : HMFObject
{
    _Bool _hasStarted;	// 8 = 0x8
    _Bool _needsInitialSettingsCharacteristicSynchronization;	// 9 = 0x9
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    id <HMDCameraProfileSettingsManagerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDHAPAccessory *_hapAccessory;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    HMDBulletinBoard *_bulletinBoard;	// 56 = 0x38
    HMDCharacteristicsAvailabilityListener *_characteristicsAvailabilityListener;	// 64 = 0x40
    NSString *_clientIdentifier;	// 72 = 0x48
    HMDFeaturesDataSource *_featuresDataSource;	// 80 = 0x50
    HMDCameraProfileSettingsCoreDataAdapter *_coreDataAdapter;	// 88 = 0x58
    HMDCameraProfileSettingsModel *_previousSettingsModel;	// 96 = 0x60
    HMDCameraProfileSettingsDerivedPropertiesModel *_previousDerivedPropertiesModel;	// 104 = 0x68
    HMDAppleAccountManager *_accountManager;	// 112 = 0x70
    HMFMessageDispatcher *_msgDispatcher;	// 120 = 0x78
    NSNumber *_anyUserAtHome;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x0010000000609cf3
+ (id)zoneNameForHome:(id)arg1;	// IMP=0x0010000000609c6f
- (void).cxx_destruct;	// IMP=0x0000000000607c8a
@property(copy, getter=isAnyUserAtHome) NSNumber *anyUserAtHome; // @synthesize anyUserAtHome=_anyUserAtHome;
@property _Bool needsInitialSettingsCharacteristicSynchronization; // @synthesize needsInitialSettingsCharacteristicSynchronization=_needsInitialSettingsCharacteristicSynchronization;
@property(retain) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) HMDAppleAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy) HMDCameraProfileSettingsDerivedPropertiesModel *previousDerivedPropertiesModel; // @synthesize previousDerivedPropertiesModel=_previousDerivedPropertiesModel;
@property(copy) HMDCameraProfileSettingsModel *previousSettingsModel; // @synthesize previousSettingsModel=_previousSettingsModel;
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly) HMDCameraProfileSettingsCoreDataAdapter *coreDataAdapter; // @synthesize coreDataAdapter=_coreDataAdapter;
@property(readonly) HMDFeaturesDataSource *featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // @synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraProfileSettingsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)logIdentifier;	// IMP=0x000000000060792d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;	// IMP=0x00000000006074bb
- (void)_handleUpdatedSettings:(id)arg1 previousSettings:(id)arg2;	// IMP=0x000000000060719f
- (void)_updateDerivedPropertiesOnSettingsModel:(id)arg1;	// IMP=0x00000000006070ed
- (void)_handleUpdatedDerivedProperties:(id)arg1 previousProperties:(id)arg2;	// IMP=0x0000000000606751
- (void)handleUpdatedDerivedPropertiesModel:(id)arg1;	// IMP=0x0000000000606699
- (void)handleUpdatedSettingsModel:(id)arg1;	// IMP=0x00000000006065e1
- (_Bool)isCurrentDeviceConfirmedPrimaryResident;	// IMP=0x0000000000606573
- (id)messageDestination;	// IMP=0x000000000060650a
- (void)_start;	// IMP=0x0000000000605d8c
- (_Bool)canModifyCameraSettings;	// IMP=0x0000000000605cd9
- (_Bool)canRevealCurrentAccessMode;	// IMP=0x0000000000605c44
- (void)_enablePackageNotificationsOnSettings:(id)arg1;	// IMP=0x0000000000605b77
- (void)_setManuallyDisabledCharacteristicNotificationsEnabled:(_Bool)arg1;	// IMP=0x0000000000605a6e
- (void)_coordinateSmartBulletinNotificationWithServiceBulletinNotification:(id)arg1;	// IMP=0x0000000000605818
- (void)_coordinateDoorbellServiceBulletinNotification:(id)arg1;	// IMP=0x000000000060566f
- (void)_coordinateNotificationSettingsWithServiceBulletinNotification:(id)arg1;	// IMP=0x0000000000605428
- (_Bool)_shouldQueryCanDisableRecordingForAccessMode:(unsigned long long)arg1 isAtHome:(_Bool)arg2 currentSettings:(id)arg3;	// IMP=0x000000000060534e
- (_Bool)_shouldQueryCanEnableRecordingForAccessMode:(unsigned long long)arg1 currentSettings:(id)arg2;	// IMP=0x00000000006052a3
- (void)_addRecordingAudioEnabledWriteRequestToArray:(id)arg1 recordingAudioEnabled:(_Bool)arg2;	// IMP=0x00000000006051e4
- (void)_addAccessModeCharacteristicWriteRequestsToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2;	// IMP=0x00000000006050b5
- (void)_addHomeKitCameraActiveCharacteristicWriteRequestToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2;	// IMP=0x0000000000604ff4
- (void)_addSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 snapshotsAllowed:(_Bool)arg2;	// IMP=0x0000000000604f2a
- (void)_addPeriodicSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 periodicSnapshotsAllowed:(_Bool)arg2;	// IMP=0x0000000000604e6e
- (void)_addOperatingModeIndicatorCharacteristicWriteRequestToArray:(id)arg1 accessModeIndicatorEnabled:(_Bool)arg2;	// IMP=0x0000000000604da4
- (void)_addNightVisionCharacteristicWriteRequestToArray:(id)arg1 nightVisionEnabled:(_Bool)arg2;	// IMP=0x0000000000604cda
- (void)_addWriteRequestToArray:(id)arg1 forCharacteristicWithType:(id)arg2 ofServiceWithType:(id)arg3 value:(id)arg4;	// IMP=0x000000000060498f
- (void)_handleCharacteristicWriteRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000060469d
- (void)_writeInitialSettingsCharacteristicsToCamera;	// IMP=0x00000000006044be
- (void)_updateNotificationSettings:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000060446f
- (void)_notifyClientsOfChangedSettings:(id)arg1 isInitialSettingsUpdate:(_Bool)arg2;	// IMP=0x0000000000604028
- (void)_notifyClientsOfChangedSettingsModel:(id)arg1 isInitialSettingsUpdate:(_Bool)arg2;	// IMP=0x0000000000603f89
- (void)_notifyClientsOfCurrentSettings;	// IMP=0x0000000000603f10
- (void)_notifySubscribersOfUpdatedSettings:(id)arg1 previousSettings:(id)arg2;	// IMP=0x00000000006039b2
- (id)_payloadForSettings:(id)arg1;	// IMP=0x0000000000603918
- (id)_settingsFromSettingsModel:(id)arg1;	// IMP=0x0000000000603728
@property(readonly, copy) NSUUID *derivedPropertiesModelID;
- (id)_settingsModelForUpdate;	// IMP=0x00000000006035ab
- (void)_synchronizeCurrentAccessModeSettingToCameraWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006033fd
- (void)_populateCurrentAccessModeFieldForDerivedProperties:(id)arg1 currentSettings:(id)arg2 userInitiated:(_Bool)arg3 didUpdateField:(_Bool *)arg4;	// IMP=0x0000000000602892
- (id)_updatedDerivedPropertiesModelWithSettingsModel:(id)arg1 userInitiated:(_Bool)arg2 didCreateModel:(_Bool *)arg3;	// IMP=0x000000000060263c
- (void)_updateDerivedPropertiesModelWithSettingsModel:(id)arg1 userInitiated:(_Bool)arg2 reason:(id)arg3;	// IMP=0x0000000000602427
- (id)_isAnyUserAtHomeForPresence:(id)arg1;	// IMP=0x000000000060237b
@property(readonly, getter=isCameraManuallyDisabled) _Bool cameraManuallyDisabled;
- (id)doorbellInputEventCharacteristic;	// IMP=0x0000000000602155
- (id)manuallyDisabledCharacteristic;	// IMP=0x00000000006020f4
- (_Bool)_migrateSettingsModel:(id)arg1;	// IMP=0x0000000000601d2d
- (_Bool)_migrateNotificationSettings:(id)arg1;	// IMP=0x00000000006014e0
- (id)_createNotificationSettingsUsingSettingsModel:(id)arg1;	// IMP=0x0000000000600eac
- (void)_initializeNotificationSettingsUsingSettingsModel:(id)arg1;	// IMP=0x0000000000600c75
- (CDUnknownBlockType)_coreDataUpdateCompletionForMessage:(id)arg1;	// IMP=0x0000000000600bb5
@property(readonly) HMDCameraProfileSettingsDerivedPropertiesModel *derivedPropertiesModel;
- (void)_handleConnectedToAccessory;	// IMP=0x0000000000600840
- (void)handleBulletinNotificationEnableStateDidChangeNotification:(id)arg1;	// IMP=0x0000000000600788
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x0000000000600717
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;	// IMP=0x000000000060065f
- (void)handleRecordingManagementServiceDidUpdateNotification:(id)arg1;	// IMP=0x00000000006005ee
- (void)handleAccessoryConfiguredNotification:(id)arg1;	// IMP=0x000000000060057d
- (void)_evaluateHomePresence;	// IMP=0x00000000006001a5
- (void)handleHomePresenceEvaluatedNotification:(id)arg1;	// IMP=0x0000000000600120
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;	// IMP=0x00000000006000af
- (void)_handleCameraSettingsDidChangeMessage:(id)arg1;	// IMP=0x00000000005ff9b3
- (void)_handleUpdateReachabilityEventNotificationEnabledMessage:(id)arg1;	// IMP=0x00000000005ff612
- (void)_handleUpdateActivityZonesMessage:(id)arg1;	// IMP=0x00000000005fef54
- (void)_updateCameraBulletinNotificationManagerWithSettings:(id)arg1 forMessage:(id)arg2;	// IMP=0x00000000005fed76
- (void)_handleBulletinBoardNotificationCommitMessage:(id)arg1;	// IMP=0x00000000005fe700
- (void)_handleUpdateAccessModeChangeNotificationEnabledMessage:(id)arg1;	// IMP=0x00000000005fe2af
- (void)_handleUpdateRecordingTriggerEventsMessage:(id)arg1;	// IMP=0x00000000005fdde3
- (void)_handleUpdateAccessModeMessage:(id)arg1;	// IMP=0x00000000005fd42c
- (void)synchronizeSettingsToCameraWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000005fd374
@property(readonly) HMDCameraBulletinNotificationManager *cameraBulletinNotificationManager;
@property(readonly, getter=isRecordingEnabled) _Bool recordingEnabled;
- (void)disableRecordingAccessModes;	// IMP=0x00000000005fce26
@property(readonly) unsigned long long supportedFeatures;
@property(readonly) HMDCameraProfileSettingsModel *defaultSettingsModel;
- (id)currentSettingsModel;	// IMP=0x00000000005fc685
- (id)currentNotificationSettings;	// IMP=0x00000000005fc5d7
@property(readonly) _HMCameraUserSettings *currentSettings;
- (void)remove;	// IMP=0x00000000005fc482
- (void)start;	// IMP=0x00000000005fc2e3
- (void)configureWithMessageDispatcher:(id)arg1 adminMessageDispatcher:(id)arg2 deviceIsResidentCapable:(_Bool)arg3;	// IMP=0x00000000005fb9ad
- (void)dealloc;	// IMP=0x00000000005fb8b6
- (id)initWithHAPAccessory:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000005fb533
- (id)initWithUniqueIdentifier:(id)arg1 hapAccessory:(id)arg2 workQueue:(id)arg3 coreDataAdapter:(id)arg4 notificationCenter:(id)arg5 bulletinBoard:(id)arg6 characteristicsAvailabilityListener:(id)arg7 featuresDataSource:(id)arg8 accountManager:(id)arg9;	// IMP=0x00000000005fb2d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

