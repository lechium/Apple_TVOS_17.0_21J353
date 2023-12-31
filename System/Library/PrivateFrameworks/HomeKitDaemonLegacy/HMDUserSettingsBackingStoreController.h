//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NSString, NSUUID;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDSharedUserDataModelUpdateReceiver, HMDUserSettingsBackingStoreControllerDelegate, HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDUserSettingsBackingStoreController : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    unsigned long long _startupSignPost;	// 16 = 0x10
    id <HMDUserSettingsBackingStoreControllerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSString *_zoneName;	// 48 = 0x30
    id <HMDDatabase> _database;	// 56 = 0x38
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 64 = 0x40
    HMDCloudShareMessenger *_shareMessenger;	// 72 = 0x48
    HMDCloudShareParticipantsManager *_participantsManager;	// 80 = 0x50
    HMBCloudZone *_cloudZone;	// 88 = 0x58
    long long _runState;	// 96 = 0x60
    long long _logEventRunState;	// 104 = 0x68
    id <HMDSettingTransactionReceiverProtocol> _transactionReceiver;	// 112 = 0x70
    id <HMDAssistantAccessControlModelUpdateReceiver> _assistantAccessControlModelUpdateReceiver;	// 120 = 0x78
    NSUUID *_assistantAccessControlModelID;	// 128 = 0x80
    id <HMDMediaContentProfileAccessControlModelUpdateReceiver> _mediaContentProfileAccessControlModelUpdateReceiver;	// 136 = 0x88
    NSUUID *_mediaContentProfileAccessControlModelID;	// 144 = 0x90
    NSUUID *_userSupportsAutomaticHH2MigrationModelID;	// 152 = 0x98
    id <HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver> _userSupportsAutomaticHH2MigrationModelUpdateReceiver;	// 160 = 0xa0
    NSUUID *_sharedUserDataModelUpdateModelID;	// 168 = 0xa8
    id <HMDSharedUserDataModelUpdateReceiver> _sharedUserDataModelUpdateReceiver;	// 176 = 0xb0
}

+ (id)logCategory;	// IMP=0x00100000001de18c
- (void).cxx_destruct;	// IMP=0x00000000001dc748
@property __weak id <HMDSharedUserDataModelUpdateReceiver> sharedUserDataModelUpdateReceiver; // @synthesize sharedUserDataModelUpdateReceiver=_sharedUserDataModelUpdateReceiver;
@property(copy) NSUUID *sharedUserDataModelUpdateModelID; // @synthesize sharedUserDataModelUpdateModelID=_sharedUserDataModelUpdateModelID;
@property __weak id <HMDUserSupportsAutomaticHH2MigrationModelUpdateReceiver> userSupportsAutomaticHH2MigrationModelUpdateReceiver; // @synthesize userSupportsAutomaticHH2MigrationModelUpdateReceiver=_userSupportsAutomaticHH2MigrationModelUpdateReceiver;
@property(copy) NSUUID *userSupportsAutomaticHH2MigrationModelID; // @synthesize userSupportsAutomaticHH2MigrationModelID=_userSupportsAutomaticHH2MigrationModelID;
@property(copy) NSUUID *mediaContentProfileAccessControlModelID; // @synthesize mediaContentProfileAccessControlModelID=_mediaContentProfileAccessControlModelID;
@property __weak id <HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver; // @synthesize mediaContentProfileAccessControlModelUpdateReceiver=_mediaContentProfileAccessControlModelUpdateReceiver;
@property(copy) NSUUID *assistantAccessControlModelID; // @synthesize assistantAccessControlModelID=_assistantAccessControlModelID;
@property __weak id <HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver; // @synthesize assistantAccessControlModelUpdateReceiver=_assistantAccessControlModelUpdateReceiver;
@property __weak id <HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property long long logEventRunState; // @synthesize logEventRunState=_logEventRunState;
@property long long runState; // @synthesize runState=_runState;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) __weak id <HMDUserSettingsBackingStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000001dc4ca
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000001dc39b
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x00000000001dc26c
- (void)runTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dbca1
- (id)settingTransactionWithName:(id)arg1;	// IMP=0x00000000001dbc54
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dbc42
- (void)runSettingTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001dbc2b
- (void)registerForSettingsTransactions:(id)arg1;	// IMP=0x00000000001dbb29
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;	// IMP=0x00000000001db0df
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000001dafbb
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000001dae59
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000001dad35
- (void)messengerDidReceiveShareAccessRevocation:(id)arg1;	// IMP=0x00000000001dad2f
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x00000000001dab64
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001da79c
- (void)manager:(id)arg1 didRevokeShareAccessForUser:(id)arg2;	// IMP=0x00000000001da796
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x00000000001da6ff
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x00000000001da667
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000001da5f6
- (void)_sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x00000000001da12a
- (void)_updateLogEventRunState:(long long)arg1;	// IMP=0x00000000001d9f5f
- (void)_updateRunState:(long long)arg1;	// IMP=0x00000000001d9e0a
- (id)loadUserSettings;	// IMP=0x00000000001d9b76
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000001d8f56
- (void)_startWithSharedZone;	// IMP=0x00000000001d8afd
- (void)_startWithOwnedZone;	// IMP=0x00000000001d89d3
- (void)updateParticipants;	// IMP=0x00000000001d88da
- (void)clearParticipants;	// IMP=0x00000000001d87e1
- (id)queryPushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x00000000001d8563
- (void)deregisterObserverDeviceIdentifier:(id)arg1;	// IMP=0x00000000001d835f
- (void)deregisterObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x00000000001d7c8f
- (void)updateObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2;	// IMP=0x00000000001d7892
- (void)registerObserverDeviceIdentifier:(id)arg1 observerPushToken:(id)arg2 subActivity:(id)arg3 subjectDeviceIdentifier:(id)arg4;	// IMP=0x00000000001d70c1
- (void)destroyZone;	// IMP=0x00000000001d6f18
- (void)_invalidate;	// IMP=0x00000000001d6de7
- (void)registerForSharedUserDataModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001d6d86
- (void)registerForUserSupportsAutomaticHH2MigrationModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001d6ce0
- (id)loadUserSupportsAutomaticHH2MigrationModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d6c32
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001d6b8c
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d6ade
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000001d6a38
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d686b
- (id)loadSharedUserDataModelWithError:(id *)arg1;	// IMP=0x00000000001d67be
- (id)loadPrivateUserDataModelWithError:(id *)arg1;	// IMP=0x00000000001d6711
- (void)start;	// IMP=0x00000000001d6235
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 shareMessenger:(id)arg5;	// IMP=0x00000000001d60a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

