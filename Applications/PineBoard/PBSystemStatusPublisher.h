//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAtomicSignal, NSString, RPRemoteDisplayDiscovery;
@protocol OS_dispatch_queue, PBSSystemStatusSink;

@interface PBSystemStatusPublisher : NSObject
{
    unsigned char _queue_remoteDisplayDiscoveryState;	// 8 = 0x8
    RPRemoteDisplayDiscovery *_queue_remoteDisplayDiscovery;	// 16 = 0x10
    BSAtomicSignal *_invalidationSignal;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <PBSSystemStatusSink> _systemStatusSink;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005118c
@property(readonly, nonatomic) id <PBSSystemStatusSink> systemStatusSink; // @synthesize systemStatusSink=_systemStatusSink;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BSAtomicSignal *invalidationSignal; // @synthesize invalidationSignal=_invalidationSignal;
@property(nonatomic) unsigned char remoteDisplayDiscoveryState; // @synthesize remoteDisplayDiscoveryState=_queue_remoteDisplayDiscoveryState;
@property(readonly, nonatomic) RPRemoteDisplayDiscovery *remoteDisplayDiscovery; // @synthesize remoteDisplayDiscovery=_queue_remoteDisplayDiscovery;
- (void)_queue_updateRemoteDisplayDiscoveryStateSystemStatus;	// IMP=0x00100000000510b5
- (void)invalidate;	// IMP=0x0010000000050ea8
- (void)dealloc;	// IMP=0x0010000000050de2
- (id)init;	// IMP=0x0010000000050d87
- (id)initWithSystemStatusSink:(id)arg1 remoteDisplayDiscovery:(id)arg2;	// IMP=0x00100000000507ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

