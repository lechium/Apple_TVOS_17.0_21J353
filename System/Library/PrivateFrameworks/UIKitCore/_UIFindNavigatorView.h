//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputView.h"

@class UIAction, UIButton, UILabel, UIView, _UIFindNavigatorSearchTextField, _UIFindNavigatorViewLayout;
@protocol _UIFindNavigatorViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorView : UIInputView
{
    struct {
        UIView *left;
        UIView *right;
        UIView *bottom;
    } _separatorViews;	// 128 = 0x80
    struct {
        _Bool initialized;
        UIAction *find;
        UIAction *replace;
        UIAction *matchCase;
        UIAction *wholeWords;
    } _searchMenu;	// 152 = 0x98
    _UIFindNavigatorViewLayout *_layout;	// 192 = 0xc0
    _Bool _matchCase;	// 200 = 0xc8
    _Bool _wholeWords;	// 201 = 0xc9
    _Bool _usesOpaqueBackground;	// 202 = 0xca
    _Bool _replaceButtonEnabled;	// 203 = 0xcb
    _Bool _intrinsicHeightDerivedFromAssistantBar;	// 204 = 0xcc
    id <_UIFindNavigatorViewDelegate> _findNavigatorDelegate;	// 208 = 0xd0
    long long _mode;	// 216 = 0xd8
    unsigned long long _visibleSeparatorEdges;	// 224 = 0xe0
    UIButton *_doneButton;	// 232 = 0xe8
    UIButton *_settingsButton;	// 240 = 0xf0
    UILabel *_resultCountLabel;	// 248 = 0xf8
    long long _assistantBarStyle;	// 256 = 0x100
    _UIFindNavigatorSearchTextField *_searchTextField;	// 264 = 0x108
    _UIFindNavigatorSearchTextField *_replaceTextField;	// 272 = 0x110
    UIButton *_nextResultButton;	// 280 = 0x118
    UIButton *_previousResultButton;	// 288 = 0x120
    UIButton *_replaceButton;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000000502ce0
@property(readonly, nonatomic) UIButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property(readonly, nonatomic) UIButton *previousResultButton; // @synthesize previousResultButton=_previousResultButton;
@property(readonly, nonatomic) UIButton *nextResultButton; // @synthesize nextResultButton=_nextResultButton;
@property(readonly, nonatomic) _UIFindNavigatorSearchTextField *replaceTextField; // @synthesize replaceTextField=_replaceTextField;
@property(readonly, nonatomic) _UIFindNavigatorSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) long long assistantBarStyle; // @synthesize assistantBarStyle=_assistantBarStyle;
@property(nonatomic) _Bool intrinsicHeightDerivedFromAssistantBar; // @synthesize intrinsicHeightDerivedFromAssistantBar=_intrinsicHeightDerivedFromAssistantBar;
@property(nonatomic) _Bool replaceButtonEnabled; // @synthesize replaceButtonEnabled=_replaceButtonEnabled;
@property(readonly, nonatomic) UILabel *resultCountLabel; // @synthesize resultCountLabel=_resultCountLabel;
@property(readonly, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) unsigned long long visibleSeparatorEdges; // @synthesize visibleSeparatorEdges=_visibleSeparatorEdges;
@property(nonatomic) _Bool usesOpaqueBackground; // @synthesize usesOpaqueBackground=_usesOpaqueBackground;
@property(nonatomic) _Bool wholeWords; // @synthesize wholeWords=_wholeWords;
@property(nonatomic) _Bool matchCase; // @synthesize matchCase=_matchCase;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <_UIFindNavigatorViewDelegate> findNavigatorDelegate; // @synthesize findNavigatorDelegate=_findNavigatorDelegate;
- (void)layoutSubviews;	// IMP=0x00000000005027a4
- (void)find:(id)arg1;	// IMP=0x0000000000502758
- (id)_linearFocusMovementSequences;	// IMP=0x0000000000502668
- (_Bool)_canResignIfContainsFirstResponder;	// IMP=0x0000000000502660
- (_Bool)resignFirstResponder;	// IMP=0x00000000005025d5
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000502530
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000502478
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000502466
- (void)_handleSearchMenuItem:(id)arg1;	// IMP=0x00000000005022fc
- (void)_invalidateSearchSession;	// IMP=0x00000000005022c0
- (id)suggestedFindMenuItems;	// IMP=0x0000000000501dfe
- (_Bool)_replacementEnabled;	// IMP=0x0000000000501ce8
- (void)_preferredBackgroundColorChanged;	// IMP=0x0000000000501bc7
- (void)_navigatorHostingTypeChanged;	// IMP=0x0000000000501bc1
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000501b80
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000501b3f
- (void)_preferredContentSizeDidChange;	// IMP=0x0000000000501b2d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000501aa5
- (id)_createNavigatorLayoutForTraitCollection:(id)arg1;	// IMP=0x00000000005019ff
- (void)_setNavigatorLayout:(id)arg1;	// IMP=0x000000000050185f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000500aef

@end

