//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI26MultiPlayerSwipeRecognizer : NSObject
{
    MISSING_TYPE *hostView;	// 8 = 0x8
    MISSING_TYPE *action;	// 16 = 0x10
    MISSING_TYPE *initiallyFocusedView;	// 32 = 0x20
    MISSING_TYPE *translation;	// 40 = 0x28
    MISSING_TYPE *velocity;	// 56 = 0x38
    MISSING_TYPE *tapUpCaptured;	// 72 = 0x48
    MISSING_TYPE *tapDownCaptured;	// 73 = 0x49
    MISSING_TYPE *isEnabled;	// 74 = 0x4a
    MISSING_TYPE *$__lazy_storage_$_panGesture;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_tapUpGesture;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_tapDownGesture;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000291563
- (id)init;	// IMP=0x0000000000291530
- (void)onTapDownWithGesture:(id)arg1;	// IMP=0x000000000029139f
- (void)onTapUpWithGesture:(id)arg1;	// IMP=0x0000000000291339
- (void)onPanWithGesture:(id)arg1;	// IMP=0x00000000002912d4
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000291017

@end
