//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@class NSString, UILongPressGestureRecognizer, UIMenuController, UIPDFMagnifierController, UIPDFPageView, UIPDFSelectionController, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPDFViewTouchHandler : UIResponder
{
    UIPDFPageView *_pdfPageView;	// 8 = 0x8
    UITapGestureRecognizer *_doubleTapRecognizer;	// 16 = 0x10
    UITapGestureRecognizer *_singleTapRecognizer;	// 24 = 0x18
    UILongPressGestureRecognizer *_briefPressRecognizer;	// 32 = 0x20
    UILongPressGestureRecognizer *_longPressRecognizer;	// 40 = 0x28
    UITapGestureRecognizer *_twoFingerTapRecognizer;	// 48 = 0x30
    UIMenuController *_menuController;	// 56 = 0x38
    UIPDFSelectionController *_selectionController;	// 64 = 0x40
    UIPDFMagnifierController *_magnifyController;	// 72 = 0x48
    _Bool _trackingSelection;	// 80 = 0x50
    _Bool _showMagnifier;	// 81 = 0x51
    _Bool _showLoupe;	// 82 = 0x52
    _Bool _firstTouch;	// 83 = 0x53
    _Bool _useDelegateForLinks;	// 84 = 0x54
    _Bool _allowMenu;	// 85 = 0x55
}

+ (void)releaseViewManager;	// IMP=0x0010000000f2c379
@property _Bool allowMenu; // @synthesize allowMenu=_allowMenu;
- (void)hideMenu;	// IMP=0x0000000000f2d932
- (void)showMenu;	// IMP=0x0000000000f2d4e6
- (void)selectAll:(id)arg1;	// IMP=0x0000000000f2d467
- (void)copy:(id)arg1;	// IMP=0x0000000000f2d425
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000f2d35f
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000f2d357
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000f2d1c1
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000f2d160
- (void)twoFingerTapRecognized:(id)arg1;	// IMP=0x0000000000f2d03f
- (void)singleTapRecognized:(id)arg1;	// IMP=0x0000000000f2cf94
- (void)doubleTapRecognized:(id)arg1;	// IMP=0x0000000000f2cefc
- (void)longPressRecognized:(id)arg1;	// IMP=0x0000000000f2cd04
- (void)briefPressRecognized:(id)arg1;	// IMP=0x0000000000f2ca8a
- (_Bool)delegateGesture:(id)arg1 kind:(int)arg2;	// IMP=0x0000000000f2c9c4
- (void)setFirstTouch;	// IMP=0x0000000000f2c9a8
- (_Bool)resignFirstResponder;	// IMP=0x0000000000f2c94a
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000f2c942
- (id)nextResponder;	// IMP=0x0000000000f2c931
- (void)disableRecognizers;	// IMP=0x0000000000f2c89b
- (void)enableRecognizers;	// IMP=0x0000000000f2c805
- (void)dealloc;	// IMP=0x0000000000f2c667
- (id)initWithView:(id)arg1;	// IMP=0x0000000000f2c397

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

