//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface VUIViewUserInteractionMonitor : NSObject
{
    UIView *_monitoredView;	// 8 = 0x8
    CDUnknownBlockType _interactionHandler;	// 16 = 0x10
    UIPanGestureRecognizer *_panGestureRecognizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000526bd
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType interactionHandler; // @synthesize interactionHandler=_interactionHandler;
@property(retain, nonatomic) UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void)_panGestureRecognized:(id)arg1;	// IMP=0x00000000000525fe
- (void)_registerPanGestureRecognizer;	// IMP=0x00000000000524fb
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000524f3
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000520f0
- (void)dealloc;	// IMP=0x00000000000520b0
- (id)initWithMonitoredView:(id)arg1 interactionHndler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

