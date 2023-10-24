//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFPairingIdentity, HMFSoftwareVersion, MKFAppleMediaAccessoryDatabaseID, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFAccessory, MKFApplicationData, MKFDevice, MKFHome, MKFResident, MKFRoom, MKFSoftwareUpdate;

__attribute__((visibility("hidden")))
@interface _MKFAppleMediaAccessory
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000005b164a
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000005b1631
+ (Class)cd_modelClass;	// IMP=0x00100000004263eb
+ (id)fetchRequest;	// IMP=0x0010000000cf677e
@property(readonly, retain, nonatomic) NSArray *actionsAppleMediaAccessoryPower;
- (id)castIfAppleMediaAccessory;	// IMP=0x00000000005b15d1
@property(readonly, copy, nonatomic) MKFAppleMediaAccessoryDatabaseID *databaseID;
- (id)_analysisPredicateToFetchBulletinRegistrationOnDeviceIdsIdentifier:(id)arg1 user:(id)arg2;	// IMP=0x00000000005b154a
- (id)analysisBulletinRegistrationWithDeviceIdsIdentifier:(id)arg1 user:(id)arg2 context:(id)arg3;	// IMP=0x00000000005b1449
- (id)bulletinRegistrationFromFetchRequest:(id)arg1 context:(id)arg2;	// IMP=0x00000000005b12e7
- (void)willSave;	// IMP=0x00000000005b0a98

// Remaining properties
@property(retain, nonatomic) NSData *accessoryCapabilities; // @dynamic accessoryCapabilities;
@property(copy, nonatomic) NSNumber *accessoryCategory;
@property(readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property(retain, nonatomic) NSSet *actionsAppleMediaAccessoryPower_; // @dynamic actionsAppleMediaAccessoryPower_;
@property(readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property(retain, nonatomic) id <MKFApplicationData> applicationData;
@property(retain, nonatomic) NSArray *appliedFirewallWANRules;
@property(readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property(readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property(copy, nonatomic) NSString *configurationAppIdentifier;
@property(copy, nonatomic) NSString *configuredName;
@property(copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFDevice> device; // @dynamic device;
@property(retain, nonatomic) NSData *deviceIRKData; // @dynamic deviceIRKData;
@property(copy, nonatomic) NSString *firmwareVersion;
@property(copy, nonatomic) NSUUID *groupIdentifier;
@property(copy, nonatomic) NSString *groupName;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(retain, nonatomic) id <MKFAccessory> hostAccessory;
@property(readonly, retain, nonatomic) NSArray *hostedAccessories;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *idsDestination; // @dynamic idsDestination;
@property(copy, nonatomic) NSUUID *idsIdentifier; // @dynamic idsIdentifier;
@property(copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property(copy, nonatomic) NSString *initialManufacturer;
@property(copy, nonatomic) NSString *initialModel;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property(copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property(copy, nonatomic) NSDate *lastSeenDate;
@property(copy, nonatomic) NSNumber *lowBattery;
@property(copy, nonatomic) NSString *manufacturer;
@property(readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property(copy, nonatomic) NSString *model;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSNumber *networkClientIdentifier;
@property(copy, nonatomic) NSNumber *networkClientLAN;
@property(copy, nonatomic) NSString *networkClientProfileFingerprint;
@property(copy, nonatomic) NSString *networkRouterUUID;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity; // @dynamic pairingIdentity;
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property(copy, nonatomic) NSString *primaryProfileVersion;
@property(copy, nonatomic) NSString *productData;
@property(copy, nonatomic) NSString *providedName;
@property(retain, nonatomic) id <MKFResident> resident; // @dynamic resident;
@property(retain, nonatomic) id <MKFRoom> room;
@property(copy, nonatomic) NSString *serialNumber;
@property(retain, nonatomic) id <MKFSoftwareUpdate> softwareUpdate;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *supportedStereoPairVersions; // @dynamic supportedStereoPairVersions;
@property(copy, nonatomic) NSNumber *suspendCapable;
@property(readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property(readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property(readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property(copy, nonatomic) NSNumber *variant; // @dynamic variant;
@property(copy, nonatomic) NSNumber *wiFiCredentialType;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
