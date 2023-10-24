//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUXPCAgent, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUXPCAgentConnection : NSObject
{
    CUXPCAgent *_agent;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSXPCConnection *_xpcCnx;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b929e
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9288
- (id)remoteObjectProxy;	// IMP=0x00000000000b9272
- (void)connectionInvalidated;	// IMP=0x00000000000b91f5

@end

