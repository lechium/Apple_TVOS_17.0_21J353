//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SRSpeechRecognizedCorrectionTextView;
@protocol SREditableTextViewDelegate;

@interface SREditableTextView : UIView
{
    long long _presentationStyle;	// 8 = 0x8
    struct NSDirectionalEdgeInsets _edgeInsets;	// 16 = 0x10
    SRSpeechRecognizedCorrectionTextView *_textView;	// 48 = 0x30
    UIView *_backgroundView;	// 56 = 0x38
    double _topOffsetForTextView;	// 64 = 0x40
    double _heightOffsetForTextView;	// 72 = 0x48
    _Bool _editable;	// 80 = 0x50
    _Bool _didCorrect;	// 81 = 0x51
    id <SREditableTextViewDelegate> _delegate;	// 88 = 0x58
    long long _textAlignment;	// 96 = 0x60
}

+ (double)insertionAnimatedZPosition;	// IMP=0x002000000000a642
- (void).cxx_destruct;	// IMP=0x002000000000b30b
@property(nonatomic) _Bool didCorrect; // @synthesize didCorrect=_didCorrect;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) __weak id <SREditableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_createVisualEffectBackgroundViewForTextView:(id)arg1 topOffset:(double *)arg2;	// IMP=0x001000000000b0e8
- (void)utteranceTextDidReceiveReturnKey:(id)arg1;	// IMP=0x001000000000b030
- (void)utteranceTextDidResignFirstResponder:(id)arg1;	// IMP=0x001000000000afd5
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;	// IMP=0x001000000000afc3
- (double)_indentWidth;	// IMP=0x001000000000af99
- (void)textViewDidChange:(id)arg1;	// IMP=0x001000000000af05
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x001000000000aede
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x001000000000ae4d
- (void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x001000000000adfd
- (void)_adjustLineSpacing;	// IMP=0x001000000000aceb
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x001000000000ac27
- (void)beginEditing;	// IMP=0x001000000000ac15
- (void)_requestKeyboardFocusAndBecomeFirstResponder;	// IMP=0x001000000000ab09
- (void)_handleTap:(id)arg1;	// IMP=0x001000000000aacd
- (_Bool)isFirstResponder;	// IMP=0x001000000000aab0
- (_Bool)resignFirstResponder;	// IMP=0x001000000000aa64
- (_Bool)canResignFirstResponder;	// IMP=0x001000000000aa47
- (void)layoutSubviews;	// IMP=0x001000000000a88e
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000000a83f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000000a7d4
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x001000000000a6a7
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x001000000000a650
- (id)initWithFrame:(struct CGRect)arg1 presentationStyle:(long long)arg2;	// IMP=0x001000000000a21c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

