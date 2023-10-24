//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class ACAccountStore, HMDAccount, HMDAppleAccountContext, HMDAppleAccountSettings, HMDBackingStore, HMDCloudCache, HMDDevice, HMDIDSActivityMonitorBroadcaster, HMDWatchManager, HMFExponentialBackoffTimer, HMFTimer, NSData, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDACAccountStore, HMDAPSConnection, HMDIDSService, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDAppleAccountManager : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDBackingStore *_backingStore;	// 24 = 0x18
    id <HMDACAccountStore> _accountStore;	// 32 = 0x20
    NSObject<OS_os_log> *_logger;	// 40 = 0x28
    _Bool _loggedIn;	// 48 = 0x30
    _Bool _monitoring;	// 49 = 0x31
    _Bool _rapportIdentitiesChangedNotificationTokenValid;	// 50 = 0x32
    int _rapportIdentitiesChangedNotificationToken;	// 52 = 0x34
    HMDAccount *_account;	// 56 = 0x38
    HMDAppleAccountContext *_accountContext;	// 64 = 0x40
    id <HMDAPSConnection> _pushConnection;	// 72 = 0x48
    NSNotificationCenter *_notificationCenter;	// 80 = 0x50
    HMFExponentialBackoffTimer *_accountChangeBackoffTimer;	// 88 = 0x58
    HMFTimer *_devicesChangeBackoffTimer;	// 96 = 0x60
    NSData *_pendingPushToken;	// 104 = 0x68
    HMDWatchManager *_watchManager;	// 112 = 0x70
    id <HMDIDSService> _service;	// 120 = 0x78
    HMDIDSActivityMonitorBroadcaster *_activityBroadcaster;	// 128 = 0x80
    HMDCloudCache *_cloudCache;	// 136 = 0x88
}

+ (id)logCategory;	// IMP=0x00100000006e6af2
+ (id)sharedManager;	// IMP=0x00100000006e6a8f
- (void).cxx_destruct;	// IMP=0x00000000006df236
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(readonly, nonatomic) HMDIDSActivityMonitorBroadcaster *activityBroadcaster; // @synthesize activityBroadcaster=_activityBroadcaster;
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
@property(retain, nonatomic) HMDWatchManager *watchManager; // @synthesize watchManager=_watchManager;
@property(retain, nonatomic) NSData *pendingPushToken; // @synthesize pendingPushToken=_pendingPushToken;
@property(nonatomic, getter=isRapportIdentitiesChangedNotificationTokenValid) _Bool rapportIdentitiesChangedNotificationTokenValid; // @synthesize rapportIdentitiesChangedNotificationTokenValid=_rapportIdentitiesChangedNotificationTokenValid;
@property(nonatomic) int rapportIdentitiesChangedNotificationToken; // @synthesize rapportIdentitiesChangedNotificationToken=_rapportIdentitiesChangedNotificationToken;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // @synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer;
@property(readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // @synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <HMDAPSConnection> pushConnection; // @synthesize pushConnection=_pushConnection;
@property(readonly, getter=isLoggedInToPrimaryAccount) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000000006def92
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00000000006deca2
- (void)account:(id)arg1 aliasesChanged:(id)arg2;	// IMP=0x00000000006deb77
- (void)account:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x00000000006de9ca
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006de8f1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_updatePushToken:(id)arg1;	// IMP=0x00000000006de84d
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000000006de699
@property(readonly, nonatomic) HMDAppleAccountSettings *settings;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;	// IMP=0x00000000006de1cd
- (void)processAccountModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000006ddd24
- (_Bool)isModelCurrentAccount:(id)arg1;	// IMP=0x00000000006ddbed
- (id)primaryHandleForAccount:(id)arg1;	// IMP=0x00000000006ddad2
- (_Bool)isDeviceLocallyPairedWatch:(id)arg1;	// IMP=0x00000000006dd9f3
- (_Bool)isCurrentDeviceDataOwnerForDevice:(id)arg1;	// IMP=0x00000000006dd996
- (_Bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;	// IMP=0x00000000006dd661
- (_Bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;	// IMP=0x00000000006dcdf4
- (_Bool)shouldSyncDevice:(id)arg1;	// IMP=0x00000000006dcd65
- (_Bool)shouldSyncAccount:(id)arg1;	// IMP=0x00000000006dccf3
- (_Bool)shouldCacheAccount:(id)arg1;	// IMP=0x00000000006dcc95
@property(readonly) HMDDevice *device;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;	// IMP=0x00000000006dca84
- (void)__deviceAddedToCurrentAccount:(id)arg1;	// IMP=0x00000000006dc9f0
- (void)updateSenderCorrelationIdentifier:(id)arg1;	// IMP=0x00000000006dc6e9
- (void)__updateMergeIDOnAccount;	// IMP=0x00000000006dc24e
@property(retain) HMDAccount *account; // @synthesize account=_account;
@property(readonly) HMDAppleAccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void)__handleMigrationUpdated:(id)arg1;	// IMP=0x00000000006dc161
- (void)__handleUpdatedName:(id)arg1;	// IMP=0x00000000006dc053
- (void)__handleRemovedAccount:(id)arg1;	// IMP=0x00000000006dbac8
- (void)__handleModifiedAccount:(id)arg1;	// IMP=0x00000000006db7ba
- (void)__localDataReset:(id)arg1;	// IMP=0x00000000006db768
- (void)stop;	// IMP=0x00000000006db716
- (void)start;	// IMP=0x00000000006db6a4
@property(readonly) HMDBackingStore *backingStore;
- (void)configureWithBackingStore:(id)arg1;	// IMP=0x00000000006db5ad
@property(readonly) ACAccountStore *accountStore;
- (void)_deregisterForRapportNotifications;	// IMP=0x00000000006db507
- (void)_registerForRapportNotifications;	// IMP=0x00000000006db329
- (id)initWithIDSService:(id)arg1 activityBroadcaster:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000006daf30
- (id)initWithIDSService:(id)arg1 activityBroadcaster:(id)arg2;	// IMP=0x00000000006dae20
- (id)init;	// IMP=0x00000000006dad78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
