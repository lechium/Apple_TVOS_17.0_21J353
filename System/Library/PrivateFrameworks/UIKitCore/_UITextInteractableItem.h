//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIAction, UIContextMenuInteraction, UITextItem, UITextItemMenuConfiguration, UITextRange, UIView, _UITextItemHighlightView, _UITextItemInteractionHandler;
@protocol _UITextContent, _UITextItemInteracting;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItem : NSObject
{
    struct {
        unsigned int primaryAction:1;
        unsigned int menu:1;
    } _requested;	// 8 = 0x8
    UIAction *_primaryAction;	// 16 = 0x10
    UITextRange *_range;	// 24 = 0x18
    UITextItem *_representedTextItem;	// 32 = 0x20
    _UITextItemInteractionHandler *_itemHandler;	// 40 = 0x28
    UIView<_UITextItemInteracting> *_textItemInteractingView;	// 48 = 0x30
    UITextItemMenuConfiguration *_preparedMenuConfiguration;	// 56 = 0x38
    UIContextMenuInteraction *_contextMenuInteraction;	// 64 = 0x40
    id <_UITextContent> _textContent;	// 72 = 0x48
    _UITextItemHighlightView *_highlightView;	// 80 = 0x50
    UIAction *_defaultAction;	// 88 = 0x58
    struct CGPoint _location;	// 96 = 0x60
}

+ (id)customItemWithTag:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint)arg4;	// IMP=0x00600000001632c4
+ (id)itemForAttachment:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint)arg4;	// IMP=0x0060000000163183
+ (id)itemForLink:(id)arg1 range:(id)arg2 textItemInteractingView:(id)arg3 location:(struct CGPoint)arg4;	// IMP=0x0060000000163042
- (void).cxx_destruct;	// IMP=0x000000000016421e
@property(readonly, nonatomic) UIAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) _UITextItemHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) __weak id <_UITextContent> textContent; // @synthesize textContent=_textContent;
@property(nonatomic) __weak UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(readonly, nonatomic) UITextItemMenuConfiguration *preparedMenuConfiguration; // @synthesize preparedMenuConfiguration=_preparedMenuConfiguration;
@property(readonly, nonatomic) __weak UIView<_UITextItemInteracting> *textItemInteractingView; // @synthesize textItemInteractingView=_textItemInteractingView;
@property(retain, nonatomic) _UITextItemInteractionHandler *itemHandler; // @synthesize itemHandler=_itemHandler;
@property(readonly, nonatomic) UITextItem *representedTextItem; // @synthesize representedTextItem=_representedTextItem;
@property(readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) UITextRange *range; // @synthesize range=_range;
- (id)_solverWithUnifyRects:(_Bool)arg1;	// IMP=0x00000000001640a2
- (void)unhighlight;	// IMP=0x0000000000164064
- (void)highlight;	// IMP=0x0000000000163efc
- (_Bool)_allowHighlight;	// IMP=0x0000000000163e96
- (void)dealloc;	// IMP=0x0000000000163e58
- (_Bool)_allowInteraction:(long long)arg1;	// IMP=0x0000000000163db1
- (_Bool)_actionPresentsMenu:(id)arg1;	// IMP=0x0000000000163d63
- (_Bool)defaultActionPresentsMenu;	// IMP=0x0000000000163d18
- (_Bool)hasPrimaryAction;	// IMP=0x0000000000163cc9
- (void)invokeDefaultAction;	// IMP=0x0000000000163baa
- (_Bool)canInvokeDefaultAction;	// IMP=0x0000000000163af0
- (void)_warnForInvalidAction;	// IMP=0x0000000000163a60
- (id)contextMenuConfiguration;	// IMP=0x00000000001639ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001637de
- (_Bool)_showsPreviewByDefault;	// IMP=0x00000000001637d6
- (_Bool)showsMenuPreview;	// IMP=0x000000000016372f
- (void)prepareMenuConfigurationWithDefaultMenu:(id)arg1;	// IMP=0x000000000016367f
- (id)preparedPrimaryActionWithDefaultAction:(id)arg1;	// IMP=0x000000000016350c
- (id)_itemRepresentationWithRange:(struct _NSRange)arg1;	// IMP=0x000000000016348f
- (id)itemRepresentationWithRange:(struct _NSRange)arg1;	// IMP=0x000000000016341d
- (_Bool)isTagItem;	// IMP=0x0000000000163415
- (_Bool)isAttachmentItem;	// IMP=0x000000000016340d
- (_Bool)isLinkItem;	// IMP=0x0000000000163405
- (id)initWithRange:(id)arg1 view:(id)arg2 location:(struct CGPoint)arg3;	// IMP=0x0000000000162f86
@property(readonly, nonatomic) NSArray *rects;
@property(readonly, nonatomic) struct CGRect bounds;

@end
