//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class AMSBinaryPromise, AMSUIWebClientContext, NSArray, NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface AMSUIWebView : AMSUICommonView
{
    _Bool _contentLoaded;	// 8 = 0x8
    double _topInset;	// 16 = 0x10
    WKWebView *_underlyingWebView;	// 24 = 0x18
    NSArray *_baseScripts;	// 32 = 0x20
    AMSBinaryPromise *_contentRulesPromise;	// 40 = 0x28
    AMSUIWebClientContext *_context;	// 48 = 0x30
    AMSBinaryPromise *_currentLoadPromise;	// 56 = 0x38
}

+ (id)_getSetCookiesForResponse:(id)arg1;	// IMP=0x00100000000af86f
- (void).cxx_destruct;	// IMP=0x00000000000b1f97
@property(retain, nonatomic) AMSBinaryPromise *currentLoadPromise; // @synthesize currentLoadPromise=_currentLoadPromise;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSBinaryPromise *contentRulesPromise; // @synthesize contentRulesPromise=_contentRulesPromise;
@property(retain, nonatomic) NSArray *baseScripts; // @synthesize baseScripts=_baseScripts;
@property(readonly, nonatomic) WKWebView *underlyingWebView; // @synthesize underlyingWebView=_underlyingWebView;
@property(readonly, nonatomic) _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
- (id)_setupContentRulesForWebView:(id)arg1 context:(id)arg2;	// IMP=0x00000000000b1095
- (void)_receiveJSObject:(id)arg1 logKey:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b05e9
- (id)_prepareWithURL:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b01e6
- (id)_parseRequestError:(id)arg1 logKey:(id)arg2;	// IMP=0x00000000000afdb2
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000afbc8
- (id)_jsonLogStringWithDictionary:(id)arg1;	// IMP=0x00000000000afaaf
- (void)_finishedLoading;	// IMP=0x00000000000af80a
- (void)_addScriptsToContentController:(id)arg1 additionalScripts:(id)arg2;	// IMP=0x00000000000af091
- (void)_webView:(id)arg1 contentRuleListWithIdentifier:(id)arg2 performedAction:(id)arg3 forURL:(id)arg4;	// IMP=0x00000000000aef1d
- (void)_webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 userInfo:(id)arg4;	// IMP=0x00000000000aedc9
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;	// IMP=0x00000000000aec57
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x00000000000aea50
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;	// IMP=0x00000000000ae8fa
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;	// IMP=0x00000000000ae7a4
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x00000000000ae648
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x00000000000ae4de
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x00000000000ae314
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000adc89
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ad650
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ad542
- (void)updateUserScriptsWithScripts:(id)arg1;	// IMP=0x00000000000aced2
- (void)takeSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000acc28
- (id)sendJSRequest:(id)arg1;	// IMP=0x00000000000abeb1
- (id)loadRequest:(id)arg1;	// IMP=0x00000000000abbd0
- (id)loadRequest:(id)arg1 response:(id)arg2 responseData:(id)arg3;	// IMP=0x00000000000ab66c
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) double bottomInset;
- (void)dealloc;	// IMP=0x00000000000ab5e3
- (void)layoutSubviews;	// IMP=0x00000000000ab54d
- (id)initWithContext:(id)arg1 additionalScripts:(id)arg2;	// IMP=0x00000000000ab150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

