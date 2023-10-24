//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIScrollView.h"

@class CALayer, DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView
{
    _Bool _beingRemoved;	// 136 = 0x88
    UIWebBrowserView *_webBrowserView;	// 144 = 0x90
    UIWebOverflowScrollListener *_scrollListener;	// 152 = 0x98
    UIWebOverflowContentView *_overflowContentView;	// 160 = 0xa0
    DOMNode *_node;	// 168 = 0xa8
    CALayer *_webLayer;	// 176 = 0xb0
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
@property(nonatomic, getter=isBeingRemoved) _Bool beingRemoved; // @synthesize beingRemoved=_beingRemoved;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView; // @synthesize overflowContentView=_overflowContentView;
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener; // @synthesize scrollListener=_scrollListener;
@property(nonatomic) UIWebBrowserView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000014a0192
- (_Bool)fixUpViewAfterInsertion;	// IMP=0x00000000014a0126
- (id)superview;	// IMP=0x00000000014a005a
- (void)willBeRemoved;	// IMP=0x00000000014a0046
- (void)replaceLayer:(id)arg1;	// IMP=0x00000000014a0009
- (void)dealloc;	// IMP=0x000000000149ff95
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;	// IMP=0x000000000149fe7a

@end

