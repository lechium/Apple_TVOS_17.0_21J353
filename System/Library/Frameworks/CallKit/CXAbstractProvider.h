//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol CXAbstractProviderDelegate, CXActionDelegateInternal, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXAbstractProvider : NSObject
{
    CDUnknownBlockType _connectionInterruptionHandler;	// 8 = 0x8
    id <CXActionDelegateInternal> _internalActionDelegate;	// 16 = 0x10
    id <CXAbstractProviderDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_mutablePendingTransactions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000f4f0
@property(readonly, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXAbstractProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CXActionDelegateInternal> internalActionDelegate; // @synthesize internalActionDelegate=_internalActionDelegate;
@property(copy) CDUnknownBlockType connectionInterruptionHandler; // @synthesize connectionInterruptionHandler=_connectionInterruptionHandler;
- (void)provider:(id)arg1 handleTimeoutForAction:(id)arg2;	// IMP=0x000000000000f115
- (void)provider:(id)arg1 commitTransaction:(id)arg2;	// IMP=0x000000000000eabf
- (void)handleConnectionInterruptionForProvider:(id)arg1;	// IMP=0x000000000000e982
- (void)sendDidBeginForProvider:(id)arg1;	// IMP=0x000000000000e88e
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e7a7
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e6d2
- (id)_pendingActionWithUUID:(id)arg1;	// IMP=0x000000000000e376
- (void)_updatePendingTransactions;	// IMP=0x000000000000e0f3
@property(readonly, copy, nonatomic) NSArray *pendingTransactions;
- (void)invalidate;	// IMP=0x000000000000de73
- (void)_syncSetDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000dd4f
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000dc2c
- (void)actionCompleted:(id)arg1;	// IMP=0x000000000000d8e0
- (id)init;	// IMP=0x000000000000d837

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

