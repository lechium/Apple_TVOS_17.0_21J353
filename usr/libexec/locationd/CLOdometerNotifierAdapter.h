//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLOdometerNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000001d239a
+ (id)getSilo;	// IMP=0x00100000001d2186
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d216d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001d2110
- (void)unregisterForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x00200000001d2604
- (void)registerForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x00100000001d25d6
- (void)updatePhoneWorkoutElevationSubscription:(_Bool)arg1;	// IMP=0x00100000001d25aa
- (void)querySignificantElevationDeltaFromDate:(id)arg1 toDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d23ee
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d2372
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d2345
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d231d
- (void *)adaptee;	// IMP=0x00100000001d22ea
- (void)endService;	// IMP=0x00100000001d22cf
- (void)beginService;	// IMP=0x00100000001d221f
- (id)init;	// IMP=0x00100000001d21e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

