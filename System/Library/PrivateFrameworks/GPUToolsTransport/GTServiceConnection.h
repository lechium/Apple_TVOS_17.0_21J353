//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GTXPCConnection, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface GTServiceConnection : NSObject
{
    id <GTXPCConnection> _connection;	// 8 = 0x8
    NSString *_deviceUDID;	// 16 = 0x10
    unsigned long long _servicePort;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002cde7
@property(readonly) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
- (void)cancel;	// IMP=0x000000000002cdbd
- (void)activateWithMessageHandler:(CDUnknownBlockType)arg1 andErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cda7
- (void)deregisterDispatcher:(unsigned long long)arg1;	// IMP=0x000000000002cd91
- (unsigned long long)registerDispatcher:(id)arg1;	// IMP=0x000000000002cd7b
- (id)sendMessageWithReplySync:(id)arg1 replyStreamId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000002ccf8
- (void)sendMessage:(id)arg1 withReplyStreamId:(unsigned long long)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cc71
- (void)sendMessage:(id)arg1 withReplyStreamId:(unsigned long long)arg2;	// IMP=0x000000000002cc0c
- (void)sendMessageAndWaitForDelivery:(id)arg1;	// IMP=0x000000000002cbb6
- (id)sendMessageWithReplySync:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002cb36
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002cab0
- (void)sendMessage:(id)arg1;	// IMP=0x000000000002ca5a
- (void)_setRoutingPropertiesForMessage:(id)arg1 withReplyStreamId:(unsigned long long)arg2;	// IMP=0x000000000002c9f0
- (void)_setRoutingPropertiesForMessage:(id)arg1;	// IMP=0x000000000002c98d
@property(retain, nonatomic) NSObject<OS_xpc_object> *error;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)dispatchMessage:(id)arg1;	// IMP=0x000000000002c935
- (void)registerDispatcher:(id)arg1 forPort:(unsigned long long)arg2;	// IMP=0x000000000002c91f
- (id)initWithConnection:(id)arg1 device:(id)arg2 port:(unsigned long long)arg3;	// IMP=0x000000000002c87a

@end
