//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UISearchControllerATVSearchBarAnimator
{
    _Bool _shouldLayoutTabBar;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldLayoutTabBar; // @synthesize shouldLayoutTabBar=_shouldLayoutTabBar;
- (void)willFocusOffscreenViewForController:(id)arg1 withHeading:(unsigned long long)arg2;	// IMP=0x0000000000e698fe
- (void)didUnfocusSearchBarForController:(id)arg1;	// IMP=0x0000000000e697e5
- (void)didFocusSearchBarForController:(id)arg1;	// IMP=0x0000000000e696e5
- (void)didRelayoutSearchBarForController:(id)arg1;	// IMP=0x0000000000e6966a
- (void)_updateLayoutForGridKeyboard:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000e66fcc
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000e667da
- (void)updateViewsWithSearchController:(id)arg1 reloadInputViewController:(_Bool)arg2;	// IMP=0x0000000000e64795
- (void)updateViewsWithSearchController:(id)arg1;	// IMP=0x0000000000e64781
- (id)init;	// IMP=0x0000000000e64742

@end

