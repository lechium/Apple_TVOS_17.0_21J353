//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/WebEvent.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface WKWebEvent : WebEvent
{
    struct RetainPtr<UIEvent> _uiEvent;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x00000000004021b7
- (void).cxx_destruct;	// IMP=0x0000000000402190
@property(readonly, retain, nonatomic) UIEvent *uiEvent;
- (id)initWithEvent:(id)arg1;	// IMP=0x0000000000401fb6

@end

