//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCorrectiveCompensatedLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000004ab1b1
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004ab198
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004ab13b
- (void)fetchLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00200000004ab3c6
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000004ab39e
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000004ab371
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000004ab349
- (void *)adaptee;	// IMP=0x00100000004ab316
- (void)endService;	// IMP=0x00100000004ab2fb
- (void)beginService;	// IMP=0x00100000004ab24a
- (id)init;	// IMP=0x00100000004ab20d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

