//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMDDevice, HMDRemoteDeviceMonitor, NSArray, NSMutableArray, NSObject, NSString;
@protocol HMDSecureRemoteSessionDataSource, HMFMessageTransportDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteSession : HMFMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_pendingMessages;	// 16 = 0x10
    NSMutableArray *_clientStreams;	// 24 = 0x18
    NSMutableArray *_serverStreams;	// 32 = 0x20
    _Bool _reachable;	// 40 = 0x28
    HMDDevice *_device;	// 48 = 0x30
    id <HMDSecureRemoteSessionDataSource> _dataSource;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 72 = 0x48
    HMDAccountRegistry *_accountRegistry;	// 80 = 0x50
    unsigned long long _maximumRemoteStreams;	// 88 = 0x58
    long long _state;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000003a9d44
+ (_Bool)isSecureRemoteSessionMessage:(id)arg1;	// IMP=0x00100000003a9cb9
- (void).cxx_destruct;	// IMP=0x00000000003a7679
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) id <HMDSecureRemoteSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000003a72b1
- (id)logIdentifier;	// IMP=0x00000000003a7237
- (id)dumpState;	// IMP=0x00000000003a715b
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000003a6f97
- (void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;	// IMP=0x00000000003a6da0
- (void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00000000003a6cc2
- (void)secureRemoteStreamIsIdle:(id)arg1;	// IMP=0x00000000003a6c0a
- (void)_closeServerStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000003a65ce
- (void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003a6305
- (void)_closeClientStream:(id)arg1 error:(id)arg2;	// IMP=0x00000000003a5cf8
- (void)_openClientStreamWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a56bc
- (id)_serverStreamWithIdentifier:(id)arg1;	// IMP=0x00000000003a54e9
- (id)_clientStreamForMessage:(id)arg1;	// IMP=0x00000000003a52fd
- (id)_clientStreamWithIdentiifer:(id)arg1;	// IMP=0x00000000003a512a
- (void)handleDeviceIsNotReachable:(id)arg1;	// IMP=0x00000000003a5048
- (void)handleDeviceIsReachable:(id)arg1;	// IMP=0x00000000003a4f66
- (void)_handleStreamInvalidationMessage:(id)arg1;	// IMP=0x00000000003a4a5e
- (void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x00000000003a4762
- (void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x00000000003a4410
- (void)receivedSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3;	// IMP=0x00000000003a42be
- (id)_dequeMessage;	// IMP=0x00000000003a40cc
- (void)_queueMessage:(id)arg1;	// IMP=0x00000000003a3bdc
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003a3abd
- (void)_closeWithError:(id)arg1;	// IMP=0x00000000003a33ab
- (void)close;	// IMP=0x00000000003a333a
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a3282
@property(readonly, copy, nonatomic) NSArray *serverStreams;
@property(readonly, copy, nonatomic) NSArray *clientStreams;
@property(readonly, copy, nonatomic) NSArray *pendingMessages;
- (void)dealloc;	// IMP=0x00000000003a303c
- (id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000003a2c1f
- (id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3;	// IMP=0x00000000003a2b80
- (id)init;	// IMP=0x00000000003a2ad8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMFMessageTransportDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

