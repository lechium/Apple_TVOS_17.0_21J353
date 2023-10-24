//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WAKView;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject
{
    _Bool closed;	// 8 = 0x8
    _Bool ignoringMouseDraggedEvents;	// 9 = 0x9
    _Bool printing;	// 10 = 0xa
    _Bool paginateScreenContent;	// 11 = 0xb
    WAKView *layerHostingView;	// 16 = 0x10
    struct RetainPtr<WebEvent> mouseDownEvent;	// 24 = 0x18
    _Bool handlingMouseDownEvent;	// 32 = 0x20
    struct RetainPtr<WebEvent> keyDownEvent;	// 40 = 0x28
    _Bool exposeInputContext;	// 48 = 0x30
    struct CGPoint lastScrollPosition;	// 56 = 0x38
    _Bool inScrollPositionChanged;	// 72 = 0x48
    struct RetainPtr<WebPluginController> pluginController;	// 80 = 0x50
    struct RetainPtr<NSArray> pageRects;	// 88 = 0x58
    struct WebHTMLViewInterpretKeyEventsParameters *interpretKeyEventsParameters;	// 96 = 0x60
    struct RetainPtr<WebDataSource> dataSource;	// 104 = 0x68
    SEL selectorForDoCommandBySelector;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00000000000bb970
- (void).cxx_destruct;	// IMP=0x00000000000bb8f0
- (void)clear;	// IMP=0x00000000000bb880
- (void)dealloc;	// IMP=0x00000000000bb830

@end

