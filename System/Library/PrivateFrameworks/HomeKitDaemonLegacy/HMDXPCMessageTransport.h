//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDProcessMonitor, HMDXPCClientConnectionFactory, HMDXPCMessageCountTracker, HMXPCMessageTransportConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDXPCMessageTransport : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_connections;	// 24 = 0x18
    NSXPCInterface *_exportedInterface;	// 32 = 0x20
    NSXPCInterface *_remoteObjectInterface;	// 40 = 0x28
    HMDXPCMessageCountTracker *_xpcCounterTracker;	// 48 = 0x30
    NSMutableDictionary *_cachedResponses;	// 56 = 0x38
    HMDProcessMonitor *_processMonitor;	// 64 = 0x40
    NSXPCListener *_listener;	// 72 = 0x48
    HMXPCMessageTransportConfiguration *_configuration;	// 80 = 0x50
    HMDXPCClientConnectionFactory *_clientConnectionFactory;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00100000004f3620
+ (id)accessorySetupTransport;	// IMP=0x00100000004f35f0
+ (id)defaultTransport;	// IMP=0x00100000004f35c0
- (void).cxx_destruct;	// IMP=0x00000000004f1fd6
@property(readonly) HMDXPCClientConnectionFactory *clientConnectionFactory; // @synthesize clientConnectionFactory=_clientConnectionFactory;
@property(readonly, copy) HMXPCMessageTransportConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly) HMDProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004f18ee
- (void)reportCompletionForMessageWithIdentifier:(id)arg1;	// IMP=0x00000000004f16d6
- (void)_reportCompletion:(id)arg1;	// IMP=0x00000000004f0ed7
- (id)retrieveAndClearMessagesForRequestInfo:(id)arg1;	// IMP=0x00000000004f0bb5
- (id)__retrieveAndClearMessagesForCachedResponseEntry:(id)arg1;	// IMP=0x00000000004f0963
- (void)cacheResponsesForMessageWithIdentifier:(id)arg1 transport:(id)arg2 reportContext:(id)arg3;	// IMP=0x00000000004f0428
- (void)cacheResponseMessage:(id)arg1;	// IMP=0x00000000004f0231
- (id)dumpState;	// IMP=0x00000000004f0214
- (void)submitCounters;	// IMP=0x00000000004f01f7
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000004efa33
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000004ef9a8
- (id)logIdentifier;	// IMP=0x00000000004ef958
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004ef860
@property(readonly, copy) NSDictionary *activeRequests;
@property(readonly, copy) NSArray *connections;
- (void)stop;	// IMP=0x00000000004ef1f4
- (void)start;	// IMP=0x00000000004ef0a4
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000004eefd5
- (id)initWithConfiguration:(id)arg1 listener:(id)arg2 clientConnectionFactory:(id)arg3;	// IMP=0x00000000004eecee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

