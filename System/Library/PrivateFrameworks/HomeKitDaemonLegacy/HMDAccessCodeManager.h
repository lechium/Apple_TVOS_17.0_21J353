//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessCodeDataManager, HMDAccessoryAccessCodeReaderWriter, NSHashTable, NSObject, NSString, NSUUID;
@protocol HMDAccessCodeManagerContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessCodeManager : HMFObject
{
    _Bool _homeAppForegrounded;	// 8 = 0x8
    HMDAccessCodeDataManager *_dataManager;	// 16 = 0x10
    id <HMDAccessCodeManagerContext> _context;	// 24 = 0x18
    Class _utilities;	// 32 = 0x20
    HMDAccessoryAccessCodeReaderWriter *_accessoryReaderWriter;	// 40 = 0x28
    NSHashTable *_subscribedClientConnections;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000004f731
- (void).cxx_destruct;	// IMP=0x000000000004a58c
@property(readonly) NSHashTable *subscribedClientConnections; // @synthesize subscribedClientConnections=_subscribedClientConnections;
@property(getter=isHomeAppForegrounded) _Bool homeAppForegrounded; // @synthesize homeAppForegrounded=_homeAppForegrounded;
@property(readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter; // @synthesize accessoryReaderWriter=_accessoryReaderWriter;
@property(readonly) Class utilities; // @synthesize utilities=_utilities;
@property(readonly) id <HMDAccessCodeManagerContext> context; // @synthesize context=_context;
@property(readonly) HMDAccessCodeDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000004a3e2
- (void)accessCodeDataManager:(id)arg1 didRemoveAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000004a2b0
- (void)accessCodeDataManager:(id)arg1 didUpdateAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000004a17e
- (void)accessCodeDataManager:(id)arg1 didAddAccessoryAccessCodes:(id)arg2;	// IMP=0x000000000004a04c
- (void)accessCodeDataManager:(id)arg1 didRemoveHomeAccessCodes:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x0000000000049f52
- (void)accessCodeDataManager:(id)arg1 didUpdateHomeAccessCodes:(id)arg2 changedByUserUUID:(id)arg3;	// IMP=0x0000000000049e58
- (void)accessCodeDataManager:(id)arg1 didAddHomeAccessCodes:(id)arg2 addedByUserUUID:(id)arg3;	// IMP=0x0000000000049d5e
- (id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000049bf7
- (id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)arg1;	// IMP=0x0000000000049a9f
- (void)_updateAccessoryAccessCodeCache;	// IMP=0x000000000004990c
- (id)_accessCodeForUserWithUUID:(id)arg1 inHome:(id)arg2;	// IMP=0x000000000004977b
- (void)_generateNewAccessCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000495d6
- (id)_addNewAccessCode:(id)arg1 forUserWithUUID:(id)arg2 toAccessoriesWithUUIDs:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x00000000000493dd
- (id)_updateAccessCode:(id)arg1 toNewValue:(id)arg2 onAccessoriesWithFetchResponses:(id)arg3 withRetries:(_Bool)arg4;	// IMP=0x000000000004925a
- (id)_resetAccessCodesForHomeAccessCode:(id)arg1;	// IMP=0x00000000000490c7
- (id)_createNewAccessCodeForUserWithUUID:(id)arg1;	// IMP=0x0000000000048f37
- (void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000048af9
- (void)_generateNewUserAccessCodeForMessage:(id)arg1;	// IMP=0x0000000000048711
- (void)_resetAccessoryAccessCodesForMessage:(id)arg1;	// IMP=0x000000000004845b
- (id)_removeAccessCode:(id)arg1 forUserBeingRemoved:(id)arg2;	// IMP=0x000000000004827c
- (id)_removeAccessCode:(id)arg1 forUser:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x00000000000480ab
- (id)_removeAccessCode:(id)arg1 forUserWithUUID:(id)arg2 removedByUserUUID:(id)arg3;	// IMP=0x0000000000047db8
- (void)_setAccessCodeForUserForMessage:(id)arg1;	// IMP=0x00000000000474e8
- (id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)arg1 forUserUUID:(id)arg2;	// IMP=0x000000000004731f
- (void)_removeSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000046e91
- (id)_updateModificationRequestsWithUserOrGuestNames:(id)arg1;	// IMP=0x0000000000046e30
- (void)_submitAccessCodeModificationRequestsForMessage:(id)arg1;	// IMP=0x0000000000046791
- (void)_fetchAccessCodeConstraintsForMessage:(id)arg1;	// IMP=0x0000000000046392
- (void)_fetchAccessCodesForMessage:(id)arg1;	// IMP=0x0000000000045f93
- (_Bool)_redispatchToResidentIfNeccesaryForMessage:(id)arg1 withNewResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045bd7
- (void)_updateCacheWithModificationRespponses:(id)arg1;	// IMP=0x0000000000045a34
- (_Bool)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)arg1 home:(id)arg2;	// IMP=0x0000000000045934
- (void)handleHomeDidDisableCharacteristicNotification:(id)arg1;	// IMP=0x0000000000045899
- (void)handleHomeDidEnableCharacteristicNotification:(id)arg1;	// IMP=0x00000000000457fe
- (void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg1;	// IMP=0x0000000000045589
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x00000000000454b7
- (void)handleUserAccessCodeDidChangeMessage:(id)arg1;	// IMP=0x00000000000452f1
- (void)handleConfirmDataHasSyncedToResidentMessage:(id)arg1;	// IMP=0x0000000000044fa8
- (void)handleGenerateNewUserAccessCodeMessage:(id)arg1;	// IMP=0x0000000000044db9
- (void)handleResetAccessoryAccessCodesMessage:(id)arg1;	// IMP=0x0000000000044bb9
- (void)handleFetchCachedAccessCodesMessage:(id)arg1;	// IMP=0x00000000000448d0
- (void)handleFetchHomeAccessCodesMessage:(id)arg1;	// IMP=0x000000000004464f
- (void)handleFetchAccessCodeConstraintsMessage:(id)arg1;	// IMP=0x00000000000441ec
- (void)handleFetchAccessCodesMessage:(id)arg1;	// IMP=0x0000000000043d89
- (void)handleRemoveHomeAccessCodeMessage:(id)arg1;	// IMP=0x0000000000043a59
- (void)handleSetUserInformationMessage:(id)arg1;	// IMP=0x0000000000043663
- (void)handleRemoveSimpleLabelAccessCodeMessage:(id)arg1;	// IMP=0x0000000000043463
- (void)handleSetAccessCodeForUserMessage:(id)arg1;	// IMP=0x0000000000043263
- (void)handleSubmitAccessCodeModificationRequestsMessage:(id)arg1;	// IMP=0x0000000000043063
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x0000000000042cf1
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x000000000004297f
- (void)fetchAccessCodeForIdentifier:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042607
- (void)unconfigure;	// IMP=0x00000000000424ee
- (void)configureWithMessageDispatcher:(id)arg1;	// IMP=0x00000000000418d3
- (id)initWithContext:(id)arg1 utilities:(Class)arg2 accessoryReaderWriter:(id)arg3 dataManager:(id)arg4;	// IMP=0x00000000000417c2
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000041707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

