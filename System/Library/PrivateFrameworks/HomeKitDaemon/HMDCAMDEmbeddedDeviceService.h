//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCAMDBlockManager, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface HMDCAMDEmbeddedDeviceService
{
    NSXPCConnection *_connection;	// 16 = 0x10
    unsigned long long _backoffTimer;	// 24 = 0x18
    _Bool _isRoot;	// 32 = 0x20
    _Bool _isValid;	// 33 = 0x21
    _Bool _directInvocations;	// 34 = 0x22
    unsigned long long _requestTimeout;	// 40 = 0x28
    CDUnknownBlockType _interruptionHandler;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
    HMDCAMDBlockManager *_blockInvoker;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000629a7e
+ (void)confirmSemaphoreAndSignal:(id)arg1;	// IMP=0x0010000000629939
- (void).cxx_destruct;	// IMP=0x0000000000628ba4
@property(readonly) HMDCAMDBlockManager *blockInvoker; // @synthesize blockInvoker=_blockInvoker;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property unsigned long long requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property _Bool directInvocations; // @synthesize directInvocations=_directInvocations;
@property(readonly) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly) _Bool isRoot; // @synthesize isRoot=_isRoot;
- (id)logIdentifier;	// IMP=0x0000000000628acb
- (void)_testCommunication:(CDUnknownBlockType)arg1;	// IMP=0x0000000000628ab8
- (void)_performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000006287f2
- (void)_removeActualBlockForKey:(id)arg1;	// IMP=0x00000000006286c5
- (void)_fireActualBlockWithArguments:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000006285a2
- (_Bool)testCommunication;	// IMP=0x00000000006283da
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000627fe3
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000627f32
- (id)remoteObjectProxy;	// IMP=0x0000000000627f1e
- (void)resetConnection;	// IMP=0x0000000000627d97
- (void)start;	// IMP=0x0000000000627962
- (void)blockReleased:(id)arg1;	// IMP=0x00000000006278ae
- (void)dealloc;	// IMP=0x0000000000627805
- (id)initAsMobile;	// IMP=0x00000000006277f3
- (id)initAsRoot;	// IMP=0x00000000006277dc
- (id)init;	// IMP=0x00000000006277c8
- (id)_initAsRoot:(_Bool)arg1;	// IMP=0x00000000006276bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
