//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HHSynchronizedStateDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHSynchronizedState : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _initialValueFetched;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    _Bool _resumed;	// 24 = 0x18
    id _cachedValue;	// 32 = 0x20
    id <HHSynchronizedStateDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000097b1
@property(nonatomic) __weak id <HHSynchronizedStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resume;	// IMP=0x000000000000971b
- (void)_updateWithInitialValue:(id)arg1;	// IMP=0x0000000000009637
- (void)reload;	// IMP=0x0000000000009542
- (void)_fetchValueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000092c7
- (id)_fetchValue;	// IMP=0x00000000000091e2
- (void)_postUpdateWithValue:(id)arg1 previousValue:(id)arg2;	// IMP=0x0000000000008fd8
- (void)_setCachedValue:(id)arg1;	// IMP=0x0000000000008f5e
- (void)updateWithValue:(id)arg1;	// IMP=0x0000000000008f0b
@property(readonly, nonatomic) id cachedValue; // @synthesize cachedValue=_cachedValue;
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000008e0a

@end
