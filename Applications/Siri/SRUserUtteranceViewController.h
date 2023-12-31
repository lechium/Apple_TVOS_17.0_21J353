//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class AFUserUtterance, NSArray, NSMutableArray, NSMutableDictionary, NSString, SAUIChangePrimaryUtterance, SREditableTextView, SRUserUtteranceContainerView, SRUserUtteranceView, SiriUICollectionViewFlowLayout, UICollectionView, UITapGestureRecognizer;

@interface SRUserUtteranceViewController : SiriUIAceObjectViewController
{
    SRUserUtteranceView *_utteranceView;	// 8 = 0x8
    _Bool _changeUtteranceShouldDisplay;	// 16 = 0x10
    UITapGestureRecognizer *_tapRecognizer;	// 24 = 0x18
    NSArray *_speechAlternativeDisplayList;	// 32 = 0x20
    NSMutableArray *_speechAlternativeList;	// 40 = 0x28
    NSMutableArray *_viewArray;	// 48 = 0x30
    SREditableTextView *_editableUtteranceView;	// 56 = 0x38
    UICollectionView *_speechAlternativeCollectionView;	// 64 = 0x40
    SiriUICollectionViewFlowLayout *_speechAlternativeCollectionViewLayout;	// 72 = 0x48
    _Bool _showSpeechAlternativeList;	// 80 = 0x50
    SRUserUtteranceContainerView *_containerView;	// 88 = 0x58
    _Bool _startEditWhenShown;	// 96 = 0x60
    NSString *_speechAlternativeListTitle;	// 104 = 0x68
    NSMutableDictionary *_alternativeInfoMap;	// 112 = 0x70
    _Bool;	// 120 = 0x78
    NSString *_sessionId;	// 128 = 0x80
    NSString *_originalUtteranceText;	// 136 = 0x88
    NSString *_preCorrectionText;	// 144 = 0x90
    struct CGSize _currentTextSize;	// 152 = 0x98
    _Bool _textChanged;	// 168 = 0xa8
    SAUIChangePrimaryUtterance *_changeUtteranceCommand;	// 176 = 0xb0
    _Bool _newRequestSent;	// 184 = 0xb8
    struct CGSize _oldUtteranceViewSize;	// 192 = 0xc0
    struct CGRect _previousBounds;	// 208 = 0xd0
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;	// 240 = 0xf0
    double _latestGivenWidth;	// 248 = 0xf8
    _Bool _receivedFinalRecognitionResult;	// 256 = 0x100
    long long _speechAlternativesStartIndex;	// 264 = 0x108
    _Bool _forceBestTextInterpretation;	// 272 = 0x110
    AFUserUtterance *_userUtterance;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x00200000000211fb
@property(retain, nonatomic, getter=_userUtterance, setter=_setUserUtterance:) AFUserUtterance *userUtterance; // @synthesize userUtterance=_userUtterance;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000021080
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000021008
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000020abc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000020a9f
- (id)userSelectionResults:(id)arg1;	// IMP=0x0010000000020787
- (void)handleSelectRow:(long long)arg1;	// IMP=0x0010000000020483
- (id)_processUserUtterance:(id)arg1 isCombined:(_Bool)arg2 displayedText:(id)arg3 withScore:(_Bool)arg4;	// IMP=0x001000000001f938
- (id)speechAlternativeHighlightListWithScore:(_Bool)arg1;	// IMP=0x001000000001f40b
- (void)_createSpeechAlternativeViewsIfNecessary;	// IMP=0x001000000001f1e4
- (void)createViewArray;	// IMP=0x001000000001ef2c
- (void)restoreOriginalEditTextContents:(id)arg1;	// IMP=0x001000000001ee3f
- (void)editableTextViewTextDidResignFirstResponder:(id)arg1;	// IMP=0x001000000001eda2
- (void)editableTextViewTextDidReceiveReturnKey:(id)arg1;	// IMP=0x001000000001ed90
- (void)editableTextViewTextDidFinishCorrecting:(id)arg1;	// IMP=0x001000000001e9bb
- (void)editableTextViewTextDidChange:(id)arg1;	// IMP=0x001000000001e896
- (void)_checkUpdatedSizingForEditableTextView:(id)arg1;	// IMP=0x001000000001e797
- (void)editableTextViewTextWillBeginCorrecting:(id)arg1;	// IMP=0x001000000001e58e
- (void)editableTextViewRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e525
- (_Bool)editableTextViewTextShouldPreventCorrection:(id)arg1;	// IMP=0x001000000001e4d4
- (void)createEditableUtteranceView;	// IMP=0x001000000001e3e3
- (void)_hideEditableUtteranceView;	// IMP=0x001000000001e2a5
- (void)_utteranceViewDidSelect:(id)arg1;	// IMP=0x001000000001e189
- (double)_insertionAnimatedZPosition;	// IMP=0x001000000001e170
- (long long)_replacementAnimation;	// IMP=0x001000000001e15d
- (long long)_insertionAnimation;	// IMP=0x001000000001e14d
- (long long)_pinAnimationType;	// IMP=0x001000000001e142
- (void)siriDidDeactivate;	// IMP=0x001000000001e0fe
- (void)endEditingAndCorrectByTouchPoint:(struct CGPoint)arg1;	// IMP=0x001000000001dea3
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x001000000001dde6
- (double)baselineOffsetFromBottom;	// IMP=0x001000000001ddc9
- (double)_scaledPaddingForPadding:(double)arg1;	// IMP=0x001000000001dd47
- (double)desiredPinnedTopPadding;	// IMP=0x001000000001dd04
- (void)setAceObject:(id)arg1;	// IMP=0x001000000001d928
- (void)handleChangeUtteranceCommand:(id)arg1;	// IMP=0x001000000001d605
- (void)handleShowSpeechAlternativesCommand:(id)arg1;	// IMP=0x001000000001d550
- (void)handleAceCommand:(id)arg1;	// IMP=0x001000000001d4b6
- (void)removeSpeechAlternativeViewAndUpdateUtteranceTextIfNecessary;	// IMP=0x001000000001d381
- (void)removeSpeechAlternatives;	// IMP=0x001000000001d2f5
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x001000000001d299
- (id)_correctionIdentifier;	// IMP=0x001000000001d249
@property(readonly, copy) NSString *description;
- (void)setUtteranceUserInteractionEnabled:(_Bool)arg1;	// IMP=0x001000000001d08c
- (void)_updateViewWithChangeUtteranceIfNeeded:(id)arg1;	// IMP=0x001000000001cf7c
- (void)_updateViewWithUserUtterance:(id)arg1;	// IMP=0x001000000001ce07
- (void)viewDidLayoutSubviews;	// IMP=0x001000000001cce2
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x001000000001cb01
- (void)viewWillLayoutSubviews;	// IMP=0x001000000001c9ea
- (void)loadView;	// IMP=0x001000000001c885

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

