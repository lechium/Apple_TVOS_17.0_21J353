//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFitnessTrackingNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000004ccf06
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004cceed
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004cce90
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000004cd0f2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000004cd0c5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000004cd09d
- (void *)adaptee;	// IMP=0x00100000004cd06a
- (void)endService;	// IMP=0x00100000004cd04f
- (void)beginService;	// IMP=0x00100000004ccf9f
- (id)init;	// IMP=0x00100000004ccf62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
