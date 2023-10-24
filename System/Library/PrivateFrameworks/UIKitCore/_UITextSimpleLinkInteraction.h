//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIContextMenuInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction
{
    UITapGestureRecognizer *_linkTap;	// 8 = 0x8
    UILongPressGestureRecognizer *_highlighter;	// 16 = 0x10
    _UITextInteractableItem *_highlightedItem;	// 24 = 0x18
    _Bool _presentingFromSimpleTap;	// 32 = 0x20
    _Bool _shouldProxyContextMenuDelegate;	// 33 = 0x21
    UIContextMenuInteraction *_contextMenuInteraction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000112249a
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(readonly, nonatomic) _Bool shouldProxyContextMenuDelegate; // @synthesize shouldProxyContextMenuDelegate=_shouldProxyContextMenuDelegate;
- (_Bool)_allowItemInteractions;	// IMP=0x00000000011222c1
- (_Bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;	// IMP=0x0000000001122187
- (_Bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;	// IMP=0x0000000001122071
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000001121f95
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x0000000001121ece
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000001121db5
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000001121cb7
- (void)highlight:(id)arg1;	// IMP=0x0000000001121857
- (void)linkTapped:(id)arg1;	// IMP=0x000000000112167d
- (void)_removeInteractableItemFromCache:(id)arg1;	// IMP=0x00000000011215f6
- (id)textLinkInteractableView;	// IMP=0x0000000001121595
- (id)itemInteractableView;	// IMP=0x0000000001121534
- (id)gesturesForFailureRequirements;	// IMP=0x00000000011214c9
- (id)contextMenuDelegateProxy;	// IMP=0x00000000011214c1
- (id)initWithShouldProxyContextMenuDelegate:(_Bool)arg1;	// IMP=0x00000000011213c5

@end
