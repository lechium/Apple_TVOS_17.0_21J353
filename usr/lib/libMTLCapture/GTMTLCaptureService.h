//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTCaptureDescriptor, GTObservableService, MTLCaptureDescriptorInternal, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, OS_os_log;

@interface GTMTLCaptureService : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSURL *_currentCaptureURL;	// 16 = 0x10
    MTLCaptureDescriptorInternal *_activeCaptureDesc;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_interposeSemaphore;	// 32 = 0x20
    GTObservableService *_observers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_timer;	// 56 = 0x38
    GTCaptureDescriptor *_captureRequest;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_serialQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000422f7
- (void)notifyCaptureRequest:(id)arg1;	// IMP=0x000000000004226a
- (void)notifyUnsupportedFenum:(id)arg1;	// IMP=0x00000000000421dd
- (void)notifyCaptureProgress:(id)arg1;	// IMP=0x0000000000042150
- (void)notifyCaptureObjectsChanged:(id)arg1;	// IMP=0x00000000000420c3
- (unsigned long long)nextRequestID;	// IMP=0x00000000000420b0
- (id)query:(id)arg1;	// IMP=0x0000000000041986
- (id)update:(id)arg1;	// IMP=0x0000000000040aba
- (id)startWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040594
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x0000000000040545
- (_Bool)hasObservers;	// IMP=0x0000000000040528
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;	// IMP=0x0000000000040471
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x000000000004039f
- (void)stop;	// IMP=0x000000000004035b
- (void)waitForInterposeSignal;	// IMP=0x0000000000040321
- (void)signalInterposeSemaphore;	// IMP=0x000000000004030c
- (id)initWithGuestApp:(struct GTMTLGuestAppClient *)arg1;	// IMP=0x00000000000401af

@end

