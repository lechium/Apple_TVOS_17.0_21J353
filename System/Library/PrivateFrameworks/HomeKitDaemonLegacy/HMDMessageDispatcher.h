//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageFilter, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDMessageDispatcher : HMFMessageDispatcher
{
    HMDXPCMessageTransport *_XPCTransport;	// 8 = 0x8
    HMDSecureRemoteMessageTransport *_secureRemoteTransport;	// 16 = 0x10
    HMDMessageFilterChain *_messageFilterChain;	// 24 = 0x18
    NSMutableDictionary *_remoteGateways;	// 32 = 0x20
    HMDSecureRemoteMessageFilter *_secureRemoteMessageFilter;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x004000000055de85
+ (id)defaultDispatcher;	// IMP=0x004000000055de22
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4 accountRegistry:(id)arg5;	// IMP=0x004000000055dcc0
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4;	// IMP=0x004000000055dbf3
- (void).cxx_destruct;	// IMP=0x000000000055d78c
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // @synthesize secureRemoteMessageFilter=_secureRemoteMessageFilter;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // @synthesize messageFilterChain=_messageFilterChain;
@property(readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport; // @synthesize secureRemoteTransport=_secureRemoteTransport;
@property(readonly, nonatomic) HMDXPCMessageTransport *XPCTransport; // @synthesize XPCTransport=_XPCTransport;
- (id)sendMessageExpectingResponse:(id)arg1;	// IMP=0x000000000055d4ee
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000055d3be
- (void)dispatchMessage:(id)arg1;	// IMP=0x000000000055d0cc
- (void)configureHTTPTransport:(id)arg1;	// IMP=0x000000000055d014
- (void)disableMessageServer;	// IMP=0x000000000055cfd5
- (void)enableMessageServer;	// IMP=0x000000000055cf93
- (id)httpMessageTransport;	// IMP=0x000000000055ce27
- (void)configureHomeManager:(id)arg1;	// IMP=0x000000000055cd6f
- (void)reset;	// IMP=0x000000000055cd32
- (id)filterClasses;	// IMP=0x000000000055cbf4
- (void)dealloc;	// IMP=0x000000000055cb7f
- (id)initWithXPCTransport:(id)arg1 secureRemoteTransport:(id)arg2 messageFilterChain:(id)arg3;	// IMP=0x000000000055c9bc
- (void)electDeviceForHH1User:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000055f81d
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000055f074
- (id)remoteAccessDeviceForHome:(id)arg1;	// IMP=0x000000000055f024
- (id)residentCommunicationHandlerForHome:(id)arg1;	// IMP=0x000000000055eed9
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(_Bool)arg3;	// IMP=0x000000000055e3c8
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000055e2ea
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000055e20c
- (void)handleSecureSessionError:(id)arg1;	// IMP=0x000000000055e154

@end

