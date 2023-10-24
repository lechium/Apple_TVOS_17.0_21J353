//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIContextMenuInteraction, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionControllerIOS
{
    UIContextMenuInteraction *_menuInteraction;	// 8 = 0x8
    UITapGestureRecognizer *_suggestionsRecoveryGesture;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000165b23
@property(retain, nonatomic) UITapGestureRecognizer *suggestionsRecoveryGesture; // @synthesize suggestionsRecoveryGesture=_suggestionsRecoveryGesture;
@property(retain, nonatomic) UIContextMenuInteraction *menuInteraction; // @synthesize menuInteraction=_menuInteraction;
- (void)_suggestionsRecoveryGestureRecognized;	// IMP=0x00000000001659bb
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000165770
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000016575b
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000165639
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000001655ba
- (void)updateSuggestionGroups:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000000001654cb
- (void)_updateMenuWithSuggestionGroups:(id)arg1;	// IMP=0x00000000001651e2
- (void)_dismissMenuWithoutAnimation;	// IMP=0x000000000016514b
- (_Bool)_hasVisibleMenu;	// IMP=0x0000000000165143
- (id)_suggestionsMenu;	// IMP=0x0000000000164898
- (id)initWithSearchTextField:(id)arg1;	// IMP=0x00000000001647c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
