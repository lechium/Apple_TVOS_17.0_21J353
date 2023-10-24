//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSelectedConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDCharacteristic, HMDHAPAccessory, HMDService, NSArray, NSDictionary, NSMutableArray, NSNotificationCenter, NSObject, NSString;
@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSettingsControl : HMFObject
{
    _Bool _canUseCachedCharacteristicValues;	// 8 = 0x8
    id <HMDCameraRecordingSettingsControlDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDService *_recordingService;	// 32 = 0x20
    HMDHAPAccessory *_accessory;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    NSString *_clientIdentifier;	// 56 = 0x38
    NSMutableArray *_pendingConfigureCompletionHandlers;	// 64 = 0x40
    HMDCameraRecordingGeneralConfiguration *_supportedRecordingConfiguration;	// 72 = 0x48
    HMDCameraRecordingSupportedVideoConfiguration *_supportedVideoConfiguration;	// 80 = 0x50
    HMDCameraRecordingSupportedAudioConfiguration *_supportedAudioConfiguration;	// 88 = 0x58
    HMDCameraRecordingSelectedConfiguration *_currentSelectedConfiguration;	// 96 = 0x60
    NSDictionary *_recordingConfigurationOverrides;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00100000008dae05
+ (id)audioCodecForCodecConfiguration:(id)arg1;	// IMP=0x00100000008dad66
+ (id)audioBitRateForCodecConfiguration:(id)arg1;	// IMP=0x00100000008dabe4
+ (_Bool)isSupportedAudioCodec:(id)arg1;	// IMP=0x00100000008dabc7
+ (id)videoCodecForCodecConfiguration:(id)arg1;	// IMP=0x00100000008dab2c
+ (id)h264ProfileForCodecConfiguration:(id)arg1;	// IMP=0x00100000008da9a5
+ (_Bool)isSupportedH264Profile:(id)arg1;	// IMP=0x00100000008da988
+ (_Bool)isSupportedVideoCodec:(id)arg1;	// IMP=0x00100000008da96c
+ (id)audioConfigurationsByPreferenceOrder;	// IMP=0x00100000008da909
- (void).cxx_destruct;	// IMP=0x00000000008d9249
@property(retain) NSDictionary *recordingConfigurationOverrides; // @synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides;
@property(retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration; // @synthesize currentSelectedConfiguration=_currentSelectedConfiguration;
@property(retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration; // @synthesize supportedAudioConfiguration=_supportedAudioConfiguration;
@property(retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration; // @synthesize supportedVideoConfiguration=_supportedVideoConfiguration;
@property(retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration; // @synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration;
@property _Bool canUseCachedCharacteristicValues; // @synthesize canUseCachedCharacteristicValues=_canUseCachedCharacteristicValues;
@property(readonly) NSMutableArray *pendingConfigureCompletionHandlers; // @synthesize pendingConfigureCompletionHandlers=_pendingConfigureCompletionHandlers;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMDService *recordingService; // @synthesize recordingService=_recordingService;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraRecordingSettingsControlDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000008d8fda
@property(readonly, getter=isCameraConfiguredForRecording) _Bool cameraConfiguredForRecording;
- (void)_setSelectedRecordingConfiguration:(id)arg1;	// IMP=0x00000000008d8d65
- (void)_invokePendingConfigureCompletionHandlersWithSelectedConfiguration:(id)arg1 error:(id)arg2;	// IMP=0x00000000008d8b56
- (void)_invokePendingConfigureCompletionHandlersWithError:(id)arg1;	// IMP=0x00000000008d8ad8
- (void)_invokePendingConfigureCompletionHandlersWithSelectedConfiguration:(id)arg1;	// IMP=0x00000000008d8a5a
- (id)_numberValueForCharacteristicOfType:(id)arg1 inResponses:(id)arg2;	// IMP=0x00000000008d8792
- (id)_dataValueForCharacteristicOfType:(id)arg1 inResponses:(id)arg2;	// IMP=0x00000000008d84ca
- (id)_supportedVideoConfigurationInResponses:(id)arg1;	// IMP=0x00000000008d82e4
- (id)_supportedAudioConfigurationInResponses:(id)arg1;	// IMP=0x00000000008d80fe
- (id)_generalRecordingConfigurationInResponses:(id)arg1;	// IMP=0x00000000008d7f18
- (id)_selectedRecordingConfigurationInResponses:(id)arg1;	// IMP=0x00000000008d7d32
- (id)_isRecordingActiveValueInResponses:(id)arg1;	// IMP=0x00000000008d7bd3
- (void)_handleSupportedConfigurationCharacteristicsReadResponses:(id)arg1;	// IMP=0x00000000008d7431
- (void)_readSupportedCameraRecordingConfiguration;	// IMP=0x00000000008d714a
- (void)_handleCurrentIsRecordingActive:(id)arg1 selectedConfiguration:(id)arg2;	// IMP=0x00000000008d69ce
- (void)_readCameraRecordingSettings;	// IMP=0x00000000008d6483
- (void)_updateSelectedRecordingConfiguration:(id)arg1;	// IMP=0x00000000008d631d
- (void)_writeCameraRecordingSettings;	// IMP=0x00000000008d6199
- (void)handleAccessoryIsNotConfiguredError;	// IMP=0x00000000008d613f
- (void)reconfigureCameraRecordingSettingsWithReason:(id)arg1;	// IMP=0x00000000008d6001
- (void)configureCameraRecordingSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000008d5dd1
- (void)configureCameraRecordingSettings;	// IMP=0x00000000008d5d77
- (void)dealloc;	// IMP=0x00000000008d5c09
- (void)enableCharacteristicNotifications;	// IMP=0x00000000008d5a4e
- (id)_recordingAudioConfiguration;	// IMP=0x00000000008d4fe5
@property(readonly) HMDCharacteristic *recordingSelectedConfigurationCharacteristic;
@property(readonly) HMDCharacteristic *recordingActiveCharacteristic;
- (id)characteristicsToMonitor;	// IMP=0x00000000008d4e71
- (id)_recordingVideoConfiguration;	// IMP=0x00000000008d44be
- (id)_preferredAudioConfigurationOverride;	// IMP=0x00000000008d41a4
- (id)_preferredVideoConfigurationOverride;	// IMP=0x00000000008d39b1
- (id)_recordingGeneralConfiguration;	// IMP=0x00000000008d3083
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000008d2fcb
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000008d2f13
- (void)handleCharacteristicsUpdatedNotification:(id)arg1;	// IMP=0x00000000008d2e5b
- (void)handleAccessoryConnectedNotification:(id)arg1;	// IMP=0x00000000008d2da3
- (void)handleAccessoryDisconnectedNotification:(id)arg1;	// IMP=0x00000000008d2ceb
- (void)start;	// IMP=0x00000000008d27ed
@property(readonly, copy) NSArray *videoConfigurationsByPreferenceOrder;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3 notificationCenter:(id)arg4;	// IMP=0x00000000008d1df6
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3;	// IMP=0x00000000008d1d46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

