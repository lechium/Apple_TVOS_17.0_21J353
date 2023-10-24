//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol ADDeviceContextConnectionDelegate, OS_dispatch_queue;

@interface ADDeviceContextConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    id <ADDeviceContextConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _isInvalid;	// 32 = 0x20
    _Bool _isUpdatingLocalDeviceContext;	// 33 = 0x21
    CDUnknownBlockType _updateLocalDeviceContextReply;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000010781d
- (void)_endUpdateLocalDeviceContext;	// IMP=0x00100000001076f6
- (void)_beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000107609
- (id)_remoteServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000107481
- (void)_invalidate;	// IMP=0x001000000010737a
- (void)_clearXPCConnection;	// IMP=0x0010000000107298
- (void)_handleXPCConnectionInterruption;	// IMP=0x00100000001071d9
- (void)_handleXPCConnectionInvalidation;	// IMP=0x001000000010711a
- (void)invalidate;	// IMP=0x00100000001070cf
- (oneway void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000106f5b
- (oneway void)endUpdateLocalDeviceContext;	// IMP=0x0010000000106f49
- (oneway void)beginUpdateLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000106f37
- (oneway void)getLocalDeviceContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000106d3d
- (void)updateLocalDeviceContext:(id)arg1;	// IMP=0x0010000000106cb0
- (id)initWithQueue:(id)arg1 xpcConnection:(id)arg2 delegate:(id)arg3;	// IMP=0x0010000000106951
- (void)dealloc;	// IMP=0x001000000010689c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
