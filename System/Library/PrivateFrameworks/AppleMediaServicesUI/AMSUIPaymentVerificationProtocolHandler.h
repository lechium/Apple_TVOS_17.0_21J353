//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@class ACAccount, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentVerificationProtocolHandler : AMSURLProtocolHandler
{
    ACAccount *_account;	// 8 = 0x8
    NSMutableDictionary *_accountParameters;	// 16 = 0x10
}

+ (id)_accountToUseFromGivenAccount:(id)arg1 accountParameters:(id)arg2 accountStore:(id)arg3;	// IMP=0x0010000000057401
+ (id)_promiseToFetchURLResponseForAccount:(id)arg1 accountParameters:(id)arg2 url:(id)arg3 bag:(id)arg4 requestBody:(id)arg5 bodyEncoding:(long long)arg6 contentType:(id)arg7;	// IMP=0x001000000005716f
+ (id)_sessionWithBag:(id)arg1 account:(id)arg2 accountParameters:(id)arg3;	// IMP=0x0010000000057045
+ (id)_encoderWithBag:(id)arg1 account:(id)arg2;	// IMP=0x0010000000056f43
+ (void)_setHeaders:(id)arg1 on:(id)arg2;	// IMP=0x00100000000564b3
+ (id)_headersFromAccountParameters:(id)arg1;	// IMP=0x00100000000562b3
+ (id)_headersFromAccount:(id)arg1;	// IMP=0x00100000000562a6
+ (id)headersFromAccount:(id)arg1 accountParameters:(id)arg2;	// IMP=0x0010000000056273
+ (id)requestAddingHeaders:(id)arg1 to:(id)arg2;	// IMP=0x00100000000561d4
- (void).cxx_destruct;	// IMP=0x00000000000575d6
@property(retain, nonatomic) NSMutableDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056865
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000005655c
- (id)initWithAccount:(id)arg1 accountParameters:(id)arg2;	// IMP=0x000000000005611f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

