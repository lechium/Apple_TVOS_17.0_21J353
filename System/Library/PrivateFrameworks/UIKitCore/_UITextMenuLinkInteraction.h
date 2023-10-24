//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UITextMenuLinkInteraction
{
    NSMapTable *_configurationItems;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001122dc1
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000001122cb5
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000001122b99
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;	// IMP=0x0000000001122af5
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000001122a60
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000001122a2c
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x0000000001122a1f
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000112297a
- (_Bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;	// IMP=0x00000000011228e7
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000001122790
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000011226c7
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000011225d2
- (id)contextMenuDelegateProxy;	// IMP=0x00000000011225a9
- (id)initWithShouldProxyContextMenuDelegate:(_Bool)arg1;	// IMP=0x00000000011224ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
