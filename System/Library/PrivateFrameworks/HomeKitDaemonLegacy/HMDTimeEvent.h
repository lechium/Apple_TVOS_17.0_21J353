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

+ (id)logCategory;	// IMP=0x00100000007adc62
+ (_Bool)isValidOffsetDateComponents:(id)arg1;	// IMP=0x00100000007ada2d
+ (_Bool)isValidAbsoluteDateComponents:(id)arg1;	// IMP=0x00100000007ad865
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000007ad85d
- (void).cxx_destruct;	// IMP=0x00000000007ad6c0
@property(readonly, nonatomic) _Bool repetitive; // @synthesize repetitive=_repetitive;
@property(readonly, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
- (void)invalidate;	// IMP=0x00000000007ad627
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007ad5f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007ad5ac
- (void)_reactivateTriggerAfterDelay;	// IMP=0x00000000007ad4d0
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x00000000007ad158
- (id)_nextTimerDate;	// IMP=0x00000000007ad150
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007acc34
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000007acc05
- (_Bool)isActive;	// IMP=0x00000000007acbe7
- (void)_updateRepetitive;	// IMP=0x00000000007acb76
- (void)_initialize;	// IMP=0x00000000007acad3
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000007aca87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

