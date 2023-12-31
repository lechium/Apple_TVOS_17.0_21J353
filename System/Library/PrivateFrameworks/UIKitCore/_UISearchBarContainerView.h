//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView : UIView
{
    UIView *_subview;	// 128 = 0x80
    int _resizingMask;	// 136 = 0x88
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;	// 140 = 0x8c
}

- (void).cxx_destruct;	// IMP=0x000000000025ddba
- (void)layoutSubviews;	// IMP=0x000000000025dda8
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000025dd56
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000025dd04
- (void)enforceSubviewAtBottomIfNecessary;	// IMP=0x000000000025dc25
- (void)willRemoveSubview:(id)arg1;	// IMP=0x000000000025dc13
- (void)_didRemoveSubview:(id)arg1;	// IMP=0x000000000025dc01
- (void)_uncontainerSubview:(id)arg1;	// IMP=0x000000000025dbb2
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x000000000025dae6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000025da80
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000025da51

@end

