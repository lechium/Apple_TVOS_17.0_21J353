//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDAppleAccountSettings, HMDBulletinBoard, HMDCameraRecordingReachabilityEventModel, HMDHAPAccessory, HMFMessageDispatcher, HMFTimer, NSDate, NSHashTable, NSNotificationCenter, NSObject, NSString, NSUUID, _HMCameraUserSettings;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingReachabilityEventManager : HMFObject
{
    _Bool _currentDeviceConfirmedPrimaryResident;	// 8 = 0x8
    _Bool _currentDeviceConnectedToNetwork;	// 9 = 0x9
    _Bool _lastKnownCameraReachability;	// 10 = 0xa
    _Bool _currentCameraReachability;	// 11 = 0xb
    _Bool _currentBridgedCameraReachability;	// 12 = 0xc
    HMDHAPAccessory *_hapAccessory;	// 16 = 0x10
    NSUUID *_uniqueIdentifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDBulletinBoard *_bulletinBoard;	// 40 = 0x28
    HMDAppleAccountSettings *_accountSettings;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    HMFMessageDispatcher *_messageDispatcher;	// 64 = 0x40
    NSHashTable *_clientConnections;	// 72 = 0x48
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 80 = 0x50
    unsigned long long _reachabilityChangeDebounceCount;	// 88 = 0x58
    _HMCameraUserSettings *_currentSettings;	// 96 = 0x60
    HMDCameraRecordingReachabilityEventModel *_mostRecentReachabilityEventModel;	// 104 = 0x68
    HMBLocalZone *_localZone;	// 112 = 0x70
    HMBCloudZone *_cloudZone;	// 120 = 0x78
    HMFTimer *_initialReachabilityTimer;	// 128 = 0x80
    HMFTimer *_reachabilityChangeDebounceTimer;	// 136 = 0x88
    NSDate *_reachabilityChangeDebounceStartDate;	// 144 = 0x90
    NSDate *_suppressNotificationsBeforeDate;	// 152 = 0x98
    CDUnknownBlockType _initialReachabilityTimerFactory;	// 160 = 0xa0
    CDUnknownBlockType _reachabilityChangeDebounceTimerFactory;	// 168 = 0xa8
}

+ (id)logCategory;	// IMP=0x00100000008eaf5a
- (void).cxx_destruct;	// IMP=0x00000000008e85e7
@property(copy) CDUnknownBlockType reachabilityChangeDebounceTimerFactory; // @synthesize reachabilityChangeDebounceTimerFactory=_reachabilityChangeDebounceTimerFactory;
@property(copy) CDUnknownBlockType initialReachabilityTimerFactory; // @synthesize initialReachabilityTimerFactory=_initialReachabilityTimerFactory;
@property(copy) NSDate *suppressNotificationsBeforeDate; // @synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate;
@property(copy) NSDate *reachabilityChangeDebounceStartDate; // @synthesize reachabilityChangeDebounceStartDate=_reachabilityChangeDebounceStartDate;
@property(retain) HMFTimer *reachabilityChangeDebounceTimer; // @synthesize reachabilityChangeDebounceTimer=_reachabilityChangeDebounceTimer;
@property(retain) HMFTimer *initialReachabilityTimer; // @synthesize initialReachabilityTimer=_initialReachabilityTimer;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(copy) HMDCameraRecordingReachabilityEventModel *mostRecentReachabilityEventModel; // @synthesize mostRecentReachabilityEventModel=_mostRecentReachabilityEventModel;
@property(copy) _HMCameraUserSettings *currentSettings; // @synthesize currentSettings=_currentSettings;
@property unsigned long long reachabilityChangeDebounceCount; // @synthesize reachabilityChangeDebounceCount=_reachabilityChangeDebounceCount;
@property _Bool currentBridgedCameraReachability; // @synthesize currentBridgedCameraReachability=_currentBridgedCameraReachability;
@property _Bool currentCameraReachability; // @synthesize currentCameraReachability=_currentCameraReachability;
@property _Bool lastKnownCameraReachability; // @synthesize lastKnownCameraReachability=_lastKnownCameraReachability;
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) NSHashTable *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDAppleAccountSettings *accountSettings; // @synthesize accountSettings=_accountSettings;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
- (id)logIdentifier;	// IMP=0x00000000008e8181
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x00000000008e8055
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x00000000008e7f4a
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000008e7ad5
- (void)clipManagerDidStop:(id)arg1;	// IMP=0x00000000008e7a71
- (void)clipManagerDidStart:(id)arg1;	// IMP=0x00000000008e781e
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000008e772d
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000008e7673
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000008e75b9
- (void)handleDeleteAllEventsMessage:(id)arg1;	// IMP=0x00000000008e72a1
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x00000000008e7090
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x00000000008e6db4
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x00000000008e6ad8
- (void)handleFetchCountOfEventsMessage:(id)arg1;	// IMP=0x00000000008e6470
- (void)handleFetchEventsMessage:(id)arg1;	// IMP=0x00000000008e5d75
- (void)handleRemoteCameraReachabilityChange:(id)arg1;	// IMP=0x00000000008e5c32
- (void)handleAppleAccountSettingsHomeStateUpdated:(id)arg1;	// IMP=0x00000000008e5bc1
- (void)handleHMDBridgedAccessoryUnreachableNotification:(id)arg1;	// IMP=0x00000000008e5b50
- (void)handleHMDBridgedAccessoryReachableNotification:(id)arg1;	// IMP=0x00000000008e5adf
- (void)handleAccessoryUnconfigured:(id)arg1;	// IMP=0x00000000008e5a6e
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x00000000008e59fd
- (void)handleCameraProfileSettingsDidChange:(id)arg1;	// IMP=0x00000000008e5945
- (void)handleResidentDeviceConfirmedStateChangedNotification:(id)arg1;	// IMP=0x00000000008e58d4
- (id)mostRecentReachabilityEventModelInModels:(id)arg1;	// IMP=0x00000000008e57e4
- (void)startReachabilityChangeDebounceTimerWithReachability:(_Bool)arg1;	// IMP=0x00000000008e557b
@property(readonly) double reachabilityChangeUnreachableDebounceTimeout;
@property(readonly) double reachabilityChangeReachableDebounceTimeout;
- (void)updateInitialReachabilityTimer;	// IMP=0x00000000008e51b2
@property(readonly) double initialReachabilityTimeout;
- (id)performCloudPullWithLabel:(id)arg1;	// IMP=0x00000000008e4e12
- (void)submitLogEventWithCurrentModel:(id)arg1;	// IMP=0x00000000008e4be3
- (id)reachabilityEventModelForCurrentCameraReachability:(_Bool)arg1 dateOfOccurrence:(id)arg2;	// IMP=0x00000000008e4ac0
- (void)notifyTransportOfUpdatedEvents:(id)arg1 removedEventUUIDs:(id)arg2;	// IMP=0x00000000008e44fe
- (void)notifySubscribersOfRemoteCameraReachabilityEvent;	// IMP=0x00000000008e41f0
- (void)addCameraReachabilityEventForCurrentCameraReachability:(_Bool)arg1 dateOfOccurrence:(id)arg2;	// IMP=0x00000000008e3e11
- (id)fetchReachabilityEventsWithDateInterval:(id)arg1;	// IMP=0x00000000008e3ca8
- (_Bool)shouldAddInitialReachabilityEventForCurrentCameraReachability:(_Bool)arg1;	// IMP=0x00000000008e3a28
- (void)handleInitialCameraReachability;	// IMP=0x00000000008e381f
- (void)handleUpdatedCameraReachability:(_Bool)arg1;	// IMP=0x00000000008e35f1
@property(nonatomic, getter=isCurrentDeviceConnectedToNetwork) _Bool currentDeviceConnectedToNetwork; // @synthesize currentDeviceConnectedToNetwork=_currentDeviceConnectedToNetwork;
@property(nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) _Bool currentDeviceConfirmedPrimaryResident; // @synthesize currentDeviceConfirmedPrimaryResident=_currentDeviceConfirmedPrimaryResident;
- (_Bool)isAccessoryReachable;	// IMP=0x00000000008e3118
- (void)cleanUpEvents;	// IMP=0x00000000008e2d4b
- (void)configureWithMessageDispatcher:(id)arg1 currentSettings:(id)arg2 isCurrentDeviceConfirmedPrimaryResident:(_Bool)arg3 isCurrentDeviceConnectedToNetwork:(_Bool)arg4;	// IMP=0x00000000008e24f9
- (id)initWithHAPAccessory:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000008e23af
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 identifier:(id)arg3 bulletinBoard:(id)arg4 logEventSubmitter:(id)arg5 accountSettings:(id)arg6 notificationCenter:(id)arg7;	// IMP=0x00000000008e21b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

