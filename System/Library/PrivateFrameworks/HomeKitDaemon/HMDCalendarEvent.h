//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCalendarEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDateComponents *_fireDateComponents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000bfad6
+ (id)logCategory;	// IMP=0x00100000000bfaa6
- (void).cxx_destruct;	// IMP=0x00000000000bf6b2
- (id)analyticsTriggerEventData;	// IMP=0x00000000000bf638
- (id)_nextRecurrentFireDateAfterDate:(id)arg1 recurrences:(id)arg2;	// IMP=0x00000000000bf306
- (id)_nextRecurrentFireDateAfterDate:(id)arg1;	// IMP=0x00000000000bf262
- (id)_nextTimerDateAfterDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x00000000000be999
- (id)_nextTimerDate;	// IMP=0x00000000000be90b
- (_Bool)areMonthDayNotMatching:(id)arg1;	// IMP=0x00000000000be7a5
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000be79f
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000be52e
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000000be3d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000be33b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000be2a0
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000000be271
@property(retain) NSDateComponents *fireDateComponents; // @synthesize fireDateComponents=_fireDateComponents;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000000bdf5b
- (id)emptyModelObject;	// IMP=0x00000000000bdea3
- (id)createPayload;	// IMP=0x00000000000bddb6
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000000bdbf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

