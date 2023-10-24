//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDHome, HMDTriggerPolicy, HMDUser, HMFMessageDispatcher, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTrigger : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _active;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSString *_configuredName;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    HMDUser *_owner;	// 48 = 0x30
    HMDDevice *_owningDevice;	// 56 = 0x38
    HMDTriggerPolicy *_policy;	// 64 = 0x40
    NSMutableDictionary *_actionSetMappings;	// 72 = 0x48
    NSMutableArray *_actionSetUUIDs;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    HMFMessageDispatcher *_msgDispatcher;	// 96 = 0x60
    unsigned long long _triggerType;	// 104 = 0x68
    NSDate *_mostRecentFireDate;	// 112 = 0x70
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x001000000001cc79
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001cc71
+ (id)logCategory;	// IMP=0x001000000001cc41
- (void).cxx_destruct;	// IMP=0x000000000001b92c
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *actionSetUUIDs; // @synthesize actionSetUUIDs=_actionSetUUIDs;
@property(retain, nonatomic) NSMutableDictionary *actionSetMappings; // @synthesize actionSetMappings=_actionSetMappings;
@property(retain, nonatomic) HMDTriggerPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) HMDDevice *owningDevice; // @synthesize owningDevice=_owningDevice;
@property(retain, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_addActionSet:(id)arg1;	// IMP=0x000000000001b6f2
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x000000000001b50b
- (void)confirmResident;	// IMP=0x000000000001b44b
- (id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(_Bool)arg3;	// IMP=0x000000000001b218
- (id)emptyModelObject;	// IMP=0x000000000001b170
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x000000000001b0c8
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000001b0b4
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2;	// IMP=0x000000000001b000
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000001af3c
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000001af2a
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000001ae5d
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000001ae4b
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a8cb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a1f8
- (void)executeCompleteWithError:(id)arg1;	// IMP=0x000000000001a07d
- (_Bool)shouldEncodeLastFireDate:(id)arg1;	// IMP=0x000000000001a075
- (void)_handleTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x00000000000194f9
- (void)_fillBaseObjectChangeModel:(id)arg1;	// IMP=0x00000000000192b2
- (void)_registerForMessages;	// IMP=0x0000000000018cf1
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018c88
- (void)_executeActionSets:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001834f
- (void)_executeActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000182e2
- (void)_handleRemoveTriggerPolicyRequest:(id)arg1;	// IMP=0x000000000001801d
- (void)_handleUpdateTriggerPolicyRequest:(id)arg1;	// IMP=0x0000000000017c43
- (void)_activateTriggerRequest:(id)arg1;	// IMP=0x0000000000017abf
- (void)_handleActivateTriggerRequest:(id)arg1;	// IMP=0x0000000000017a6a
- (void)_actionSetsUpdated:(id)arg1 message:(id)arg2;	// IMP=0x0000000000016c3f
- (void)_updateActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x00000000000169b3
- (void)_handleUpdateActionSetRequest:(id)arg1;	// IMP=0x0000000000016959
- (void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x0000000000016573
- (void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x000000000001623f
- (void)_handleAddTriggerOwnedActionSetRequest:(id)arg1;	// IMP=0x0000000000015dde
- (void)_handleAddActionSetRequest:(id)arg1;	// IMP=0x0000000000015b3a
- (id)canRenameTriggerWithNewName:(id)arg1 configuredName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015461
- (void)_renameRequest:(id)arg1;	// IMP=0x0000000000014ecf
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x0000000000014e7a
- (void)_activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014c50
- (void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2;	// IMP=0x0000000000014a3b
- (void)markChangedForMessage:(id)arg1;	// IMP=0x0000000000014a27
- (_Bool)modelContainsTriggerFired:(id)arg1;	// IMP=0x000000000001497a
- (void)activateAfterResidentChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014886
- (void)handleResidentDeviceConfirmed:(id)arg1;	// IMP=0x0000000000014815
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000147bb
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014639
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x00000000000145f1
@property(readonly, nonatomic, getter=isOwnedByThisDevice) _Bool ownedByThisDevice;
- (void)invalidate;	// IMP=0x000000000001430e
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x000000000001417a
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x0000000000014010
- (_Bool)_isTriggerFiredNotificationEntitled;	// IMP=0x0000000000014008
- (void)sendTriggerFiredNotification:(id)arg1;	// IMP=0x0000000000013f2c
- (void)_recentFireDateUpdated:(id)arg1;	// IMP=0x0000000000013e10
- (void)triggerFired;	// IMP=0x0000000000013ca6
- (void)reEvaluate:(unsigned long long)arg1;	// IMP=0x0000000000013abb
- (void)fixupForReplacementAccessory:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000013ab5
- (void)handleRemovalOfCharacteristic:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000013aaf
- (void)handleRemovalOfService:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000013aa9
- (void)handleRemovalOfAccessory:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000013aa3
- (void)removeActionSet:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x0000000000013752
- (void)_forceEvaluate;	// IMP=0x000000000001365e
- (void)_checkForNoActions;	// IMP=0x000000000001364a
- (_Bool)hasNoActions;	// IMP=0x00000000000134be
- (void)setEnabled:(_Bool)arg1 message:(id)arg2;	// IMP=0x0000000000013332
- (_Bool)compatible:(id)arg1 user:(id)arg2;	// IMP=0x000000000001332a
@property(readonly, nonatomic) _Bool requiresDataVersion4;
@property(readonly, copy) NSArray *actionSets;
- (id)actionSetMapKeys;	// IMP=0x0000000000013208
- (void)removeAllActionSets;	// IMP=0x0000000000013197
- (void)removeActionSetForKey:(id)arg1;	// IMP=0x0000000000013100
- (id)actionSetForKey:(id)arg1;	// IMP=0x0000000000013052
- (void)setActionSetForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000012f98
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x00000000000127cd
- (id)attributeDescriptions;	// IMP=0x0000000000012375
- (void)dealloc;	// IMP=0x0000000000012307
- (id)logIdentifier;	// IMP=0x0000000000012201
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000011ef8
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000011d75
@property(readonly, nonatomic) NSDictionary *bulletinContext;
@property(readonly, nonatomic) NSDictionary *actionContext;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
