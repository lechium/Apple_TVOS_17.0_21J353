//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDResidentSyncManager, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDPersonResidentSyncManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPersonResidentSyncManager : HMFObject
{
    id <HMDPersonResidentSyncManagerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDResidentSyncManager *_residentSyncManager;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000005a9c9b
- (void).cxx_destruct;	// IMP=0x00000000005a9198
@property(readonly) HMDResidentSyncManager *residentSyncManager; // @synthesize residentSyncManager=_residentSyncManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property __weak id <HMDPersonResidentSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000005a909f
- (void)handleRemoveAllAssociatedDataMessage:(id)arg1;	// IMP=0x00000000005a8eec
- (void)handleModifyPersonsMessage:(id)arg1;	// IMP=0x00000000005a89ea
- (id)removeAllAssociatedData;	// IMP=0x00000000005a86de
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;	// IMP=0x00000000005a80a6
- (id)removePersonsWithUUIDs:(id)arg1;	// IMP=0x00000000005a7cac
- (id)addOrUpdatePersons:(id)arg1;	// IMP=0x00000000005a777e
- (void)configureWithHome:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000005a759a
- (id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 residentSyncManager:(id)arg4;	// IMP=0x00000000005a749d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
