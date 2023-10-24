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

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00100000005ae3e8
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005ae3e0
- (void).cxx_destruct;	// IMP=0x00000000005add36
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *spiClientIdentifier; // @synthesize spiClientIdentifier=_spiClientIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000005adc0a
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000005adacc
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000005adac6
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000005ad8a4
- (id)updateZoneWithModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000005ad61d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)removeRoom:(id)arg1;	// IMP=0x00000000005ad515
- (void)addRoomIfNotPresent:(id)arg1;	// IMP=0x00000000005ad3fc
- (_Bool)_handleSetRoomsTransactionWithRoomUUIDStrings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005acac9
- (void)_handleRename:(id)arg1;	// IMP=0x00000000005ac701
- (void)_handleRemoveRoom:(id)arg1;	// IMP=0x00000000005ac375
- (id)_checkForAddValidity:(id)arg1;	// IMP=0x00000000005abf73
- (void)_handleAddRoom:(id)arg1;	// IMP=0x00000000005abc3f
- (void)_registerForMessages;	// IMP=0x00000000005ab8cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005ab752
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005ab1b6
- (id)dumpState;	// IMP=0x00000000005aae22
- (id)rooms;	// IMP=0x00000000005aadba
@property(readonly, copy) NSArray *roomUUIDs;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)configure:(id)arg1 queue:(id)arg2;	// IMP=0x00000000005aac01
- (void)dealloc;	// IMP=0x00000000005aab3b
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;	// IMP=0x00000000005aa8b5
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

