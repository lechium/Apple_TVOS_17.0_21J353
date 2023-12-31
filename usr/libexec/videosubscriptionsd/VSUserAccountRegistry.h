//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSManagedObjectContext, NSOperationQueue, NSString, VSPreferences, VSPrivacyFacade, VSRemoteNotifier, VSUserAccountPersistentContainer, VSUserAccountUpdateManager, WLKChannelUtilities, WLKSettingsStore;
@protocol OS_dispatch_source, VSUserAccountRegistryDelegate;

@interface VSUserAccountRegistry : NSObject
{
    _Bool _currentUpdateSessionIsForced;	// 8 = 0x8
    _Bool _storesLoaded;	// 9 = 0x9
    struct os_unfair_lock_s _loadingStoresLock;	// 12 = 0xc
    id <VSUserAccountRegistryDelegate> _delegate;	// 16 = 0x10
    VSPreferences *_preferences;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
    VSRemoteNotifier *_remoteNotifier;	// 40 = 0x28
    VSUserAccountPersistentContainer *_container;	// 48 = 0x30
    NSManagedObjectContext *_viewContext;	// 56 = 0x38
    WLKSettingsStore *_sharedSettingsStore;	// 64 = 0x40
    WLKChannelUtilities *_sharedChannelUtilities;	// 72 = 0x48
    NSArray *_allChannelDetails;	// 80 = 0x50
    VSUserAccountUpdateManager *_updateManager;	// 88 = 0x58
    VSPrivacyFacade *_privacyFacade;	// 96 = 0x60
    NSDate *_lastUpdateTime;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_timer;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000000c3a9
@property(nonatomic) struct os_unfair_lock_s loadingStoresLock; // @synthesize loadingStoresLock=_loadingStoresLock;
@property(nonatomic) _Bool storesLoaded; // @synthesize storesLoaded=_storesLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) VSPrivacyFacade *privacyFacade; // @synthesize privacyFacade=_privacyFacade;
@property(retain, nonatomic) VSUserAccountUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) _Bool currentUpdateSessionIsForced; // @synthesize currentUpdateSessionIsForced=_currentUpdateSessionIsForced;
@property(retain, nonatomic) NSArray *allChannelDetails; // @synthesize allChannelDetails=_allChannelDetails;
@property(retain, nonatomic) WLKChannelUtilities *sharedChannelUtilities; // @synthesize sharedChannelUtilities=_sharedChannelUtilities;
@property(retain, nonatomic) WLKSettingsStore *sharedSettingsStore; // @synthesize sharedSettingsStore=_sharedSettingsStore;
@property(retain, nonatomic) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) VSUserAccountPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) __weak id <VSUserAccountRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateManagerDidFinish:(id)arg1;	// IMP=0x001000000000c1c9
- (void)updateManager:(id)arg1 updateRequestDidFinish:(id)arg2;	// IMP=0x001000000000be47
- (id)prepareUserAccountsToVend:(id)arg1 withSecurityTask:(id)arg2;	// IMP=0x001000000000bc1b
- (id)_predicateForQueryRequestWithOptions:(long long)arg1;	// IMP=0x001000000000b35d
- (_Bool)_isValidForUpdateQueryForCurrentTask:(id)arg1;	// IMP=0x001000000000afe6
- (_Bool)_isValidForDeleteQueryForCurrentTask;	// IMP=0x001000000000af98
- (id)_securityTaskForCurrentConnection;	// IMP=0x001000000000af24
- (id)_userAccountForPersistentUserAccount:(id)arg1 context:(id)arg2;	// IMP=0x001000000000a1f9
- (void)_populatePersistentUserAccount:(id)arg1 withUserAccount:(id)arg2 context:(id)arg3;	// IMP=0x0010000000009d63
- (void)_queryPersistentUserAccountsWithPredicate:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000978c
- (void)_queryUserAccountsWithPredicate:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000094cd
- (void)_deletePersistentUserAccount:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009201
- (void)_deleteUserAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008e09
- (void)_insertUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000788e
- (void)_removeNonConnectedSignedOutUserAccounts;	// IMP=0x0010000000006fef
- (void)resetTimer;	// IMP=0x001000000000650c
- (void)_update;	// IMP=0x0010000000006119
- (void)_forceRefreshAccount:(id)arg1;	// IMP=0x0010000000005e16
- (void)_setUpdateRequestManagerWithRequests:(id)arg1;	// IMP=0x0010000000005d80
- (id)_updateRequestForAccount:(id)arg1;	// IMP=0x0010000000005c79
- (id)createSaveContext;	// IMP=0x0010000000005bff
- (_Bool)saveContext:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000005ae7
- (void)removeSubscriptions:(id)arg1;	// IMP=0x001000000000573b
- (void)registerSubscription:(id)arg1;	// IMP=0x001000000000564a
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004a95
- (void)insertUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000048bf
- (void)queryUserAccountsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004741
- (void)forceRefreshUserAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000043e9
- (void)forceUpdateUserAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000040b4
- (void)deleteUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003e0a
- (void)updateUserAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000033c5
- (void)queryUserAccountsWithOptions:(long long)arg1 sourceIdentifier:(id)arg2 sourceType:(id)arg3 deviceIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000003033
- (void)queryUserAccountsWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002dd0
- (void)_subscriptionsForMigrationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002976
- (void)_loadStoresAndMigrateIfRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001b82
- (void)_setupObservers;	// IMP=0x00100000000019af
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000015cb
- (id)init;	// IMP=0x00100000000015b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

