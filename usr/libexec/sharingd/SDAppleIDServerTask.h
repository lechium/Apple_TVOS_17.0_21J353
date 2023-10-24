//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString, NSURLRequest, NSURLSession;
@protocol OS_dispatch_queue;

@interface SDAppleIDServerTask : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSString *_gsToken;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
    NSDictionary *_taskInfo;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    NSURLRequest *_urlRequest;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000b71b1
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *gsToken; // @synthesize gsToken=_gsToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sendRequest;	// IMP=0x00100000000b6f30
- (id)_parseServerResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000b6e23
- (id)_parseGetMyInfoResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000b66dc
- (MISSING_TYPE *)_parseFindPersonResponse:error: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000b5fa5
- (id)_parseFetchCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000b568e
- (id)_parseCreateCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000b52c3
- (void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3;	// IMP=0x00100000000b4a27
- (void)_invalidate;	// IMP=0x00100000000b4935
- (void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3;	// IMP=0x00100000000b45dd
- (void)_handleGSTokenIsAvailable;	// IMP=0x00100000000b44a8
- (void)_handleURLRequestIsAvailable;	// IMP=0x00100000000b4114
- (void)invalidate;	// IMP=0x00100000000b40b3
- (void)_activate;	// IMP=0x00100000000b3f57
- (void)_urlRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b3e04
- (void)_handleURLIsAvailable:(id)arg1 error:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3b46
- (void)_urlWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b3750
- (_Bool)_isTaskInfoValid;	// IMP=0x00100000000b31f6
- (void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2;	// IMP=0x00100000000b31df
- (void)_callResponseHandlerWithInfo:(id)arg1 errorInfo:(id)arg2 error:(int)arg3;	// IMP=0x00100000000b30c6
- (void)activate;	// IMP=0x00100000000b3063
- (id)description;	// IMP=0x00100000000b302a
- (id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3;	// IMP=0x00100000000b2e98

@end

