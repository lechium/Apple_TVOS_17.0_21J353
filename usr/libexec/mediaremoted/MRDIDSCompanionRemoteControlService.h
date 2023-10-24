//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVRoutingDiscoverySessionConfiguration, MRDAVRoutingDataSource, MRDIDSServerClientConnection, MSVTimer, NSDate, NSMutableDictionary, NSRunLoop, NSString;
@protocol MRDIDSCompanionRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDIDSCompanionRemoteControlService : NSObject
{
    MRDAVRoutingDataSource *_routingDataSource;	// 8 = 0x8
    MRDIDSServerClientConnection *_discoveryChannel;	// 16 = 0x10
    MSVTimer *_discoveryChannelConnectionTimer;	// 24 = 0x18
    NSMutableDictionary *_remoteControlConnections;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workerQueue;	// 40 = 0x28
    _Bool _started;	// 48 = 0x30
    _Bool _sendEndpointScheduled;	// 49 = 0x31
    MRAVEndpoint *_lastSentEndpoint;	// 56 = 0x38
    NSDate *_lastSentEndpointDate;	// 64 = 0x40
    MRAVRoutingDiscoverySessionConfiguration *_configuration;	// 72 = 0x48
    _Bool _isDiscoveryChannelConnected;	// 80 = 0x50
    id <MRDIDSCompanionRemoteControlServiceDelegate> _delegate;	// 88 = 0x58
    NSRunLoop *_runLoop;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000070867
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(readonly, nonatomic) _Bool isDiscoveryChannelConnected; // @synthesize isDiscoveryChannelConnected=_isDiscoveryChannelConnected;
@property(nonatomic) __weak id <MRDIDSCompanionRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onWorkerQueue_disconnectAllRemoteControlChannelsWithError:(id)arg1;	// IMP=0x0010000000070747
- (void)_onWorkerQueue_disconnectRemoteControlChannelsForDestination:(id)arg1 error:(id)arg2;	// IMP=0x001000000007052e
- (void)_removeAuthorizationCallbackForOutputDevice:(id)arg1;	// IMP=0x00100000000704de
- (void)_addAuthorizationCallbackForOutputDevice:(id)arg1 destination:(id)arg2 session:(id)arg3;	// IMP=0x0010000000070144
- (void)_onWorkerQueue_connectRemoteControlChannelForDestination:(id)arg1 session:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006f51f
- (void)_onWorkerQueue_initializeDiscoveryChannel;	// IMP=0x001000000006f38f
- (void)_onWorkerQueue_disconnectDiscoveryChannel;	// IMP=0x001000000006f326
- (void)_onWorkerQueue_connectDiscoveryChannelWithReason:(id)arg1;	// IMP=0x001000000006f0b6
- (void)_onWorkerQueue_sendEndpoint:(id)arg1 toClient:(id)arg2 options:(id)arg3;	// IMP=0x001000000006ef13
- (void)_sendEndpoint:(id)arg1 toClient:(id)arg2 options:(id)arg3;	// IMP=0x001000000006ee09
- (void)handleSetDiscoveryModeMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000006ecfb
- (void)handleSetConnectionStateMessage:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000006ec50
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x001000000006ebbc
- (void)_handleOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x001000000006ea0a
- (void)_handleDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x001000000006e91c
- (void)_handleCompanionDeviceDisconnectedNotification:(id)arg1;	// IMP=0x001000000006e863
- (void)_handleCompanionDeviceConnectedNotification:(id)arg1;	// IMP=0x001000000006e7d4
@property(readonly, nonatomic) MRDIDSServerClientConnection *discoveryChannel;
- (void)stop;	// IMP=0x001000000006e6e0
- (void)start;	// IMP=0x001000000006e64d
@property(readonly, copy) NSString *description;
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x001000000006ddf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

