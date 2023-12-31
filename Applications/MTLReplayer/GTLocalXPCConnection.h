//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_transaction, OS_xpc_object;

@interface GTLocalXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_messageQueue;	// 24 = 0x18
    NSMutableDictionary *_dispatchers;	// 32 = 0x20
    NSObject<OS_xpc_object> *_error;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001ce61
@property(retain, nonatomic) NSObject<OS_xpc_object> *error; // @synthesize error=_error;
- (void)cancel;	// IMP=0x001000000001ce38
- (void)activateWithMessageHandler:(CDUnknownBlockType)arg1 andErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cb3b
- (void)sendMessageAndWaitForDelivery:(id)arg1;	// IMP=0x001000000001ca80
- (id)sendMessageWithReplySync:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001ca29
- (id)sendMessageWithReplySync:(id)arg1;	// IMP=0x001000000001ca10
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c8db
- (void)sendMessage:(id)arg1;	// IMP=0x001000000001c8ca
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)dispatchMessage:(id)arg1;	// IMP=0x001000000001c594
- (void)deregisterDispatcher:(unsigned long long)arg1;	// IMP=0x001000000001c4e9
- (unsigned long long)registerDispatcher:(id)arg1;	// IMP=0x001000000001c3d6
- (void)registerDispatcher:(id)arg1 forPort:(unsigned long long)arg2;	// IMP=0x001000000001c2d1
- (id)initWithTransactionScopedXPCConnection:(id)arg1 messageQueue:(id)arg2;	// IMP=0x001000000001c1fe
- (id)initWithXPCConnection:(id)arg1 messageQueue:(id)arg2;	// IMP=0x001000000001c148

@end

