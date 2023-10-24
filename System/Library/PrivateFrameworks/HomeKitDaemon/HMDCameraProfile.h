//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraClipManager, HMDCameraClipUserNotificationCenter, HMDCameraProfileSettingsManager, HMDCameraRecordingManager, HMDCameraRecordingReachabilityEventManager, HMDCameraSignificantEventNotificationFilter, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDPredicateUtilities, HMDService, HMFNetMonitor, HMFTimer, NSDictionary, NSMutableArray, NSNotificationCenter, NSSet, NSString, _HMCameraUserSettings;

__attribute__((visibility("hidden")))
@interface HMDCameraProfile
{
    _Bool _microphonePresent;	// 16 = 0x10
    _Bool _speakerPresent;	// 17 = 0x11
    HMDCameraClipManager *_clipManager;	// 24 = 0x18
    HMDService *_recordingManagementService;	// 32 = 0x20
    HMDHAPAccessory *_hapAccessory;	// 40 = 0x28
    NSSet *_cameraStreamManagers;	// 48 = 0x30
    HMDCameraSnapshotManager *_snapshotManager;	// 56 = 0x38
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 64 = 0x40
    NSMutableArray *_settingProactiveReaders;	// 72 = 0x48
    HMFNetMonitor *_networkMonitor;	// 80 = 0x50
    HMDCameraProfileSettingsManager *_cameraSettingsManager;	// 88 = 0x58
    HMDCameraRecordingReachabilityEventManager *_reachabilityEventManager;	// 96 = 0x60
    HMDCameraClipUserNotificationCenter *_clipUserNotificationCenter;	// 104 = 0x68
    NSNotificationCenter *_notificationCenter;	// 112 = 0x70
    HMFTimer *_recordingEventsCleanupTimer;	// 120 = 0x78
    HMDCameraSignificantEventNotificationFilter *_significantEventNotificationFilter;	// 128 = 0x80
    HMDPredicateUtilities *_predicateUtilities;	// 136 = 0x88
    HMDCameraRecordingManager *_cameraRecordingManager;	// 144 = 0x90
    CDUnknownBlockType _recordingEventsCleanupTimerFactory;	// 152 = 0x98
    CDUnknownBlockType _recordingManagerFactory;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a72ea9
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000a72ea1
+ (id)logCategory;	// IMP=0x0010000000a72e71
+ (void)setBulletinBoard:(id)arg1;	// IMP=0x0010000000a72e5d
+ (id)bulletinBoard;	// IMP=0x0010000000a72e1a
- (void).cxx_destruct;	// IMP=0x0000000000a723b6
@property(copy) CDUnknownBlockType recordingManagerFactory; // @synthesize recordingManagerFactory=_recordingManagerFactory;
@property(copy) CDUnknownBlockType recordingEventsCleanupTimerFactory; // @synthesize recordingEventsCleanupTimerFactory=_recordingEventsCleanupTimerFactory;
@property(retain) HMDCameraRecordingManager *cameraRecordingManager; // @synthesize cameraRecordingManager=_cameraRecordingManager;
@property(retain) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(readonly, nonatomic) HMDCameraSignificantEventNotificationFilter *significantEventNotificationFilter; // @synthesize significantEventNotificationFilter=_significantEventNotificationFilter;
@property(retain) HMFTimer *recordingEventsCleanupTimer; // @synthesize recordingEventsCleanupTimer=_recordingEventsCleanupTimer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter; // @synthesize clipUserNotificationCenter=_clipUserNotificationCenter;
@property(readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager; // @synthesize reachabilityEventManager=_reachabilityEventManager;
@property(readonly) HMDCameraProfileSettingsManager *cameraSettingsManager; // @synthesize cameraSettingsManager=_cameraSettingsManager;
@property(readonly) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly) NSMutableArray *settingProactiveReaders; // @synthesize settingProactiveReaders=_settingProactiveReaders;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly) NSSet *cameraStreamManagers; // @synthesize cameraStreamManagers=_cameraStreamManagers;
@property(readonly) __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(readonly) HMDService *recordingManagementService; // @synthesize recordingManagementService=_recordingManagementService;
@property(readonly) HMDCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(readonly, nonatomic, getter=isSpeakerPresent) _Bool speakerPresent; // @synthesize speakerPresent=_speakerPresent;
@property(readonly, nonatomic, getter=isMicrophonePresent) _Bool microphonePresent; // @synthesize microphonePresent=_microphonePresent;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a72023
- (void)networkMonitorIsUnreachable:(id)arg1;	// IMP=0x0000000000a71f6b
- (void)networkMonitorIsReachable:(id)arg1;	// IMP=0x0000000000a71eb3
- (void)notificationManager:(id)arg1 didReceiveNotificationForCameraSignificantEventIdentifier:(id)arg2 notificationReasons:(unsigned long long)arg3;	// IMP=0x0000000000a71dfb
- (void)cameraProfileSettingsManager:(id)arg1 canDisableRecordingWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a71cba
- (void)cameraProfileSettingsManager:(id)arg1 canEnableRecordingWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a71b79
- (void)clipManagerDidDisableCloudStorage:(id)arg1;	// IMP=0x0000000000a71b05
- (void)clipManagerDidStop:(id)arg1;	// IMP=0x0000000000a719fa
- (void)clipManagerDidStartUpCloudZone:(id)arg1;	// IMP=0x0000000000a71962
- (void)clipManagerDidStart:(id)arg1;	// IMP=0x0000000000a717c4
- (void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;	// IMP=0x0000000000a7172c
- (void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2;	// IMP=0x0000000000a71663
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a7153d
- (id)messageReceiverChildren;	// IMP=0x0000000000a713f4
- (void)handleResidentsChangedNotification:(id)arg1;	// IMP=0x0000000000a71383
- (void)handleCameraProfileSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000000a71295
@property(readonly) _HMCameraUserSettings *currentSettings;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a70d21
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;	// IMP=0x0000000000a70c89
- (void)_handleStreamControlRequest:(id)arg1;	// IMP=0x0000000000a70526
- (void)_handleNegotiateStreamRequest:(id)arg1;	// IMP=0x0000000000a6fca5
- (void)_postNotificationForUpdatedSignificantEvent:(id)arg1;	// IMP=0x0000000000a6fb3f
- (_Bool)_shouldNotifyForSignificantEvent:(id)arg1;	// IMP=0x0000000000a6f750
- (_Bool)_areFaceClassificationsSuppressedForSignificantEvent:(id)arg1;	// IMP=0x0000000000a6f51e
- (void)registerForMessages;	// IMP=0x0000000000a6ead1
- (void)_setControlSupport;	// IMP=0x0000000000a6e731
- (id)dumpState;	// IMP=0x0000000000a6e6ce
- (void)dealloc;	// IMP=0x0000000000a6e660
- (void)unconfigure;	// IMP=0x0000000000a6e5ae
- (void)removeCloudData;	// IMP=0x0000000000a6e51c
@property(readonly, copy) NSString *description;
- (void)_setUpBulletinNotificationManagerObserver;	// IMP=0x0000000000a6e379
- (void)_createCameraRecordingManager;	// IMP=0x0000000000a6de81
- (void)tearDownWithReplacementCameraProfile:(id)arg1;	// IMP=0x0000000000a6dccd
- (void)setUp;	// IMP=0x0000000000a6d86f
@property(readonly, nonatomic, getter=isCameraRecordingFeatureSupported) _Bool supportsCameraRecordingFeature;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 recordingManagementService:(id)arg3 msgDispatcher:(id)arg4 workQueue:(id)arg5 home:(id)arg6 settingsManager:(id)arg7 uniqueIdentifier:(id)arg8 clipManager:(id)arg9 clipUserNotificationCenter:(id)arg10 reachabilityEventManager:(id)arg11 networkMonitor:(id)arg12 streamSnapshotHandler:(id)arg13 snapshotManager:(id)arg14 cameraStreamManagers:(id)arg15 significantEventNotificationFilter:(id)arg16 notificationCenter:(id)arg17;	// IMP=0x0000000000a6d37a
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 workQueue:(id)arg4 home:(id)arg5 settingsManager:(id)arg6;	// IMP=0x0000000000a6c622
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
