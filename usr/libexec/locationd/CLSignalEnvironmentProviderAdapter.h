//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSignalEnvironmentProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000843cd6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000843cbd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000843c60
+ (_Bool)isSupported;	// IMP=0x001000000084400c
- (void)fetchCoarseSignalEnvironmentForLatitude:(double)arg1 longitude:(double)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0020000000843eea
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000843ec2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000843e95
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000843e6d
- (void *)adaptee;	// IMP=0x0010000000843e3a
- (void)endService;	// IMP=0x0010000000843e1f
- (void)beginService;	// IMP=0x0010000000843d6f
- (id)init;	// IMP=0x0010000000843d32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

