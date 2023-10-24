//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollViewDelegateForwarder : NSObject
{
    id <UIScrollViewDelegate> _delegate;	// 8 = 0x8
    UIWebView *_webView;	// 16 = 0x10
}

@property(nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000001492c46
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000001492bdd
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000001492b74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

