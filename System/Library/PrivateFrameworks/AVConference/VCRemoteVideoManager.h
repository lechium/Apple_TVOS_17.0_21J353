//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCRemoteVideoManagerDelegate, VCRemoteVideoManagerStreamOutputDelegate;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoManager : NSObject
{
    NSMutableDictionary *_queuesForStreamTokenDict;	// 8 = 0x8
    NSMutableDictionary *_stateCacheForStreamTokenDict;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    id <VCRemoteVideoManagerDelegate> _delegate;	// 40 = 0x28
    id _streamOutputDelegate;	// 48 = 0x30
    struct tagVCRemoteVideoManagerDelegateRealtimeInstanceVTable _delegateFunctions;	// 56 = 0x38
}

@property(nonatomic) id <VCRemoteVideoManagerStreamOutputDelegate> streamOutputDelegate; // @synthesize streamOutputDelegate=_streamOutputDelegate;
@property(nonatomic) struct tagVCRemoteVideoManagerDelegateRealtimeInstanceVTable delegateFunctions; // @synthesize delegateFunctions=_delegateFunctions;
- (void)registerBlocksForService;	// IMP=0x00000000002c7976
- (void)dispatchedNotifyCachedStateForStreamToken:(id)arg1;	// IMP=0x00000000002c7595
- (void)notifyCachedStateForStreamToken:(id)arg1;	// IMP=0x00000000002c7506
- (id)setLayerBoundsForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c73ae
- (id)contextIdForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c715e
- (void)cleanupDictionaries;	// IMP=0x00000000002c7123
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;	// IMP=0x00000000002c711b
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c707b
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6f37
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6ea0
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6cc2
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6c24
- (void)dispatchNetworkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6ad2
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6a3b
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c685d
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c67c6
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c65e8
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6551
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6373
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x00000000002c59ab
- (_Bool)doesQueueExistForStreamToken:(id)arg1;	// IMP=0x00000000002c58bf
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(_Bool)arg3;	// IMP=0x00000000002c58b7
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;	// IMP=0x00000000002c58a2
@property(nonatomic) id <VCRemoteVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000002c57e9
- (id)init;	// IMP=0x00000000002c572f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

