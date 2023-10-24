//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchControllerView : UIView
{
    _Bool __ensureSystemInputViewAboveSearchBarContainerView;	// 128 = 0x80
}

@property(nonatomic) _Bool _ensureSystemInputViewAboveSearchBarContainerView; // @synthesize _ensureSystemInputViewAboveSearchBarContainerView=__ensureSystemInputViewAboveSearchBarContainerView;
- (void)sendSubviewToBack:(id)arg1;	// IMP=0x0000000000e921e5
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x0000000000e92182
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x0000000000e9211f
- (void)_ensurePortalViewIsOnTop;	// IMP=0x0000000000e920d2
- (void)_ensureCarPlayLimitedUIIsOnTop;	// IMP=0x0000000000e920cc
- (void)_ensureContainerIsOnTop;	// IMP=0x0000000000e92086
- (void)_ensureViewOfClassIsOnTop:(Class)arg1;	// IMP=0x0000000000e91f40
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e91e8c

@end
