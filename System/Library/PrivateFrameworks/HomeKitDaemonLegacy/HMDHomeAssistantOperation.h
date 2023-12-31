//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSMutableSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeAssistantOperation : HMFObject
{
    _Bool _completionHandlerCalled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMFTimer *_accessoryConnectivityWaitTimer;	// 24 = 0x18
    NSSet *_accessoriesToOperateOn;	// 32 = 0x20
    NSMutableSet *_reachableAccessoriesToOperateOn;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
}

+ (id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2;	// IMP=0x00100000007114f7
+ (id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000711293
+ (id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2;	// IMP=0x001000000071102f
- (void).cxx_destruct;	// IMP=0x0000000000710a44
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007109ab
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000071088e
- (void)handleAccessoryIsReachable:(id)arg1;	// IMP=0x00000000007107f5
- (void)dealloc;	// IMP=0x0000000000710780

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

