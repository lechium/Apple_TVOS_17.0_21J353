//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttendingStatesProvidingProxy, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSAttendingStatesServiceListener : NSObject
{
    CSAttendingStatesProvidingProxy *_attendingStatesProvidingProxy;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSXPCConnection *_activeConnection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000010cd38
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic, setter=registerAttendingStatesProvidingProxy:) __weak CSAttendingStatesProvidingProxy *attendingStatesProvidingProxy; // @synthesize attendingStatesProvidingProxy=_attendingStatesProvidingProxy;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000010c8ef
- (void)listen;	// IMP=0x001000000010c785
- (id)init;	// IMP=0x001000000010c713

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

