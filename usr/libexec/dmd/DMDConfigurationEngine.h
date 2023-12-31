//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperation, CATOperationQueue, DMDActivationPredicateObserverManager, DMDConfigurationDatabase, DMDEngineDatabaseInitializationOperation, DMDEventSubscriptionManager, DMDPolicyPersistence, NSError, NSMutableDictionary, NSString;
@protocol DMDConfigurationEngineDelegate, DMDDeviceStateProvider, DMDTaskOperationProvider;

@interface DMDConfigurationEngine : NSObject
{
    DMDPolicyPersistence *_policyPersistence;	// 8 = 0x8
    id <DMDConfigurationEngineDelegate> _delegate;	// 16 = 0x10
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 24 = 0x18
    NSObject<DMDTaskOperationProvider> *_taskOperationProvider;	// 32 = 0x20
    DMDActivationPredicateObserverManager *_activationPredicateObserverManager;	// 40 = 0x28
    DMDConfigurationDatabase *_database;	// 48 = 0x30
    CATOperationQueue *_queue;	// 56 = 0x38
    NSError *_initializationError;	// 64 = 0x40
    DMDEngineDatabaseInitializationOperation *_databaseInitializationOperation;	// 72 = 0x48
    CATOperation *_initializationOperation;	// 80 = 0x50
    NSMutableDictionary *_organizationControllerByIdentifier;	// 88 = 0x58
    DMDEventSubscriptionManager *_eventSubscriptionManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000319a0
@property(retain, nonatomic) DMDEventSubscriptionManager *eventSubscriptionManager; // @synthesize eventSubscriptionManager=_eventSubscriptionManager;
@property(retain, nonatomic) NSMutableDictionary *organizationControllerByIdentifier; // @synthesize organizationControllerByIdentifier=_organizationControllerByIdentifier;
@property(retain, nonatomic) CATOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
@property(retain, nonatomic) DMDEngineDatabaseInitializationOperation *databaseInitializationOperation; // @synthesize databaseInitializationOperation=_databaseInitializationOperation;
@property(retain) NSError *initializationError; // @synthesize initializationError=_initializationError;
@property(retain, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) DMDConfigurationDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) DMDActivationPredicateObserverManager *activationPredicateObserverManager; // @synthesize activationPredicateObserverManager=_activationPredicateObserverManager;
@property(retain, nonatomic) NSObject<DMDTaskOperationProvider> *taskOperationProvider; // @synthesize taskOperationProvider=_taskOperationProvider;
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
@property(nonatomic) __weak id <DMDConfigurationEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DMDPolicyPersistence *policyPersistence; // @synthesize policyPersistence=_policyPersistence;
- (void)delegateWillSuspend;	// IMP=0x0010000000031803
- (void)delegateDidResume;	// IMP=0x00100000000317a6
- (void)registerConfigurationSourceOperation:(id)arg1 didUpdateRegistrationForConfigurationSource:(id)arg2;	// IMP=0x0010000000031258
- (id)engineProcessingOperation:(id)arg1 assetResolverForOrganizationWithIdentifier:(id)arg2;	// IMP=0x0010000000031183
- (id)engineProcessingOperation:(id)arg1 enqueuedOperationsForOrganizationWithIdentifier:(id)arg2;	// IMP=0x0010000000031133
- (void)configurationSourceController:(id)arg1 fetchEventsWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030838
- (void)configurationSourceController:(id)arg1 fetchStatusUpdatesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f5a1
- (void)activationPredicateObserverManager:(id)arg1 didObserveChangeForPredicateWithIdentifier:(id)arg2;	// IMP=0x001000000002f55d
- (void)_cleanupOrphanedPolicies;	// IMP=0x001000000002eb34
- (void)updateEventSubscriptions;	// IMP=0x001000000002e8b7
- (void)updateOrganizationControllers;	// IMP=0x001000000002e2bc
- (void)_updateOrganizationControllers;	// IMP=0x001000000002e29e
- (void)enqueueOperations:(id)arg1;	// IMP=0x001000000002e034
- (void)enqueueOperation:(id)arg1;	// IMP=0x001000000002de8a
- (void)enqueueDeclarationProcessingOperationIfNeeded;	// IMP=0x001000000002d8b1
- (void)declarationModificationOperationDidFinish:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d830
- (void)enqueueDatabaseModificationOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d7a8
- (void)databaseInitializationOperationDidFinish;	// IMP=0x001000000002d52c
- (void)initializationOperationDidFinish:(id)arg1;	// IMP=0x001000000002d4b9
- (void)sendEvents:(id)arg1 organizationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cc21
- (void)handleRemoveSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c7da
- (void)handleInstallSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c2be
- (void)handleUpdateCommandsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c1a9
- (void)refreshStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bf8f
- (void)processStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002bdbf
- (void)processDeclarationsForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b728
- (void)handleFetchDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b563
- (void)handleUpdateDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b3a1
- (void)handleSetDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b1df
- (void)handleConfigurationSourceRegistrationRequest:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b084
- (void)handleFetchStreamEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ab60
- (void)handleFetchConfigurationOrganizationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a7e1
- (void)handleDeactivateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a67f
- (void)handleCreateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a4c1
- (void)suspend;	// IMP=0x001000000002a2c3
- (void)resume;	// IMP=0x001000000002a0b2
@property(readonly, copy) NSString *description;
- (id)initWithDatabase:(id)arg1 policyPersistence:(id)arg2 activationManager:(id)arg3;	// IMP=0x00100000000297d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

