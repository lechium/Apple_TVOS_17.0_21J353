//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncCore, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BMSyncServiceServer : NSObject
{
    BMSyncCore *_core;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000260c8
- (void)peerInformationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025bed
- (void)remoteDevicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002566b
- (void)cloudKitSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025590
- (void)triggerCloudKitSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002550e
- (void)rapportSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000253e0
- (void)triggerRapportSyncDeviceIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025269
- (void)triggerRapportSyncWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002510f
- (void)_rapportSyncWithDevices:(id)arg1 syncTriggeredHandler:(CDUnknownBlockType)arg2 syncCompletedHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000024dd8
- (void)_rapportSyncWithSyncTriggeredHandler:(CDUnknownBlockType)arg1 syncCompletedHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024b40
- (void)_cloudKitSyncWithSyncTriggeredHandler:(CDUnknownBlockType)arg1 syncCompletedHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024824
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000246bd
- (id)initWithQueue:(id)arg1 core:(id)arg2;	// IMP=0x00100000000245d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

