//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSTimer, UIMenu, UITextContextMenuInteraction, UITextInteractionAssistant, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UITextInteractionEditMenuAssistant : NSObject
{
    NSTimer *_delayedEditMenuTimer;	// 8 = 0x8
    NSNumber *_interactionAssistantViewRespondsShouldShowEditMenu;	// 16 = 0x10
    _Bool _wasShowingEditMenuBeforeScroll;	// 24 = 0x18
    UITextInteractionAssistant *_interactionAssistant;	// 32 = 0x20
    UITextContextMenuInteraction *_menuInteraction;	// 40 = 0x28
    NSArray *_replacements;	// 48 = 0x30
    UIMenu *_overrideMenu;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005debf5
@property(readonly, nonatomic) UIMenu *overrideMenu; // @synthesize overrideMenu=_overrideMenu;
@property(readonly, nonatomic) NSArray *replacements; // @synthesize replacements=_replacements;
@property(retain, nonatomic) UITextContextMenuInteraction *menuInteraction; // @synthesize menuInteraction=_menuInteraction;
@property(readonly, nonatomic) __weak UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=_interactionAssistant;
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(_Bool)arg2 forDictation:(_Bool)arg3 arrowDirection:(long long)arg4;	// IMP=0x00000000005de76d
- (void)_showCommandsWithReplacements:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x00000000005de619
- (void)_showSelectionCommandsForContextMenu:(_Bool)arg1;	// IMP=0x00000000005de478
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(_Bool)arg2 afterDelay:(double)arg3;	// IMP=0x00000000005de1d0
- (void)calculateReplacementsWithGenerator:(id)arg1 andShowAfterDelay:(double)arg2;	// IMP=0x00000000005de160
- (void)showCalloutBarAfterDelay:(double)arg1;	// IMP=0x00000000005de02b
- (void)showSelectionCommands;	// IMP=0x00000000005de017
- (void)showCommandsWithReplacements:(id)arg1;	// IMP=0x00000000005de000
- (void)showSelectionCommandsAfterDelay:(double)arg1;	// IMP=0x00000000005ddf39
- (void)_hideSelectionCommandsWithReason:(long long)arg1;	// IMP=0x00000000005ddf27
- (void)hideSelectionCommands;	// IMP=0x00000000005ddf13
- (void)cancelDelayedCommandRequests;	// IMP=0x00000000005ddee1
- (void)_didReceiveSelectionDidScrollNotification:(id)arg1;	// IMP=0x00000000005dde9e
- (void)_didReceiveSelectionWillScrollNotification:(id)arg1;	// IMP=0x00000000005dde4c
- (_Bool)_isAffectedByScrollNotification:(id)arg1;	// IMP=0x00000000005ddcfa
- (id)menuElementsForReplacements:(id)arg1;	// IMP=0x00000000005dd9ba
@property(readonly, nonatomic) _Bool _hasTextReplacements;
@property(readonly, nonatomic) _Bool _editMenuDismissedByActionSelection;
@property(readonly, nonatomic) _Bool _editMenuDismissedRecently;
@property(readonly, nonatomic) _Bool _editMenuIsVisible;
@property(readonly, nonatomic) _Bool _editMenuIsVisibleOrDismissedRecently;
@property(readonly, nonatomic) struct CGRect _editMenuTargetRect;
- (struct CGRect)_editMenuRawTargetRect;	// IMP=0x00000000005dd6a0
@property(readonly, nonatomic) UIWindow *_editMenuSourceWindow;
- (struct CGRect)_clippedTargetRect:(struct CGRect)arg1;	// IMP=0x00000000005dcd72
- (struct CGRect)selectionBoundingBoxForRects:(id)arg1;	// IMP=0x00000000005dc923
- (struct CGRect)selectionBoundingBox;	// IMP=0x00000000005dc801
- (id)_windowCoordinateSpace;	// IMP=0x00000000005dc7b1
- (id)_screenCoordinateSpace;	// IMP=0x00000000005dc737
- (id)_textViewCoordinateSpace;	// IMP=0x00000000005dc6bd
- (id)_selectionViewCoordinateSpace;	// IMP=0x00000000005dc66d
@property(readonly, nonatomic) UIView *_selectionView;
- (id)initWithInteractionAssistant:(id)arg1;	// IMP=0x00000000005dc4a7

@end
