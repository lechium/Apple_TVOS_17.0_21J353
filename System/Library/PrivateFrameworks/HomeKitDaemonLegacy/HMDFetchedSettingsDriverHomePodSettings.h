//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDFetchedSettingsDriverDelegate, HMDHPSAccessorySettingService, HMDHPSSettingsObjectFactoryProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDFetchedSettingsDriverHomePodSettings : NSObject
{
    id <HMDFetchedSettingsDriverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <HMDHPSAccessorySettingService> _service;	// 24 = 0x18
    id <HMDHPSSettingsObjectFactoryProtocol> _hmdhpsObjectFactory;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000000659c9
- (void).cxx_destruct;	// IMP=0x00000000000650bb
@property(readonly) id <HMDHPSSettingsObjectFactoryProtocol> hmdhpsObjectFactory; // @synthesize hmdhpsObjectFactory=_hmdhpsObjectFactory;
@property(readonly) id <HMDHPSAccessorySettingService> service; // @synthesize service=_service;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDFetchedSettingsDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceDidInitializeForCurrentAccessory:(id)arg1;	// IMP=0x0000000000064fe7
- (void)didReconnect;	// IMP=0x0000000000064f76
- (void)didUpdateSetting:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000064e98
- (id)_languageValueList;	// IMP=0x0000000000064d87
- (void)languageValueListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064ccf
- (void)_writeSetting:(id)arg1 keyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064ad4
- (void)_processReadResults:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000064679
- (void)_readSettingsAtKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000644a6
- (id)_transformPreferredMediaUserEvent:(id)arg1;	// IMP=0x0000000000064374
- (id)_transformToImmutableSetting:(id)arg1;	// IMP=0x0000000000063cd1
- (void)updateSettingWithKeyPath:(id)arg1 primaryUserInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000063a25
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000636a4
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000633fd
- (id)_hpLanguageValueFromLanguageValue:(id)arg1;	// IMP=0x00000000000632c9
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000062f7f
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062c2b
- (void)startWithKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000062c19
- (id)initWithQueue:(id)arg1 settingsObjectFactory:(id)arg2;	// IMP=0x0000000000062b54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

