//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI22UIKitGestureRecognizer : UIGestureRecognizer
{
    MISSING_TYPE *eventBridge;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001287bf6
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000001287b9a
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001287a85
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001287a74
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001287a63
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001287a52
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000128798f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000128796f
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000128794f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000128793e
- (void)reset;	// IMP=0x000000000128790d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000012878c1
- (id)init;	// IMP=0x0000000001287842

@end
