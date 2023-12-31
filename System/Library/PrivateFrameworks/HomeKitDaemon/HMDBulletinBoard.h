//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDUserNotificationCenter, NAFuture, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol HMDFileManager, HMDUserNotificationCenterSettingsProviding, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBulletinBoard : HMFObject
{
    id <HMDFileManager> _fileManager;	// 8 = 0x8
    NSSet *_notificationCategories;	// 16 = 0x10
    NAFuture *_isConfiguredFuture;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDUserNotificationCenter *_notificationCenter;	// 40 = 0x28
    NSMutableDictionary *_notificationRequests;	// 48 = 0x30
    NSMutableDictionary *_characteristicTuples;	// 56 = 0x38
    HMDHomeManager *_homeManager;	// 64 = 0x40
    Class _persistentStoreClass;	// 72 = 0x48
    Class _doorbellBulletinUtilitiesClass;	// 80 = 0x50
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00100000002dc028
+ (void)messageAndTitleForLockUserChangeEvent:(id *)arg1 title:(id *)arg2 accessory:(id)arg3 lockDataType:(unsigned char)arg4 dataOperationType:(unsigned char)arg5 ecosystemName:(id)arg6 isAffectedUser:(_Bool)arg7;	// IMP=0x00100000002db0d4
+ (id)messageForLockOperationEvent:(id)arg1 personName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4;	// IMP=0x00100000002da924
+ (id)messageForDoorLockAlarmEvent:(id)arg1 alarmCode:(unsigned char)arg2;	// IMP=0x00100000002da494
+ (_Bool)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;	// IMP=0x00100000002da353
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;	// IMP=0x00100000002da32b
+ (unsigned long long)interruptionLevelForChangedCharacteristic:(id)arg1;	// IMP=0x00100000002da0a4
+ (id)createImageAttachmentByHardLinkingFile:(id)arg1 fileManager:(id)arg2;	// IMP=0x00100000002d9c19
+ (id)attachmentsWithFileURL:(id)arg1;	// IMP=0x00100000002d9a07
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;	// IMP=0x00100000002d9661
+ (_Bool)isCriticalNonSecureServiceType:(id)arg1;	// IMP=0x00100000002d9601
+ (_Bool)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00100000002d9538
+ (_Bool)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00100000002d945b
+ (id)_supportedNonSecureServices;	// IMP=0x00100000002d942b
+ (id)_supportedSecureServices;	// IMP=0x00100000002d93fb
+ (id)notificationCategories;	// IMP=0x00100000002d8f6e
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002d8f66
+ (id)sharedBulletinBoard;	// IMP=0x00100000002d8f36
- (void).cxx_destruct;	// IMP=0x00000000002ce900
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) Class doorbellBulletinUtilitiesClass; // @synthesize doorbellBulletinUtilitiesClass=_doorbellBulletinUtilitiesClass;
@property(retain) Class persistentStoreClass; // @synthesize persistentStoreClass=_persistentStoreClass;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) NSMutableDictionary *characteristicTuples; // @synthesize characteristicTuples=_characteristicTuples;
@property(retain) NSMutableDictionary *notificationRequests; // @synthesize notificationRequests=_notificationRequests;
@property(readonly) HMDUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NAFuture *isConfiguredFuture; // @synthesize isConfiguredFuture=_isConfiguredFuture;
@property(readonly, copy) NSSet *notificationCategories; // @synthesize notificationCategories=_notificationCategories;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void)notificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ce6d5
- (void)_handleDidReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002cdf8a
- (void)_updateDoorbellUserInfo:(id)arg1 withSignificantEventUserInfo:(id)arg2;	// IMP=0x00000000002cdcf0
- (void)_submitCameraClipSignificantEventDetailsFromBulletin:(id)arg1;	// IMP=0x00000000002cdb37
- (void)_submitDoorbellEventDetailsFromBulletinWithDate:(id)arg1 significantEvents:(id)arg2;	// IMP=0x00000000002cd8a4
- (id)_copyItemAtURL:(id)arg1 toDirectory:(id)arg2;	// IMP=0x00000000002cd4f9
- (id)_doorbellPressNotificationsNearDate:(id)arg1 forCameraProfile:(id)arg2;	// IMP=0x00000000002cd3b1
- (id)notificationRequestsForCameraClipUUIDs:(id)arg1;	// IMP=0x00000000002cd2ab
- (void)updateMessageForDoorbellPressNotificationRequestWithIdentifier:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x00000000002ccd2c
- (_Bool)_updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1;	// IMP=0x00000000002cbf5f
- (_Bool)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1 includeChangeFromNil:(_Bool)arg2;	// IMP=0x00000000002cb3e8
- (_Bool)_shouldSkipBulletinForChangedCharacteristic:(id)arg1;	// IMP=0x00000000002caf32
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(_Bool)arg3;	// IMP=0x00000000002ca9f4
- (_Bool)_hasDuplicateBulletinForSnapshotCharacteristic:(id)arg1;	// IMP=0x00000000002ca71b
- (_Bool)_hasDuplicateBulletinForCharacteristic:(id)arg1;	// IMP=0x00000000002ca2dd
- (id)_insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;	// IMP=0x00000000002c9a8e
- (void)removeImageFilesForNotificationRequests:(id)arg1;	// IMP=0x00000000002c96ff
- (void)insertBulletinForLockUserChange:(id)arg1 lockDataType:(unsigned char)arg2 dataOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 isAffectedUser:(_Bool)arg5 flow:(id)arg6;	// IMP=0x00000000002c926e
- (void)insertBulletinForLockOperation:(id)arg1 userDisplayName:(id)arg2 lockOperationType:(unsigned char)arg3 ecosystemName:(id)arg4 flow:(id)arg5;	// IMP=0x00000000002c8caa
- (void)insertBulletinForDoorLockAlarm:(id)arg1 alarmCode:(unsigned char)arg2 flow:(id)arg3;	// IMP=0x00000000002c881e
- (void)_insertLockBulletinForChangedCharacteristic:(id)arg1 logEventTopic:(long long)arg2;	// IMP=0x00000000002c8025
- (void)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c636f
- (id)removeRedundantSignificantEventNotificationsForSignificantEvents:(id)arg1;	// IMP=0x00000000002c6171
- (id)titleNameForChangedCharacteristic:(id)arg1;	// IMP=0x00000000002c5eaf
- (id)messageForLockCharacteristic:(id)arg1 personName:(id)arg2;	// IMP=0x00000000002c5843
- (id)messageForChangedCharacteristic:(id)arg1 withSignificantEvents:(id)arg2;	// IMP=0x00000000002c548c
- (void)addNotificationRequest:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000002c52f2
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1 shouldDeleteAttachments:(_Bool)arg2;	// IMP=0x00000000002c4d2b
- (void)removeBulletinsUsingPredicate:(id)arg1;	// IMP=0x00000000002c4c14
- (void)cullBulletinsToCount:(unsigned long long)arg1;	// IMP=0x00000000002c48d6
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x00000000002c4659
- (id)notificationRequestsSortedByDate;	// IMP=0x00000000002c4556
- (void)removeAllBulletins;	// IMP=0x00000000002c44e5
- (void)removeBulletinWithRecordID:(id)arg1;	// IMP=0x00000000002c442d
- (void)removeCameraClipBulletinsForCameraProfile:(id)arg1;	// IMP=0x00000000002c4375
- (void)removeBulletinsForTrigger:(id)arg1;	// IMP=0x00000000002c42bd
- (void)removeBulletinsForService:(id)arg1;	// IMP=0x00000000002c4205
- (void)removeBulletinsForAccessory:(id)arg1;	// IMP=0x00000000002c414d
- (void)removeBulletinsForHome:(id)arg1;	// IMP=0x00000000002c4095
- (void)refreshHomeBadgeNumber;	// IMP=0x00000000002c3fa0
- (void)insertNewRMVLanguageBulletinForHome:(id)arg1 language:(id)arg2;	// IMP=0x00000000002c3e3f
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c3d87
- (void)updateDoorbellPressNotificationsWithSignificantEventBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c3ca9
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;	// IMP=0x00000000002c3a91
- (void)insertHH2DuplicateUserModelBulletinForHome:(id)arg1 user:(id)arg2;	// IMP=0x00000000002c39b3
- (void)insertHH2SoftwareUpdateCompleteEventBulletinForAccessory:(id)arg1;	// IMP=0x00000000002c38fb
- (void)updateAudioAnalysisEventNotification:(id)arg1;	// IMP=0x00000000002c3843
- (void)insertAudioAnalysisEventNotification:(id)arg1;	// IMP=0x00000000002c376b
- (void)insertConnectedCHIPEcosystemsChangedBulletin:(id)arg1;	// IMP=0x00000000002c36b3
- (void)insertCameraAccessModeChangedBulletin:(id)arg1;	// IMP=0x00000000002c35fb
- (void)insertCameraClipSignificantEventBulletin:(id)arg1;	// IMP=0x00000000002c3543
- (void)removeWalletKeyOnboardingBulletinForHome:(id)arg1;	// IMP=0x00000000002c348b
- (void)insertWalletKeyExpressModeSetUpBulletinForHome:(id)arg1;	// IMP=0x00000000002c33d3
- (void)insertWalletKeySupportAddedBulletinForAccessory:(id)arg1;	// IMP=0x00000000002c331b
- (void)insertLockOnboardingBulletinForHome:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002c323d
- (void)insertAccessCodeRemovedBulletinForHome:(id)arg1;	// IMP=0x00000000002c3185
- (void)insertAccessCodeChangedBulletinForHome:(id)arg1;	// IMP=0x00000000002c30cd
- (void)insertAccessCodeAddedBulletinForHome:(id)arg1;	// IMP=0x00000000002c3015
- (void)insertHomeHubReachabilityBulletinForHome:(id)arg1 reachable:(_Bool)arg2 hasMultipleResidentsSupportingCameraRecording:(_Bool)arg3;	// IMP=0x00000000002c2f54
- (void)insertReachabilityEventBulletinForAccessory:(id)arg1 reachable:(_Bool)arg2 date:(id)arg3;	// IMP=0x00000000002c2e6d
- (id)insertBulletinForSecureTrigger:(id)arg1;	// IMP=0x00000000002c2d51
- (void)insertBulletinForIncompatibleInvitationFromInviterName:(id)arg1 homeName:(id)arg2;	// IMP=0x00000000002c2c73
- (id)insertBulletinForIncomingInvitation:(id)arg1;	// IMP=0x00000000002c29fb
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(_Bool)arg2 changeNotificationFromPrimary:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c28ea
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c27dd
- (void)archive;	// IMP=0x00000000002c27ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002c273c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002c24f9
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x00000000002c238b
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationCenterSettingsProvider;
- (id)initWithNotificationCenter:(id)arg1 fileManager:(id)arg2 workQueue:(id)arg3 logEventSubmitter:(id)arg4;	// IMP=0x00000000002c21ad
- (id)init;	// IMP=0x00000000002c208a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

