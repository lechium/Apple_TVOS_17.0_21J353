//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDTimeEvent
{
    _Bool _repetitive;	// 8 = 0x8
    NSString *_timerID;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000008b3d28
+ (_Bool)isValidOffsetDateComponents:(id)arg1;	// IMP=0x00100000008b3af3
+ (_Bool)isValidAbsoluteDateComponents:(id)arg1;	// IMP=0x00100000008b392b
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008b3923
- (void).cxx_destruct;	// IMP=0x00000000008b3786
@property(readonly, nonatomic) _Bool repetitive; // @synthesize repetitive=_repetitive;
@property(readonly, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
- (void)invalidate;	// IMP=0x00000000008b36ed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008b36be
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008b3672
- (void)_reactivateTriggerAfterDelay;	// IMP=0x00000000008b3596
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x00000000008b3245
- (id)_nextTimerDate;	// IMP=0x00000000008b323d
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b2d21
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000008b2cf2
- (_Bool)isActive;	// IMP=0x00000000008b2cd4
- (void)_updateRepetitive;	// IMP=0x00000000008b2c63
- (void)_initialize;	// IMP=0x00000000008b2bc0
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000008b2b74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

