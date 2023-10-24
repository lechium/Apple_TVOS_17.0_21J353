//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTServiceConnection, GTServiceProperties, NSMutableDictionary, NSSet;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface GTMTLCaptureServiceXPCProxy : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    GTServiceConnection *_connection;	// 16 = 0x10
    NSSet *_ignoreMethods;	// 24 = 0x18
    NSMutableDictionary *_observerIdToPort;	// 32 = 0x20
    GTServiceProperties *_serviceProperties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000106c1
@property(readonly, retain, nonatomic) GTServiceProperties *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
- (id)createCaptureDescriptor;	// IMP=0x000000000001061c
- (unsigned long long)nextRequestID;	// IMP=0x000000000001058f
- (id)query:(id)arg1;	// IMP=0x0000000000010531
- (id)update:(id)arg1;	// IMP=0x000000000001015e
- (id)startWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f9f3
- (void)stop;	// IMP=0x000000000000f97a
- (void)resume;	// IMP=0x000000000000f921
- (void)abort;	// IMP=0x000000000000f8c8
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x000000000000f78d
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x000000000000f5f7
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000000f572
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x000000000000f3a6

@end

