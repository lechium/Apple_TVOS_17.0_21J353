//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface UIInputSetHostView : UIView
{
}

+ (_Bool)_notifyOnExplicitLayout;	// IMP=0x0080000000b58fb4
+ (_Bool)_shouldHitTestInputViewFirst;	// IMP=0x0080000000b586e0
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0080000000b586d8
- (void)_updateSafeAreaInsets;	// IMP=0x0000000000b5912e
- (void)layoutIfNeeded;	// IMP=0x0000000000b58fbc
- (unsigned long long)_clipCornersOfView:(id)arg1;	// IMP=0x0000000000b58f39
- (void)_didChangeKeyplaneWithContext:(id)arg1;	// IMP=0x0000000000b58e63
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b5890e
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000b586e8
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000b5866c

@end

