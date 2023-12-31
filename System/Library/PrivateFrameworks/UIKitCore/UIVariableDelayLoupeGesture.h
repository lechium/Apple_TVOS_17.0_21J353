//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILongPressGestureRecognizer.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer
{
    UIResponder<UITextInput> *_textView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000111087b
@property __weak UIResponder<UITextInput> *textView; // @synthesize textView=_textView;
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x0000000001110838
- (void)_startEnoughTimeElapsedTimer;	// IMP=0x0000000001110766
@property(readonly, nonatomic) _Bool isLongPress;
- (_Bool)shouldUseLegacyBehavior;	// IMP=0x000000000111060a
- (_Bool)isWithinRecentTap;	// IMP=0x0000000001110532
- (_Bool)isCloseToCaret;	// IMP=0x00000000011103aa
- (_Bool)_allowsForShortDelay;	// IMP=0x00000000011102f8
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000111028d
- (void)invalidate;	// IMP=0x0000000001151f25

@end

