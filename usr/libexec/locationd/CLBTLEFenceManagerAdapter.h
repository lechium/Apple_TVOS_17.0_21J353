//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBTLEFenceManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000c5c48a
+ (id)getSilo;	// IMP=0x0010000000c5c276
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c5c25d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000c5c200
- (void)simulateBeaconWithProximityUUID:(id)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;	// IMP=0x0020000000c5c76a
- (_Bool)syncgetMonitoredRegions:(void *)arg1 forClient:(id)arg2;	// IMP=0x0010000000c5c6db
- (_Bool)syncgetHasMonitoredRegions:(id)arg1;	// IMP=0x0010000000c5c654
- (void)requestRegionState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c5c5e7
- (void)removeMonitoredRegion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c5c57a
- (void)addMonitoredRegion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c5c503
- (void)queryBundleIdentifiersWithEnteredRegionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c5c4d5
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c5c462
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c5c435
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c5c40d
- (void *)adaptee;	// IMP=0x0010000000c5c3da
- (void)endService;	// IMP=0x0010000000c5c3bf
- (void)beginService;	// IMP=0x0010000000c5c30f
- (id)init;	// IMP=0x0010000000c5c2d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
