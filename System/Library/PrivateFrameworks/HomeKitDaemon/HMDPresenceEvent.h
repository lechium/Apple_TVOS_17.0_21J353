//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerExecutionSession, HMPresenceEventActivation, NSArray, NSDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol HMDFeaturesDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPresenceEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _currentStatus;	// 12 = 0xc
    NSString *_presenceType;	// 16 = 0x10
    HMPresenceEventActivation *_activation;	// 24 = 0x18
    NSDictionary *_users;	// 32 = 0x20
    NSArray *_userUUIDs;	// 40 = 0x28
    HMDEventTriggerExecutionSession *_executionSession;	// 48 = 0x30
    id <HMDFeaturesDataSource> _featuresDataSource;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002ff2a8
+ (id)logCategory;	// IMP=0x00100000002ff278
- (void).cxx_destruct;	// IMP=0x00000000002fe2cf
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
@property _Bool currentStatus; // @synthesize currentStatus=_currentStatus;
@property(copy) NSArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(copy) NSDictionary *users; // @synthesize users=_users;
@property(readonly, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(retain) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (id)analyticsPresenceEventData;	// IMP=0x00000000002fe0ff
- (id)analyticsTriggerEventData;	// IMP=0x00000000002fe032
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000002fe02c
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000002fdaf6
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000002fd8fa
- (id)_presenceTypeForClient;	// IMP=0x00000000002fd72f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002fd24b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fcd9a
- (void)_addUser:(id)arg1;	// IMP=0x00000000002fcbdc
- (void)_removeAllUsers;	// IMP=0x00000000002fcb52
- (void)_updateUsers:(id)arg1 home:(id)arg2;	// IMP=0x00000000002fc83c
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000002fc41d
- (_Bool)compatibleWithUser:(id)arg1;	// IMP=0x00000000002fbffa
- (_Bool)evaluateWithHomePresence:(id)arg1;	// IMP=0x00000000002fbf31
- (_Bool)_evaluateWithHomePresence:(id)arg1 presenceType:(id)arg2 users:(id)arg3;	// IMP=0x00000000002fbd4b
- (_Bool)evaluateWithUserPresence:(id)arg1 presenceType:(id)arg2;	// IMP=0x00000000002fba73
- (_Bool)evaluateWithHomePresenceUpdate:(id)arg1 presenceType:(id)arg2;	// IMP=0x00000000002fb8ae
- (void)didEndExecutionSession:(id)arg1;	// IMP=0x00000000002fb7f6
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000002fb7c7
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;	// IMP=0x00000000002fa754
- (void)_handleHomePresenceUpdate:(id)arg1;	// IMP=0x00000000002fa69c
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fa4b8
- (_Bool)isActive;	// IMP=0x00000000002fa49a
- (void)_handlePrivilegeUpdate:(id)arg1;	// IMP=0x00000000002fa3d1
- (void)_registerForMessages;	// IMP=0x00000000002fa2fd
@property(readonly, nonatomic) unsigned long long activationGranularity;
- (id)thisUser;	// IMP=0x00000000002fa22e
- (id)emptyModelObject;	// IMP=0x00000000002fa176
- (id)createClientPayload;	// IMP=0x00000000002f9ff4
- (id)createDaemonPayload;	// IMP=0x00000000002f9e79
- (id)createPresenceEventPayload:(_Bool)arg1;	// IMP=0x00000000002f9e47
- (id)createPayload;	// IMP=0x00000000002f9e35
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000002f9d06
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002f99c7
- (id)initWithModel:(id)arg1 home:(id)arg2 featuresDataSource:(id)arg3;	// IMP=0x00000000002f97a8
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000002f9722

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

