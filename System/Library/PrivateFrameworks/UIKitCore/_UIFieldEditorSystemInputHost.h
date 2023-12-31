//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISystemInputViewController, UIVisualEffectView, _UIFieldEditorSystemInputHostView;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorSystemInputHost
{
    _UIFieldEditorSystemInputHostView *_containerView;	// 8 = 0x8
    UIVisualEffectView *_backgroundEffectView;	// 16 = 0x10
    UISystemInputViewController *_systemInputViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000725a7f
@property(readonly, nonatomic) UISystemInputViewController *_systemInputViewController; // @synthesize _systemInputViewController;
- (id)description;	// IMP=0x0000000000725a4b
- (_Bool)_isTV;	// IMP=0x00000000007259d6
- (void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(_Bool)arg1;	// IMP=0x0000000000725523
- (id)_viewForHostingFieldEditor;	// IMP=0x0000000000725506
- (void)layoutIfNeeded;	// IMP=0x00000000007254f2
- (void)addPlaceholderLabel:(id)arg1;	// IMP=0x0000000000725189
- (void)removeFieldEditor;	// IMP=0x00000000007250c6
- (void)addFieldEditor:(id)arg1;	// IMP=0x0000000000724cf7
- (void)dealloc;	// IMP=0x0000000000724cae

@end

