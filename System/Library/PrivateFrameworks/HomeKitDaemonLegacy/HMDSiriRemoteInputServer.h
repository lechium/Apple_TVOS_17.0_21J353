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

+ (id)logCategory;	// IMP=0x0010000000448ea6
- (void).cxx_destruct;	// IMP=0x0000000000448e36
@property(retain, nonatomic) NSHashTable *siriSessions; // @synthesize siriSessions=_siriSessions;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x0000000000448bf7
- (void)handleStopStreamMsg:(id)arg1;	// IMP=0x0000000000448b3b
- (void)handleStartStreamMsg:(id)arg1 args:(id)arg2;	// IMP=0x0000000000448a55
- (void)handleCheckInMsg:(id)arg1;	// IMP=0x000000000044898e
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x000000000044879a
- (void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2;	// IMP=0x0000000000448652
- (void)handleMsg:(id)arg1;	// IMP=0x00000000004483a0
- (void)handleConnectionEvent:(id)arg1;	// IMP=0x00000000004481e2
- (void)handleDisconnection;	// IMP=0x0000000000447fb7
- (void)handleConnection:(id)arg1;	// IMP=0x0000000000447be0
- (void)handleServerEvent:(id)arg1;	// IMP=0x0000000000447ac5
- (void)invalidate;	// IMP=0x0000000000447937
- (void)deregisterSiriSession:(id)arg1;	// IMP=0x0000000000447700
- (_Bool)registerSiriSession:(id)arg1;	// IMP=0x00000000004474a6
- (void)dealloc;	// IMP=0x00000000004473a1
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000004470dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

