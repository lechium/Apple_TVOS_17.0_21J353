//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCContext, HMDHome, HMFMessageDispatcher, NSObject, NSString, NSURL, NSUUID;
@protocol HMDPersonSettingsManagerDependencyFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPersonSettingsManager : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
    HMCContext *_backingStoreContext;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    id <HMDPersonSettingsManagerDependencyFactory> _dependencyFactory;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000068d3cb
+ (id)_allowedClassesForMigrationSettings;	// IMP=0x001000000068d300
- (void).cxx_destruct;	// IMP=0x000000000068ca6a
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) id <HMDPersonSettingsManagerDependencyFactory> dependencyFactory; // @synthesize dependencyFactory=_dependencyFactory;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMCContext *backingStoreContext; // @synthesize backingStoreContext=_backingStoreContext;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x000000000068c993
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)_setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;	// IMP=0x000000000068c6d3
- (void)_registerForMessages;	// IMP=0x000000000068c524
- (void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)arg1;	// IMP=0x000000000068c1e6
- (void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)arg1;	// IMP=0x000000000068be45
- (void)_maybeMigrateSettings;	// IMP=0x000000000068b87b
- (void)_removeMigrationSettingsFileFromDisk;	// IMP=0x000000000068b704
- (void)_setClassificationNotificationsEnabled:(_Bool)arg1 personUUID:(id)arg2 settings:(id)arg3;	// IMP=0x000000000068b4c1
- (id)_localPersonClassificationSettings;	// IMP=0x000000000068b2e7
@property(readonly) NSURL *personSettingsManagerMigrationFileURL;
- (void)remove;	// IMP=0x000000000068b0df
- (_Bool)areClassificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x000000000068aef8
- (void)configure;	// IMP=0x000000000068ade1
- (id)initWithHome:(id)arg1 backingStoreContext:(id)arg2 dependencyFactory:(id)arg3 workQueue:(id)arg4;	// IMP=0x000000000068ac36
- (id)initWithHome:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000068ab6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

