//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDEventCountersManager, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAggregationAnalysisLogEvent : HMMLogEvent
{
    _Bool _cloudSyncLastDecryptionFailed;	// 8 = 0x8
    _Bool _cloudSyncMaximumDelayReached;	// 9 = 0x9
    _Bool _v2ElectionCurrentDeviceInSecondaryCoordinationMesh;	// 10 = 0xa
    _Bool _activeDay;	// 11 = 0xb
    NSString *_dataSyncState;	// 16 = 0x10
    unsigned long long _processLaunchCount;	// 24 = 0x18
    unsigned long long _processJetsamCount;	// 32 = 0x20
    unsigned long long _processCrashCount;	// 40 = 0x28
    unsigned long long _jetsamReasonHighwaterCount;	// 48 = 0x30
    unsigned long long _jetsamReasonProcessLimitCount;	// 56 = 0x38
    unsigned long long _jetsamReasonOtherCount;	// 64 = 0x40
    unsigned long long _processMemoryPressureStateWarningCount;	// 72 = 0x48
    unsigned long long _processMemoryPressureStateCriticalCount;	// 80 = 0x50
    unsigned long long _sampledAverageProcessMemoryUsageMB;	// 88 = 0x58
    unsigned long long _sampledPeakProcessMemoryUsageMB;	// 96 = 0x60
    unsigned long long _remoteMessagesSentCount;	// 104 = 0x68
    unsigned long long _remoteMessagesReceivedCount;	// 112 = 0x70
    unsigned long long _txIDSMessagesCount;	// 120 = 0x78
    unsigned long long _rxIDSMessagesCount;	// 128 = 0x80
    unsigned long long _txIDSProxyMessagesCount;	// 136 = 0x88
    unsigned long long _rxIDSProxyMessagesCount;	// 144 = 0x90
    unsigned long long _txLoxyMessagesCount;	// 152 = 0x98
    unsigned long long _rxLoxyMessagesCount;	// 160 = 0xa0
    unsigned long long _txRapportMessagesCount;	// 168 = 0xa8
    unsigned long long _rxRapportMessagesCount;	// 176 = 0xb0
    unsigned long long _txSecureMessagesCount;	// 184 = 0xb8
    unsigned long long _rxSecureMessagesCount;	// 192 = 0xc0
    unsigned long long _cloudSyncPushCount;	// 200 = 0xc8
    unsigned long long _legacyCloudSyncPushCount;	// 208 = 0xd0
    unsigned long long _cloudSyncFetchCount;	// 216 = 0xd8
    unsigned long long _cloudSyncUploadCount;	// 224 = 0xe0
    unsigned long long _cloudSyncUploadErrorCount;	// 232 = 0xe8
    unsigned long long _homeDataBytesFetched;	// 240 = 0xf0
    unsigned long long _homeDataBytesPushed;	// 248 = 0xf8
    unsigned long long _legacyHomeDataBytesFetched;	// 256 = 0x100
    unsigned long long _legacyHomeDataBytesPushed;	// 264 = 0x108
    unsigned long long _cloudSyncDecryptionFailedCount;	// 272 = 0x110
    unsigned long long _cloudStoreCoreDataTransactionCount;	// 280 = 0x118
    unsigned long long _workingStoreCoreDataTransactionCount;	// 288 = 0x120
    unsigned long long _coreDataCloudKitImportCount;	// 296 = 0x128
    unsigned long long _coreDataCloudKitExportCount;	// 304 = 0x130
    unsigned long long _residentSyncFetchHomeDataRequestCount;	// 312 = 0x138
    unsigned long long _residentSyncHomeDataChangedNotificationCount;	// 320 = 0x140
    unsigned long long _generationCounterIncrementCount;	// 328 = 0x148
    unsigned long long _notifyXPCClientsHomeDataChangedCount;	// 336 = 0x150
    unsigned long long _numReadSiri;	// 344 = 0x158
    unsigned long long _numWriteSiri;	// 352 = 0x160
    unsigned long long _numReadFirstPartyApp;	// 360 = 0x168
    unsigned long long _numWriteFirstPartyApp;	// 368 = 0x170
    unsigned long long _numReadThirdPartyApp;	// 376 = 0x178
    unsigned long long _numWriteThirdPartyApp;	// 384 = 0x180
    unsigned long long _numReadInternalRequested;	// 392 = 0x188
    unsigned long long _numWriteInternalRequested;	// 400 = 0x190
    unsigned long long _numReadUnknownSource;	// 408 = 0x198
    unsigned long long _numWriteUnknownSource;	// 416 = 0x1a0
    unsigned long long _numReadWriteSuccessIP;	// 424 = 0x1a8
    unsigned long long _numReadWriteFailureIP;	// 432 = 0x1b0
    unsigned long long _numReadWriteSuccessBT;	// 440 = 0x1b8
    unsigned long long _numReadWriteFailureBT;	// 448 = 0x1c0
    unsigned long long _numReadWriteSuccessIDS;	// 456 = 0x1c8
    unsigned long long _numReadWriteFailureIDS;	// 464 = 0x1d0
    unsigned long long _averageLatencyIP;	// 472 = 0x1d8
    unsigned long long _averageLatencyBT;	// 480 = 0x1e0
    unsigned long long _averageLatencyIDS;	// 488 = 0x1e8
    unsigned long long _numAccessoriesAdded;	// 496 = 0x1f0
    unsigned long long _numScenesAdded;	// 504 = 0x1f8
    unsigned long long _numTriggersAdded;	// 512 = 0x200
    unsigned long long _numShortcutsAdded;	// 520 = 0x208
    unsigned long long _numScenesUserRun;	// 528 = 0x210
    unsigned long long _numShortcutsRun;	// 536 = 0x218
    unsigned long long _numTriggersFired;	// 544 = 0x220
    unsigned long long _hapIPInvalidationCount;	// 552 = 0x228
    unsigned long long _hapIPSentHTTPRequestsCount;	// 560 = 0x230
    unsigned long long _hapIPReceivedHTTPResponsesCount;	// 568 = 0x238
    unsigned long long _hapIPReceivedHTTPEventCount;	// 576 = 0x240
    unsigned long long _hapBTLEConnectionsCount;	// 584 = 0x248
    unsigned long long _hapBTLEConnectionPerReasonsCount;	// 592 = 0x250
    unsigned long long _hapBTLEDiscoveriesCount;	// 600 = 0x258
    unsigned long long _cameraStreamStartSuccessCount;	// 608 = 0x260
    unsigned long long _cameraStreamStartFailureCount;	// 616 = 0x268
    unsigned long long _fetchCameraClipVideoSegmentAssetCount;	// 624 = 0x270
    unsigned long long _acceptedXPCRequestsCount;	// 632 = 0x278
    unsigned long long _erroredXPCRequestsCount;	// 640 = 0x280
    unsigned long long _sentXPCNotificationsCount;	// 648 = 0x288
    unsigned long long _filteredXPCNotificationsCount;	// 656 = 0x290
    unsigned long long _cameraRecordingReachabilityChangedCount;	// 664 = 0x298
    unsigned long long _cameraRecordingReachabilityOfflineDuration;	// 672 = 0x2a0
    unsigned long long _homeHubReachabilityChangedCount;	// 680 = 0x2a8
    unsigned long long _ipAccessoryReachabilityChangedCount;	// 688 = 0x2b0
    unsigned long long _currentDeviceStartedLegacyElectionCount;	// 696 = 0x2b8
    unsigned long long _v2ElectionCoordinationMeshUpdateCount;	// 704 = 0x2c0
    unsigned long long _v2ElectionCoordinationMeshLeaderElectedCount;	// 712 = 0x2c8
    unsigned long long _v2ElectionCoordinationMeshLeaderChangedCount;	// 720 = 0x2d0
    unsigned long long _v2ElectionPrimaryResidentElectionRunCount;	// 728 = 0x2d8
    unsigned long long _v2ElectionPrimaryResidentChangedCount;	// 736 = 0x2e0
    unsigned long long _v2ElectionCoordinationCurrentDeviceFlapCount;	// 744 = 0x2e8
    unsigned long long _v2ElectionPercentageDurationCurrentDeviceIsInPrimaryMesh;	// 752 = 0x2f0
    long long _primaryResidentDurationMinutes;	// 760 = 0x2f8
    unsigned long long _bulletinNotificationsPostedCount;	// 768 = 0x300
    unsigned long long _activeDaysPerMonthCount;	// 776 = 0x308
    long long _countOfDaysSinceLastActive;	// 784 = 0x310
    unsigned long long _widgetMaxRefreshCountForKind;	// 792 = 0x318
    HMDEventCountersManager *_eventCountersManager;	// 800 = 0x320
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x00100000000a66f9
- (void).cxx_destruct;	// IMP=0x00000000000aa86d
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property unsigned long long widgetMaxRefreshCountForKind; // @synthesize widgetMaxRefreshCountForKind=_widgetMaxRefreshCountForKind;
@property long long countOfDaysSinceLastActive; // @synthesize countOfDaysSinceLastActive=_countOfDaysSinceLastActive;
@property unsigned long long activeDaysPerMonthCount; // @synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount;
@property(getter=isActiveDay) _Bool activeDay; // @synthesize activeDay=_activeDay;
@property unsigned long long bulletinNotificationsPostedCount; // @synthesize bulletinNotificationsPostedCount=_bulletinNotificationsPostedCount;
@property long long primaryResidentDurationMinutes; // @synthesize primaryResidentDurationMinutes=_primaryResidentDurationMinutes;
@property unsigned long long v2ElectionPercentageDurationCurrentDeviceIsInPrimaryMesh; // @synthesize v2ElectionPercentageDurationCurrentDeviceIsInPrimaryMesh=_v2ElectionPercentageDurationCurrentDeviceIsInPrimaryMesh;
@property unsigned long long v2ElectionCoordinationCurrentDeviceFlapCount; // @synthesize v2ElectionCoordinationCurrentDeviceFlapCount=_v2ElectionCoordinationCurrentDeviceFlapCount;
@property _Bool v2ElectionCurrentDeviceInSecondaryCoordinationMesh; // @synthesize v2ElectionCurrentDeviceInSecondaryCoordinationMesh=_v2ElectionCurrentDeviceInSecondaryCoordinationMesh;
@property unsigned long long v2ElectionPrimaryResidentChangedCount; // @synthesize v2ElectionPrimaryResidentChangedCount=_v2ElectionPrimaryResidentChangedCount;
@property unsigned long long v2ElectionPrimaryResidentElectionRunCount; // @synthesize v2ElectionPrimaryResidentElectionRunCount=_v2ElectionPrimaryResidentElectionRunCount;
@property unsigned long long v2ElectionCoordinationMeshLeaderChangedCount; // @synthesize v2ElectionCoordinationMeshLeaderChangedCount=_v2ElectionCoordinationMeshLeaderChangedCount;
@property unsigned long long v2ElectionCoordinationMeshLeaderElectedCount; // @synthesize v2ElectionCoordinationMeshLeaderElectedCount=_v2ElectionCoordinationMeshLeaderElectedCount;
@property unsigned long long v2ElectionCoordinationMeshUpdateCount; // @synthesize v2ElectionCoordinationMeshUpdateCount=_v2ElectionCoordinationMeshUpdateCount;
@property unsigned long long currentDeviceStartedLegacyElectionCount; // @synthesize currentDeviceStartedLegacyElectionCount=_currentDeviceStartedLegacyElectionCount;
@property unsigned long long ipAccessoryReachabilityChangedCount; // @synthesize ipAccessoryReachabilityChangedCount=_ipAccessoryReachabilityChangedCount;
@property unsigned long long homeHubReachabilityChangedCount; // @synthesize homeHubReachabilityChangedCount=_homeHubReachabilityChangedCount;
@property unsigned long long cameraRecordingReachabilityOfflineDuration; // @synthesize cameraRecordingReachabilityOfflineDuration=_cameraRecordingReachabilityOfflineDuration;
@property unsigned long long cameraRecordingReachabilityChangedCount; // @synthesize cameraRecordingReachabilityChangedCount=_cameraRecordingReachabilityChangedCount;
@property unsigned long long filteredXPCNotificationsCount; // @synthesize filteredXPCNotificationsCount=_filteredXPCNotificationsCount;
@property unsigned long long sentXPCNotificationsCount; // @synthesize sentXPCNotificationsCount=_sentXPCNotificationsCount;
@property unsigned long long erroredXPCRequestsCount; // @synthesize erroredXPCRequestsCount=_erroredXPCRequestsCount;
@property unsigned long long acceptedXPCRequestsCount; // @synthesize acceptedXPCRequestsCount=_acceptedXPCRequestsCount;
@property unsigned long long fetchCameraClipVideoSegmentAssetCount; // @synthesize fetchCameraClipVideoSegmentAssetCount=_fetchCameraClipVideoSegmentAssetCount;
@property unsigned long long cameraStreamStartFailureCount; // @synthesize cameraStreamStartFailureCount=_cameraStreamStartFailureCount;
@property unsigned long long cameraStreamStartSuccessCount; // @synthesize cameraStreamStartSuccessCount=_cameraStreamStartSuccessCount;
@property unsigned long long hapBTLEDiscoveriesCount; // @synthesize hapBTLEDiscoveriesCount=_hapBTLEDiscoveriesCount;
@property unsigned long long hapBTLEConnectionPerReasonsCount; // @synthesize hapBTLEConnectionPerReasonsCount=_hapBTLEConnectionPerReasonsCount;
@property unsigned long long hapBTLEConnectionsCount; // @synthesize hapBTLEConnectionsCount=_hapBTLEConnectionsCount;
@property unsigned long long hapIPReceivedHTTPEventCount; // @synthesize hapIPReceivedHTTPEventCount=_hapIPReceivedHTTPEventCount;
@property unsigned long long hapIPReceivedHTTPResponsesCount; // @synthesize hapIPReceivedHTTPResponsesCount=_hapIPReceivedHTTPResponsesCount;
@property unsigned long long hapIPSentHTTPRequestsCount; // @synthesize hapIPSentHTTPRequestsCount=_hapIPSentHTTPRequestsCount;
@property unsigned long long hapIPInvalidationCount; // @synthesize hapIPInvalidationCount=_hapIPInvalidationCount;
@property unsigned long long numTriggersFired; // @synthesize numTriggersFired=_numTriggersFired;
@property unsigned long long numShortcutsRun; // @synthesize numShortcutsRun=_numShortcutsRun;
@property unsigned long long numScenesUserRun; // @synthesize numScenesUserRun=_numScenesUserRun;
@property unsigned long long numShortcutsAdded; // @synthesize numShortcutsAdded=_numShortcutsAdded;
@property unsigned long long numTriggersAdded; // @synthesize numTriggersAdded=_numTriggersAdded;
@property unsigned long long numScenesAdded; // @synthesize numScenesAdded=_numScenesAdded;
@property unsigned long long numAccessoriesAdded; // @synthesize numAccessoriesAdded=_numAccessoriesAdded;
@property unsigned long long averageLatencyIDS; // @synthesize averageLatencyIDS=_averageLatencyIDS;
@property unsigned long long averageLatencyBT; // @synthesize averageLatencyBT=_averageLatencyBT;
@property unsigned long long averageLatencyIP; // @synthesize averageLatencyIP=_averageLatencyIP;
@property unsigned long long numReadWriteFailureIDS; // @synthesize numReadWriteFailureIDS=_numReadWriteFailureIDS;
@property unsigned long long numReadWriteSuccessIDS; // @synthesize numReadWriteSuccessIDS=_numReadWriteSuccessIDS;
@property unsigned long long numReadWriteFailureBT; // @synthesize numReadWriteFailureBT=_numReadWriteFailureBT;
@property unsigned long long numReadWriteSuccessBT; // @synthesize numReadWriteSuccessBT=_numReadWriteSuccessBT;
@property unsigned long long numReadWriteFailureIP; // @synthesize numReadWriteFailureIP=_numReadWriteFailureIP;
@property unsigned long long numReadWriteSuccessIP; // @synthesize numReadWriteSuccessIP=_numReadWriteSuccessIP;
@property unsigned long long numWriteUnknownSource; // @synthesize numWriteUnknownSource=_numWriteUnknownSource;
@property unsigned long long numReadUnknownSource; // @synthesize numReadUnknownSource=_numReadUnknownSource;
@property unsigned long long numWriteInternalRequested; // @synthesize numWriteInternalRequested=_numWriteInternalRequested;
@property unsigned long long numReadInternalRequested; // @synthesize numReadInternalRequested=_numReadInternalRequested;
@property unsigned long long numWriteThirdPartyApp; // @synthesize numWriteThirdPartyApp=_numWriteThirdPartyApp;
@property unsigned long long numReadThirdPartyApp; // @synthesize numReadThirdPartyApp=_numReadThirdPartyApp;
@property unsigned long long numWriteFirstPartyApp; // @synthesize numWriteFirstPartyApp=_numWriteFirstPartyApp;
@property unsigned long long numReadFirstPartyApp; // @synthesize numReadFirstPartyApp=_numReadFirstPartyApp;
@property unsigned long long numWriteSiri; // @synthesize numWriteSiri=_numWriteSiri;
@property unsigned long long numReadSiri; // @synthesize numReadSiri=_numReadSiri;
@property unsigned long long notifyXPCClientsHomeDataChangedCount; // @synthesize notifyXPCClientsHomeDataChangedCount=_notifyXPCClientsHomeDataChangedCount;
@property unsigned long long generationCounterIncrementCount; // @synthesize generationCounterIncrementCount=_generationCounterIncrementCount;
@property unsigned long long residentSyncHomeDataChangedNotificationCount; // @synthesize residentSyncHomeDataChangedNotificationCount=_residentSyncHomeDataChangedNotificationCount;
@property unsigned long long residentSyncFetchHomeDataRequestCount; // @synthesize residentSyncFetchHomeDataRequestCount=_residentSyncFetchHomeDataRequestCount;
@property unsigned long long coreDataCloudKitExportCount; // @synthesize coreDataCloudKitExportCount=_coreDataCloudKitExportCount;
@property unsigned long long coreDataCloudKitImportCount; // @synthesize coreDataCloudKitImportCount=_coreDataCloudKitImportCount;
@property unsigned long long workingStoreCoreDataTransactionCount; // @synthesize workingStoreCoreDataTransactionCount=_workingStoreCoreDataTransactionCount;
@property unsigned long long cloudStoreCoreDataTransactionCount; // @synthesize cloudStoreCoreDataTransactionCount=_cloudStoreCoreDataTransactionCount;
@property _Bool cloudSyncMaximumDelayReached; // @synthesize cloudSyncMaximumDelayReached=_cloudSyncMaximumDelayReached;
@property _Bool cloudSyncLastDecryptionFailed; // @synthesize cloudSyncLastDecryptionFailed=_cloudSyncLastDecryptionFailed;
@property unsigned long long cloudSyncDecryptionFailedCount; // @synthesize cloudSyncDecryptionFailedCount=_cloudSyncDecryptionFailedCount;
@property unsigned long long legacyHomeDataBytesPushed; // @synthesize legacyHomeDataBytesPushed=_legacyHomeDataBytesPushed;
@property unsigned long long legacyHomeDataBytesFetched; // @synthesize legacyHomeDataBytesFetched=_legacyHomeDataBytesFetched;
@property unsigned long long homeDataBytesPushed; // @synthesize homeDataBytesPushed=_homeDataBytesPushed;
@property unsigned long long homeDataBytesFetched; // @synthesize homeDataBytesFetched=_homeDataBytesFetched;
@property unsigned long long cloudSyncUploadErrorCount; // @synthesize cloudSyncUploadErrorCount=_cloudSyncUploadErrorCount;
@property unsigned long long cloudSyncUploadCount; // @synthesize cloudSyncUploadCount=_cloudSyncUploadCount;
@property unsigned long long cloudSyncFetchCount; // @synthesize cloudSyncFetchCount=_cloudSyncFetchCount;
@property unsigned long long legacyCloudSyncPushCount; // @synthesize legacyCloudSyncPushCount=_legacyCloudSyncPushCount;
@property unsigned long long cloudSyncPushCount; // @synthesize cloudSyncPushCount=_cloudSyncPushCount;
@property unsigned long long rxSecureMessagesCount; // @synthesize rxSecureMessagesCount=_rxSecureMessagesCount;
@property unsigned long long txSecureMessagesCount; // @synthesize txSecureMessagesCount=_txSecureMessagesCount;
@property unsigned long long rxRapportMessagesCount; // @synthesize rxRapportMessagesCount=_rxRapportMessagesCount;
@property unsigned long long txRapportMessagesCount; // @synthesize txRapportMessagesCount=_txRapportMessagesCount;
@property unsigned long long rxLoxyMessagesCount; // @synthesize rxLoxyMessagesCount=_rxLoxyMessagesCount;
@property unsigned long long txLoxyMessagesCount; // @synthesize txLoxyMessagesCount=_txLoxyMessagesCount;
@property unsigned long long rxIDSProxyMessagesCount; // @synthesize rxIDSProxyMessagesCount=_rxIDSProxyMessagesCount;
@property unsigned long long txIDSProxyMessagesCount; // @synthesize txIDSProxyMessagesCount=_txIDSProxyMessagesCount;
@property unsigned long long rxIDSMessagesCount; // @synthesize rxIDSMessagesCount=_rxIDSMessagesCount;
@property unsigned long long txIDSMessagesCount; // @synthesize txIDSMessagesCount=_txIDSMessagesCount;
@property unsigned long long remoteMessagesReceivedCount; // @synthesize remoteMessagesReceivedCount=_remoteMessagesReceivedCount;
@property unsigned long long remoteMessagesSentCount; // @synthesize remoteMessagesSentCount=_remoteMessagesSentCount;
@property unsigned long long sampledPeakProcessMemoryUsageMB; // @synthesize sampledPeakProcessMemoryUsageMB=_sampledPeakProcessMemoryUsageMB;
@property unsigned long long sampledAverageProcessMemoryUsageMB; // @synthesize sampledAverageProcessMemoryUsageMB=_sampledAverageProcessMemoryUsageMB;
@property unsigned long long processMemoryPressureStateCriticalCount; // @synthesize processMemoryPressureStateCriticalCount=_processMemoryPressureStateCriticalCount;
@property unsigned long long processMemoryPressureStateWarningCount; // @synthesize processMemoryPressureStateWarningCount=_processMemoryPressureStateWarningCount;
@property unsigned long long jetsamReasonOtherCount; // @synthesize jetsamReasonOtherCount=_jetsamReasonOtherCount;
@property unsigned long long jetsamReasonProcessLimitCount; // @synthesize jetsamReasonProcessLimitCount=_jetsamReasonProcessLimitCount;
@property unsigned long long jetsamReasonHighwaterCount; // @synthesize jetsamReasonHighwaterCount=_jetsamReasonHighwaterCount;
@property unsigned long long processCrashCount; // @synthesize processCrashCount=_processCrashCount;
@property unsigned long long processJetsamCount; // @synthesize processJetsamCount=_processJetsamCount;
@property unsigned long long processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property(copy, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

