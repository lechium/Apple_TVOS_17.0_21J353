//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface HMDSiriRemoteInputServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcServer;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcConnection;	// 24 = 0x18
    NSHashTable *_siriSessions;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000004e72d2
- (void).cxx_destruct;	// IMP=0x00000000004e7262
@property(retain, nonatomic) NSHashTable *siriSessions; // @synthesize siriSessions=_siriSessions;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x00000000004e7023
- (void)handleStopStreamMsg:(id)arg1;	// IMP=0x00000000004e6f67
- (void)handleStartStreamMsg:(id)arg1 args:(id)arg2;	// IMP=0x00000000004e6e81
- (void)handleCheckInMsg:(id)arg1;	// IMP=0x00000000004e6dba
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x00000000004e6bc6
- (void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2;	// IMP=0x00000000004e6a7e
- (void)handleMsg:(id)arg1;	// IMP=0x00000000004e67cc
- (void)handleConnectionEvent:(id)arg1;	// IMP=0x00000000004e660e
- (void)handleDisconnection;	// IMP=0x00000000004e63e3
- (void)handleConnection:(id)arg1;	// IMP=0x00000000004e600c
- (void)handleServerEvent:(id)arg1;	// IMP=0x00000000004e5ef1
- (void)invalidate;	// IMP=0x00000000004e5d63
- (void)deregisterSiriSession:(id)arg1;	// IMP=0x00000000004e5b2c
- (_Bool)registerSiriSession:(id)arg1;	// IMP=0x00000000004e58d2
- (void)dealloc;	// IMP=0x00000000004e57cd
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000004e5509

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

