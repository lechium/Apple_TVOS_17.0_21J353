//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDActivationPredicateObserverManager, NSObject;
@protocol DMDDeviceStateProvider, DMDEngineDatabaseProcessingOperationDelegate, DMDTaskOperationProvider;

@interface DMDEngineDatabaseProcessingOperation
{
    id <DMDEngineDatabaseProcessingOperationDelegate> _delegate;	// 8 = 0x8
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 16 = 0x10
    id <DMDTaskOperationProvider> _taskOperationProvider;	// 24 = 0x18
    DMDActivationPredicateObserverManager *_activationPredicateObserverManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000455b8
@property(retain, nonatomic) DMDActivationPredicateObserverManager *activationPredicateObserverManager; // @synthesize activationPredicateObserverManager=_activationPredicateObserverManager;
@property(retain, nonatomic) id <DMDTaskOperationProvider> taskOperationProvider; // @synthesize taskOperationProvider=_taskOperationProvider;
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
@property(nonatomic) __weak id <DMDEngineDatabaseProcessingOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)processDeclarationPayloadsInContext:(id)arg1 forOrganization:(id)arg2 enqueuedOperations:(id)arg3 assetResolver:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000041fff
- (id)processCommandPayloadsInContext:(id)arg1 forOrganization:(id)arg2 enqueuedOperations:(id)arg3 assetResolver:(id)arg4 error:(id *)arg5;	// IMP=0x001000000004090b
- (_Bool)updateActiveRestrictionsInContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004007d
- (_Bool)preprocessDatabaseInContext:(id)arg1 forOrganization:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003f79b
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x001000000003eec5

@end

