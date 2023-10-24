//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OspreyDeferredObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyRPCPromise : NSObject
{
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;	// 8 = 0x8
    OspreyDeferredObject *_deferredRPC;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b613
- (void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(CDUnknownBlockType)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b4d4
- (void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(CDUnknownBlockType)arg3 streamingResponseHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000b34e
- (id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b159
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 streamingResponseHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000af11
- (void)fulfill:(id)arg1;	// IMP=0x000000000000aefb
- (id)initWithFulfillmentQueue:(id)arg1;	// IMP=0x000000000000ae63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

