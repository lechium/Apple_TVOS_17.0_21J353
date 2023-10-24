//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDActionSetEvent, HMDApplicationData, HMDHome, HMFMessage, HMFMessageDispatcher, HMFTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDActionSet : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_currentActions;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    NSUUID *_spiClientIdentifier;	// 48 = 0x30
    HMDHome *_home;	// 56 = 0x38
    NSDate *_lastExecutionDate;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    HMFMessageDispatcher *_msgDispatcher;	// 80 = 0x50
    HMFTimer *_executionTimeout;	// 88 = 0x58
    NSDate *_executionStart;	// 96 = 0x60
    HMFMessage *_executionMessage;	// 104 = 0x68
    NSDictionary *_executionInitialStates;	// 112 = 0x70
    HMDActionSetEvent *_executionActionSetEvent;	// 120 = 0x78
    HMDApplicationData *_appData;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x001000000028ad53
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x001000000028ad4b
+ (id)allowedActionClasses;	// IMP=0x001000000028ac50
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000028ac48
- (void).cxx_destruct;	// IMP=0x000000000028556e
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) HMDActionSetEvent *executionActionSetEvent; // @synthesize executionActionSetEvent=_executionActionSetEvent;
@property(retain, nonatomic) NSDictionary *executionInitialStates; // @synthesize executionInitialStates=_executionInitialStates;
@property(retain, nonatomic) HMFMessage *executionMessage; // @synthesize executionMessage=_executionMessage;
@property(retain, nonatomic) NSDate *executionStart; // @synthesize executionStart=_executionStart;
@property(retain, nonatomic) HMFTimer *executionTimeout; // @synthesize executionTimeout=_executionTimeout;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (id)logIdentifier;	// IMP=0x00000000002852c8
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000284d85
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000284c01
- (void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2;	// IMP=0x0000000000284a40
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000028422d
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000283ff3
- (void)_executeGenericActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000283b5b
- (void)_executeAppleMediaAccessoryPowerActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000028364e
- (void)_executeMediaPlaybackActions:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000028310a
- (void)_issueReadRequests;	// IMP=0x000000000028292f
- (id)_executeGenericActions:(id)arg1 message:(id)arg2;	// IMP=0x0000000000282799
- (id)_executeAppleMediaAccessoryPowerActions:(id)arg1 message:(id)arg2;	// IMP=0x0000000000282543
- (id)_executeNaturalLightingWriteRequests:(id)arg1 message:(id)arg2 naturalLightingActions:(id)arg3 naturalLightingActionResultByActionUUID:(id)arg4;	// IMP=0x000000000028218c
- (id)_executeNaturalLightingActions:(id)arg1 writeRequests:(id)arg2 message:(id)arg3;	// IMP=0x00000000002818fa
- (id)_executeMediaPlaybackActions:(id)arg1 message:(id)arg2;	// IMP=0x00000000002816a4
- (id)_executeCharacteristicWriteRequests:(id)arg1 message:(id)arg2;	// IMP=0x0000000000281370
- (void)_issueWriteRequests:(id)arg1;	// IMP=0x000000000027fa20
- (id)_createActionExecutionLogEvent:(id)arg1;	// IMP=0x000000000027eff9
- (void)_execute:(id)arg1 captureCurrentState:(_Bool)arg2 writeRequestTuples:(id)arg3;	// IMP=0x000000000027eb6d
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000027eaaf
- (void)handleExecutionCompletedWithOverallError:(id)arg1 response:(id)arg2;	// IMP=0x000000000027e8f8
- (id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x000000000027d990
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000027d826
@property(readonly, copy) NSArray *associatedAccessories;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000027d74b
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000027d4e8
- (void)_handleUpdateActionRequest:(id)arg1;	// IMP=0x000000000027ce59
- (void)_updateAppleMediaAccessoryPowerAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000027caaa
- (void)_updateNaturalLightingAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000027c7dd
- (void)_updatePlaybackAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000027bbc2
- (void)_updateWriteAction:(id)arg1 forMessage:(id)arg2;	// IMP=0x000000000027b8e0
- (_Bool)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2;	// IMP=0x000000000027b608
- (void)_handleRenameRequest:(id)arg1;	// IMP=0x000000000027af61
- (void)_removeDonatedIntent;	// IMP=0x000000000027af5b
- (void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x000000000027acf2
- (void)_handleRemovalOfActions:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000027ab5b
- (void)_handleRemovalOfAction:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000027aa9a
- (void)_handleRemoveActionRequest:(id)arg1;	// IMP=0x000000000027a7fd
- (void)_removeAction:(id)arg1 message:(id)arg2;	// IMP=0x000000000027a1c3
- (void)_handleAddAppleMediaAccessoryPowerActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x000000000027a038
- (void)_handleAddLightProfileNaturalLightingActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000279f66
- (void)_handleAddShortcutActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000279d45
- (void)_handleAddMediaPlaybackActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x000000000027954c
- (void)_handleAddCharacteristicWriteActionTransaction:(id)arg1 message:(id)arg2;	// IMP=0x0000000000278bfb
- (void)sendNotificationWithAction:(id)arg1 message:(id)arg2;	// IMP=0x000000000027891c
- (void)_handleAddNewAction:(id)arg1 message:(id)arg2;	// IMP=0x00000000002782ca
- (void)_handleUpdateActionSetFromBuilder:(id)arg1;	// IMP=0x0000000000277ed3
- (void)_handleUpdateActionSet:(id)arg1;	// IMP=0x0000000000277dd1
- (id)_addAppleMediaAccessoryPowerActionModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x0000000000277992
- (id)_addLightProfileNaturalLightingModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x0000000000277507
- (id)_addMediaPlaybackActionModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x0000000000276dab
- (id)_addCharacteristicWriteActionModelWithUUID:(id)arg1 message:(id)arg2;	// IMP=0x0000000000276490
- (void)_handleAddActionRequest:(id)arg1;	// IMP=0x0000000000275cb9
- (void)_registerForMessages;	// IMP=0x00000000002756bc
- (id)actionWithUUID:(id)arg1;	// IMP=0x0000000000275639
- (void)invalidate;	// IMP=0x00000000002755c8
- (void)handleRemovalOfAccessory:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000274685
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x000000000027460a
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000273943
- (_Bool)_isValidCharacteristicWriteAction:(id)arg1;	// IMP=0x000000000027390d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002732f9
@property(readonly, nonatomic) _Bool containsShortcutActions;
@property(readonly, nonatomic) _Bool containsMediaPlaybackActions;
- (_Bool)containsUnsecuringAction;	// IMP=0x0000000000272f19
- (_Bool)containsSecureCharacteristic;	// IMP=0x0000000000272db9
- (_Bool)_fixupActions;	// IMP=0x0000000000272498
@property(readonly, nonatomic) NSString *serializedIdentifier;
@property(copy, nonatomic) NSArray *actions;
- (void)removeAllActions;	// IMP=0x00000000002722d3
- (void)removeAction:(id)arg1;	// IMP=0x000000000027224d
- (void)addAction:(id)arg1;	// IMP=0x00000000002721c7
- (void)__handleActionsUpdated;	// IMP=0x0000000000271e78
- (_Bool)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x0000000000271c05
- (void)auditActionsForAccessory:(id)arg1 transaction:(id)arg2;	// IMP=0x000000000027183a
- (void)handleRemovalOfService:(id)arg1 transaction:(id)arg2;	// IMP=0x00000000002714bc
- (void)executeWithTriggerSource:(id)arg1 captureCurrentState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002711f2
- (void)_execute:(id)arg1 activity:(id)arg2;	// IMP=0x000000000027106e
- (void)execute:(id)arg1;	// IMP=0x0000000000270ed3
- (void)isAccessValidForExecutionWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000270982
- (id)createPayload;	// IMP=0x00000000002707f4
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dumpState;	// IMP=0x00000000002701dd
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000026ff88
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;	// IMP=0x000000000026fbf8
- (id)_getActionsForActionSetObject;	// IMP=0x0000000000816739
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

