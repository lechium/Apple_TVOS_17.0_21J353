//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISearchBar, UISearchTextField;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionControllerIOSBase
{
    _Bool _hasSetUpGeometryChangeResponse;	// 8 = 0x8
    UISearchTextField *_searchTextField;	// 16 = 0x10
    UISearchBar *_searchBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000119bdde
@property(nonatomic) _Bool hasSetUpGeometryChangeResponse; // @synthesize hasSetUpGeometryChangeResponse=_hasSetUpGeometryChangeResponse;
@property(readonly, nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) __weak UISearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (void)_geometryChanged:(const CDStruct_c9afd433 *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000119b9aa
- (void)_updateMenuWithSuggestionGroups:(id)arg1;	// IMP=0x000000000119b92d
- (void)_dismissMenuWithoutAnimation;	// IMP=0x000000000119b8b0
- (_Bool)_hasVisibleMenu;	// IMP=0x000000000119b830
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x000000000119b753
- (void)setSuggestions:(id)arg1;	// IMP=0x000000000119b679
- (id)suggestions;	// IMP=0x000000000119b632
- (void)menuDidCloseWithAnimator:(id)arg1;	// IMP=0x000000000119b62c
- (void)searchTextFieldWillMoveToWindow:(id)arg1;	// IMP=0x000000000119b626
- (void)searchTextFieldDidGainSearchBar:(id)arg1;	// IMP=0x000000000119b59b
@property(readonly, nonatomic) _Bool hasVisibleMenu;
- (id)initWithSearchTextField:(id)arg1;	// IMP=0x000000000119b4f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
