//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIInputViewSet, UIInputViewSetPlacement, UIView;

@protocol UIInputViewAnimationHost <NSObject>
- (void)changeToInputViewSet:(UIInputViewSet *)arg1;
- (UIInputViewSet *)inputViewSet;
- (UIView *)inputViewSnapshotOfView:(UIView *)arg1 afterScreenUpdates:(_Bool)arg2;
- (UIView *)viewForTransitionScreenSnapshot;
- (void)setKeyboardWindowSnapshotOn:(_Bool)arg1;
- (void)setInputViewsHidden:(_Bool)arg1;
- (void)updateToPlacement:(UIInputViewSetPlacement *)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;
- (struct CGRect)transitioningFrame;
- (UIView *)transitioningView;
- (void)syncToExistingAnimations;
@end

