//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccountRegistry, HMDModernTransportDeviceReachabilityObserver, HMDRemoteDeviceMonitor, NSArray, NSString;
@protocol HMDRemoteHomeMessagingManager;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteMessageTransportDefaultDataSource : NSObject
{
    NSArray *_transports;	// 8 = 0x8
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 16 = 0x10
    HMDAccountRegistry *_accountRegistry;	// 24 = 0x18
    HMDModernTransportDeviceReachabilityObserver *_reachabilityObserver;	// 32 = 0x20
    id <HMDRemoteHomeMessagingManager> _homeMessagingManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000088f0c8
@property(readonly, nonatomic) id <HMDRemoteHomeMessagingManager> homeMessagingManager; // @synthesize homeMessagingManager=_homeMessagingManager;
@property(readonly, nonatomic) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver; // @synthesize reachabilityObserver=_reachabilityObserver;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, nonatomic) NSArray *transports; // @synthesize transports=_transports;
- (id)secureSessionWithDevice:(id)arg1;	// IMP=0x000000000088f012
- (id)init;	// IMP=0x000000000088ee73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

