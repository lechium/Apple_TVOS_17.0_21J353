//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI20LargeTitleHeaderView : UIView
{
    MISSING_TYPE *titleLabel;	// 8 = 0x8
    MISSING_TYPE *playerAvatar;	// 16 = 0x10
    MISSING_TYPE *accessoryAction;	// 24 = 0x18
    MISSING_TYPE *floatingView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010a7d5
- (void)didSelectPlayerAvatarView:(id)arg1;	// IMP=0x000000000010a75f
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000010a668
- (void)avatarPressed:(id)arg1;	// IMP=0x000000000010a898
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010a5ae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000010a402

@end

