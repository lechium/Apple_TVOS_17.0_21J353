//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDRemoteEventRouterServer, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterServerMessageReceiver : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDRemoteEventRouterServer *_server;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000509e4c
- (void)handleRequestMessage:(id)arg1;	// IMP=0x0000000000509def
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

