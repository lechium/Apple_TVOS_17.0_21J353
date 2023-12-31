//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSensorRecorderNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000c4b4c6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c4b4ad
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000c4b450
+ (_Bool)isSupportedForType:(int)arg1;	// IMP=0x0010000000c4b6da
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000c4b6b2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000c4b685
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c4b65d
- (void *)adaptee;	// IMP=0x0010000000c4b62a
- (void)endService;	// IMP=0x0010000000c4b60f
- (void)beginService;	// IMP=0x0010000000c4b55f
- (id)init;	// IMP=0x0010000000c4b522

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

