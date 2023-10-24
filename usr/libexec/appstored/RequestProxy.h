//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDRequest, RequestBrokerClient;
@protocol ASDRequestDelegate, RequestController;

@interface RequestProxy : NSObject
{
    RequestBrokerClient *_broker;	// 8 = 0x8
    id <ASDRequestDelegate> _delegate;	// 16 = 0x10
    ASDRequest<RequestController> *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008da27
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008da0e
- (id)remoteObjectProxy;	// IMP=0x001000000008d9f5
- (void)startWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d8a7
- (void)cancelWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d759
- (id)init;	// IMP=0x001000000008d689

@end
