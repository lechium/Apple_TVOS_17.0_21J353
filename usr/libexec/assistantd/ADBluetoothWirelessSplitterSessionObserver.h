//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFNotifyStatePublisher, NSString;
@protocol ADBluetoothWirelessSplitterSession, OS_dispatch_queue;

@interface ADBluetoothWirelessSplitterSessionObserver : NSObject
{
    id <ADBluetoothWirelessSplitterSession> _wirelessSplitterSession;	// 8 = 0x8
    unsigned long long _observerCount;	// 16 = 0x10
    AFNotifyStatePublisher *_publisher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedWirelessSplitterSessionObserver;	// IMP=0x00200000002f3b02
- (void).cxx_destruct;	// IMP=0x00200000002f3a03
- (void)bluetoothWirelessSplitterSessionDidInvalidate:(id)arg1;	// IMP=0x00100000002f3949
- (void)bluetoothWirelessSplitterSession:(id)arg1 sessionInfoDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x00100000002f3810
- (void)_invalidate;	// IMP=0x00100000002f37db
- (void)stopObserving;	// IMP=0x00100000002f3790
- (void)startObserving;	// IMP=0x00100000002f3745
- (id)_init;	// IMP=0x00100000002f3653

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

