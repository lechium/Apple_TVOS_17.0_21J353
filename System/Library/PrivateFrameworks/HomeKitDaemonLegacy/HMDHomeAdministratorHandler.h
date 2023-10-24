//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDHome, NSMapTable, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAdministratorHandler : HMFMessageDispatcher
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSOperationQueue *_queue;	// 16 = 0x10
    NSMapTable *_receivers;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    HMFMessageDispatcher *_dispatcher;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000009bd360
- (void).cxx_destruct;	// IMP=0x00000000009bbf4b
@property(readonly) HMFMessageDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x00000000009bbecc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000009bb929
- (void)addOperation:(id)arg1;	// IMP=0x00000000009bb734
- (id)operationForMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000009bb5bf
@property(readonly) _Bool shouldRelayMessages;
- (void)deregisterReceiver:(id)arg1;	// IMP=0x00000000009bb4a7
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;	// IMP=0x00000000009bb406
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009bb351
- (id)syncOperationManager;	// IMP=0x00000000009bb2d7
- (id)initWithHome:(id)arg1 dispatcher:(id)arg2;	// IMP=0x00000000009bb0f8
- (id)initWithHome:(id)arg1;	// IMP=0x00000000009bb077
- (id)initWithTransport:(id)arg1;	// IMP=0x00000000009bafc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
