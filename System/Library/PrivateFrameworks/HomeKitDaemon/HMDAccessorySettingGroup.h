//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableSet, NSString, NSUUID;
@protocol HMDAccessorySettingGroupDataSource;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingGroup : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_settings;	// 16 = 0x10
    NSMutableSet *_groups;	// 24 = 0x18
    HMDAccessorySettingGroup *_mediaSystemSettingGroup;	// 32 = 0x20
    NSUUID *_parentIdentifier;	// 40 = 0x28
    NSString *_keyPath;	// 48 = 0x30
    id <HMDAccessorySettingGroupDataSource> _dataSource;	// 56 = 0x38
    NSUUID *_identifier;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
}

+ (id)supportedGroupsClasses;	// IMP=0x00100000009eb62a
+ (id)supportedSettingsClasses;	// IMP=0x00100000009eb5fa
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009eb5f2
+ (id)logCategory;	// IMP=0x00100000009eb5c2
- (void).cxx_destruct;	// IMP=0x00000000009eb1e9
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAccessorySettingGroupDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property __weak HMDAccessorySettingGroup *mediaSystemSettingGroup; // @synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup;
- (_Bool)compareSettingsTree:(id)arg1;	// IMP=0x00000000009ea67e
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(_Bool)arg3;	// IMP=0x00000000009e90c9
- (_Bool)dataSourceShouldEncodeSetting:(id)arg1 withCoder:(id)arg2;	// IMP=0x00000000009e8e73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009e8a9b
- (_Bool)shouldEncodeForCoder:(id)arg1;	// IMP=0x00000000009e880f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009e82ce
- (id)logIdentifier;	// IMP=0x00000000009e8214
- (void)removeGroup:(id)arg1;	// IMP=0x00000000009e8182
- (void)addGroup:(id)arg1;	// IMP=0x00000000009e80dd
- (void)_setParentGroup:(id)arg1;	// IMP=0x00000000009e7db7
- (void)_reevaluateParentGroup:(id)arg1;	// IMP=0x00000000009e7d49
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x00000000009e7b18
@property(readonly, copy) NSArray *groups;
- (void)removeSetting:(id)arg1;	// IMP=0x00000000009e7a1e
- (void)addSetting:(id)arg1;	// IMP=0x00000000009e7979
- (id)settingWithIdentifier:(id)arg1;	// IMP=0x00000000009e7748
@property(readonly, copy) NSArray *settings;
- (_Bool)isPrivateToDevice;	// IMP=0x00000000009e7646
- (id)copyReplica;	// IMP=0x00000000009e7172
- (id)copyIdentical;	// IMP=0x00000000009e6c99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009e6c87
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009e6bac
@property(readonly) unsigned long long hash;
- (id)_settingWithKeys:(id)arg1;	// IMP=0x00000000009e6911
- (id)settingWithKeyPath:(id)arg1;	// IMP=0x00000000009e6883
- (id)settingWithName:(id)arg1;	// IMP=0x00000000009e67b3
- (id)subGroupWithName:(id)arg1;	// IMP=0x00000000009e66e3
- (id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;	// IMP=0x00000000009e6534
- (id)initWithModel:(id)arg1;	// IMP=0x00000000009e6475
- (id)init;	// IMP=0x00000000009e63cd
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000087907
- (id)fullDescription;	// IMP=0x000000000008786b
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

