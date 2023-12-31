//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol HMDLegacyAccessorySettingsAdaptorDelegate, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMESubscriptionProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLegacyAccessorySettingsAdaptor : NSObject
{
    id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    NSUUID *_accessoryUUID;	// 32 = 0x20
    id <HMESubscriptionProviding> _subscriptionProvider;	// 40 = 0x28
    id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> _currentAccessorySettingsController;	// 48 = 0x30
}

+ (id)parsedLanguageListSetting:(id)arg1 topic:(id)arg2;	// IMP=0x00100000005ea3c5
+ (id)parsedLanguageSetting:(id)arg1 topic:(id)arg2;	// IMP=0x00100000005ea0ca
+ (id)parsedIntegerSettingEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00100000005e9e2c
+ (id)parsedBoolSettingEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00100000005e9af1
+ (id)logCategory;	// IMP=0x00100000005e9ac1
- (void).cxx_destruct;	// IMP=0x00000000005e911b
@property(readonly, nonatomic) __weak id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> currentAccessorySettingsController; // @synthesize currentAccessorySettingsController=_currentAccessorySettingsController;
@property(readonly, nonatomic) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate; // @synthesize delegate;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000005e8ca0
- (id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)arg1;	// IMP=0x00000000005e8a68
- (id)_settingValueForKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000005e825f
- (id)languageValueList;	// IMP=0x00000000005e8252
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005e7f4d
- (void)startup;	// IMP=0x00000000005e7be1
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 settingsController:(id)arg4 subscriptionProvider:(id)arg5;	// IMP=0x00000000005e7adf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

