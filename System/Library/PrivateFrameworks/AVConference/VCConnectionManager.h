//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSMutableArray, NSMutableDictionary, NSString, VCConnectionHealthMonitor, VCConnectionSelector, VCCoreMotionManager, VCDuplicationHandler, VCLinkProbingHandler, VCStatsRecorder, VCWRMHandler, VCWifiAssistManager;
@protocol OS_dispatch_queue, VCConnectionManagerDelegate, VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManager : NSObject
{
    struct tagVCConnectionManagerRealtimeInstanceVTable _vTable;	// 8 = 0x8
    _Bool _isStarted;	// 72 = 0x48
    unsigned int _callID;	// 76 = 0x4c
    int _connectionSelectionVersion;	// 80 = 0x50
    int _relayServerProvider;	// 84 = 0x54
    struct _opaque_pthread_rwlock_t _stateRWlock;	// 88 = 0x58
    id <VCConnectionProtocol> _primaryConnection;	// 288 = 0x120
    id <VCConnectionProtocol> _secondaryConnection;	// 296 = 0x128
    id <VCConnectionProtocol> _connectionForDuplication;	// 304 = 0x130
    id <VCConnectionProtocol> _lastPrimaryConnectionInUse;	// 312 = 0x138
    NSMutableArray *_connectionArray;	// 320 = 0x140
    struct opaqueRTCReporting *_reportingAgent;	// 328 = 0x148
    _Bool _isInitialConnectionEstablished;	// 336 = 0x150
    unsigned long long _mediaExcessiveCellularTxBytes;	// 344 = 0x158
    unsigned long long _mediaExcessiveCellularRxBytes;	// 352 = 0x160
    unsigned long long _signalingExcessiveCellularTxBytes;	// 360 = 0x168
    unsigned long long _signalingExcessiveCellularRxBytes;	// 368 = 0x170
    unsigned long long _budgetConsumingCellularTxBytes;	// 376 = 0x178
    unsigned long long _budgetConsumingCellularRxBytes;	// 384 = 0x180
    unsigned long long _mediaCellularTxBytes;	// 392 = 0x188
    unsigned long long _mediaCellularRxBytes;	// 400 = 0x190
    unsigned long long _mediaWifiTxBytes;	// 408 = 0x198
    unsigned long long _mediaWifiRxBytes;	// 416 = 0x1a0
    id _delegate;	// 424 = 0x1a8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 432 = 0x1b0
    CDUnknownFunctionPointerType _duplicationCallback;	// 440 = 0x1b8
    _Bool _enableDuplication;	// 448 = 0x1c0
    double _lastConnectionUnstableTime;	// 456 = 0x1c8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 464 = 0x1d0
    void *_duplicationContext;	// 472 = 0x1d8
    _Bool _duplicationPending;	// 480 = 0x1e0
    _Bool _supportDuplication;	// 481 = 0x1e1
    unsigned char _preferredLocalInterfaceForDuplication;	// 482 = 0x1e2
    unsigned char _preferredRemoteInterfaceForDuplication;	// 483 = 0x1e3
    _Bool _isPrimaryLocalUsingCell;	// 484 = 0x1e4
    _Bool _isPreWarmStateEnabled;	// 485 = 0x1e5
    _Bool _remotePreWarmStateEnabled;	// 486 = 0x1e6
    VCWifiAssistManager *_vcWifiAssist;	// 488 = 0x1e8
    _Bool _hasAssertedCell;	// 496 = 0x1f0
    VCConnectionHealthMonitor *_connectionHealthMonitor;	// 504 = 0x1f8
    CDStruct_50492349 _localConnectionStats;	// 512 = 0x200
    CDStruct_50492349 _remoteConnectionStats;	// 560 = 0x230
    VCWRMHandler *_wrmHandler;	// 608 = 0x260
    VCDuplicationHandler *_duplicationHandler;	// 616 = 0x268
    VCConnectionSelector *_connectionSelector;	// 624 = 0x270
    double _noRemotePacketInterval;	// 632 = 0x278
    double _remoteNoRemotePacketInterval;	// 640 = 0x280
    double _lastDefaultCheckTime;	// 648 = 0x288
    double _lastTransitionToFECTime;	// 656 = 0x290
    _Bool _isAudioOnly;	// 664 = 0x298
    double _lastiRATCheckTime;	// 672 = 0x2a0
    double _iRATNotificationRequestTime;	// 680 = 0x2a8
    int _localWRMLinkTypeFromDefaults;	// 688 = 0x2b0
    _Bool _allowRequestForWRMNotification;	// 692 = 0x2b4
    _Bool _forceHandoverToCell;	// 693 = 0x2b5
    _Bool _disableRemoteInterfaceInference;	// 694 = 0x2b6
    CDUnknownFunctionPointerType _wrmStatusUpdateCallback;	// 696 = 0x2b8
    CDUnknownFunctionPointerType _wrmRequestNotificationCallback;	// 704 = 0x2c0
    void *_wrmCallbacksContext;	// 712 = 0x2c8
    VCStatsRecorder *_statsRecorder;	// 720 = 0x2d0
    _Bool _preferRelayOverP2PEnabled;	// 728 = 0x2d8
    _Bool _fastMediaDuplicationEnabled;	// 729 = 0x2d9
    _Bool _cellPrimaryInterfaceChangeEnabled;	// 730 = 0x2da
    _Bool _duplicateImportantPktsEnabled;	// 731 = 0x2db
    _Bool _lowNetworkModeEnabled;	// 732 = 0x2dc
    _Bool _duplicationEnhancementEnabled;	// 733 = 0x2dd
    CDStruct_155bd25f _connectionSelectionPolicy;	// 734 = 0x2de
    int _localRATTypeOverride;	// 740 = 0x2e4
    int _localWRMAlertFromDefaults;	// 744 = 0x2e8
    unsigned int _realRATType;	// 748 = 0x2ec
    unsigned char _linkProbingCapabilityVersion;	// 752 = 0x2f0
    unsigned char _remoteLinkProbingCapabilityVersion;	// 753 = 0x2f1
    VCLinkProbingHandler *_linkProbingHandler;	// 760 = 0x2f8
    struct tagVCNWConnectionMonitor *_nwMonitor;	// 768 = 0x300
    int _mediaHealthStatisticsHandlerIndex;	// 776 = 0x308
    NSObject<OS_dispatch_queue> *_nwConnectionMonitorQueue;	// 784 = 0x310
    unsigned char _preferRelayOverP2PReason;	// 792 = 0x318
    struct tagVCNetworkConditionMonitor *_networkConditionMonitor;	// 800 = 0x320
    _Bool _enableNetworkConditionMonitoring;	// 808 = 0x328
    _Bool _isRTXSupported;	// 809 = 0x329
    VCCoreMotionManager *_coreMotionManager;	// 816 = 0x330
    _Bool _enableMotionBasedDuplication;	// 824 = 0x338
    AVCStatisticsCollector *_statisticsCollector;	// 832 = 0x340
    _Bool _isNWConnectionMonitorEnabled;	// 840 = 0x348
    _Bool _ignoreNWConnectionMonitorNotification;	// 841 = 0x349
    NSString *_nwMonitorInterfaceName;	// 848 = 0x350
    CDStruct_c648a973 _lastNWStatistics;	// 856 = 0x358
    id <VCConnectionProtocol> _lastActivePrimaryConnection;	// 968 = 0x3c8
    NSMutableDictionary *_mediaDegradedHistories;	// 976 = 0x3d0
    NSMutableDictionary *_mediaDegradedHistoryIndices;	// 984 = 0x3d8
    NSMutableDictionary *_aggregateStallTimeDuration;	// 992 = 0x3e0
    _Bool _isDuplicationAllowed;	// 1000 = 0x3e8
    _Bool _isDuplicationAllowedForMediaDegraded;	// 1001 = 0x3e9
    int _endToEndConnectionStatisticsHandlerIndex;	// 1004 = 0x3ec
    int _serverBasedConnectionStatisticsHandlerIndex;	// 1008 = 0x3f0
    _Bool _isVideoExpected;	// 1012 = 0x3f4
    _Bool _isOneToOneModeEnabled;	// 1013 = 0x3f5
    _Bool _isPrimaryLinkUsable;	// 1014 = 0x3f6
    _Bool _useMediaDrivenDuplication;	// 1015 = 0x3f7
    _Bool _resetMediaHealthStats;	// 1016 = 0x3f8
    int _wrmPendingBitrateCapDelta;	// 1020 = 0x3fc
    _Bool _isWRMNotificationPending;	// 1024 = 0x400
    CDStruct_cd8cfafa _savedWRMNotification;	// 1032 = 0x408
    unsigned int _downlinkTargetBitrate;	// 1192 = 0x4a8
    unsigned int _downlinkTargetCellBitrateCap;	// 1196 = 0x4ac
    _Bool _useMediaDrivenDuplicationFeatureFlag;	// 1200 = 0x4b0
    double _mediaDegradedThreshold;	// 1208 = 0x4b8
    _Bool _previousNoRemoteInProgress;	// 1216 = 0x4c0
    long long _initialSentBytes;	// 1224 = 0x4c8
    long long _initialReceivedBytes;	// 1232 = 0x4d0
    _Bool _startConnectionHealthMonitoring;	// 1240 = 0x4d8
    _Bool _isRemoteMediaQualityDegraded;	// 1241 = 0x4d9
    _Bool _dropLinkRecommendation;	// 1242 = 0x4da
    unsigned char _linkPreferSuggestion;	// 1243 = 0x4db
    unsigned char _linkConfidenceScore;	// 1244 = 0x4dc
    unsigned char _linkPreferDecision;	// 1245 = 0x4dd
    _Bool _reportLinkPreferSuggestion;	// 1246 = 0x4de
    unsigned char _linkIPPreference;	// 1247 = 0x4df
    _Bool _useIDSLinkSuggestionFeatureFlag;	// 1248 = 0x4e0
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 1256 = 0x4e8
    _Atomic unsigned int _sendSuccessCountSinceLastCheck;	// 1264 = 0x4f0
    _Atomic unsigned int _sendFailureCountSinceLastCheck;	// 1268 = 0x4f4
    _Atomic unsigned long long _onTheWireTotalBytesSentSinceLastCheck;	// 1272 = 0x4f8
    _Atomic unsigned long long _onTheWireTotalBytesReceivedSinceLastCheck;	// 1280 = 0x500
    _Bool _isOneToOneScreenEnabled;	// 1288 = 0x508
    int _shouldForceRelayLinksWhenScreenEnabled;	// 1292 = 0x50c
    _Bool _canUseP2PLinks;	// 1296 = 0x510
    _Bool _isRemoteNetworkQualityDegraded;	// 1297 = 0x511
    double _brokenBackhaulDetectionTriggerThreshold;	// 1304 = 0x518
    double _lastReceivedFeedbackTime;	// 1312 = 0x520
    _Bool _brokenBackhaulDetectionStarted;	// 1320 = 0x528
    _Bool _isUserMoving;	// 1321 = 0x529
    _Bool _isUplinkRetransmissionSupported;	// 1322 = 0x52a
    struct tagVCOverlaySource *_overlaySource;	// 1328 = 0x530
    _Bool _iRATDuplicationEnabled;	// 1336 = 0x538
    _Bool _optIntoExistingSubscribedStreams;	// 1337 = 0x539
    double _noRemoteDuplicationThresholdFast;	// 1344 = 0x540
    long long _overlayToken;	// 1352 = 0x548
}

@property(nonatomic) _Bool isOneToOneScreenEnabled; // @synthesize isOneToOneScreenEnabled=_isOneToOneScreenEnabled;
@property _Bool optIntoExistingSubscribedStreams; // @synthesize optIntoExistingSubscribedStreams=_optIntoExistingSubscribedStreams;
@property(readonly) unsigned long long budgetConsumingCellularRxBytes; // @synthesize budgetConsumingCellularRxBytes=_budgetConsumingCellularRxBytes;
@property(readonly) unsigned long long budgetConsumingCellularTxBytes; // @synthesize budgetConsumingCellularTxBytes=_budgetConsumingCellularTxBytes;
@property long long overlayToken; // @synthesize overlayToken=_overlayToken;
@property(nonatomic) _Bool isUplinkRetransmissionSupported; // @synthesize isUplinkRetransmissionSupported=_isUplinkRetransmissionSupported;
@property(readonly) _Bool enableMotionBasedDuplication; // @synthesize enableMotionBasedDuplication=_enableMotionBasedDuplication;
@property(readonly) _Bool enableNetworkConditionMonitoring; // @synthesize enableNetworkConditionMonitoring=_enableNetworkConditionMonitoring;
@property(nonatomic) _Bool isRemoteNetworkQualityDegraded; // @synthesize isRemoteNetworkQualityDegraded=_isRemoteNetworkQualityDegraded;
@property(nonatomic) _Bool isRemoteMediaQualityDegraded; // @synthesize isRemoteMediaQualityDegraded=_isRemoteMediaQualityDegraded;
@property(nonatomic) _Bool startConnectionHealthMonitoring; // @synthesize startConnectionHealthMonitoring=_startConnectionHealthMonitoring;
@property(nonatomic) _Bool isOneToOneModeEnabled; // @synthesize isOneToOneModeEnabled=_isOneToOneModeEnabled;
@property(readonly, nonatomic) VCConnectionHealthMonitor *connectionHealthMonitor; // @synthesize connectionHealthMonitor=_connectionHealthMonitor;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned char remoteLinkProbingCapabilityVersion; // @synthesize remoteLinkProbingCapabilityVersion=_remoteLinkProbingCapabilityVersion;
@property(readonly) unsigned char linkProbingCapabilityVersion; // @synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion;
@property unsigned int realRATType; // @synthesize realRATType=_realRATType;
@property(nonatomic, setter=setiRATDuplicationEnabled:) _Bool iRATDuplicationEnabled; // @synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled;
@property _Bool duplicationEnhancementEnabled; // @synthesize duplicationEnhancementEnabled=_duplicationEnhancementEnabled;
@property _Bool lowNetworkModeEnabled; // @synthesize lowNetworkModeEnabled=_lowNetworkModeEnabled;
@property double noRemoteDuplicationThresholdFast; // @synthesize noRemoteDuplicationThresholdFast=_noRemoteDuplicationThresholdFast;
@property _Bool duplicateImportantPktsEnabled; // @synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled;
@property _Bool cellPrimaryInterfaceChangeEnabled; // @synthesize cellPrimaryInterfaceChangeEnabled=_cellPrimaryInterfaceChangeEnabled;
@property _Bool fastMediaDuplicationEnabled; // @synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled;
@property(nonatomic, setter=setPreferRelayOverP2PEnabled:) _Bool preferRelayOverP2PEnabled; // @synthesize preferRelayOverP2PEnabled=_preferRelayOverP2PEnabled;
@property(nonatomic) _Bool remotePreWarmStateEnabled; // @synthesize remotePreWarmStateEnabled=_remotePreWarmStateEnabled;
@property(readonly) _Bool isPreWarmStateEnabled; // @synthesize isPreWarmStateEnabled=_isPreWarmStateEnabled;
@property(readonly, nonatomic) VCStatsRecorder *statsRecorder; // @synthesize statsRecorder=_statsRecorder;
@property(readonly) double remoteNoRemotePacketInterval; // @synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval;
@property(readonly) double noRemotePacketInterval; // @synthesize noRemotePacketInterval=_noRemotePacketInterval;
@property _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(readonly) unsigned long long mediaWifiRxBytes; // @synthesize mediaWifiRxBytes=_mediaWifiRxBytes;
@property(readonly) unsigned long long mediaWifiTxBytes; // @synthesize mediaWifiTxBytes=_mediaWifiTxBytes;
@property(readonly) unsigned long long mediaCellularRxBytes; // @synthesize mediaCellularRxBytes=_mediaCellularRxBytes;
@property(readonly) unsigned long long mediaCellularTxBytes; // @synthesize mediaCellularTxBytes=_mediaCellularTxBytes;
@property(readonly) unsigned long long signalingExcessiveCellularRxBytes; // @synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes;
@property(readonly) unsigned long long signalingExcessiveCellularTxBytes; // @synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes;
@property(readonly) unsigned long long mediaExcessiveCellularRxBytes; // @synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes;
@property(readonly) unsigned long long mediaExcessiveCellularTxBytes; // @synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes;
@property(nonatomic) _Bool isDuplicationAllowed; // @synthesize isDuplicationAllowed=_isDuplicationAllowed;
@property _Bool supportDuplication; // @synthesize supportDuplication=_supportDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property(retain, nonatomic) id <VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
@property unsigned char preferredRemoteInterfaceForDuplication; // @synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication;
@property unsigned char preferredLocalInterfaceForDuplication; // @synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication;
@property int relayServerProvider; // @synthesize relayServerProvider=_relayServerProvider;
@property unsigned int callID; // @synthesize callID=_callID;
- (void)didChangeWifiAssistAvailable:(_Bool)arg1 reason:(unsigned char)arg2;	// IMP=0x00000000001af791
- (void)updateConnectionSelectionPolicyWithPreferE2E:(_Bool)arg1;	// IMP=0x00000000001af62d
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;	// IMP=0x00000000001af620
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000001af5bf
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000001af55e
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001af4fd
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000001af49c
- (void)reselectPrimaryConnection;	// IMP=0x00000000001af496
- (void)applyRemoteLinkFlags:(unsigned short)arg1 isCellular:(_Bool)arg2;	// IMP=0x00000000001af226
- (void)applyLinkFlags:(unsigned short)arg1 isCellular:(_Bool)arg2;	// IMP=0x00000000001aefcd
- (void)reportLinkSuggestion;	// IMP=0x00000000001aede3
- (void)applyLinkRecommendation;	// IMP=0x00000000001aec46
- (void)updateLinkPreferSuggestion:(id)arg1;	// IMP=0x00000000001ae99b
- (void)updateProbingResults:(id)arg1;	// IMP=0x00000000001ae982
- (_Bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(CDStruct_50492349 *)arg1;	// IMP=0x00000000001ae6e5
- (void)updateConnectionHealthWithVCStatisticsMessage:(struct tagVCStatisticsMessage)arg1;	// IMP=0x00000000001ae4eb
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(CDStruct_50492349 *)arg1;	// IMP=0x00000000001ae352
- (void)updateConnectionStatsWithIndicatorNone:(CDStruct_50492349 *)arg1;	// IMP=0x00000000001ae312
- (void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:(CDStruct_50492349 *)arg1;	// IMP=0x00000000001adf51
- (void)updateConnectionStatsWithIndicatorNoPacket:(CDStruct_50492349 *)arg1;	// IMP=0x00000000001ad9c6
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(_Bool)arg2;	// IMP=0x00000000001ad98c
- (void)reportNoPacketUpdateUsingCurrentTime:(double)arg1 lastReceivedPacketTime:(double)arg2;	// IMP=0x00000000001ad921
- (void)updateDuplicationStateWithEventType:(unsigned char)arg1;	// IMP=0x00000000001ad8dc
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x00000000001ad87b
- (void)reportLinkProbingStatsWithDuplicationJustStarted:(_Bool)arg1;	// IMP=0x00000000001ad81a
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000001ad7b9
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001ad623
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000001ad5c2
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x00000000001ad561
- (void)updateCellularMTU:(int)arg1;	// IMP=0x00000000001ad500
- (int)removeConnection:(id)arg1;	// IMP=0x00000000001ad49f
- (int)addConnection:(id)arg1;	// IMP=0x00000000001ad43e
- (void)useConnectionAsPrimary:(id)arg1;	// IMP=0x00000000001ad412
- (int)processConnectionHealthFromControlInfo:(void *)arg1;	// IMP=0x00000000001ad36e
- (int)setConnectionHealthOnControlInfo:(void *)arg1;	// IMP=0x00000000001ad2f3
@property(readonly) double primaryConnHealthAllowedDelay;
- (void)setDefaultLinkProbingCapabilityVersionForDeviceRole:(int)arg1;	// IMP=0x00000000001ace79
- (void)reportConnectionUpdateWithResponseCode:(unsigned short)arg1 delay:(double)arg2;	// IMP=0x00000000001acda7
- (void)reportConnectionUpdateWithRespCode:(unsigned short)arg1;	// IMP=0x00000000001acd0d
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x00000000001accc2
@property(readonly) _Bool isLocalCellularInterfaceUsed;
- (void)updateWRMDuplicationForHandover;	// IMP=0x00000000001ab884
- (_Bool)isOptimalConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3;	// IMP=0x00000000001ab624
- (_Bool)isBetterConnection:(id)arg1 asPrimary:(_Bool)arg2;	// IMP=0x00000000001ab598
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;	// IMP=0x00000000001ab549
- (int)getConnectionSelectionVersionFromFrameworkVersion:(id)arg1;	// IMP=0x00000000001ab4d0
- (void)disableRemotePreferredInterfaceInference:(_Bool)arg1;	// IMP=0x00000000001ab3ec
- (void)destroyNWMonitorInternal;	// IMP=0x00000000001ab3b4
- (void)destroyNWMonitor;	// IMP=0x00000000001ab323
- (void)setVCNWConnectionMonitorStatisticsHandler;	// IMP=0x00000000001ab2eb
- (void)renewNWMonitor;	// IMP=0x00000000001ab15b
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;	// IMP=0x00000000001aab15
- (void)checkpointPrimaryConnection:(id)arg1;	// IMP=0x00000000001aa7f0
- (void)stopBrokenNetworkDetection;	// IMP=0x00000000001aa6a9
- (void)startBrokenNetworkDetection;	// IMP=0x00000000001aa5b6
- (void)setupNetworkConditionMonitor;	// IMP=0x00000000001aa0ad
- (void)configureNWConnectionMonitor:(id)arg1;	// IMP=0x00000000001a9fe4
- (id)activeConnectionRegistry;	// IMP=0x00000000001a9959
- (void)resetMediaHealthStats;	// IMP=0x00000000001a974e
- (void)updateWithRemoteMediaHealthDuplication:(_Bool)arg1;	// IMP=0x00000000001a9728
- (void)updateMediaDegradedHistoryWithCurrentAudioErasure:(double)arg1 idsParticipantID:(id)arg2;	// IMP=0x00000000001a9466
- (void)updateMediaDegradedHistoryWithCurrentVideoStallDuration:(double)arg1 idsParticipantID:(id)arg2;	// IMP=0x00000000001a91d0
- (_Bool)isDuplicationAllowedForParticipantID:(id)arg1 bucketsToSum:(int)arg2 threshold:(double)arg3;	// IMP=0x00000000001a8fd7
- (void)updateMediaDegradedHistoryWithValue:(double)arg1 idsParticipantID:(id)arg2;	// IMP=0x00000000001a8eed
- (void)updateMediaHealthStats:(CDStruct_6724876c *)arg1 idsParticipantID:(id)arg2;	// IMP=0x00000000001a8bd7
- (void)checkMediaQualityDegradedForParticipantID:(id)arg1;	// IMP=0x00000000001a8970
- (void)aggregateStallTimeDuration:(CDStruct_6724876c *)arg1 idsParticipantID:(id)arg2;	// IMP=0x00000000001a88ee
- (void)duplicationStateUpdateWithEvent:(CDStruct_9629e118)arg1;	// IMP=0x00000000001a8773
- (void)removeMediaHealthStatsHistoryEntryForParticipantID:(id)arg1;	// IMP=0x00000000001a85ed
- (void)addMediaHealthStatsHistoryEntryForParticipantID:(id)arg1;	// IMP=0x00000000001a84fd
- (void)updateStatResponseResult:(id)arg1;	// IMP=0x00000000001a84f7
- (void)reportCurrentPrimaryConnection;	// IMP=0x00000000001a84f1
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(_Bool)arg3 isAudioOnly:(_Bool)arg4;	// IMP=0x00000000001a84eb
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(_Bool)arg2;	// IMP=0x00000000001a84e5
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x00000000001a8484
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000001a8423
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000001a83c2
- (_Bool)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;	// IMP=0x00000000001a7bfc
- (_Bool)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;	// IMP=0x00000000001a7bcb
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;	// IMP=0x00000000001a7b92
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x00000000001a7b4d
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x00000000001a7a6c
- (void)getSentBytes:(long long *)arg1 receivedBytes:(long long *)arg2;	// IMP=0x00000000001a79cf
@property(readonly) int connectionCount;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(_Bool)arg2;	// IMP=0x00000000001a7839
- (void)processWRMCoexMetrics:(id)arg1;	// IMP=0x00000000001a781e
- (void)checkForCachedWRMNotification;	// IMP=0x00000000001a70fc
- (void)setDuplicationDownlinkCellBitrateCap:(unsigned int)arg1 currentBitrate:(unsigned int)arg2;	// IMP=0x00000000001a70de
- (int)setWRMUpdateCallback:(CDUnknownFunctionPointerType)arg1 requestNotificationCallback:(CDUnknownFunctionPointerType)arg2 withContext:(void *)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a6748
- (_Bool)isDuplicationEnabled;	// IMP=0x00000000001a608d
- (void)setConnectionPause:(_Bool)arg1 isLocalConnection:(_Bool)arg2;	// IMP=0x00000000001a5ef1
- (void)setDuplicationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x00000000001a5e53
- (_Bool)isBetterPrimaryConnectionAvailable;	// IMP=0x00000000001a5d3f
- (void)checkAndUpdatePrimaryConnection;	// IMP=0x00000000001a5cdb
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;	// IMP=0x00000000001a5b84
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x00000000001a5ae6
- (void)periodicTask:(void *)arg1;	// IMP=0x00000000001a578f
- (void)updateOverlaySource:(_Bool)arg1 isRemoteOnCellular:(_Bool)arg2 isRelay:(_Bool)arg3;	// IMP=0x00000000001a572b
- (void)createOverlaySource;	// IMP=0x00000000001a56f4
- (void)deregisterPeriodicTask;	// IMP=0x00000000001a56de
- (void)registerPeriodicTask;	// IMP=0x00000000001a56a1
@property id <VCConnectionManagerDelegate> delegate;
- (void)stop;	// IMP=0x00000000001a560d
- (void)start;	// IMP=0x00000000001a557e
@property(nonatomic) _Bool useMediaDrivenDuplication; // @synthesize useMediaDrivenDuplication=_useMediaDrivenDuplication;
- (void)resetConnectionStatTimers;	// IMP=0x00000000001a53b4
@property(readonly) _Atomic unsigned long long onTheWireTotalBytesSentSinceLastCheck; // @synthesize onTheWireTotalBytesSentSinceLastCheck=_onTheWireTotalBytesSentSinceLastCheck;
@property(readonly) _Atomic unsigned long long onTheWireTotalBytesReceivedSinceLastCheck; // @synthesize onTheWireTotalBytesReceivedSinceLastCheck=_onTheWireTotalBytesReceivedSinceLastCheck;
@property(readonly) unsigned int sendFailureCountSinceLastCheck;
@property(readonly) unsigned int sendSuccessCountSinceLastCheck;
- (void)setPreferRelayOverP2P:(_Bool)arg1 reason:(unsigned char)arg2;	// IMP=0x00000000001a4dbe
- (void)setupConnectionHealthMonitor;	// IMP=0x00000000001a4b8e
- (void)setupConnectionHealthMonitorMultiway;	// IMP=0x00000000001a493d
- (void)unregisterStatisticsHandlers;	// IMP=0x00000000001a48ce
- (void)registerStatisticsHandlers;	// IMP=0x00000000001a4456
- (void)invalidateNetworkConditionMonitor;	// IMP=0x00000000001a4369
- (void)dealloc;	// IMP=0x00000000001a3f4b
- (id)init;	// IMP=0x00000000001a3941
- (void)setUpVTable;	// IMP=0x00000000001a38e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

