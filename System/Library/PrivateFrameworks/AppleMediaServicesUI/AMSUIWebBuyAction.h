//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSUIWebClientContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBuyAction
{
    _Bool _legacyBuy;	// 8 = 0x8
    _Bool _makeCurrentAccount;	// 9 = 0x9
    _Bool _requiresAccount;	// 10 = 0xa
    ACAccount *_account;	// 16 = 0x10
    NSString *_buyParams;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSString *_contentType;	// 40 = 0x28
    NSDictionary *_metricsOverlay;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006b3c2
@property(retain, nonatomic) NSDictionary *metricsOverlay; // @synthesize metricsOverlay=_metricsOverlay;
@property(nonatomic) _Bool requiresAccount; // @synthesize requiresAccount=_requiresAccount;
@property(nonatomic) _Bool makeCurrentAccount; // @synthesize makeCurrentAccount=_makeCurrentAccount;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool legacyBuy; // @synthesize legacyBuy=_legacyBuy;
@property(retain, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_runLegacyBuy;	// IMP=0x000000000006a199
- (id)_runBuyWithContentType:(id)arg1;	// IMP=0x0000000000069ac5
- (id)_runBuy;	// IMP=0x0000000000069271
- (id)_presentingSceneIdentifierPromise;	// IMP=0x00000000000690b9
- (id)_presentingSceneIdentifier;	// IMP=0x0000000000068dda
- (id)_presentingSceneBundleIdentifierPromise;	// IMP=0x0000000000068c22
- (id)_presentingSceneBundleIdentifier;	// IMP=0x00000000000689d4
- (id)_purchasePluginIdentifierForContentType:(id)arg1;	// IMP=0x00000000000689cc
- (id)purchaseContentWithType:(id)arg1;	// IMP=0x00000000000684ee
- (void)_makeCurrentAccountIfNeeded:(id)arg1;	// IMP=0x00000000000683c1
- (id)_iTunesAccount;	// IMP=0x0000000000068290
- (void)purchase:(id)arg1 handleSceneBundleIdentifierRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006816e
- (void)purchase:(id)arg1 handleSceneIdentifierRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006807a
- (void)purchase:(id)arg1 handleWindowRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067f1e
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067d27
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067c4b
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067add
- (id)runAction;	// IMP=0x000000000006754d
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000670c2

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

