//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLVDRNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000633f3a
+ (id)getSilo;	// IMP=0x0010000000633d26
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000633d0d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000633cb0
- (void)unregisterForVdr2DofMeasurements:(byref id)arg1;	// IMP=0x0020000000633fae
- (void)registerForVdr2DofMeasurements:(byref id)arg1;	// IMP=0x0010000000633f80
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000633f12
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000633ee5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000633ebd
- (void *)adaptee;	// IMP=0x0010000000633e8a
- (void)endService;	// IMP=0x0010000000633e6f
- (void)beginService;	// IMP=0x0010000000633dbf
- (id)init;	// IMP=0x0010000000633d82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
