//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSURLRequest;
@protocol MGRemoteQueryServerHandlerProtocol, MGRemoteQueryServerTransactionDelegate, OS_dispatch_queue, OS_nw_connection, OS_nw_content_context, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryServerTransaction : NSObject
{
    id <MGRemoteQueryServerTransactionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_nw_connection> *_connection;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
    NSURLRequest *_request;	// 56 = 0x38
    NSObject<OS_nw_content_context> *_responseContext;	// 64 = 0x40
    NSObject<MGRemoteQueryServerHandlerProtocol> *_handler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000223c1
@property(retain, nonatomic) NSObject<MGRemoteQueryServerHandlerProtocol> *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSObject<OS_nw_content_context> *responseContext; // @synthesize responseContext=_responseContext;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <MGRemoteQueryServerTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_handlerForRequest:(id)arg1;	// IMP=0x0000000000021f9c
- (void)_delegateNotifyInvalidated;	// IMP=0x0000000000021f1f
- (void)_delegateNotifyActivityOccurred;	// IMP=0x0000000000021ea2
- (void)_delegateNotifyTimeoutInterval:(unsigned long long)arg1;	// IMP=0x0000000000021e20
- (void)_responseHandlePayloadFromHandler:(id)arg1 error:(id)arg2;	// IMP=0x0000000000021c15
- (void)_responseObtainPayloadFromHandler;	// IMP=0x00000000000217b0
- (void)_responseEnd;	// IMP=0x00000000000213de
- (void)_responseAppend:(id)arg1;	// IMP=0x0000000000020fff
- (void)_responseStart;	// IMP=0x0000000000020b00
- (_Bool)_requestValidate;	// IMP=0x00000000000208e4
- (void)_requestParse:(id)arg1;	// IMP=0x00000000000205e8
- (void)_requestProcess:(id)arg1;	// IMP=0x0000000000020493
- (void)_requestRead;	// IMP=0x000000000001fe16
- (void)_invalidated;	// IMP=0x000000000001fdb4
- (void)_invalidate;	// IMP=0x000000000001fbc6
- (void)_handleNWError:(id)arg1;	// IMP=0x000000000001fb3b
- (void)_handleError:(id)arg1;	// IMP=0x000000000001fa10
- (void)_prepareConnection;	// IMP=0x000000000001f698
- (void)_updateState:(unsigned long long)arg1;	// IMP=0x000000000001f42b
- (id)description;	// IMP=0x000000000001f350
- (void)dealloc;	// IMP=0x000000000001f312
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;	// IMP=0x000000000001f12c

@end

