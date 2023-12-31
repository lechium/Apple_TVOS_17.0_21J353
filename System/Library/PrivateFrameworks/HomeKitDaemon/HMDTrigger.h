//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMDTriggerPolicy, HMDUser, HMFMessageDispatcher, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
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
    HMDTriggerPolicy *_policy;	// 56 = 0x38
    NSMutableDictionary *_actionSetMappings;	// 64 = 0x40
    NSMutableArray *_actionSetUUIDs;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    HMFMessageDispatcher *_msgDispatcher;	// 88 = 0x58
    unsigned long long _triggerType;	// 96 = 0x60
    NSDate *_mostRecentFireDate;	// 104 = 0x68
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000022507
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000224ff
+ (id)logCategory;	// IMP=0x00100000000224cf
- (void).cxx_destruct;	// IMP=0x0000000000021306
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @synthesize mostRecentFireDate=_mostRecentFireDate;
@property(nonatomic) unsigned long long triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *actionSetUUIDs; // @synthesize actionSetUUIDs=_actionSetUUIDs;
@property(retain, nonatomic) NSMutableDictionary *actionSetMappings; // @synthesize actionSetMappings=_actionSetMappings;
@property(retain, nonatomic) HMDTriggerPolicy *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_addActionSet:(id)arg1;	// IMP=0x00000000000210f1
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000020f0a
- (void)confirmResident;	// IMP=0x0000000000020e4a
- (id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(_Bool)arg3;	// IMP=0x0000000000020cbd
- (id)emptyModelObject;	// IMP=0x0000000000020c15
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000020b6d
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000020b59
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2;	// IMP=0x0000000000020aa5
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000209e1
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000209cf
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000020902
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000208f0
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000204a2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001fdff
- (void)executeCompleteWithError:(id)arg1;	// IMP=0x000000000001fc84
- (_Bool)shouldEncodeLastFireDate:(id)arg1;	// IMP=0x000000000001fc7c
- (void)_handleTriggerUpdate:(id)arg1 message:(id)arg2;	// IMP=0x000000000001f286
- (void)_fillBaseObjectChangeModel:(id)arg1;	// IMP=0x000000000001f070
- (void)_registerForMessages;	// IMP=0x000000000001eaaf
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ea46
- (void)_executeActionSets:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e10d
- (void)_executeActionSetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e0a0
- (void)_handleRemoveTriggerPolicyRequest:(id)arg1;	// IMP=0x000000000001dddb
- (void)_handleUpdateTriggerPolicyRequest:(id)arg1;	// IMP=0x000000000001da01
- (void)_activateTriggerRequest:(id)arg1;	// IMP=0x000000000001d87d
- (void)_handleActivateTriggerRequest:(id)arg1;	// IMP=0x000000000001d828
- (void)_actionSetsUpdated:(id)arg1 message:(id)arg2;	// IMP=0x000000000001c9fd
- (void)_updateActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x000000000001c771
- (void)_handleUpdateActionSetRequest:(id)arg1;	// IMP=0x000000000001c717
- (void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x000000000001c331
- (void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x000000000001bffd
- (void)_handleAddTriggerOwnedActionSetRequest:(id)arg1;	// IMP=0x000000000001bb9c
- (void)_handleAddActionSetRequest:(id)arg1;	// IMP=0x000000000001b8f8
- (id)canRenameTriggerWithNewName:(id)arg1 configuredName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b21f
- (void)_renameRequest:(id)arg1;	// IMP=0x000000000001ac8d
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x000000000001ac38
- (void)_activate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001aa0e
- (void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2;	// IMP=0x000000000001a7f9
- (void)markChangedForMessage:(id)arg1;	// IMP=0x000000000001a7e5
- (_Bool)modelContainsTriggerFired:(id)arg1;	// IMP=0x000000000001a738
- (void)activateAfterResidentChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a644
- (void)handleResidentDeviceConfirmed:(id)arg1;	// IMP=0x000000000001a5d3
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a579
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a3f7
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
- (_Bool)shouldActivateOnLocalDevice;	// IMP=0x000000000001a3af
@property(readonly, nonatomic, getter=isOwnedByThisDevice) _Bool ownedByThisDevice;
- (void)invalidate;	// IMP=0x000000000001a102
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000019f6e
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x0000000000019e04
- (_Bool)_isTriggerFiredNotificationEntitled;	// IMP=0x0000000000019dfc
- (void)sendTriggerFiredNotification:(id)arg1;	// IMP=0x0000000000019d20
- (void)_recentFireDateUpdated:(id)arg1;	// IMP=0x0000000000019c04
- (void)triggerFired;	// IMP=0x0000000000019bfe
- (void)reEvaluate:(unsigned long long)arg1;	// IMP=0x0000000000019a13
- (void)fixupForReplacementAccessory:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000019a0d
- (void)handleRemovalOfCharacteristic:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000019a07
- (void)handleRemovalOfService:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000019a01
- (void)handleRemovalOfAccessory:(id)arg1 transaction:(id)arg2;	// IMP=0x00000000000199fb
- (void)removeActionSet:(id)arg1 postUpdate:(_Bool)arg2;	// IMP=0x00000000000196aa
- (void)_forceEvaluate;	// IMP=0x00000000000195b6
- (void)_checkForNoActions;	// IMP=0x00000000000195a2
- (_Bool)hasNoActions;	// IMP=0x0000000000019416
- (void)setEnabled:(_Bool)arg1 message:(id)arg2;	// IMP=0x000000000001928a
- (_Bool)compatible:(id)arg1 user:(id)arg2;	// IMP=0x0000000000019282
@property(readonly, nonatomic) _Bool requiresDataVersion4;
@property(readonly, copy) NSArray *actionSets;
- (id)actionSetMapKeys;	// IMP=0x0000000000019160
- (void)removeAllActionSets;	// IMP=0x00000000000190ef
- (void)removeActionSetForKey:(id)arg1;	// IMP=0x0000000000019058
- (id)actionSetForKey:(id)arg1;	// IMP=0x0000000000018faa
- (void)setActionSetForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000018ef0
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x0000000000018725
- (id)attributeDescriptions;	// IMP=0x000000000001834f
- (void)dealloc;	// IMP=0x00000000000182e1
- (id)logIdentifier;	// IMP=0x00000000000181db
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000017efc
- (id)initWithName:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000017d79
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

