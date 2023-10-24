//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDZone : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_roomUUIDs;	// 16 = 0x10
    NSMutableDictionary *_currentRooms;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    NSUUID *_spiClientIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    HMDHome *_home;	// 64 = 0x40
    HMFMessageDispatcher *_msgDispatcher;	// 72 = 0x48
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00100000004fdb28
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000004fdb20
- (void).cxx_destruct;	// IMP=0x00000000004fd476
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000004fd34a
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000004fd20c
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000004fd206
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000004fcfe4
- (id)updateZoneWithModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000004fcd5d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;	// IMP=0x00000000004fcc55
- (void)addRoomIfNotPresent:(id)arg1;	// IMP=0x00000000004fcb3c
- (_Bool)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004fc209
- (void)_handleRename:(id)arg1;	// IMP=0x00000000004fbe41
- (void)_handleRemoveRoom:(id)arg1;	// IMP=0x00000000004fbab5
- (id)_checkForAddValidity:(id)arg1;	// IMP=0x00000000004fb6b3
- (void)_handleAddRoom:(id)arg1;	// IMP=0x00000000004fb37f
- (void)_registerForMessages;	// IMP=0x00000000004fb00f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004fae92
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004fa8f6
- (id)dumpState;	// IMP=0x00000000004fa562
- (id)rooms;	// IMP=0x00000000004fa4fa
@property(readonly, copy) NSArray *roomUUIDs;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)configure:(id)arg1 queue:(id)arg2;	// IMP=0x00000000004fa341
- (void)dealloc;	// IMP=0x00000000004fa27b
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;	// IMP=0x00000000004f9ff5
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
