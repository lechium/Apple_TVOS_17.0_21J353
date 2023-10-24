//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSafeBrowsingWarning : UIScrollView
{
    struct CompletionHandler<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL>&&)> _completionHandler;	// 8 = 0x8
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> _warning;	// 16 = 0x10
    struct WeakObjCPtr<WKSafeBrowsingTextView> _details;	// 24 = 0x18
    struct WeakObjCPtr<WKSafeBrowsingBox> _box;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000827007
- (void).cxx_destruct;	// IMP=0x0000000000826f90
- (_Bool)forMainFrameNavigation;	// IMP=0x0000000000826f7c
- (void)clickedOnLink:(id)arg1;	// IMP=0x0000000000826e39
- (void)goBackClicked;	// IMP=0x0000000000826d9b
- (void)dealloc;	// IMP=0x0000000000826c78
- (void)didMoveToWindow;	// IMP=0x0000000000826c66
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000826c4e
- (void)layoutSubviews;	// IMP=0x0000000000826c0d
- (void)layoutText;	// IMP=0x0000000000826bec
- (void)updateContentSize;	// IMP=0x00000000008269c7
- (void)showDetailsClicked;	// IMP=0x0000000000826571
- (void)addContent;	// IMP=0x0000000000825dd3
- (id)initWithFrame:(struct CGRect)arg1 safeBrowsingWarning:(const void *)arg2 completionHandler:(void *)arg3;	// IMP=0x0000000000825bdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

