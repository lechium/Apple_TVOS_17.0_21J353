//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSDaemon, NSMutableArray, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface APSTaskServer : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    APSDaemon *_daemon;	// 24 = 0x18
    NSMutableArray *_outstandingTaskList;	// 32 = 0x20
    NSMutableArray *_dnsCache;	// 40 = 0x28
    CDUnknownBlockType _remoteDNSResponseHandler;	// 48 = 0x30
    NSString *_environmentName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001d264
@property(readonly, nonatomic) APSDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleTaskNotificationMessage:(id)arg1 message:(id)arg2;	// IMP=0x001000000001c398
- (id)_getCacheEntryForHostname:(id)arg1;	// IMP=0x001000000001c1d3
- (void)handleTaskControlResponseMessage:(id)arg1 message:(id)arg2;	// IMP=0x001000000001be10
- (_Bool)_handleTaskControlResponse:(id)arg1 controlResponse:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001b6cb
- (id)getTaskWithTaskId:(unsigned long long)arg1;	// IMP=0x001000000001b575
- (id)getTaskWithMessageId:(unsigned long long)arg1;	// IMP=0x001000000001b41f
- (void)resolveDNS:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001acd5
- (id)_getCourierForEnvironmentName:(id)arg1;	// IMP=0x001000000001acbf
- (void)dealloc;	// IMP=0x001000000001abdf
- (id)initWithConnection:(id)arg1 queue:(id)arg2 apsDaemon:(id)arg3;	// IMP=0x001000000001aae0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

