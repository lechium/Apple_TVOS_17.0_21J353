//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDurationEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSNumber *_duration;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000ac55b4
+ (id)logCategory;	// IMP=0x0010000000ac5584
- (void).cxx_destruct;	// IMP=0x0000000000ac51cb
- (id)analyticsTriggerEventData;	// IMP=0x0000000000ac5151
- (id)_nextTimerDate;	// IMP=0x0000000000ac4f6a
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000ac4f64
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000ac4cc0
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000ac4b78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ac4add
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ac4a42
- (_Bool)isCompatbileWithEvent:(id)arg1;	// IMP=0x0000000000ac4a13
@property(copy) NSNumber *duration; // @synthesize duration=_duration;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x0000000000ac472e
- (id)emptyModelObject;	// IMP=0x0000000000ac4676
- (id)createPayload;	// IMP=0x0000000000ac45a2
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x0000000000ac4455

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

