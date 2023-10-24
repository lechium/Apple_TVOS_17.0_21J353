//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessoryDiagnosticsSession, HMDAccessoryDiagnosticsSettings, HMDHAPAccessory, HMDService, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsManager : HMFObject
{
    _Bool _didShutDown;	// 8 = 0x8
    _Bool _cloudFetchInProgress;	// 9 = 0x9
    _Bool _cloudFetchCompleted;	// 10 = 0xa
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDService *_diagnosticsService;	// 40 = 0x28
    HMDAccessoryDiagnosticsSettings *_diagnosticsSettings;	// 48 = 0x30
    HMDAccessoryDiagnosticsSession *_currentDiagnosticsSession;	// 56 = 0x38
    NSString *_clientIdentifier;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000080fa92
- (void).cxx_destruct;	// IMP=0x000000000080e790
@property _Bool cloudFetchCompleted; // @synthesize cloudFetchCompleted=_cloudFetchCompleted;
@property _Bool cloudFetchInProgress; // @synthesize cloudFetchInProgress=_cloudFetchInProgress;
@property _Bool didShutDown; // @synthesize didShutDown=_didShutDown;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) HMDAccessoryDiagnosticsSession *currentDiagnosticsSession; // @synthesize currentDiagnosticsSession=_currentDiagnosticsSession;
@property(retain) HMDAccessoryDiagnosticsSettings *diagnosticsSettings; // @synthesize diagnosticsSettings=_diagnosticsSettings;
@property(readonly) HMDService *diagnosticsService; // @synthesize diagnosticsService=_diagnosticsService;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x000000000080e61b
- (void)_clearCurrentDiagnosticsSession:(id)arg1;	// IMP=0x000000000080e45d
- (void)_readDiagnosticsDataWithCloudKitMetadataRequirement:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000080e23c
- (void)_handleDiagnosticsTransferRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000080da66
- (void)_readRequiredDiagnosticCharacteristicsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000080d6c8
- (_Bool)_isRequestSupported:(id)arg1;	// IMP=0x000000000080cfe0
- (void)_notifyClientsOfDiagnosticsTransferSupportUpdated;	// IMP=0x000000000080cd8c
- (void)_updateDiagnosticSettings;	// IMP=0x000000000080c5e9
- (void)_registerForMessagesAndNotifications;	// IMP=0x000000000080c178
- (void)_shutDown;	// IMP=0x000000000080c00f
- (void)_start;	// IMP=0x000000000080be6f
- (void)_handleDiagnosticsTransferRequest:(id)arg1;	// IMP=0x000000000080ba80
- (void)handleAccessoryConfiguredNotification:(id)arg1;	// IMP=0x000000000080b9c8
- (void)handleCharacteristicValueUpdatedNotification:(id)arg1;	// IMP=0x000000000080b957
- (void)handleCharacteristicsUpdatedNotification:(id)arg1;	// IMP=0x000000000080b8e6
- (void)shutDown;	// IMP=0x000000000080b875
- (void)start;	// IMP=0x000000000080b804
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dealloc;	// IMP=0x000000000080b571
- (id)attributeDescriptions;	// IMP=0x000000000080b376
- (id)initWithAccessory:(id)arg1 service:(id)arg2 msgDispatcher:(id)arg3 workQueue:(id)arg4;	// IMP=0x000000000080b201
- (void)_invalidateCloudDiagnosticsMetadata;	// IMP=0x000000000083fbff
- (void)_callCompletionHandler:(CDUnknownBlockType)arg1 diagnostics:(id)arg2 error:(id)arg3;	// IMP=0x000000000083fafb
- (void)_fetchModelDiagnosticsMetadataForAccessory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000083f7d9
- (void)__fetchCloudDiagnosticsMetadataForAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000083f709
- (void)_fetchCloudDiagnosticsMetadata;	// IMP=0x000000000083f628
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;	// IMP=0x000000000083f593

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

