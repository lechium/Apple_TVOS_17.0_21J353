//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStatusBarIconManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000008c524b
+ (id)getSilo;	// IMP=0x00100000008c50d6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000008c50bd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000008c5060
- (void)entityClass:(unsigned int)arg1 didChangeArrowState:(unsigned long long)arg2 dueToDeauthorization:(_Bool)arg3;	// IMP=0x00200000008c567a
- (void)setE911Active:(_Bool)arg1;	// IMP=0x00100000008c55da
- (void)setStatusBarIconForEntityClass:(int)arg1 visible:(_Bool)arg2;	// IMP=0x00100000008c55a6
- (_Bool)syncgetStatusBarIconForEntityClass:(int)arg1;	// IMP=0x00100000008c553b
- (int)syncgetIconState;	// IMP=0x00100000008c5253
- (void *)adaptee;	// IMP=0x00100000008c5218
- (void)endService;	// IMP=0x00100000008c51fd
- (void)beginService;	// IMP=0x00100000008c516f
- (id)init;	// IMP=0x00100000008c5132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
