//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPowerManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _networkInterfaceActive;	// 16 = 0x10
    _Bool _networkAccessRequired;	// 17 = 0x11
    unsigned int _powerAssertion;	// 20 = 0x14
    struct __SCDynamicStore *_scStore;	// 24 = 0x18
    void *_scContext;	// 32 = 0x20
    _Bool _started;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004b95d1
@property(nonatomic, getter=isNetworkAccessRequired) _Bool networkAccessRequired; // @synthesize networkAccessRequired=_networkAccessRequired;
- (void)_ensureNetworkInterfaceMonitorStopped;	// IMP=0x00000000004b9519
- (int)_ensureNetworkInterfaceMonitorStarted;	// IMP=0x00000000004b929a
- (void)_update;	// IMP=0x00000000004b90f5
- (void)stop;	// IMP=0x00000000004b90a3
- (void)start;	// IMP=0x00000000004b9051
- (void)dealloc;	// IMP=0x00000000004b8fcd
- (id)init;	// IMP=0x00000000004b8f44

@end

