//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VCNWConnectionInfo;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCTransportSessionNW
{
    VCNWConnectionInfo *_rtpConnectionInfo;	// 176 = 0xb0
    VCNWConnectionInfo *_rtcpConnectionInfo;	// 184 = 0xb8
    _Bool _isSharedConnection;	// 192 = 0xc0
    _Bool _didScheduleReceive;	// 193 = 0xc1
    int _networkInterfaceType;	// 196 = 0xc4
    NSObject<OS_dispatch_semaphore> *_startWaitSemaphore;	// 200 = 0xc8
    NSObject<OS_dispatch_semaphore> *_cancelWaitSemaphore;	// 208 = 0xd0
    _Bool _isIPv6;	// 216 = 0xd8
    unsigned int _networkMTU;	// 220 = 0xdc
}

@property(retain, nonatomic) VCNWConnectionInfo *rtcpConnectionInfo; // @synthesize rtcpConnectionInfo=_rtcpConnectionInfo;
@property(retain, nonatomic) VCNWConnectionInfo *rtpConnectionInfo; // @synthesize rtpConnectionInfo=_rtpConnectionInfo;
- (_Bool)isIPv6;	// IMP=0x000000000005d469
- (unsigned int)networkMTU;	// IMP=0x000000000005d459
- (int)networkInterfaceType;	// IMP=0x000000000005d449
- (_Bool)initializeIsIPv6;	// IMP=0x000000000005d290
- (_Bool)initializeNetworkMTU;	// IMP=0x000000000005d178
- (void)initializeInterfaceType;	// IMP=0x000000000005cebc
- (int)dupRTPNWConnectionBackingSocketForNWConnection:(id)arg1;	// IMP=0x000000000005cd03
- (int)dupRTCPNWConnectionBackingSocket;	// IMP=0x000000000005ccc7
- (int)dupRTPNWConnectionBackingSocket;	// IMP=0x000000000005cc8b
- (struct tagVCNWConnectionMonitor *)createNWMonitor;	// IMP=0x000000000005cc36
- (void)stop;	// IMP=0x000000000005cbd5
- (void)start;	// IMP=0x000000000005c99f
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x000000000005c62a
- (int)setupNWConnection:(id)arg1;	// IMP=0x000000000005c46a
- (int)setStateChangeHandlerForConnection:(id)arg1 result:(_Bool *)arg2;	// IMP=0x000000000005c263
- (void)handleStateChanges:(int)arg1 error:(id)arg2 operationResult:(_Bool *)arg3;	// IMP=0x000000000005c133
- (void)dealloc;	// IMP=0x000000000005c036
- (int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2;	// IMP=0x000000000005bba4
- (int)destroyNWConnection:(id *)arg1;	// IMP=0x000000000005bab3
- (int)cancelConnections;	// IMP=0x000000000005ba69
- (int)createNWConnection:(id)arg1;	// IMP=0x000000000005b65b
- (int)createAndSetupConnection:(id)arg1;	// IMP=0x000000000005b570
- (int)createConnections;	// IMP=0x000000000005b412
- (id)initWithRTPNWConnectionID:(id)arg1 RTCPNWConnectionID:(id)arg2 handlerQueue:(id)arg3 context:(void *)arg4 notificationHandler:(CDUnknownFunctionPointerType)arg5 eventHandler:(CDUnknownFunctionPointerType)arg6;	// IMP=0x000000000005b28b

@end

