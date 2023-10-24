//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUserMessagePolicy, HMFMessageDispatcher, NSMapTable, NSObject, NSString, NSUUID;
@protocol HMDAccessorySettingsMessageController, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsMessageHandler : HMFObject
{
    id <HMDAccessorySettingsMessageController> _messageController;	// 8 = 0x8
    NSMapTable *_settingMessageMap;	// 16 = 0x10
    HMDUserMessagePolicy *_onlyOwnerAllowedUserPolicy;	// 24 = 0x18
    HMDUserMessagePolicy *_sharedAdminAllowedUserPolicy;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000cb67bc
- (void).cxx_destruct;	// IMP=0x0000000000cb5bce
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) HMDUserMessagePolicy *sharedAdminAllowedUserPolicy; // @synthesize sharedAdminAllowedUserPolicy=_sharedAdminAllowedUserPolicy;
@property(retain) HMDUserMessagePolicy *onlyOwnerAllowedUserPolicy; // @synthesize onlyOwnerAllowedUserPolicy=_onlyOwnerAllowedUserPolicy;
@property(readonly) NSMapTable *settingMessageMap; // @synthesize settingMessageMap=_settingMessageMap;
@property(readonly) __weak id <HMDAccessorySettingsMessageController> messageController; // @synthesize messageController=_messageController;
- (void)notifyOfUpdatedValue:(id)arg1 settingKeyPath:(id)arg2;	// IMP=0x0000000000cb5b0e
- (void)relayReplaceConstraints:(id)arg1 constraintIdsToRemove:(id)arg2 keyPath:(id)arg3 destination:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000cb5703
- (void)relayUpdateValue:(id)arg1 keyPath:(id)arg2 destination:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000cb52f1
- (void)_handleReplaceConstraintsForKeyPath:(id)arg1;	// IMP=0x0000000000cb4e9d
- (void)_handleReplaceConstraints:(id)arg1;	// IMP=0x0000000000cb4cc2
- (_Bool)processReplaceConstraintMessage:(id)arg1 outConstraintsToAdd:(id *)arg2 outConstraintIdsToRemove:(id *)arg3;	// IMP=0x0000000000cb44bd
- (void)_handleUpdatedConstraints:(id)arg1;	// IMP=0x0000000000cb3f28
- (void)_handleRemoveConstraint:(id)arg1;	// IMP=0x0000000000cb3aaa
- (void)_handleAddConstraint:(id)arg1;	// IMP=0x0000000000cb362c
- (void)_handleSettingUpdateValueByKeyPath:(id)arg1;	// IMP=0x0000000000cb3351
- (void)_handleSettingUpdateValue:(id)arg1;	// IMP=0x0000000000cb30ff
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSUUID *messageTargetUUID;
- (_Bool)_decodeUpdateValueMessagePayload:(id)arg1 outValue:(id *)arg2;	// IMP=0x0000000000cb2e2c
- (id)messageMapperForSetting:(id)arg1;	// IMP=0x0000000000cb2db2
- (void)registerForSettingMessages:(id)arg1;	// IMP=0x0000000000cb290e
- (void)registerForMessages;	// IMP=0x0000000000cb2354
- (void)unconfigureFromSetting:(id)arg1;	// IMP=0x0000000000cb228d
- (void)configureForSetting:(id)arg1 allowSharedAdminEditConstraints:(_Bool)arg2;	// IMP=0x0000000000cb214f
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;	// IMP=0x0000000000cb206e
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000cb1f9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
