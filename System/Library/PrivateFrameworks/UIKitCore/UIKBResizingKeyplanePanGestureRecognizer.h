//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPanGestureRecognizer.h"

@protocol UIKBResizingKeyplanePanGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBResizingKeyplanePanGestureRecognizer : UIPanGestureRecognizer
{
    id <UIKBResizingKeyplanePanGestureRecognizerDelegate> _resizingDelegate;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000011c7eef
@property(nonatomic) __weak id <UIKBResizingKeyplanePanGestureRecognizerDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
- (_Bool)_willScrollY;	// IMP=0x00000000011c7e0f

@end

