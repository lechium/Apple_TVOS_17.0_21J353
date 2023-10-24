//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADClientLiteListener, NSString, NSXPCConnection;
@protocol AFClientLiteClientCommandHandling, OS_dispatch_group, OS_dispatch_queue;

@interface ADClientLite : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_outstandingCommandGroup;	// 16 = 0x10
    ADClientLiteListener *_listener;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    id <AFClientLiteClientCommandHandling> _handler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001374ae
- (void)adRequestEncounteredIntermediateError:(id)arg1;	// IMP=0x00100000001374a8
- (void)adRequestDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000001374a2
- (void)adRequestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000137354
- (void)adRequestWillReceiveCommand:(id)arg1;	// IMP=0x001000000013734e
- (oneway void)handleRemoteCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000136e8c
- (id)initWithListener:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000136d9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

