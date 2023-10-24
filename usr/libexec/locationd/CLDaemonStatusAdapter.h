//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDaemonStatusAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000002bb997
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bb97e
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002bb921
- (_Bool)syncgetBatterySaverMode;	// IMP=0x00200000002bc196
- (int)syncgetThermalLevel;	// IMP=0x00100000002bc164
- (void)triggerMetricHeartbeatNotification;	// IMP=0x00100000002bbf96
- (_Bool)syncgetRegisterPowerKeepAlive:(_Bool)arg1 client:(unsigned long long)arg2 dbgMessage:(id)arg3;	// IMP=0x00100000002bbf5e
- (void)notifyMigrationPerformed;	// IMP=0x00100000002bbd9c
- (_Bool)syncgetIsSleeping;	// IMP=0x00100000002bbd77
- (_Bool)syncgetHasLingerClients;	// IMP=0x00100000002bbd40
- (int)syncgetReachability;	// IMP=0x00100000002bbd14
- (_Bool)syncgetAirplaneMode:(_Bool *)arg1;	// IMP=0x00100000002bbce2
- (void)fetchWirelessModemClientCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbc84
- (void)fetchIsBatteryConnectedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbc2a
- (void)fetchReachabilityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbbeb
- (void)fetchIsAirplaneModeEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbbac
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbb84
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000002bbb57
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bbb2f
- (void *)adaptee;	// IMP=0x00100000002bbafc
- (void)endService;	// IMP=0x00100000002bbae1
- (void)beginService;	// IMP=0x00100000002bba30
- (id)init;	// IMP=0x00100000002bb9f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
