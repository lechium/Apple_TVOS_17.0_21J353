//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFConnectivityInfo, MKFHAPAccessoryDatabaseID, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFAccessory, MKFApplicationData, MKFHome, MKFHomeNetworkRouterSetting, MKFRoom, MKFSoftwareUpdate;

__attribute__((visibility("hidden")))
@interface _MKFHAPAccessory
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000803fe8
+ (id)homeRelation;	// IMP=0x0010000000803fb8
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000803f04
+ (Class)cd_modelClass;	// IMP=0x00100000008bcd9f
+ (id)fetchRequest;	// IMP=0x0010000000cf6d3e
- (void)synchronizeServicesRelationWith:(id)arg1;	// IMP=0x0000000000804e36
- (id)findServicesRelationWithInstanceID:(id)arg1;	// IMP=0x0000000000804e13
- (id)materializeOrCreateServicesRelationWithInstanceID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000804ded
@property(readonly, retain, nonatomic) NSArray *services;
- (void)removePairedUsersObject:(id)arg1;	// IMP=0x0000000000804d7a
- (void)addPairedUsersObject:(id)arg1;	// IMP=0x0000000000804d5e
@property(readonly, retain, nonatomic) NSArray *pairedUsers;
- (id)materializeOrCreateNaturalLightingActionsRelation:(_Bool *)arg1;	// IMP=0x0000000000804ce1
@property(readonly, retain, nonatomic) NSArray *naturalLightingActions;
@property(readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
- (id)castIfHAPAccessory;	// IMP=0x0000000000804c2a
@property(readonly, copy, nonatomic) MKFHAPAccessoryDatabaseID *databaseID;
- (void)maybeFixUpCharacteristicWriteActionsInContext:(id)arg1;	// IMP=0x000000000080496e
- (id)predicateToFetchBulletinRegistrationOnDeviceIdsIdentifier:(id)arg1 user:(id)arg2;	// IMP=0x000000000080491d
- (id)cameraSignificantEventBulletinRegistrationWithDeviceIdsIdentifier:(id)arg1 user:(id)arg2 context:(id)arg3;	// IMP=0x000000000080481c
- (id)cameraAccessModeBulletinRegistrationWithDeviceIdsIdentifier:(id)arg1 user:(id)arg2 context:(id)arg3;	// IMP=0x000000000080471b
- (id)cameraReachabilityBulletinRegistrationWithDeviceIdsIdentifier:(id)arg1 user:(id)arg2 context:(id)arg3;	// IMP=0x000000000080461a
- (id)bulletinRegistrationFromFetchRequest:(id)arg1 context:(id)arg2;	// IMP=0x00000000008044b8
- (id)characteristicFromInstanceID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000804254
- (id)serviceWithID:(id)arg1 context:(id)arg2;	// IMP=0x0000000000804037

// Remaining properties
@property(copy, nonatomic) NSNumber *accessModeChangeNotificationEnabled; // @dynamic accessModeChangeNotificationEnabled;
@property(copy, nonatomic) NSNumber *accessoryCategory;
@property(copy, nonatomic) NSNumber *accessoryFlags; // @dynamic accessoryFlags;
@property(retain, nonatomic) NSData *accessorySetupHash; // @dynamic accessorySetupHash;
@property(retain, nonatomic) NSSet *actionCharacteristicWrites_; // @dynamic actionCharacteristicWrites_;
@property(readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property(copy, nonatomic) NSNumber *airPlayEnabled; // @dynamic airPlayEnabled;
@property(readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property(copy, nonatomic) NSNumber *announceEnabled; // @dynamic announceEnabled;
@property(retain, nonatomic) id <MKFApplicationData> applicationData;
@property(retain, nonatomic) NSArray *appliedFirewallWANRules;
@property(retain, nonatomic) NSData *broadcastKey; // @dynamic broadcastKey;
@property(copy, nonatomic) NSNumber *cameraAccessModeAtHome; // @dynamic cameraAccessModeAtHome;
@property(readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property(copy, nonatomic) NSNumber *cameraAccessModeNotAtHome; // @dynamic cameraAccessModeNotAtHome;
@property(retain, nonatomic) NSSet *cameraActivityZones; // @dynamic cameraActivityZones;
@property(copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection; // @dynamic cameraActivityZonesIncludedForSignificantEventDetection;
@property(copy, nonatomic) NSNumber *cameraCurrentAccessMode; // @dynamic cameraCurrentAccessMode;
@property(copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate; // @dynamic cameraCurrentAccessModeChangeDate;
@property(copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason; // @dynamic cameraCurrentAccessModeChangeReason;
@property(readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property(copy, nonatomic) NSNumber *cameraRecordingEventTriggers; // @dynamic cameraRecordingEventTriggers;
@property(readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property(copy, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(copy, nonatomic) NSNumber *communicationProtocol; // @dynamic communicationProtocol;
@property(copy, nonatomic) NSString *configurationAppIdentifier;
@property(copy, nonatomic) NSString *configuredName;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // @dynamic connectivityInfo;
@property(copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *doorbellChimeEnabled; // @dynamic doorbellChimeEnabled;
@property(copy, nonatomic) NSNumber *enhancedAuthConfigNumber; // @dynamic enhancedAuthConfigNumber;
@property(copy, nonatomic) NSNumber *enhancedAuthMethod; // @dynamic enhancedAuthMethod;
@property(copy, nonatomic) NSString *firmwareVersion;
@property(copy, nonatomic) NSUUID *groupIdentifier;
@property(copy, nonatomic) NSString *groupName;
@property(copy, nonatomic) NSNumber *hardwareSupport; // @dynamic hardwareSupport;
@property(copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning; // @dynamic hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property(copy, nonatomic) NSNumber *hasOnboardedForNaturalLighting; // @dynamic hasOnboardedForNaturalLighting;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(retain, nonatomic) id <MKFAccessory> hostAccessory;
@property(readonly, retain, nonatomic) NSArray *hostedAccessories;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property(copy, nonatomic) NSString *initialManufacturer;
@property(copy, nonatomic) NSString *initialModel;
@property(retain, nonatomic) NSArray *initialServiceTypes; // @dynamic initialServiceTypes;
@property(copy, nonatomic) NSNumber *interactionHoldDurationEnabled; // @dynamic interactionHoldDurationEnabled;
@property(copy, nonatomic) NSNumber *interactionHoldDurationSeconds; // @dynamic interactionHoldDurationSeconds;
@property(copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled; // @dynamic interactionIgnoreRepeatEnabled;
@property(copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds; // @dynamic interactionIgnoreRepeatSeconds;
@property(copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled; // @dynamic interactionTouchAccommodationsEnabled;
@property(copy, nonatomic) NSNumber *keyUpdatedStateNumber; // @dynamic keyUpdatedStateNumber;
@property(copy, nonatomic) NSDate *keyUpdatedTime; // @dynamic keyUpdatedTime;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property(copy, nonatomic) NSDate *lastPairingAuditTime; // @dynamic lastPairingAuditTime;
@property(copy, nonatomic) NSDate *lastSeenDate;
@property(copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled; // @dynamic lightWhenUsingSiriEnabled;
@property(copy, nonatomic) NSNumber *lowBattery;
@property(copy, nonatomic) NSString *manufacturer;
@property(copy, nonatomic) NSNumber *matterNodeID; // @dynamic matterNodeID;
@property(retain, nonatomic) NSSet *matterPairings; // @dynamic matterPairings;
@property(copy, nonatomic) NSNumber *matterProductID; // @dynamic matterProductID;
@property(copy, nonatomic) NSNumber *matterVendorID; // @dynamic matterVendorID;
@property(readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property(copy, nonatomic) NSString *model;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) NSSet *naturalLightingActions_; // @dynamic naturalLightingActions_;
@property(copy, nonatomic) NSNumber *needsOnboarding; // @dynamic needsOnboarding;
@property(copy, nonatomic) NSNumber *needsPairingAudit; // @dynamic needsPairingAudit;
@property(copy, nonatomic) NSNumber *networkClientIdentifier;
@property(copy, nonatomic) NSNumber *networkClientLAN;
@property(copy, nonatomic) NSString *networkClientProfileFingerprint;
@property(copy, nonatomic) NSString *networkRouterUUID;
@property(retain, nonatomic) NSSet *pairedUsers_; // @dynamic pairedUsers_;
@property(copy, nonatomic) NSString *pairingUsername; // @dynamic pairingUsername;
@property(retain, nonatomic) NSSet *pairingsToRemove; // @dynamic pairingsToRemove;
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property(copy, nonatomic) NSUUID *preferredMediaUserUUID; // @dynamic preferredMediaUserUUID;
@property(copy, nonatomic) NSNumber *preferredUserSelectionType; // @dynamic preferredUserSelectionType;
@property(copy, nonatomic) NSString *primaryProfileVersion;
@property(copy, nonatomic) NSString *productData;
@property(copy, nonatomic) NSString *providedName;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(copy, nonatomic) NSNumber *reachabilityEventNotificationEnabled; // @dynamic reachabilityEventNotificationEnabled;
@property(retain, nonatomic) id <MKFRoom> room;
@property(copy, nonatomic) NSString *serialNumber;
@property(retain, nonatomic) NSSet *services_; // @dynamic services_;
@property(retain, nonatomic) id <MKFHomeNetworkRouterSetting> settingNetworkRouter; // @dynamic settingNetworkRouter;
@property(copy, nonatomic) NSNumber *shareSiriAnalytics; // @dynamic shareSiriAnalytics;
@property(copy, nonatomic) NSNumber *shareSpeakerAnalytics; // @dynamic shareSpeakerAnalytics;
@property(copy, nonatomic) NSNumber *siriEnabled; // @dynamic siriEnabled;
@property(copy, nonatomic) NSNumber *siriEndpointEnabled; // @dynamic siriEndpointEnabled;
@property(copy, nonatomic) NSString *siriLanguageCode; // @dynamic siriLanguageCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceCode; // @dynamic siriLanguageVoiceCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceGenderCode; // @dynamic siriLanguageVoiceGenderCode;
@property(copy, nonatomic) NSString *siriLanguageVoiceName; // @dynamic siriLanguageVoiceName;
@property(copy, nonatomic) NSNumber *sleepInterval; // @dynamic sleepInterval;
@property(retain, nonatomic) NSData *smartBulletinBoardNotificationData; // @dynamic smartBulletinBoardNotificationData;
@property(retain, nonatomic) id <MKFSoftwareUpdate> softwareUpdate;
@property(copy, nonatomic) NSNumber *soundAlertEnabled; // @dynamic soundAlertEnabled;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *supportsMatterAccessCode; // @dynamic supportsMatterAccessCode;
@property(copy, nonatomic) NSNumber *supportsMatterWalletKey; // @dynamic supportsMatterWalletKey;
@property(copy, nonatomic) NSNumber *suspendCapable;
@property(copy, nonatomic) NSNumber *suspendedState; // @dynamic suspendedState;
@property(retain, nonatomic) NSArray *targetUUIDs; // @dynamic targetUUIDs;
@property(retain, nonatomic) NSArray *transportInformation; // @dynamic transportInformation;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property(readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property(readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property(copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval; // @dynamic visionDoubleTapSettingsTimeoutInterval;
@property(copy, nonatomic) NSNumber *visionSpeakingRate; // @dynamic visionSpeakingRate;
@property(copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled; // @dynamic visionVoiceOverAudioDuckingEnabled;
@property(copy, nonatomic) NSNumber *visionVoiceOverEnabled; // @dynamic visionVoiceOverEnabled;
@property(copy, nonatomic) NSNumber *wiFiCredentialType;
@property(copy, nonatomic) NSNumber *wiFiTransportCapabilities; // @dynamic wiFiTransportCapabilities;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

