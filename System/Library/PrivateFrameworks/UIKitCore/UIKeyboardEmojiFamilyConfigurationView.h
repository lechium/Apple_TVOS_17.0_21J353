//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, UIKBTree, UIKeyboardEmojiWellView, UIStackView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiFamilyConfigurationView : UIView
{
    double _metachronalRhythmAnimationStartTime;	// 8 = 0x8
    _Bool _usesDarkStyle;	// 16 = 0x10
    _Bool _hasSplitFontSupport;	// 17 = 0x11
    UIView *_touchForwardingView;	// 24 = 0x18
    NSMutableArray *_familyMemberStackViews;	// 32 = 0x20
    UIView *_separatorView;	// 40 = 0x28
    UIStackView *_previewWellStackView;	// 48 = 0x30
    UIKeyboardEmojiWellView *_neutralWellView;	// 56 = 0x38
    UIKeyboardEmojiWellView *_configuredWellView;	// 64 = 0x40
    NSIndexPath *_lastSelectedIndexPath;	// 72 = 0x48
    NSString *_baseEmojiString;	// 80 = 0x50
    NSMutableArray *_selectedVariantIndices;	// 88 = 0x58
    NSArray *_skinToneVariantRows;	// 96 = 0x60
    NSArray *_variantDisplayRows;	// 104 = 0x68
    UIKBTree *_representedKey;	// 112 = 0x70
}

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;	// IMP=0x0010000001404267
+ (id)_selectionAndSeparatorColorForDarkMode:(_Bool)arg1;	// IMP=0x0010000001400885
- (void).cxx_destruct;	// IMP=0x0000000001404c20
@property(nonatomic) _Bool hasSplitFontSupport; // @synthesize hasSplitFontSupport=_hasSplitFontSupport;
@property(retain, nonatomic) UIKBTree *representedKey; // @synthesize representedKey=_representedKey;
@property(retain, nonatomic) NSArray *variantDisplayRows; // @synthesize variantDisplayRows=_variantDisplayRows;
@property(retain, nonatomic) NSArray *skinToneVariantRows; // @synthesize skinToneVariantRows=_skinToneVariantRows;
@property(retain, nonatomic) NSMutableArray *selectedVariantIndices; // @synthesize selectedVariantIndices=_selectedVariantIndices;
@property(retain, nonatomic) NSString *baseEmojiString; // @synthesize baseEmojiString=_baseEmojiString;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView; // @synthesize configuredWellView=_configuredWellView;
@property(retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView; // @synthesize neutralWellView=_neutralWellView;
@property(retain, nonatomic) UIStackView *previewWellStackView; // @synthesize previewWellStackView=_previewWellStackView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSMutableArray *familyMemberStackViews; // @synthesize familyMemberStackViews=_familyMemberStackViews;
@property(nonatomic) _Bool usesDarkStyle; // @synthesize usesDarkStyle=_usesDarkStyle;
@property(retain, nonatomic) UIView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
- (id)nextResponder;	// IMP=0x00000000014049c0
- (void)updateRenderConfig:(id)arg1;	// IMP=0x000000000140491c
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000014046db
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000001404611
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000014042f0
- (_Bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2 phase:(long long)arg3;	// IMP=0x000000000140427d
- (void)layoutSubviews;	// IMP=0x0000000001403e23
- (void)_beginFamilyMetachronalRhythmAnimation;	// IMP=0x000000000140388b
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;	// IMP=0x0000000001403633
- (_Bool)_hasCompletelyConfiguredSkinToneConfiguration;	// IMP=0x00000000014035c0
- (void)_updatePreviewWellForCurrentSelection;	// IMP=0x0000000001403370
- (void)_updateBottomRowForSelections:(id)arg1;	// IMP=0x0000000001402f67
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1;	// IMP=0x0000000001402876
- (id)_currentlySelectedSkinToneConfiguration;	// IMP=0x0000000001402601
- (unsigned long long)_silhouetteFromCurrentSelections;	// IMP=0x000000000140250c
- (id)_wellViewForSection:(long long)arg1 item:(long long)arg2;	// IMP=0x0000000001402386
- (void)_configureFamilyMemberWellStackViews;	// IMP=0x00000000014018bb
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1;	// IMP=0x0000000001401246
- (void)_colorConfigurationDidChange;	// IMP=0x0000000001400f87
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000014008f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

