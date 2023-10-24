//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UITextField, UITextInputPasswordRules;
@protocol _TVSearchBarDelegate;

__attribute__((visibility("hidden")))
@interface _TVSearchBar : UIView
{
    UITextField *_textField;	// 8 = 0x8
    id <_TVSearchBarDelegate> _delegate;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicatorView;	// 24 = 0x18
}

+ (id)_listItemSelectedOverlayFillColor;	// IMP=0x001000000018e0ad
+ (id)_listItemTextColor;	// IMP=0x001000000018df62
- (void).cxx_destruct;	// IMP=0x000000000018ed89
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak id <_TVSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)_insertSpace:(id)arg1;	// IMP=0x000000000018ed0d
- (void)_submit:(id)arg1;	// IMP=0x000000000018ec70
- (void)deleteBackward;	// IMP=0x000000000018eb59
- (void)insertText:(id)arg1;	// IMP=0x000000000018ea29
@property(readonly, nonatomic) _Bool hasText;
- (id)keyCommands;	// IMP=0x000000000018e8d4
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000018e8cc
- (void)layoutSubviews;	// IMP=0x000000000018e680
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000018e593
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000018e462
- (_Bool)canBecomeFocused;	// IMP=0x000000000018e45a
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000018e203

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long inlinePredictionType;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end
