//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol XAMAuthorizationProvider;

__attribute__((visibility("hidden")))
@interface XAMWriter : NSObject
{
    CDUnknownBlockType _writerConnectionFactory;	// 8 = 0x8
    id <XAMAuthorizationProvider> _authorizationProvider;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000010fa
+ (void)resetSharedWriter;	// IMP=0x00400000000010b2
- (void).cxx_destruct;	// IMP=0x0000000000002ab1
@property(readonly) id <XAMAuthorizationProvider> authorizationProvider; // @synthesize authorizationProvider=_authorizationProvider;
@property(readonly) CDUnknownBlockType writerConnectionFactory; // @synthesize writerConnectionFactory=_writerConnectionFactory;
- (_Bool)removeNoAuthenticationRequiredCookieWithError:(id *)arg1;	// IMP=0x0000000000002967
- (_Bool)createNoAuthenticationRequiredCookieWithError:(id *)arg1;	// IMP=0x0000000000002845
- (_Bool)enableAutomationModeWithError:(id *)arg1;	// IMP=0x0000000000002518
- (_Bool)disableAutomationModeWithError:(id *)arg1;	// IMP=0x00000000000023f6
- (_Bool)_usingSyncProxy:(CDUnknownBlockType)arg1 withError:(id *)arg2;	// IMP=0x00000000000020dd
- (void)removeNoAuthenticationRequiredCookieWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000020c6
- (void)createNoAuthenticationRequiredCookieWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000020ac
- (void)_usingAsyncProxyEnablePasswordlessAutomation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001da5
- (void)_enableAutomationModeWithProxy:(id)arg1 authorization:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001bb4
- (void)_authenticateAndEnableAutomationModeWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001a37
- (void)_enableAutomationModeWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000175a
- (void)_setAutomationModeEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001330
- (void)enableAutomationModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001316
- (void)disableAutomationModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000012ff
- (id)initWithWriterConnectionFactory:(CDUnknownBlockType)arg1 authorizationProvider:(id)arg2;	// IMP=0x000000000000125e

@end

