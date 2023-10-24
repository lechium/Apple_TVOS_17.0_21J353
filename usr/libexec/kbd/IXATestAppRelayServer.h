//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface IXATestAppRelayServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableDictionary *_registrations;	// 24 = 0x18
}

+ (id)sharedServer;	// IMP=0x002000000000337d
- (void).cxx_destruct;	// IMP=0x00200000000041e4
@property(retain, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_checkEntitlement:(id)arg1 withAuditToken:(CDStruct_4c969caf)arg2;	// IMP=0x0010000000004095
- (void)fetchEndpointForServiceName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003dc1
- (void)unregisterEndpointForServiceName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003adc
- (void)registerEndpoint:(id)arg1 forServiceName:(id)arg2 withEntitlement:(id)arg3 canReplace:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000037c9
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000035be
- (void)dealloc;	// IMP=0x0010000000003552
- (id)init;	// IMP=0x00100000000033d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
