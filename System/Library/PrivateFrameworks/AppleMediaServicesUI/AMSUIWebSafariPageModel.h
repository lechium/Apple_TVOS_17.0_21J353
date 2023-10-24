//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebLoadingPageModel, AMSUIWebNavigationBarModel, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebSafariPageModel
{
    _Bool _hideToolBar;	// 8 = 0x8
    _Bool _showShareButton;	// 9 = 0x9
    NSString *_backgroundColor;	// 16 = 0x10
    AMSMetricsEvent *_impressionEvent;	// 24 = 0x18
    AMSUIWebNavigationBarModel *_navigationBar;	// 32 = 0x20
    NSString *_callbackScheme;	// 40 = 0x28
    NSDictionary *_data;	// 48 = 0x30
    AMSUIWebLoadingPageModel *_loadingModel;	// 56 = 0x38
    NSURL *_URL;	// 64 = 0x40
    AMSUIWebClientContext *_context;	// 72 = 0x48
    struct CGSize _windowSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000a136d
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
@property(retain, nonatomic) AMSUIWebLoadingPageModel *loadingModel; // @synthesize loadingModel=_loadingModel;
@property(nonatomic) _Bool hideToolBar; // @synthesize hideToolBar=_hideToolBar;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *callbackScheme; // @synthesize callbackScheme=_callbackScheme;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)loadPage;	// IMP=0x00000000000a1224
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x00000000000a1066
@property(readonly, copy) NSString *description;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000a0721

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

