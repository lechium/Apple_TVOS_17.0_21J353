//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ErrorHandlerManager : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSMutableDictionary *_completionBlocks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (void)resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x004000000019dc10
+ (void)connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019dbd0
+ (void)observeXPCServer:(id)arg1;	// IMP=0x001000000019db75
+ (id)errorHandlerManager;	// IMP=0x001000000019d629
- (void)_resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x002000000019f09b
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000019ef79
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000019ee79
- (void)_connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019e354
- (id)_clientForConnection:(id)arg1;	// IMP=0x001000000019e206
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000019dc50
- (void)openSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000019d6a6
- (void)dealloc;	// IMP=0x001000000019d58e
- (id)init;	// IMP=0x001000000019d46a

@end

