//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TUICandidateView, UIKBRenderConfig, UIKBScreenTraits, UIKeyboardCandidateInlineFloatingView, UIKeyboardCandidateViewConfiguration, UIKeyboardCandidateViewState, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;
@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateController : NSObject
{
    _Bool _isExtended;	// 8 = 0x8
    _Bool _inlineRectIsVertical;	// 9 = 0x9
    _Bool _adjustForLeftHandBias;	// 10 = 0xa
    _Bool _reuseArrowButtonToExpandAssistantBarItems;	// 11 = 0xb
    _Bool _darkKeyboard;	// 12 = 0xc
    _Bool _darkKeyboardChanged;	// 13 = 0xd
    id <UIKeyboardCandidateControllerDelegate> _delegate;	// 16 = 0x10
    TIKeyboardCandidateResultSet *_candidateResultSet;	// 24 = 0x18
    NSString *_inlineText;	// 32 = 0x20
    double _splitGap;	// 40 = 0x28
    long long _activeCandidateViewType;	// 48 = 0x30
    UIKBScreenTraits *_screenTraits;	// 56 = 0x38
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 64 = 0x40
    TUICandidateView *_bar;	// 72 = 0x48
    TUICandidateView *_key;	// 80 = 0x50
    TUICandidateView *_inlineView;	// 88 = 0x58
    UIKeyboardCandidateInlineFloatingView *_inlineViewContainer;	// 96 = 0x60
    NSMutableArray *_activeViews;	// 104 = 0x68
    UIKeyboardCandidateViewConfiguration *_barConfiguration;	// 112 = 0x70
    UIKeyboardCandidateViewConfiguration *_inlineConfiguration;	// 120 = 0x78
    UIKeyboardCandidateViewConfiguration *_keyConfiguration;	// 128 = 0x80
    UIKeyboardCandidateViewState *_barState;	// 136 = 0x88
    UIKeyboardCandidateViewState *_extendedBarState;	// 144 = 0x90
    UIKeyboardCandidateViewState *_extendedScrolledBarState;	// 152 = 0x98
    UIKeyboardCandidateViewState *_inlineViewState;	// 160 = 0xa0
    UIKeyboardCandidateViewState *_extendedInlineViewState;	// 168 = 0xa8
    UIKeyboardCandidateViewState *_keyState;	// 176 = 0xb0
    UIKeyboardCandidateViewState *_extendedKeyState;	// 184 = 0xb8
    double _additionalExtendedBarBackdropOffset;	// 192 = 0xc0
    TIKeyboardCandidate *_currentCandidate;	// 200 = 0xc8
    NSDictionary *_opacities;	// 208 = 0xd0
    double _singleSlottedCellMargin;	// 216 = 0xd8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 224 = 0xe0
    UIViewPropertyAnimator *_animator;	// 232 = 0xe8
    UIKBRenderConfig *_renderConfig;	// 240 = 0xf0
    struct CGRect _inlineRect;	// 248 = 0xf8
}

+ (double)candidateViewAnimationDuration;	// IMP=0x0010000000955671
+ (id)sharedInstance;	// IMP=0x001000000094cd86
- (void).cxx_destruct;	// IMP=0x0000000000958479
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(retain, nonatomic) NSDictionary *opacities; // @synthesize opacities=_opacities;
@property(nonatomic) _Bool darkKeyboardChanged; // @synthesize darkKeyboardChanged=_darkKeyboardChanged;
@property(nonatomic) _Bool darkKeyboard; // @synthesize darkKeyboard=_darkKeyboard;
@property(retain, nonatomic) TIKeyboardCandidate *currentCandidate; // @synthesize currentCandidate=_currentCandidate;
@property(nonatomic) double additionalExtendedBarBackdropOffset; // @synthesize additionalExtendedBarBackdropOffset=_additionalExtendedBarBackdropOffset;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedKeyState; // @synthesize extendedKeyState=_extendedKeyState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *keyState; // @synthesize keyState=_keyState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedInlineViewState; // @synthesize extendedInlineViewState=_extendedInlineViewState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *inlineViewState; // @synthesize inlineViewState=_inlineViewState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedScrolledBarState; // @synthesize extendedScrolledBarState=_extendedScrolledBarState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *extendedBarState; // @synthesize extendedBarState=_extendedBarState;
@property(retain, nonatomic) UIKeyboardCandidateViewState *barState; // @synthesize barState=_barState;
@property(retain, nonatomic) UIKeyboardCandidateViewConfiguration *keyConfiguration; // @synthesize keyConfiguration=_keyConfiguration;
@property(retain, nonatomic) UIKeyboardCandidateViewConfiguration *inlineConfiguration; // @synthesize inlineConfiguration=_inlineConfiguration;
@property(retain, nonatomic) UIKeyboardCandidateViewConfiguration *barConfiguration; // @synthesize barConfiguration=_barConfiguration;
@property(retain, nonatomic) NSMutableArray *activeViews; // @synthesize activeViews=_activeViews;
@property(retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineViewContainer; // @synthesize inlineViewContainer=_inlineViewContainer;
@property(retain, nonatomic) TUICandidateView *inlineView; // @synthesize inlineView=_inlineView;
@property(retain, nonatomic) TUICandidateView *key; // @synthesize key=_key;
@property(retain, nonatomic) TUICandidateView *bar; // @synthesize bar=_bar;
@property(nonatomic) __weak id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property(nonatomic) long long activeCandidateViewType; // @synthesize activeCandidateViewType=_activeCandidateViewType;
@property(nonatomic) double splitGap; // @synthesize splitGap=_splitGap;
@property(nonatomic) _Bool reuseArrowButtonToExpandAssistantBarItems; // @synthesize reuseArrowButtonToExpandAssistantBarItems=_reuseArrowButtonToExpandAssistantBarItems;
@property(nonatomic) _Bool adjustForLeftHandBias; // @synthesize adjustForLeftHandBias=_adjustForLeftHandBias;
@property(nonatomic) _Bool inlineRectIsVertical; // @synthesize inlineRectIsVertical=_inlineRectIsVertical;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // @synthesize candidateResultSet=_candidateResultSet;
@property(nonatomic) __weak id <UIKeyboardCandidateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dimKeys:(id)arg1;	// IMP=0x0000000000958036
- (void)_setRenderConfig:(id)arg1;	// IMP=0x0000000000957fb8
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 generateFeedback:(_Bool)arg5;	// IMP=0x0000000000957ea8
- (void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4;	// IMP=0x0000000000957dde
- (void)candidateViewNeedsToExpand:(id)arg1;	// IMP=0x0000000000957cd4
- (void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2;	// IMP=0x0000000000957c37
- (void)candidateViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000957a2b
- (void)candidateViewDidTapInlineText:(id)arg1;	// IMP=0x0000000000957844
- (void)toggleCandidateView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009575b4
- (void)candidateViewDidTapArrowButton:(id)arg1;	// IMP=0x000000000095759a
- (id)secureCandidateRenderTraits;	// IMP=0x0000000000956b95
- (long long)rowForCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000956b0e
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000956a87
- (id)candidateAtIndex:(unsigned long long)arg1;	// IMP=0x000000000095699a
- (id)candidates;	// IMP=0x0000000000956988
- (void)revealHiddenCandidates;	// IMP=0x00000000009567d0
- (void)candidatesDidChange;	// IMP=0x0000000000956780
- (unsigned long long)selectedSortIndex;	// IMP=0x000000000095673c
- (id)statisticsIdentifier;	// IMP=0x00000000009564d5
- (id)keyboardBehaviors;	// IMP=0x0000000000956469
- (_Bool)hasCandidates;	// IMP=0x0000000000956425
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000956411
- (void)toggleCandidateKeyAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009563ff
- (_Bool)hasCandidateInDirection:(struct CGVector)arg1;	// IMP=0x0000000000956385
- (void)deselectSelectedCandidate;	// IMP=0x0000000000956346
- (void)restoreLastSelectedCandidate;	// IMP=0x0000000000956304
- (_Bool)moveSelectedCandidateInDirection:(struct CGVector)arg1;	// IMP=0x00000000009562a4
- (unsigned long long)currentIndex;	// IMP=0x000000000095616d
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;	// IMP=0x000000000095608a
- (_Bool)handleNumberKey:(unsigned long long)arg1;	// IMP=0x000000000095601e
- (void)acceptSelectedCandidate;	// IMP=0x0000000000955f2a
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;	// IMP=0x0000000000955e65
- (_Bool)hasCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;	// IMP=0x0000000000955e11
- (_Bool)showCandidate:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;	// IMP=0x0000000000955d36
- (_Bool)showCandidate:(id)arg1;	// IMP=0x0000000000955d1f
- (void)showCandidateAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;	// IMP=0x0000000000955c85
- (void)showCandidateAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000955c6e
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;	// IMP=0x0000000000955c14
- (_Bool)isFloatingList;	// IMP=0x0000000000955bfb
- (_Bool)isExtendedList;	// IMP=0x0000000000955b89
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(double)arg5 layout:(_Bool)arg6;	// IMP=0x000000000095587a
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;	// IMP=0x000000000095585a
- (long long)layoutDirectionForCurrentInputMode;	// IMP=0x00000000009557cb
- (void)resetSortControlIndexAfterCandidatesChanged;	// IMP=0x0000000000955636
- (void)clearCurrentCandidate;	// IMP=0x0000000000955491
- (void)panGestureRecognizerAction:(id)arg1;	// IMP=0x0000000000954ce3
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000954ab8
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000009549c7
- (void)setupPanGestureRecognizerIfNeeded;	// IMP=0x00000000009547c6
- (id)snapshot;	// IMP=0x0000000000954731
- (void)removeInlineView;	// IMP=0x00000000009545d2
- (void)collapse;	// IMP=0x00000000009544df
- (void)toggleKeyViewExtendedAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000954352
- (void)toggleInlineViewExtendedAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009540cd
- (void)toggleBarExtendedWithAnimator:(id)arg1;	// IMP=0x0000000000952f31
- (void)toggleBarExtendedUnanimated;	// IMP=0x0000000000952bf4
- (void)toggleBarExtended;	// IMP=0x0000000000952a55
- (void)extendKeyboardBackdropHeight:(double)arg1;	// IMP=0x0000000000952933
- (void)setupAnimatorWithCurve:(long long)arg1;	// IMP=0x00000000009527a0
@property(nonatomic) _Bool isExtended;
- (void)syncIsExtended;	// IMP=0x0000000000952654
- (_Bool)isKeyExtended;	// IMP=0x00000000009525d3
@property(readonly, nonatomic) _Bool inlineViewIsExtended;
@property(readonly, nonatomic) _Bool barIsExtended;
- (struct CGSize)maximumSizeForInlineView;	// IMP=0x0000000000952318
- (struct UIEdgeInsets)candidateBarEdgeInsetsForOrientation:(long long)arg1;	// IMP=0x000000000095224e
- (double)candidateBarHeightForOrientation:(long long)arg1;	// IMP=0x0000000000952160
- (double)candidateBarHeight;	// IMP=0x00000000009520fc
- (double)candidateBarWidth;	// IMP=0x00000000009520ac
- (double)rowHeightForBarForOrientation:(long long)arg1;	// IMP=0x0000000000951da0
- (void)updateOpacitiesToState:(id)arg1;	// IMP=0x00000000009519d1
- (void)updateStatesForKey;	// IMP=0x0000000000951345
- (void)updateStatesForInlineView;	// IMP=0x000000000095036f
- (void)updateStatesForBar;	// IMP=0x000000000094e2e3
- (_Bool)shouldShowDisambiguationCandidatesInExtendedView;	// IMP=0x000000000094e2d1
- (_Bool)shouldShowDisambiguationCandidates;	// IMP=0x000000000094e1de
- (_Bool)shouldShowSortControlForConfiguration:(id)arg1;	// IMP=0x000000000094e154
- (void)updateStates;	// IMP=0x000000000094e10c
- (void)updateStyles;	// IMP=0x000000000094e026
- (void)loadDefaultStates;	// IMP=0x000000000094df0d
- (void)updateConfigurations;	// IMP=0x000000000094d6e7
- (id)firstNonEmptyActiveCandidateView;	// IMP=0x000000000094d4e8
- (long long)candidateViewTypeForView:(id)arg1;	// IMP=0x000000000094d4a1
@property(readonly, nonatomic) NSArray *activeCandidateViews;
- (id)newCandidateKeyWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x000000000094d1f3
- (id)loadInlineCandidateView;	// IMP=0x000000000094d052
- (id)loadCandidateBar;	// IMP=0x000000000094ceff
@property(readonly, nonatomic) UIView *inlineCandidateView;
@property(readonly, nonatomic) UIView *candidateKey;
@property(readonly, nonatomic) UIView *candidateBar;
- (void)dealloc;	// IMP=0x000000000094ce7a
- (id)init;	// IMP=0x000000000094ce0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
