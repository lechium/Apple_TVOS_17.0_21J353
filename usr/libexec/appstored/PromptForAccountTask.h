//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSAuthenticateResult, NSString, XPCRequestToken, _TtC9appstored6LogKey;

@interface PromptForAccountTask
{
    NSString *_username;	// 8 = 0x8
    _Bool _arcadePreorder;	// 16 = 0x10
    _Bool _usernameEditable;	// 17 = 0x11
    AMSAuthenticateResult *_authenticateResult;	// 24 = 0x18
    _TtC9appstored6LogKey *_logKey;	// 32 = 0x20
    XPCRequestToken *_requestToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000f7302
- (void)main;	// IMP=0x00100000000f6b58

@end
