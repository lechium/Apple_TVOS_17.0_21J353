//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSConnectionListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSXPCInterface *_exportedInterface;	// 16 = 0x10
    NSXPCInterface *_remoteInterface;	// 24 = 0x18
    id _proxyObject;	// 32 = 0x20
    NSMutableArray *_clientConnections;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSString *_machServiceName;	// 56 = 0x38
}

+ (id);	// IMP=0x002000000008c89c
- (void).cxx_destruct;	// IMP=0x0020000000129e9a
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void)resumeConnection;	// IMP=0x0010000000129d7a
- (void)notifyClientsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129cbb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001298cb
- (void)dealloc;	// IMP=0x001000000012980d
- (id)initWithMachService:(id)arg1 withServiceInterface:(id)arg2 withServiceObject:(id)arg3 withDelegateInterface:(id)arg4 queue:(id)arg5;	// IMP=0x0010000000129712
- (id)initWithMachService:(id)arg1 withServiceInterface:(id)arg2 withServiceObject:(id)arg3 withDelegateInterface:(id)arg4;	// IMP=0x00100000001296ef
- (id)initWithXpcListener:(id)arg1 withMachService:(id)arg2 withServiceInterface:(id)arg3 withServiceObject:(id)arg4 withDelegateInterface:(id)arg5 queue:(id)arg6;	// IMP=0x00100000001292ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
