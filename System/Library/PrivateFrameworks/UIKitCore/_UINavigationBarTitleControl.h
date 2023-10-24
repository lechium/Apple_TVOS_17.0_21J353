//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UIImageView, UILabel, UILayoutGuide, UIView, _UITAMICAdaptorView;
@protocol _UINavigationBarTitleControlVisualProvider;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTitleControl : UIControl
{
    UIView *_backgroundView;	// 8 = 0x8
    UILabel *_inlineTitleView;	// 16 = 0x10
    _UITAMICAdaptorView *_wrapperView;	// 24 = 0x18
    NSDictionary *_resolvedAttributes;	// 32 = 0x20
    UIImageView *_chevron;	// 40 = 0x28
    UILayoutGuide *_chevronGuide;	// 48 = 0x30
    NSLayoutConstraint *_sosConstraint;	// 56 = 0x38
    NSArray *_backgroundViewConstraints;	// 64 = 0x40
    NSArray *_titleConstraints;	// 72 = 0x48
    NSArray *_inlineTitleConstraints;	// 80 = 0x50
    NSArray *_chevronConstraints;	// 88 = 0x58
    float _titleViewCompressionResistancePriority;	// 96 = 0x60
    NSString *_title;	// 104 = 0x68
    NSDictionary *_titleAttributes;	// 112 = 0x70
    UIView *_titleView;	// 120 = 0x78
    double _contentAlpha;	// 128 = 0x80
    UIView *_effectiveTitleView;	// 136 = 0x88
    UILayoutGuide *_titleLayoutGuide;	// 144 = 0x90
    id <_UINavigationBarTitleControlVisualProvider> _visualProvider;	// 152 = 0x98
    struct UIEdgeInsets _menuAlignmentInsets;	// 160 = 0xa0
}

+ (id)titleMenuSuggestedActionsWithDocumentFileURL:(id)arg1;	// IMP=0x0010000000672bdd
- (void).cxx_destruct;	// IMP=0x0000000000672fbd
@property(retain, nonatomic) id <_UINavigationBarTitleControlVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;
@property(retain, nonatomic) UILayoutGuide *titleLayoutGuide; // @synthesize titleLayoutGuide=_titleLayoutGuide;
@property(nonatomic) struct UIEdgeInsets menuAlignmentInsets; // @synthesize menuAlignmentInsets=_menuAlignmentInsets;
@property(readonly, nonatomic) UIView *effectiveTitleView; // @synthesize effectiveTitleView=_effectiveTitleView;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) float titleViewCompressionResistancePriority; // @synthesize titleViewCompressionResistancePriority=_titleViewCompressionResistancePriority;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_invalidateSceneDraggingBehavior;	// IMP=0x0000000000672edb
- (id)_preferredSender;	// IMP=0x0000000000672e56
- (id)_preferredPresentationSourceItem;	// IMP=0x0000000000672e41
- (struct CGSize)availableSizeForAdaptor:(id)arg1 proposedSize:(struct CGSize)arg2;	// IMP=0x0000000000672b2f
- (id)_debugInfo;	// IMP=0x00000000006729b7
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x00000000006729ac
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000672875
- (void)didMoveToWindow;	// IMP=0x000000000067282c
- (id)viewForLastBaselineLayout;	// IMP=0x000000000067281a
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000672808
- (void)updateConstraints;	// IMP=0x0000000000671e87
- (void)_updateContentAlpha;	// IMP=0x0000000000671e11
- (void)_updateInlineTitleView;	// IMP=0x0000000000671c33
- (id)_backgroundViewConstraintsForIdiom:(long long)arg1;	// IMP=0x00000000006719e0
- (void)_ensureNecessaryViews;	// IMP=0x0000000000670fff
- (void)_cleanupWrapperView;	// IMP=0x0000000000670faa
- (void)_resetTitleViewConstraints;	// IMP=0x0000000000670f61
@property(readonly, nonatomic) double trailingPadding;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, nonatomic) _Bool hasBaseline;
- (id)_baselineView;	// IMP=0x0000000000670d4c
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000067092f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

