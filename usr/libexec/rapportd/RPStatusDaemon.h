//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPStatusDaemon : NSObject
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    NSXPCInterface *_xpcClientInterface;	// 16 = 0x10
    NSMutableSet *_xpcConnections;	// 24 = 0x18
    NSXPCListener *_xpcListener;	// 32 = 0x20
    NSXPCInterface *_xpcDaemonInterface;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    id <RPMessageable> _messenger;	// 56 = 0x38
}

+ (id)sharedStatusDaemon;	// IMP=0x002000000009846d
- (void).cxx_destruct;	// IMP=0x00200000000993a4
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x0010000000099302
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000098d8b
- (void)_update;	// IMP=0x0010000000098d85
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0010000000098d7d
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098d75
- (void)prefsChanged;	// IMP=0x0010000000098d63
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0010000000098d52
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x0010000000098d4c
- (void)_invalidated;	// IMP=0x0010000000098cd7
- (void)_invalidate;	// IMP=0x0010000000098c27
- (void)invalidate;	// IMP=0x0010000000098bc6
- (void)_activate;	// IMP=0x0010000000098989
- (void)activate;	// IMP=0x0010000000098928
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000098523
- (id)init;	// IMP=0x00100000000984c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

