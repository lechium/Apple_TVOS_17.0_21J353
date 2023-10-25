//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _NSDNXPCConnection;
@protocol OS_xpc_object;

@interface ClientOfLocalNoteServer : NSObject
{
    _NSDNXPCConnection *_client;	// 8 = 0x8
    struct __CFXNotificationRegistrar *_registrar;	// 16 = 0x10
    NSObject<OS_xpc_object> *_queue;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
    NSMutableArray *_invalidHandlers;	// 40 = 0x28
    int _started;	// 48 = 0x30
    int _invalid;	// 52 = 0x34
    long long _sandboxReference;	// 56 = 0x38
    struct _opaque_pthread_mutex_t _lock;	// 64 = 0x40
    int _pid;	// 128 = 0x80
}

- (void)handlePost:(id)arg1;	// IMP=0x00200000000031e1
- (void)postNotification:(struct __CFString *)arg1 object:(struct __CFString *)arg2 token:(unsigned long long)arg3 options:(unsigned long long)arg4 immediate:(unsigned char)arg5 userInfo:(id)arg6;	// IMP=0x0010000000002db4
- (void)enqueuePost:(id)arg1;	// IMP=0x0010000000002d65
- (void)flushQueue;	// IMP=0x0010000000002c92
- (void)start;	// IMP=0x0010000000002c25
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002bca
- (void)invalidate;	// IMP=0x0010000000002a31
- (void)dealloc;	// IMP=0x00100000000029e0
- (id)initWithClientConnection:(id)arg1 configuration:(struct distnoted_configuration *)arg2;	// IMP=0x0010000000001c60
- (_Bool)isLoginWindow;	// IMP=0x0010000000001c58
@property(readonly, copy) NSString *processName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

