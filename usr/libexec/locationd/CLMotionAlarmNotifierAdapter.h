//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionAlarmNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000547bd0
+ (id)getSilo;	// IMP=0x00100000005479bb
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005479a2
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000547945
- (void)fireEventAlarm:(unsigned int)arg1;	// IMP=0x002000000054bef0
- (void)onCardioChangeEvent;	// IMP=0x001000000054b8a8
- (void)onClassATimerActivity:(id)arg1 withAlarmId:(unsigned long long)arg2;	// IMP=0x001000000054b1fe
- (void)launchWatchApplicationForCompanion:(id)arg1;	// IMP=0x001000000054b1e3
- (void)launchRemoteApplication:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000054af46
- (void)acknowledgeAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000054a3c4
- (void)unregisterAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000549bd9
- (void)registerAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000548a1e
- (void)unregisterClient:(CDUnknownBlockType)arg1 systemClient:(_Bool)arg2;	// IMP=0x00100000005483f2
- (void)registerClient:(CDUnknownBlockType)arg1 adapter:(byref id)arg2 systemClient:(_Bool)arg3;	// IMP=0x0010000000547be0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000547ba8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000547b7b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000547b53
- (void *)adaptee;	// IMP=0x0010000000547b20
- (void)endService;	// IMP=0x0010000000547b05
- (void)beginService;	// IMP=0x0010000000547a54
- (id)init;	// IMP=0x0010000000547a17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

