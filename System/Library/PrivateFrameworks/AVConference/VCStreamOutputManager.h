//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamOutputManager : NSObject
{
    NSMutableDictionary *_streamOutputSourceForStreamToken;	// 8 = 0x8
    NSMutableDictionary *_streamOutputs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    _Bool _useFigRemoteQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0010000000304a19
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x00000000003067fd
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x00000000003067f7
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x00000000003067f1
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000030675a
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000003066c3
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000030662c
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000306595
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000003063f1
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000030624d
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000003060a9
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000305f05
- (void)deregisterBlocksForService;	// IMP=0x0000000000305e83
- (void)registerBlocksForService;	// IMP=0x0000000000305bac
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000305a6f
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003058f4
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030556e
- (_Bool)sourceExistsForStreamToken:(long long)arg1;	// IMP=0x000000000030545f
- (id)allocDispatchedStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x0000000000305418
- (id)allocStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x00000000003052d4
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x0000000000304f2b
- (void)deregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x0000000000304e9c
- (void)dispatchedRegisterStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x0000000000304af6
- (void)registerStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x0000000000304a5e
- (void)dispatchedCleanupStreamOutput:(id)arg1;	// IMP=0x0000000000304998
- (void)cleanupStreamOutput:(id)arg1;	// IMP=0x0000000000304909
- (void)dealloc;	// IMP=0x0000000000304880
- (id)init;	// IMP=0x000000000030461d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
