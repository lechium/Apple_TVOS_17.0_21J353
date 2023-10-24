//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIContextMenuContainerView : UIView
{
    _Bool _lastHitTestWasPassedThroughToInteraction;	// 128 = 0x80
    _Bool _inPassthroughViewHitTest;	// 129 = 0x81
    _Bool _didDismiss;	// 130 = 0x82
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 136 = 0x88
    _Bool _passesBackgroundViewTouchesThrough;	// 144 = 0x90
    UIView *_contentWrapperView;	// 152 = 0x98
    CDUnknownBlockType _dismissalHandler;	// 160 = 0xa0
    CDUnknownBlockType _subtreeTraitPropagationHandler;	// 168 = 0xa8
    CDUnknownBlockType _sizeChangeHandler;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000025f2fc
@property(nonatomic) _Bool passesBackgroundViewTouchesThrough; // @synthesize passesBackgroundViewTouchesThrough=_passesBackgroundViewTouchesThrough;
@property(copy, nonatomic) CDUnknownBlockType sizeChangeHandler; // @synthesize sizeChangeHandler=_sizeChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType subtreeTraitPropagationHandler; // @synthesize subtreeTraitPropagationHandler=_subtreeTraitPropagationHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(nonatomic) __weak UIView *contentWrapperView; // @synthesize contentWrapperView=_contentWrapperView;
- (_Bool)isScrollEnabled;	// IMP=0x000000000025f251
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000025f238
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;	// IMP=0x000000000025f1a3
- (void)_attemptDismiss:(_Bool)arg1;	// IMP=0x000000000025f0fb
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000025ef62
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x000000000025edab
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x000000000025ed94
- (void)didMoveToWindow;	// IMP=0x000000000025ed10
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x000000000025ec6e
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000025ec1d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000025eaf1
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000025e9c5
- (id)initWithFrame:(struct CGRect)arg1 allowsBackgroundInteractionAcrossProccesses:(_Bool)arg2;	// IMP=0x000000000025e92e
- (_Bool)isTransparentFocusItem;	// IMP=0x000000000025e926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

