//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer, MISSING_TYPE;
@protocol OS_dispatch_queue;

@interface GTTransportSource_replayer : NSObject
{
    CDUnknownBlockType _messageHandler;	// 8 = 0x8
    CDUnknownBlockType _cancellationHandler;	// 16 = 0x10
    CDUnknownBlockType _registrationHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_mqueue;	// 40 = 0x28
    GTTransport_replayer *_transport;	// 48 = 0x30
    struct atomic<int> _state;	// 56 = 0x38
}

- (void)_dispatch:(id)arg1;	// IMP=0x002000000004060d
- (void)_cancel;	// IMP=0x0010000000040584
- (void)_callCancellationHandler;	// IMP=0x0010000000040544
- (void)_register;	// IMP=0x00100000000404bd
- (void)_callRegistrationHandler;	// IMP=0x0010000000040488
@property(copy, nonatomic) CDUnknownBlockType registrationHandler;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004039c
- (CDUnknownBlockType)cancellationHandler;	// IMP=0x0010000000040392
@property(copy, nonatomic) CDUnknownBlockType messageHandler;
- (_Bool)cancelled;	// IMP=0x001000000004030c
- (MISSING_TYPE *)cancel;	// IMP=0x00100000000402ae
- (void)suspend;	// IMP=0x00100000000402a0
- (void)resume;	// IMP=0x0010000000040292
- (void)dealloc;	// IMP=0x001000000004020a
- (id)_initWithQueue:(id)arg1 transport:(id)arg2;	// IMP=0x0010000000040009
- (id)init;	// IMP=0x001000000003ffde

@end

