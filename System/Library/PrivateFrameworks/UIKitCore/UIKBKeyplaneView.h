//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, UIKBCacheToken, UIKBKeyView, UIKBKeyViewAnimator, UIKBRenderConfig, UIKBRenderFactory, UIKBRenderingContext, UIKBScreenTraits, UIKBSplitImageView, UIKBTree, UIKeyboardEmojiKeyDisplayController, UIView;
@protocol UIKBKeyplaneViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView
{
    UIKBTree *_keyplane;	// 8 = 0x8
    UIKBTree *_defaultKeyplane;	// 16 = 0x10
    UIKBCacheToken *_cacheToken;	// 24 = 0x18
    UIKBCacheToken *_defaultKeyplaneCacheToken;	// 32 = 0x20
    UIKBKeyViewAnimator *_keyViewAnimator;	// 40 = 0x28
    UIKeyboardEmojiKeyDisplayController *_emojiKeyManager;	// 48 = 0x30
    UIKBKeyView *_candidateGapView;	// 56 = 0x38
    NSMutableDictionary *_subviewIndex;	// 64 = 0x40
    NSMutableDictionary *_activeViewIndex;	// 72 = 0x48
    NSMutableDictionary *_renderedKeyViews;	// 80 = 0x50
    NSMutableDictionary *_delayedDeactivationKeys;	// 88 = 0x58
    _Bool _shouldDrawRect;	// 96 = 0x60
    UIKBRenderConfig *_renderConfig;	// 104 = 0x68
    UIKBRenderingContext *_renderingContext;	// 112 = 0x70
    UIKBRenderFactory *_factory;	// 120 = 0x78
    UIKBSplitImageView *_keyBorders;	// 128 = 0x80
    UIKBSplitImageView *_keyBackgrounds;	// 136 = 0x88
    UIKBSplitImageView *_keyCaps;	// 144 = 0x90
    UIView *_keyplaneMaskView;	// 152 = 0x98
    _Bool _suppressDrawing;	// 160 = 0xa0
    UIKBScreenTraits *_overrideScreenTraits;	// 168 = 0xa8
    id <UIKBKeyplaneViewDelegate> _delegate;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000a2e624
@property(nonatomic) _Bool suppressDrawing; // @synthesize suppressDrawing=_suppressDrawing;
@property(nonatomic) __weak id <UIKBKeyplaneViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIKBScreenTraits *overrideScreenTraits; // @synthesize overrideScreenTraits=_overrideScreenTraits;
@property(retain, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager; // @synthesize emojiKeyManager=_emojiKeyManager;
@property(retain, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property(retain, nonatomic) UIKBRenderFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken; // @synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken;
@property(retain, nonatomic) UIKBCacheToken *cacheToken; // @synthesize cacheToken=_cacheToken;
@property(retain, nonatomic) UIKBTree *defaultKeyplane; // @synthesize defaultKeyplane=_defaultKeyplane;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
- (_Bool)_shouldUseUnifiedKeyView:(id)arg1 forState:(int)arg2;	// IMP=0x0000000000a2e496
@property(readonly, nonatomic) UIView *keyplaneMaskView; // @synthesize keyplaneMaskView=_keyplaneMaskView;
- (void)_updateKeyplaneMaskView;	// IMP=0x0000000000a2e2a9
- (void)purgeFactory;	// IMP=0x0000000000a2e288
- (void)purgeLayerContents;	// IMP=0x0000000000a2e22e
- (void)purgeSubviews;	// IMP=0x0000000000a2e1c4
- (void)purgeKeyViews;	// IMP=0x0000000000a2dacd
- (void)purgeActiveKeyViews;	// IMP=0x0000000000a2d941
- (void)activateKeys;	// IMP=0x0000000000a2d729
- (void)deactivateKeysWithReason:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000a2d1d1
- (void)deactivateKeys;	// IMP=0x0000000000a2d1bb
- (void)deactivateKey:(id)arg1 previousState:(int)arg2 keyView:(id)arg3;	// IMP=0x0000000000a2cd86
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;	// IMP=0x0000000000a2cd0b
- (_Bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2 phase:(long long)arg3;	// IMP=0x0000000000a2cc21
- (id)existingVariantsKeyViewForKey:(id)arg1;	// IMP=0x0000000000a2cb34
- (void)orientKeyCapForKey:(id)arg1 orientation:(long long)arg2;	// IMP=0x0000000000a2c8c1
- (void)hideKeyCaps:(_Bool)arg1 andControlKeysWithInteractionTypes:(id)arg2;	// IMP=0x0000000000a2c658
- (void)hideKeyCaps:(_Bool)arg1;	// IMP=0x0000000000a2c4f4
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000a2c276
- (void)deactivateAdaptiveKey:(id)arg1;	// IMP=0x0000000000a2c200
- (_Bool)shouldAnimateOutKeyView:(id)arg1;	// IMP=0x0000000000a2c142
- (_Bool)shouldAnimateInKeyView:(id)arg1;	// IMP=0x0000000000a2c0cc
- (id)viewForKey:(id)arg1 state:(int)arg2;	// IMP=0x0000000000a2c065
- (id)viewForKey:(id)arg1;	// IMP=0x0000000000a2bf77
- (void)updateFrameForKey:(id)arg1;	// IMP=0x0000000000a2bd18
- (id)activeKeyViews;	// IMP=0x0000000000a2bcfb
- (int)stateForKey:(id)arg1;	// IMP=0x0000000000a2bce6
- (struct CGRect)_safeFrameForKeyViewFrame:(struct CGRect)arg1 inContainer:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000a2b848
- (void)setState:(int)arg1 forKey:(id)arg2 withReason:(id)arg3 force:(_Bool)arg4;	// IMP=0x0000000000a299fa
- (void)setState:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000a299e2
- (_Bool)_shouldAllowKey:(id)arg1;	// IMP=0x0000000000a2991d
- (id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(_Bool *)arg3;	// IMP=0x0000000000a293b6
- (unsigned long long)cornerMaskForKey:(id)arg1 recursive:(_Bool)arg2;	// IMP=0x0000000000a28e85
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;	// IMP=0x0000000000a28cc4
- (id)cacheIdentifierForKey:(id)arg1;	// IMP=0x0000000000a28b7d
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;	// IMP=0x0000000000a28af4
- (void)addKeyToDelayedDeactivationSet:(id)arg1;	// IMP=0x0000000000a288c9
- (void)cancelDelayedDeactivation;	// IMP=0x0000000000a288ac
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000a2885c
- (_Bool)_canDrawContent;	// IMP=0x0000000000a28847
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;	// IMP=0x0000000000a2883f
- (void)setContentScaleFactor:(double)arg1;	// IMP=0x0000000000a287b8
- (void)drawContentsOfRenderers:(id)arg1;	// IMP=0x0000000000a27fff
@property(readonly, nonatomic) long long assetIdiom;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;	// IMP=0x0000000000a278d1
- (id)cacheKeysForRenderFlags:(id)arg1;	// IMP=0x0000000000a273fb
- (_Bool)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;	// IMP=0x0000000000a27383
@property(readonly, nonatomic) NSString *cacheKey;
- (void)layoutSubviews;	// IMP=0x0000000000a271d6
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000a2710b
- (void)_generateFactoryIfNeeded;	// IMP=0x0000000000a26fd0
- (void)_generateRenderingContextIfNeeded;	// IMP=0x0000000000a26eb4
- (void)prepareForDisplay;	// IMP=0x0000000000a26865
- (_Bool)isPasscodeStyle;	// IMP=0x0000000000a26365
- (_Bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;	// IMP=0x0000000000a26315
- (void)dealloc;	// IMP=0x0000000000a262a0
- (void)removeFromSuperview;	// IMP=0x0000000000a2621e
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;	// IMP=0x0000000000a26098

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

