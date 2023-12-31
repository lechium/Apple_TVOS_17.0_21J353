//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSObject, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCHIPXPCListener : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSXPCInterface *_exportedInterface;	// 24 = 0x18
    NSXPCInterface *_remoteObjectInterface;	// 32 = 0x20
    HMDHomeManager *_homeManager;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x001000000008683d
- (void).cxx_destruct;	// IMP=0x00000000000866ea
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(readonly) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000086202
- (id)createClientConnectionWithRemoteObjectProxy:(id)arg1 homeManager:(id)arg2 pid:(int)arg3;	// IMP=0x000000000008614f
- (void)stop;	// IMP=0x0000000000086112
- (void)start;	// IMP=0x0000000000086019
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000085e61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

