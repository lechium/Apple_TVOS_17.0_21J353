//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLUnifiedCellLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000008569b6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000085699d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000856940
+ (_Bool)isSupported;	// IMP=0x0010000000856bca
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000856ba2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000856b75
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000856b4d
- (void *)adaptee;	// IMP=0x0010000000856b1a
- (void)endService;	// IMP=0x0010000000856aff
- (void)beginService;	// IMP=0x0010000000856a4f
- (id)init;	// IMP=0x0010000000856a12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

