//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCompositeSettingsZoneManager, NSArray, NSDictionary, NSString, NSUUID;
@protocol HMDCompositeSettingsControllerDelegate, HMDCompositeSettingsDatabaseAdapter, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingsController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _configured;	// 12 = 0xc
    id <HMDCompositeSettingsControllerDelegate> _delegate;	// 16 = 0x10
    NSDictionary *_settings;	// 24 = 0x18
    NSDictionary *_settingMetadata;	// 32 = 0x20
    Class _modelClass;	// 40 = 0x28
    id <HMMLogEventSubmitting> _logEventDispatcher;	// 48 = 0x30
    NSArray *_settingKeyPathBlockList;	// 56 = 0x38
    id <HMDCompositeSettingsDatabaseAdapter> _databaseAdapter;	// 64 = 0x40
    HMDCompositeSettingsZoneManager *_zoneManager;	// 72 = 0x48
    NSUUID *_uuid;	// 80 = 0x50
    NSUUID *_homeUUID;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x001000000058530e
- (void).cxx_destruct;	// IMP=0x00000000005817fb
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak HMDCompositeSettingsZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property __weak id <HMDCompositeSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)database:(id)arg1 didConfigureWithError:(id)arg2;	// IMP=0x00000000005813ee
- (void)database:(id)arg1 didProcessDeletionForModel:(id)arg2;	// IMP=0x00000000005811d0
- (void)database:(id)arg1 didProcessUpdateForModel:(id)arg2;	// IMP=0x00000000005811c3
- (void)database:(id)arg1 didProcessCreationForModel:(id)arg2;	// IMP=0x00000000005811b6
- (id)_settingFromSetting:(id)arg1 value:(id)arg2 error:(id *)arg3;	// IMP=0x000000000057fe34
- (void)updateSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000057fa87
- (void)updateSettingForKeyPath:(id)arg1 value:(id)arg2 callerVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000057f79f
- (id)fetchSynchronousSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3;	// IMP=0x000000000057f465
- (void)fetchSettingsForKeyPaths:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000057efc8
- (void)fetchSettingForKeyPath:(id)arg1 callerVersion:(id)arg2 callerPrivilege:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000057ecf6
- (id)logIdentifier;	// IMP=0x000000000057ec63
- (void)_createSettingsFromModel:(id)arg1;	// IMP=0x000000000057e3d0
@property _Bool configured; // @synthesize configured=_configured;
- (void)start;	// IMP=0x000000000057e336
- (id)initWithDatabaseAdapter:(id)arg1 model:(Class)arg2 homeUUID:(id)arg3 ownerUUID:(id)arg4 logEventDispatcher:(id)arg5 settingKeyPathBlockList:(id)arg6;	// IMP=0x000000000057e219
- (id)initWithDatabaseAdapter:(id)arg1 model:(Class)arg2 homeUUID:(id)arg3 ownerUUID:(id)arg4 settingKeyPathBlockList:(id)arg5;	// IMP=0x000000000057e136

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
