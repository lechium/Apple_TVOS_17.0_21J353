//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RMConnectionEndpoint;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RMConnectionClient : NSObject
{
    _Bool _valid;	// 8 = 0x8
    RMConnectionEndpoint *_endpoint;	// 16 = 0x10
    NSString *_serviceName;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _streamingDataCallback;	// 40 = 0x28
    CDUnknownBlockType _messageHandler;	// 48 = 0x30
    NSMutableArray *_messageCache;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_connectionTimer;	// 64 = 0x40
    unsigned long long _connectionTimerDelay;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000008dee
- (void)endpoint:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008dbb
- (void)endpoint:(id)arg1 didReceiveStreamedData:(id)arg2;	// IMP=0x0000000000008d9e
- (void)endpointWasInvalidated:(id)arg1;	// IMP=0x0000000000008bb6
- (void)endpointWasInterrupted:(id)arg1;	// IMP=0x0000000000008b47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

