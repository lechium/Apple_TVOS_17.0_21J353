//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPinchGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer
{
    UIScrollView *_scrollView;	// 16 = 0x10
    SEL _scrollViewAction;	// 24 = 0x18
    unsigned int _hasParentScrollView:1;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000137fd68
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000137fc4d
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000137fb21
- (double)_hysteresis;	// IMP=0x000000000137fa6e
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000137f9ab
- (void)setDelegate:(id)arg1;	// IMP=0x000000000137f904
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000137f8a1

@end

