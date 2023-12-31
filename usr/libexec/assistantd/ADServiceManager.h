//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSMutableDictionary, NSMutableSet;

@interface ADServiceManager : NSObject
{
    _Bool _bundleServicesLoaded;	// 8 = 0x8
    NSMutableDictionary *_serviceMap;	// 16 = 0x10
    NSMutableDictionary *_commandMap;	// 24 = 0x18
    NSMutableDictionary *_syncKeyMap;	// 32 = 0x20
    NSMutableSet *_pendingServiceReloadNotifications;	// 40 = 0x28
    AFInstanceContext *_instanceContext;	// 48 = 0x30
}

+ (id)_serviceBundleIDFromServiceReloadNotification:(id)arg1;	// IMP=0x00400000000b0878
+ (_Bool)isReloadServiceNotification:(id)arg1;	// IMP=0x00100000000b0859
- (void).cxx_destruct;	// IMP=0x00200000000b05db
- (void)_reloadServices:(id)arg1;	// IMP=0x00100000000b0043
- (void)reloadServicesForAllPendingServiceNotifications;	// IMP=0x00100000000aff24
- (void)reloadServiceForNotification:(id)arg1;	// IMP=0x00100000000afdbb
- (void)pendServiceReloadNotification:(id)arg1;	// IMP=0x00100000000afba6
- (void)cancelOperationsForRequest:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x00100000000afa16
- (id)controlCenterLockRestrictedCommands;	// IMP=0x00100000000af864
- (void)preheat;	// IMP=0x00100000000af852
- (void)preheatBundleServices;	// IMP=0x00100000000af6f5
- (void)preheatServicesForDomain:(id)arg1;	// IMP=0x00100000000af438
- (void)setCommandCenterClient:(id)arg1;	// IMP=0x00100000000af3c8
- (id)lockRestrictedCommands;	// IMP=0x00100000000af22a
- (id)firstUnlockRestrictedCommands;	// IMP=0x00100000000af078
- (id)allVocabSyncInfo;	// IMP=0x00100000000aefad
- (id)allSyncAnchorKeys;	// IMP=0x00100000000aef5d
- (void)reprioritizeService:(id)arg1;	// IMP=0x00100000000aef4b
- (void)removeService:(id)arg1;	// IMP=0x00100000000aef39
- (void)addServiceWithLowPrecedence:(id)arg1;	// IMP=0x00100000000aef22
- (void)addService:(id)arg1;	// IMP=0x00100000000aef0e
- (id)serviceForSyncAnchorKey:(id)arg1;	// IMP=0x00100000000aebe2
- (id)serviceForDomain:(id)arg1 command:(id)arg2;	// IMP=0x00100000000aeaaa
- (id)serviceForIdentifier:(id)arg1;	// IMP=0x00100000000aea30
- (id)servicesThatRequireBootMaintenance;	// IMP=0x00100000000ae98e
- (id)allServices;	// IMP=0x00100000000ae93e
- (id)_pendingServiceReloadNotifications;	// IMP=0x00100000000ae903
- (id)_syncKeyMap;	// IMP=0x00100000000ae8de
- (id)_commandMap;	// IMP=0x00100000000ae8b9
- (id)_serviceMap;	// IMP=0x00100000000ae894
- (void)_loadServicesIfNeeded;	// IMP=0x00100000000ae80c
- (void)_loadServiceFromBundlePath:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x00100000000ae690
- (id)_bundleServicesCache;	// IMP=0x00100000000ae662
- (id)_bundleServicesCache:(_Bool *)arg1;	// IMP=0x00100000000ae49f
- (void)_writeBundleServicesCache:(id)arg1 toPath:(id)arg2;	// IMP=0x00100000000ae2a8
- (id)_generatedBundleServicesCache;	// IMP=0x00100000000adf8e
- (id)_buildFliteredInfoDictionaryFromBundleURL:(id)arg1;	// IMP=0x00100000000adc1a
- (void)_reprioritizeService:(id)arg1;	// IMP=0x00100000000ad680
- (void)_removeService:(id)arg1;	// IMP=0x00100000000acfc8
- (void)_addService:(id)arg1 precedence:(long long)arg2;	// IMP=0x00100000000acf49
- (void)_addServiceWithRecord:(id)arg1;	// IMP=0x00100000000ac769
- (id)init;	// IMP=0x00100000000ac70f
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000000ac62c

@end

