//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _disconnectBlock;	// 24 = 0x18
    CDUnknownBlockType _messageBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001cdb1a
- (void)_reloadEventHandler;	// IMP=0x00100000001cd89d
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cd5df
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cd594
- (void)sendMessage:(id)arg1;	// IMP=0x00100000001cd583
- (id)createXPCEndpoint;	// IMP=0x00100000001cd375
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000001cd302
- (id)initWithServiceName:(id)arg1;	// IMP=0x00100000001cd29b
- (id)init;	// IMP=0x00100000001cd287
- (id)_initSKXPCConnection;	// IMP=0x00100000001cd22f

@end
