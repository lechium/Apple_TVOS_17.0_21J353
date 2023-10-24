//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFStagedValue, NSArray, NSNotificationCenter, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfile
{
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _manuallyDisabled;	// 20 = 0x14
    unsigned long long _notifications;	// 24 = 0x18
    long long _sessionState;	// 32 = 0x20
    NSUUID *_sessionHubIdentifier;	// 40 = 0x28
    NSString *_siriEndpointVersion;	// 48 = 0x30
    NSArray *_profileServices;	// 56 = 0x38
    HMFStagedValue *_stagedNeedsOnboarding;	// 64 = 0x40
    long long _siriEnable;	// 72 = 0x48
    long long _siriListening;	// 80 = 0x50
    long long _siriTouchToUse;	// 88 = 0x58
    long long _siriLightOnUse;	// 96 = 0x60
    NSString *_siriEngineVersion;	// 104 = 0x68
    NSString *_clientEndpointIdentifier;	// 112 = 0x70
    NSString *_clientSettingsIdentifier;	// 120 = 0x78
    NSNumber *_activeIdentifier;	// 128 = 0x80
    long long _multifunctionButton;	// 136 = 0x88
    NSArray *_assistants;	// 144 = 0x90
    NSNotificationCenter *_notificationCenter;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000738689
+ (id)logCategory;	// IMP=0x001000000073867f
+ (id)uniqueIdentifierFromAccessory:(id)arg1;	// IMP=0x0010000000738577
+ (id)namespace;	// IMP=0x0010000000738547
+ (void)initialize;	// IMP=0x0010000000738520
- (void).cxx_destruct;	// IMP=0x00000000007346e3
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSString *clientSettingsIdentifier; // @synthesize clientSettingsIdentifier=_clientSettingsIdentifier;
@property(readonly) NSString *clientEndpointIdentifier; // @synthesize clientEndpointIdentifier=_clientEndpointIdentifier;
@property(readonly) HMFStagedValue *stagedNeedsOnboarding; // @synthesize stagedNeedsOnboarding=_stagedNeedsOnboarding;
@property long long sessionState; // @synthesize sessionState=_sessionState;
@property unsigned long long notifications; // @synthesize notifications=_notifications;
- (void)_setNotifications:(_Bool)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000734201
- (void)setNotifications:(_Bool)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000073417a
@property(readonly, copy) NSArray *_allSettingsCharacteristicsToMonitor;
@property(readonly, copy) NSArray *_allEndpointCharacteristicsToMonitor;
- (void)_notificationEnable:(_Bool)arg1 forType:(unsigned long long)arg2;	// IMP=0x0000000000733cd4
- (_Bool)_notificationEnabledForType:(unsigned long long)arg1;	// IMP=0x0000000000733c6d
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000733bb5
- (void)setSoundOnUse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000733b4e
- (void)setLightOnUse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000733674
- (void)setTouchToUse:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000073319a
- (void)setListening:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000732cc0
- (void)setEnable:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007327e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000732535
- (id)attributeDescriptions;	// IMP=0x000000000073240b
@property(readonly) unsigned long long _capability;
- (void)_updateSessionState:(id)arg1 settings:(id)arg2 message:(id)arg3;	// IMP=0x0000000000731229
- (void)_notifyProfileSettingsUpdated:(id)arg1;	// IMP=0x00000000007311a7
- (void)_handleRefreshProfileState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000073009d
- (void)_handleRefreshProfileState:(id)arg1;	// IMP=0x0000000000730089
- (void)notifyClientsDidUpdateStagedNeedsOnboarding;	// IMP=0x0000000000730018
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;	// IMP=0x000000000072fe87
- (void)handleEnableNotifications:(id)arg1;	// IMP=0x000000000072fca6
- (void)handleUpdateNeedsOnboarding:(id)arg1;	// IMP=0x000000000072f995
- (void)updateNeedsOnboarding:(long long)arg1 withTimeout:(double)arg2;	// IMP=0x000000000072f967
- (void)handleDeviceCapabilitiesUpdated:(id)arg1;	// IMP=0x000000000072f8af
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x000000000072f83e
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x000000000072f786
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;	// IMP=0x000000000072f501
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x000000000072e4f5
@property(copy) NSString *siriEngineVersion; // @synthesize siriEngineVersion=_siriEngineVersion;
@property(readonly) long long siriSoundOnUse;
@property long long siriLightOnUse; // @synthesize siriLightOnUse=_siriLightOnUse;
@property long long siriTouchToUse; // @synthesize siriTouchToUse=_siriTouchToUse;
@property long long siriListening; // @synthesize siriListening=_siriListening;
@property long long siriEnable; // @synthesize siriEnable=_siriEnable;
@property long long multifunctionButton; // @synthesize multifunctionButton=_multifunctionButton;
@property _Bool manuallyDisabled; // @synthesize manuallyDisabled=_manuallyDisabled;
@property(copy) NSNumber *activeIdentifier; // @synthesize activeIdentifier=_activeIdentifier;
@property(readonly) NSNumber *needsOnboarding;
- (void)stageNeedsOnboarding:(long long)arg1 withTimeout:(double)arg2;	// IMP=0x000000000072de6a
- (void)stageNeedsOnboarding:(long long)arg1;	// IMP=0x000000000072ddb6
@property(retain) NSArray *assistants; // @synthesize assistants=_assistants;
- (void)addService:(id)arg1;	// IMP=0x000000000072d925
- (id)services;	// IMP=0x000000000072d913
@property(retain) NSArray *profileServices; // @synthesize profileServices=_profileServices;
@property(copy) NSString *siriEndpointVersion; // @synthesize siriEndpointVersion=_siriEndpointVersion;
@property(copy) NSUUID *sessionHubIdentifier; // @synthesize sessionHubIdentifier=_sessionHubIdentifier;
- (id)_siriSettingMultifunctionButtonReadRequest;	// IMP=0x000000000072d658
- (id)_siriSettingMultifunctionButtonCharacteristic;	// IMP=0x000000000072d601
- (id)_siriEndpointManuallyDisabledReadRequest;	// IMP=0x000000000072d5a1
- (id)_siriEndpointManuallyDisabledCharacteristic;	// IMP=0x000000000072d54a
- (id)_siriEndpointActiveIdentifierReadRequest;	// IMP=0x000000000072d4ea
- (id)_siriEndpointActiveIdentifierCharacteristic;	// IMP=0x000000000072d490
- (id)_siriEndpointVersionReadRequest;	// IMP=0x000000000072d430
- (id)_siriEndpointVersionCharacteristic;	// IMP=0x000000000072d3d6
- (id)_siriEndpointSessionStatusReadRequest;	// IMP=0x000000000072d376
- (id)_siriEndpointSessionStatusCharacteristic;	// IMP=0x000000000072d31f
- (id)_siriSettingSiriEngineVersionReadRequest;	// IMP=0x000000000072d2bf
- (id)_siriSettingSiriEngineVersionCharacteristic;	// IMP=0x000000000072d268
- (id)_siriSettingSiriLightOnUseReadRequest;	// IMP=0x000000000072d208
- (id)_siriSettingSiriLightOnUseCharacteristic;	// IMP=0x000000000072d1b1
- (id)_siriSettingSiriTouchReadRequest;	// IMP=0x000000000072d151
- (id)_siriSettingSiriTouchCharacteristic;	// IMP=0x000000000072d0fa
- (id)_siriSettingSiriListeningReadRequest;	// IMP=0x000000000072d09a
- (id)_siriSettingSiriListeningCharacteristic;	// IMP=0x000000000072d043
- (id)_siriSettingSiriEnableReadRequest;	// IMP=0x000000000072cfe3
- (id)_siriSettingSiriEnableCharacteristic;	// IMP=0x000000000072cf8c
- (id)_siriEndpointService;	// IMP=0x000000000072cf73
- (id)_siriService;	// IMP=0x000000000072cf5a
- (void)unregisterForNotifications;	// IMP=0x000000000072cf0e
- (void)registerForNotifications;	// IMP=0x000000000072cd22
- (void)registerForMessages;	// IMP=0x000000000072cafa
- (id)initWithSiriEndpointServices:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x000000000072c474
- (id)initWithSiriEndpointServices:(id)arg1;	// IMP=0x000000000072c3f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

