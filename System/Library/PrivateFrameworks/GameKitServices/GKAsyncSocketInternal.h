//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKAsyncSocket.h"

@class NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GKAsyncSocketInternal : GKAsyncSocket
{
    NSObject<OS_dispatch_source> *_receiveSource;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_sendSource;	// 16 = 0x10
    _Bool _sendSourceSuspended;	// 24 = 0x18
    _Bool _invalidated;	// 25 = 0x19
    int _connectionSocket;	// 28 = 0x1c
    NSMutableData *_dataToSend;	// 32 = 0x20
    CDUnknownBlockType _receiveDataHandler;	// 40 = 0x28
    CDUnknownBlockType _connectedHandler;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_targetQueue;	// 64 = 0x40
    NSString *_socketName;	// 72 = 0x48
}

- (void)setSocketName:(id)arg1;	// IMP=0x0000000000078728
- (id)socketName;	// IMP=0x0000000000078717
- (void)setConnectedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000078706
- (CDUnknownBlockType)connectedHandler;	// IMP=0x00000000000786f5
- (void)setReceiveDataHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000786e4
- (CDUnknownBlockType)receiveDataHandler;	// IMP=0x00000000000786d3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (void)sendData;	// IMP=0x0000000000077dfc
- (void)receiveData;	// IMP=0x00000000000775f3
- (void)closeConnectionNow;	// IMP=0x000000000007708b
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076c77
- (void)invalidate;	// IMP=0x0000000000076ab3
- (void)dealloc;	// IMP=0x00000000000768f7
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;	// IMP=0x000000000007603f
- (void)tcpAttachSocketDescriptor:(int)arg1;	// IMP=0x0000000000075e29
- (_Bool)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(CDUnknownBlockType)arg2 sendEventHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000757e0
- (id)init;	// IMP=0x0000000000075713

@end

