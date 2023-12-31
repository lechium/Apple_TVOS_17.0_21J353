//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHTTPCookieStorage.h"

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage
{
    unsigned long long _acceptPolicy;	// 16 = 0x10
    _Bool _behavesLikeNS;	// 24 = 0x18
    NSHTTPCookie2Storage *_store;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003bc88
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;	// IMP=0x000000000003bc26
- (unsigned long long)cookieAcceptPolicy;	// IMP=0x000000000003bc15
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;	// IMP=0x000000000003bba1
- (void)removeCookiesSinceDate:(id)arg1;	// IMP=0x000000000003badb
- (void)deleteCookie:(id)arg1;	// IMP=0x000000000003b9c2
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b8af
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003b899
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b583
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;	// IMP=0x000000000003b402
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ae59
- (id)cookiesForURL:(id)arg1;	// IMP=0x000000000003ab82
- (id)cookies;	// IMP=0x000000000003aa5d
- (void)_saveCookies;	// IMP=0x000000000003a9fb
- (void)_saveCookies:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a963
- (void)storeCookies:(id)arg1 forTask:(id)arg2;	// IMP=0x000000000003a4b0
- (void)_testingOfStoringOfCookie:(id)arg1;	// IMP=0x000000000003a1ca
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;	// IMP=0x0000000000039d5a
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;	// IMP=0x0000000000039d45
- (void)setCookie:(id)arg1;	// IMP=0x0000000000039c09
- (void)dealloc;	// IMP=0x0000000000039b85
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;	// IMP=0x0000000000039b7c
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x0000000000039b1f
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;	// IMP=0x0000000000039a85
- (id)init;	// IMP=0x00000000000399d8

@end

