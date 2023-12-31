//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection, RPPrivateAdvertiser, RPPrivateDaemon, RPPrivateDiscovery;
@protocol OS_dispatch_queue;

@interface RPPrivateXPCConnection : NSObject
{
    _Bool _direct;	// 8 = 0x8
    _Bool _entitled;	// 9 = 0x9
    RPPrivateAdvertiser *;	// 16 = 0x10
    RPPrivateDiscovery *_activatedDiscovery;	// 24 = 0x18
    RPPrivateDaemon *_daemon;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSXPCConnection *_xpcCnx;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000007edb0
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool direct; // @synthesize direct=_direct;
@property(retain, nonatomic) RPPrivateDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) RPPrivateDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
@property(readonly, nonatomic) RPPrivateAdvertiser *activatedAdvertiser; // @synthesize activatedAdvertiser=_activatedAdvertiser;
- (void)xpcPrivateDiscoveryUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ec2a
- (void)xpcPrivateDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007eb1a
- (void)xpcPrivateAdvertiserUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ea1d
- (void)xpcPrivateAdvertiserActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e90d
- (void)xpcConnectionInvalidated;	// IMP=0x001000000007e78a
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x001000000007e664

@end

