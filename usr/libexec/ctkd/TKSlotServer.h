//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener;

@interface TKSlotServer : NSObject
{
    NSMutableArray *_registrations;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
    NSXPCListener *_registryListener;	// 24 = 0x18
    NSXPCListener *_clientListener;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000e334
@property(readonly, nonatomic) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property(readonly, nonatomic) NSXPCListener *registryListener; // @synthesize registryListener=_registryListener;
- (void)removeClient:(id)arg1;	// IMP=0x001000000000e2a4
- (void)addClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000de26
- (void)removeSlotRegistration:(id)arg1;	// IMP=0x001000000000da7a
- (void)ensureSlotWatchersRunning;	// IMP=0x001000000000d7e1
- (void)notifyDesktopUp;	// IMP=0x001000000000d77b
- (void)addSlotRegistration:(id)arg1 name:(id)arg2;	// IMP=0x001000000000d077
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000cfe3
- (void)stop;	// IMP=0x001000000000cf54
- (void)start;	// IMP=0x001000000000cf19
- (void)dealloc;	// IMP=0x001000000000cebe
- (id)initWithRegistryListener:(id)arg1 clientListener:(id)arg2;	// IMP=0x001000000000cd9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

