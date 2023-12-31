//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol AKAuthHandler, AKURLRequestProvider;

@interface AKDispatchableURLRequest : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSDictionary *_additionalHeaders;	// 16 = 0x10
    id <AKURLRequestProvider> _urlRequestProvider;	// 24 = 0x18
    id <AKAuthHandler> _authenticationHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000037c15
@property(readonly, nonatomic) id <AKAuthHandler> authenticationHandler; // @synthesize authenticationHandler=_authenticationHandler;
@property(readonly, nonatomic) id <AKURLRequestProvider> urlRequestProvider; // @synthesize urlRequestProvider=_urlRequestProvider;
@property(retain, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
- (id)_addingAdditionalHeaders:(id)arg1 forURLRequest:(id)arg2;	// IMP=0x0010000000037acb
- (void)_reauthenticateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037908
- (void)_reauthenticateAndExecuteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000377bb
- (void)_executeURLRequest:(id)arg1 withSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037383
- (void)_executeAllowingReauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037031
- (id)_urlSession;	// IMP=0x0010000000036f6a
- (void)invalidateWithError:(id)arg1;	// IMP=0x0010000000036f52
- (void)executeWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036e10
@property(readonly, nonatomic) NSDictionary *dispatchingInfo;
- (id)initWithURLRequestProvider:(id)arg1 authenticationHandler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

