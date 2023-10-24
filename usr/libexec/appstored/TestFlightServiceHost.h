//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDExtensionMonitor, NSExtension;
@protocol OS_dispatch_queue, TestFlightServiceHostDelegate;

@interface TestFlightServiceHost : NSObject
{
    ASDExtensionMonitor *_monitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_runQueue;	// 24 = 0x18
    NSExtension *_currentExtension;	// 32 = 0x20
    double _serviceTime;	// 40 = 0x28
    id <TestFlightServiceHostDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001c8787

@end
