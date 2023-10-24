//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIScreen, UIWindowScene;
@protocol UISplitKeyboardSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardMotionSupport : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    UIWindowScene *_canvas;	// 16 = 0x10
    id <UISplitKeyboardSource> _controller;	// 24 = 0x18
}

+ (id)supportForUIScene:(id)arg1;	// IMP=0x0010000000c310ed
+ (id)supportForScreen:(id)arg1;	// IMP=0x0010000000c31048
- (void).cxx_destruct;	// IMP=0x0000000000c3162f
- (_Bool)generateSplitNotificationForNewPlacement:(id)arg1;	// IMP=0x0000000000c31627
- (void)translateToPlacement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000c31610
- (void)translateToPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000c31396
@property(nonatomic) __weak id <UISplitKeyboardSource> masterController;
- (void)_updatedController;	// IMP=0x0000000000c31325
- (void)_connectController:(id)arg1;	// IMP=0x0000000000c31314
- (void)_disconnectingController:(id)arg1;	// IMP=0x0000000000c312fa
- (id)_intendedCanvas;	// IMP=0x0000000000c312de
@property(readonly) UIScreen *_intendedScreen;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x0000000000c312bc
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;	// IMP=0x0000000000c31227
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000c31192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

