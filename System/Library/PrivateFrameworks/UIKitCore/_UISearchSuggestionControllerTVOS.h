//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionControllerTVOS
{
    _Bool _shouldDisplayDefaultSuggestion;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    NSString *_suggestionCellIdentifier;	// 24 = 0x18
    NSArray *_allSuggestions;	// 32 = 0x20
    NSString *_searchString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000013427ab
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSArray *allSuggestions; // @synthesize allSuggestions=_allSuggestions;
@property(retain, nonatomic) NSString *suggestionCellIdentifier; // @synthesize suggestionCellIdentifier=_suggestionCellIdentifier;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldDisplayDefaultSuggestion; // @synthesize shouldDisplayDefaultSuggestion=_shouldDisplayDefaultSuggestion;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000001342672
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000134259a
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000013424c2
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000013421f1
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000013421e9
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000001342142
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000001341c6b
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000001341bb7
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000001341b73
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000001341b68
- (void)update;	// IMP=0x0000000001341937
- (void)updateSearchString:(id)arg1;	// IMP=0x0000000001341829
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000000013415c9
- (void)updateSuggestionGroups:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x000000000134157f
- (void)setDelegate:(id)arg1;	// IMP=0x00000000013414e2
- (id)makeCollectionView;	// IMP=0x0000000001341368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
