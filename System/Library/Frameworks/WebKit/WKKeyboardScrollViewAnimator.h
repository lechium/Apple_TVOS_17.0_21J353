//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WKKeyboardScrollViewAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollViewAnimator : NSObject
{
    struct WeakObjCPtr<UIScrollView> _scrollView;	// 8 = 0x8
    struct RetainPtr<WKKeyboardScrollingAnimator> _animator;	// 16 = 0x10
    _Bool _delegateRespondsToIsKeyboardScrollable;	// 24 = 0x18
    _Bool _delegateRespondsToDistanceForIncrement;	// 25 = 0x19
    _Bool _delegateRespondsToWillScroll;	// 26 = 0x1a
    _Bool _delegateRespondsToDidFinishScrolling;	// 27 = 0x1b
    id <WKKeyboardScrollViewAnimatorDelegate> _delegate;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000003fcc56
- (void).cxx_destruct;	// IMP=0x00000000003fcc1c
@property(nonatomic) __weak id <WKKeyboardScrollViewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishScrolling;	// IMP=0x00000000003fcbd6
- (RectEdges_e190dc78)rubberbandableDirections;	// IMP=0x00000000003fcb6c
- (RectEdges_e190dc78)scrollableDirectionsFromOffset:(struct CGPoint)arg1;	// IMP=0x00000000003fca67
- (struct CGSize)interactiveScrollVelocity;	// IMP=0x00000000003fc9f2
- (struct CGPoint)boundedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000003fc9a0
- (struct CGPoint)contentOffset;	// IMP=0x00000000003fc96a
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint)arg1;	// IMP=0x00000000003fc914
- (void)scrollToContentOffset:(struct FloatPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003fc830
- (double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;	// IMP=0x00000000003fc747
- (_Bool)isKeyboardScrollable;	// IMP=0x00000000003fc70d
- (_Bool)scrollTriggeringKeyIsPressed;	// IMP=0x00000000003fc6f7
- (void)handleKeyEvent:(id)arg1;	// IMP=0x00000000003fc6e1
- (_Bool)beginWithEvent:(id)arg1;	// IMP=0x00000000003fc6cb
- (void)willStartInteractiveScroll;	// IMP=0x00000000003fc6b5
- (void)stopScrollingImmediately;	// IMP=0x00000000003fc611
- (void)invalidate;	// IMP=0x00000000003fc5cd
- (void)dealloc;	// IMP=0x00000000003fc58b
- (id)initWithScrollView:(id)arg1;	// IMP=0x00000000003fc508
- (id)init;	// IMP=0x00000000003fc500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

